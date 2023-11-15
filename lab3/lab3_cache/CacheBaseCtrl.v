`ifndef LAB3_CACHE_BASE_CTRL_V
`define LAB3_CACHE_BASE_CTRL_V

`include "vc/regs.v"

module CacheBaseCtrl (
    // Outer system signals
    input   logic                   clk,
    input   logic                   reset,
    input   logic                   flush,
    output  logic                   flush_done,

    output logic                    memreq_rdy, // cache ready to receive request from proc
    output  logic                   cache_req_val, // cache wants to make a request to mem
    input   logic                   cache_req_rdy, // mem is ready to receive requests

    // Outputs of ctrl signals (inputs of cacheBaseDpath)
    output  logic                  memreq_en,
    output  logic                  data_array_w_en,
    output  logic                  data_array_r_en,
    output  logic [2:0]            flush_counter,  
    output  logic                  data_array_write_mux_sel,
    output  logic                  tag_array_w_en,
    output  logic                  tag_array_r_en,

    // Inputs of ctrl signals (outputs of cacheBaseDpath)
    input logic                    tag_array_match,
    input logic [line_num-1:0]     dirty_bits,
    input logic [dirty_size-1:0]   dirty_bit, // Sends the set of words that needs to be evicted. TODO: better change constant size to local/global param. 
    input logic                    read
); //TODO: Next lab we'll brief each other after each commit, and sit together to DRAW the diagram and understand ALL signals. Only then we start to work.

  //state variables
  localparam tag_check          = 2'd0; // ready 
  localparam refill             = 2'd1; // if victim clean
  localparam evict              = 2'd2; // spill if dirty
  logic [1:0] current_state, next_state;

  // data or sram-realted sizes
  localparam dirty_size = 3;
  localparam line_num   = 8; // 2**dirty_size
  localparam num_words_in_line  = 16;

  logic [3:0] sent_mem_req_num;      // number of requests to mem during evict (counter reaches 15 when line evicted)
  logic [3:0] received_mem_resp_num; // number of responses from mem during refill (counter reaches 15 when line filled)

// ==================================== Data Path signals =================================================
 // pins that are being activated
  task cs
  (
    input logic                 cs_memreq_en, 
    input logic                 cs_tag_array_r_en, 
    input logic                 cs_tag_array_w_en, 
    input logic                 cs_data_array_r_en, 
    input logic                 cs_data_array_w_en, 
    input logic                 cs_data_array_write_mux_sel     

  );
  begin

    memreq_en                     = cs_memreq_en; 
    tag_array_r_en                = cs_tag_array_r_en; 
    tag_array_w_en                = cs_tag_array_w_en ; 
    data_array_r_en               = cs_data_array_r_en; 
    data_array_w_en               = cs_data_array_w_en; 
    data_array_write_mux_sel      = cs_data_array_write_mux_sel;  

  end
  endtask

  // Control Signals Table
  always_comb begin
    case ( current_state )  
      //                          memreq_en    t_en    t_wen     d_en     d_wen     d_write_mux    
      tag_check:                cs( 0,          1,       1,       1,        1,           0);
      evict:                    cs( 1,          0,       1,       1,        0,           0); 
      refill:                   cs( 1,          0,       1,       1,        1,           1); 

      default:                  cs('x,         'x,      'x,      'x,       'x,          'x);    //this state is never reached
    endcase
  end

// ============================================================================================================

// ==================================== Combination for State Transitions =====================================
  always_comb begin
    case (current_state)
      tag_check: begin
        if (flush & !flush_done) begin  // todo in datapath - if flush asserted and flush is done do nothing (like reset). 
          next_state = evict; 
        end 
        else if (tag_array_match) begin  // same cycle for tag check and DA
          next_state = tag_check;
        end 
        else if (dirty_bits[dirty_bit]) begin  // read/write miss dirty 
          next_state = evict; 
        end 
        else begin //read/write miss clean 
          next_state = refill;  
        end 
      end  
      evict: begin 
        if ((flush && !flush_done) || sent_mem_req_num < num_words_in_line) begin  //todo flush asserted only for 1 cycle should still keep evicting after
          next_state = evict; 
        end 
        else if (flush_done) begin // in flush, we don't neet to go to refill
          next_state = tag_check;
        end
        else begin  // done writing back (evicting) cache line to memory 
          next_state = refill; 
        end 
      end 
      refill: begin 
        if (received_mem_resp_num < num_words_in_line) begin 
          next_state = refill; 
        end 
        else begin 
          next_state = tag_check; 
        end 
      end 
      default: begin
      end
    endcase
  end
// ============================================================================================================

// =================================== Sequential Logic =======================================================
  always_ff @(posedge clk) begin
    if (reset) begin
      current_state           <= tag_check;
      flush_counter           <= 0; 
      sent_mem_req_num        <= 0;
      received_mem_resp_num   <= 0;
      flush_done              <= 0; 
      flush_flag              <= 0;
      memreq_rdy              <= 0;
    end
    else begin
      if (current_state == tag_check) begin 
        flush_counter         <= 0; // reset the counter when not in evict or refill state 
        sent_mem_req_num      <= 0;
        reqsp_num             <= 0;
        received_mem_resp_num <= 0;
        flush_flag            <= flush; // once flush is asserted we keep the flag up until evicting is concluded
        flush_done            <= flush ? flush_done : 0; // if flush has gone then reset. Otherwise keep value
        memreq_rdy            <= 1; // cache is ready to receive reqs from proc

        if ((flush && !flush_done) || !tag_array_match && (read || dirty_bits[dirty_bit])) begin //if we flush or miss with read or write dirty
          cache_req_val       <= 1; // next cycle we'll be sending requests to mem
        end
      end  
      if (current_state == evict) begin 
        if (cache_req_rdy) begin   // if memory ready to accept 
          if (sent_mem_req_num < num_words_in_line && ((dirty_bits[flush_counter] && flush_flag) || !flush_flag)) begin // skip clean lines on flush. If didn't evict entire line keep going. If not flush then there is a dirty bit (no need to check)
            sent_mem_req_num              <= sent_mem_req_num + 1; 
          end
          else if (flush_flag && flush_counter < num_lines) begin //if line was evicted, go to the next line 
            flush_counter                 <= flush_counter + 1; 
          end
          else if (flush) begin // finished evicting all dirty bits
            flush_done                    <= 1;
          end 
        end
      end 
      if (current_state == refill) begin 
        if (cache_req_rdy && read) begin   // if mem is ready on a read inst. on write no need to access mem.
          received_mem_resp_num           <= received_mem_resp_num + 1;
        end
        else if (!read) begin //todo - double check if on write we need only one cycle to write 1 word?
          received_mem_resp_num           <= num_words_in_line; // if we write then 1 cycle is enough since we're writing 1 word.
        end
      end 
        current_state                     <= next_state; 
    end 
  end
// ============================================================================================================

endmodule

`endif /* LAB3_CACHE_BASE_CTRL_V */
