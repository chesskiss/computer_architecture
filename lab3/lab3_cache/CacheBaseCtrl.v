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
  input  logic        tarray_match

);


  logic  reg_en_M0;
  logic  reg_en_M1;

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
