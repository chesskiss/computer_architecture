`ifndef LAB3_CACHE_BASE_CTRL_V
`define LAB3_CACHE_BASE_CTRL_V

`include "vc/regs.v"

module CacheBaseCtrl (
    // Outer system signals
    input logic                   clk,
    input logic                   reset,
    input logic                   flush,
    output logic                  flush_done,

    // Outputs to the cacheBaseDpath module (inputs of cacheBaseDpath)
    output mem_req_4B_t           mem_req_msg,
    output mem_resp_4B_t          cache_resp_msg,

    // Inputs from the cacheBaseDpath module (outputs of cacheBaseDpath)
    input mem_resp_4B_t           memresp_msg,
    input mem_req_4B_t            cache_req_msg,

    // Outputs of ctrl signals (inputs of cacheBaseDpath)
    output logic                  memreq_en,
    output logic                  cache_mem_en, 
    output logic                  data_array_w_en,
    output logic                  data_array_r_en,
    output logic [2:0]            flush_counter,  
    output logic                  data_array_write_mux_sel,
    output logic                  tag_array_w_en,
    output logic                  tag_array_r_en,

    // Inputs of ctrl signals (outputs of cacheBaseDpath)
    input logic                                tag_array_match,
    input logic [2**dirty_size-1:0]            dirty_bits,
    input logic [dirty_size-1:0]               dirty_bit, // Sends the set of words that needs to be evicted. TODO: better change constant size to local/global param. 
    input logic                                read,
    input logic [2:0]                          cache_req_type //TODO - why do we need it?
); // Ari, it was a horrible mistake to sit seperatly on this lab. I ended up wasting hours just on decoding your variable names and their meaning. TODO: Next lab we'll brief each other after each commit, and sit together to DRAW the diagram and understand ALL signals. Only then we start to work.


  //state variables
  localparam tag_check          = 2'd0; // ready 
  localparam refill             = 2'd1; // if victim clean
  localparam evict              = 2'd2; // spill if dirty

  logic [1:0] current_state, next_state;

  localparam dirty_size = 3;
  localparam words_num  = 16;

  logic [3:0] req_num;  // number of requests to mem during evict (counter reaches 15 when line evicted)
  logic [3:0] resp_num; // number of responses from mem during refill (counter reaches 15 when line filled)

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
        if (flush) begin 
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
        if (flush && flush_counter < 7) begin 
          next_state = evict; 
        end 
        else begin  // done writing back (evicting) cache line to memory 
          next_state = refill; 
        end 
      end 
      refill: begin 
        if (resp_num == words_num-1) begin 
          next_state = tag_check; 
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


  always_ff @(posedge clk) begin
    if (reset) begin
      current_state           <= tag_check;
      flush_counter           <= 0; 
      flush_done              <= 0; 
    end
    else begin
      if (current_state == tag_check) begin 
        memreq_rdy            <= 1; // cache_req_rdy && cache_resp_val determines done accessing data from memory 
        memresp_val           <= 1; 
        flush_counter    <= 0; // reset the counter when not in evict or refill state 
      end  
      if (current_state == evict) begin 
        if (cache_req_val && cache_req_rdy) begin   // keeping track of requests sent
          flush_counter  <= flush_counter + 1;  // TODO : optional - skip cycles for blocks that are clean
        end
                  // why do we need these 3 lines? TODO
                                                                              // if (cache_resp_val && cache_resp_rdy) begin // keeping track of responses received 
                                                                              //   counter2 <= counter2 + 1; 
                                                                              // end 
        if (flush_counter == 7) begin // finished evicting all dirty bits
          flush_done          <= 1;
          flush_counter       <= 0;  
        end 
        cache_req_val         <= 1; 
        cache_resp_rdy        <= 1;
      end 
      if (current_state == refill) begin 
        if (cache_req_val && cache_req_rdy) begin   // keeping track of requsts sent
          flush_counter       <= flush_counter + 1; 
        end
        if (counter == 15 && counter2 == 15) begin 
          counter             <= 0;  
        end 
        // if (cache_req_type) begin // if the type is a write then you need to send a processor response ?? 
        //   memreq_rdy  <= 1; 
        //   memresp_val <= 1; 
        // end 
        cache_req_val  <= 1; 
        cache_resp_rdy <= 1; 
      end 
        current_state  <= next_state; 
    end 
  end

endmodule

`endif /* LAB3_CACHE_BASE_CTRL_V */
