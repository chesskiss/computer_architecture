`ifndef LAB3_CACHE_CACHE_BASE_CTRL_V
`define LAB3_CACHE_CACHE_BASE_CTRL_V


`include "vc/mem-msgs.v"


module lab3_cache_CacheBaseCtrl
(
  input  logic                    clk,
  input  logic                    reset,

  // imem connection bt processor and cache
  input  logic                    memreq_val,
  output logic                    memreq_rdy,

  output logic                    memresp_val,
  input  logic                    memresp_rdy,


  //cache connection between memory and cache
  output  logic                    cache_req_val,
  input   logic                    cache_req_rdy,
 
  input  logic                     cache_resp_val,
  output logic                     cache_resp_rdy,


  // flush
  input logic                     flush,
  output logic                    flush_done, 


  // control signals (ctrl->dpath)
  output logic                    memreq_en, 
  output logic                    tarray_en, 
  output logic                    tarray_wen, 
  output logic                    darray_en, 
  output logic                    darray_wen, 
  output logic                    darray_write_mux_sel, 
  output logic [4:0]              counter,  // keeps track of requests sent

  // address
  // tag [31:11]
  // index [10:6]
  // word offset [5:2]
  // byte offset [1:0]


  // status signals (dpath->ctrl)

  input  logic                     tarray_match,
  input  logic                     line_dirty, 
  input  logic [2:0]               cache_req_type


  // cache_req_type 0 is read and 1 is write 

);

  //state variables
  localparam tag_check          = 2'd0; // ready 
  localparam refill             = 2'd1; // if victim clean
  localparam evict              = 2'd2; // spill if dirty


  logic [2:0] current_state, next_state;   //state element variables for state transition
  logic [4:0] counter2; // keeps track of requests received
 
 // 
  task cs
  (
    input logic                 cs_memreq_en,  
    input logic                 cs_tarray_en,   
    input logic                 cs_tarray_wen,   
    input logic                 cs_darray_en,    
    input logic                 cs_darray_wen,    
    input logic                 cs_darray_write_mux_sel,     

  );
  begin

    memreq_en                 = cs_memreq_en; 
    tarray_en                 = cs_tarray_en; 
    tarray_wen                = cs_tarray_wen; 
    darray_en                 = cs_darray_en; 
    darray_wen                = cs_darray_wen; 
    darray_write_mux_sel      = cs_darray_write_mux_sel;  

  end
  endtask

  // assign cache_req_val = memreq_val;
  // assign memreq_rdy = cache_req_rdy;
  // assign memresp_val = cache_resp_val;
  // assign cache_resp_rdy = memresp_rdy;


  // Combinational Block for State Transitions
  always_comb begin
    case (current_state)
      tag_check: begin
        if (flush) begin 
          next_state = evict; 
        end 
        if (tarray_match) begin  // write/read hit makes sure the response is done in the same cycle
          next_state = tag_check;  
        end 
        if (!tarray_match && line_dirty) begin  // read/write miss dirty 
          next_state = evict; 
        end 
        else if (!tarray_match && !line_dirty) begin //read/write miss clean 
          next_state = refill;  
        end 
      end  
      evict: begin 
        if (flush) begin 
          next_state = evict; 
        end 
        if (counter2 == 15 && counter == 15) begin  // done writing back cache line to memory. done evicting 
          next_state = refill; 
        end 
        if (counter2 < 15 || counter < 15) begin  // cache not done flushing and sending/receiving requests still keep evicting the cache line 
          next_state = evict; 
        end
      end 
      refill: begin 
        if (flush) begin 
          next_state = evict; 
        end 
        if (counter == 15 && counter2 == 15) begin 
          next_state = tag_check; 
        end 
        else if (counter < 15 || counter2 < 15) begin 
          next_state = refill; 
        end 
      end 
      default: begin
      end
    endcase
  end

  // Sequential Block
  // cache_req_val/cache_resp_rdy/ mem_req_rdy/mem_resp_val are control unit outputs 

  always_ff @(posedge clk) begin
    if (reset) begin
      current_state <= tag_check;
      counter       <= 0; 
      counter2      <= 0; 
      flush_done    <= 0; 
    end
    else begin
      if (current_state == tag_check) begin 
        // this state accesses the data in cache line 
        // in tag check and read data we need to send a response back quickly to the mem
        // once read data return mem resp 
        // cache_req_rdy && cache_resp_val determines done accessing data from memory 
        memreq_rdy <= 1; 
        memresp_val <= 1; 
        // reset the counters when not in evict or refill state 
        counter <= 0; 
        counter2 <= 0; 
      end  
      if (current_state == evict) begin 
        if (cache_req_val && cache_req_rdy) begin   // keeping track of requests sent
          counter <= counter + 1; 
        end
        if (cache_resp_val && cache_resp_rdy) begin // keeping track of responses received 
          counter2 <= counter2 + 1; 
        end 
        // if (cache_req_type) begin // if the type is a write then you need to send a processor response 
        //   memreq_rdy <= 1; 
        //   memresp_val <= 1; 
        // end 
        if (counter == 15 && counter2 == 15) begin  // if flush in evict state then say flush is done ?? account for flush 
          flush_done    <= 1;
          counter       <= 0;  
          counter2 <= 0; 
        end 
        cache_req_val <= 1; 
        cache_resp_rdy <= 1; 
      end 
      if (current_state == refill) begin 
        if (cache_req_val && cache_req_rdy) begin   // keeping track of requsts sent
          counter <= counter + 1; 
        end
        if (cache_resp_val && cache_resp_rdy) begin // keeping track of reqests received 
          counter2 <= counter2 + 1; 
        end 
        if (counter == 15 && counter2 == 15) begin 
          counter <= 0;  
          counter2 <= 0; 
        end 
        // if (cache_req_type) begin // if the type is a write then you need to send a processor response ?? 
        //   memreq_rdy  <= 1; 
        //   memresp_val <= 1; 
        // end 
        cache_req_val <= 1; 
        cache_resp_rdy <= 1; 
      end 
        current_state <= next_state; 
    end 
  end

  // Control Signals Table
  always_comb begin
    case ( current_state )  
      //                          memreq_en    t_en    t_wen     d_en     d_wen     d_write_mux    
      tag_check:                cs( 1,          1,       1,       0,        1,           0); 
      evict:                    cs( 1,          0,       1,       1,        1,           0); 
      refill:                   cs( 1,          0,       1,       1,        1,           1); 

      default:                  cs('x,         'x,      'x,      'x,       'x,          'x);    //this state is never reached
    endcase
  end


endmodule


`endif /* LAB3_CACHE_CACHE_BASE_CTRL_V */
