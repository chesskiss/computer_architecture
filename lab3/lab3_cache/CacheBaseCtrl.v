<<<<<<< HEAD
//=========================================================================
// 5-Stage Simple Pipelined Processor Control
//=========================================================================

`ifndef LAB3_CACHE_BASE_CTRL_V
`define LAB3_CACHE_BASE_CTRL_V

`include "vc/trace.v"

`include "tinyrv2_encoding.v"

module lab2_proc_ProcBaseCtrl
(
  input  logic        clk,
  input  logic        reset,

// ctrl-dpath
  output logic        tarray_en,
  output logic        reg_en_M0,
  output logic        reg_en_M1,

// dpath-ctrl
  input  logic        tarray_match, //tag array
  input  logic        dbit          //dirty bit

);

  logic  ostall_M0; //stall if tag missed
  logic  ostall_M1; // do we need it?

  logic  stall_M0;
  logic  stall_M1;

  //----------------------------------------------------------------------
  // M0 stage
  //----------------------------------------------------------------------

  // Register enable logic
  assign reg_en_M0 =  1'b1; //!stall_M0 ;

  // Pipline registers
  always_ff @( posedge clk ) begin
    if ( reset )
      val_M0 <= 1'b0;
    else if ( reg_en_M0 )
      val_M0 <= 1'b1;
  end

  always_comb begin
    if (val_M0 && !tarray_match) begin
      //step 1 : if dirty bit then write first
      /*
      if (dbit) begin
        write to memory and stall until 
      end
      */
      
      //step 2 : read from memory 
      

    end
  end

  //----------------------------------------------------------------------
  // M1 stage
  //----------------------------------------------------------------------

  // Register enable logic
  assign reg_en_M0 =  1'b1; //!stall_M0 ;

  // Pipline registers
  always_ff @( posedge clk ) begin
    if ( reset )
      val_M1 <= 1'b0;
    else if ( reg_en_M1 )
      val_M1 <= val_M0;
  end

endmodule

`endif /* LAB3_CACHE_BASE_CTRL_V */
=======
`include "vc/regs.v"

module CacheBaseCtrl (
    // Common system signals
    input logic clk,
    input logic reset,

    // Outputs to the cacheBaseDpath module (inputs of cacheBaseDpath)
    output mem_req_4B_t mem_req_msg,
    output mem_resp_4B_t cache_resp_msg,

    // Inputs from the cacheBaseDpath module (outputs of cacheBaseDpath)
    input mem_resp_4B_t memresp_msg,
    input mem_req_4B_t cache_req_msg,

    // Outputs of ctrl signals (inputs of cacheBaseDpath)
    output logic memreq_en,
    output logic flush,
    output logic cache_mem_en, 
    output logic data_array_w_en,
    output logic data_array_r_en,
    output logic [4:0] byte_counter,
    output logic data_array_write_mux_sel,
    output logic tag_array_w_en,

    // Inputs of ctrl signals (outputs of cacheBaseDpath)
    input logic tag_array_match,
    input logic [31:0] dirty_bits,
    input logic [2:0] cache_req_type
);




endmodule
>>>>>>> ari
