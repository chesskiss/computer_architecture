//========================================================================
// Integer Multiplier Fixed-Latency Implementation
//========================================================================


`ifndef LAB1_IMUL_INT_MUL_BASE_V
`define LAB1_IMUL_INT_MUL_BASE_V

`include "vc/trace.v"
`include "vc/muxes.v"
`include "vc/regs.v"
`include "vc/arithmetic.v"

// datapath

module lab1_imul_IntMulBase_data
(
  input  logic        clk,
  input  logic        reset,

  input  logic [63:0] istream_msg,
  output logic [31:0] ostream_msg,

  input  logic        a_mux_sel,  
  input  logic        b_mux_sel,  
  input  logic        result_mux_sel,  
  input  logic        add_mux_sel,  
  input  logic        result_reg_en,
  
  output logic        b_lsb
);

  logic [31:0] istream_msg_a;
  assign istream_msg_a = istream_msg[63:32];

  logic [31:0] istream_msg_b;
  assign istream_msg_b = istream_msg[31:0];

  logic [31:0] a_reg_out;
  logic [31:0] a_mux_out;
  logic [31:0] a_shift_out;

  logic [31:0] b_reg_out;
  logic [31:0] b_mux_out;
  logic [31:0] b_shift_out;
 
  logic [31:0] result_reg_out;
  logic [31:0] result_mux_out;

  logic [31:0] adder_out;
  logic [31:0] add_mux_out;

  // a mux

  vc_Mux2#(32) a_mux
  (
    .sel   (a_mux_sel),
    .in0   (a_shift_out),
    .in1   (istream_msg_a),
    .out   (a_mux_out)
  );

  // a reg

  vc_Reg#(32) a_reg
  (
    .clk   (clk),
    .d     (a_mux_out),
    .q     (a_reg_out)

  );

  // a shifter
  
  vc_LeftLogicalShifter#(32,1) shift_a
  (
    .in    (a_reg_out),
    .shamt (1'b1),
    .out   (a_shift_out)
  );

  // b mux

  vc_Mux2#(32) b_mux
  (
    .sel   (b_mux_sel),
    .in0   (b_shift_out),
    .in1   (istream_msg_b),
    .out   (b_mux_out)
  );

  // b reg

  vc_Reg#(32) b_reg
  (
    .clk   (clk),
    .d     (b_mux_out),
    .q     (b_reg_out)
  );

  // b shifter

  vc_RightLogicalShifter#(32,32) shift_b
  (
    .in   (b_reg_out),
    .shamt (1),
    .out   (b_shift_out)
  );

  // result reg

  vc_EnReg#(32) result_reg
  (
    .clk   (clk),
    .reset (reset),
    .d     (result_mux_out),
    .q     (result_reg_out),
    .en    (result_reg_en)
  );

  // result mux

  vc_Mux2#(32) result_mux
  (
    .sel   (result_mux_sel),
    .in0   (add_mux_out),
    .in1   (32'b0),
    .out   (result_mux_out)
  );

  //add mux

  vc_Mux2#(32) add_mux
  (
    .sel   (add_mux_sel),
    .in0   (adder_out),
    .in1   (result_reg_out),
    .out   (add_mux_out)
  );

  // adder

  vc_SimpleAdder#(32) adder
  (  
    .in0   (a_reg_out),
    .in1   (result_reg_out),
    .out   (adder_out)
  );

  assign b_lsb = b_reg_out[0];
  assign ostream_msg = result_reg_out;

endmodule

// control unit

module lab1_imul_IntMulBase_control
(
  input  logic        clk,
  input  logic        reset,

  input  logic        istream_val,
  output logic        istream_rdy,
  output logic        ostream_val,
  input  logic        ostream_rdy,

  output logic        a_mux_sel,  
  output logic        b_mux_sel,  
  output logic        result_mux_sel,  
  output logic        add_mux_sel,  
  output logic        result_reg_en,

  input  logic        b_lsb
);

  // state

  logic [1:0] current_state;
  logic [1:0] next_state;
  logic [5:0] counter;
  
  always_ff @(posedge clk) begin
      if(reset)begin
        current_state <= 2'b00;
        counter <= 1;
      end
      if(!reset)begin
        current_state <= next_state;
        if(next_state == 2'b00) 
          counter <= 1;
        else
          counter <= counter + 1;
      end
  end

  // state transitions

  logic req_val;
  logic resp_rdy;
  
    
  assign req_val = ( istream_val & istream_rdy );
  assign resp_rdy = ( ostream_val & ostream_rdy );

  always_comb begin
      next_state = current_state;
      case(current_state)
        2'b00:
          if(req_val) next_state = 2'b01;
        2'b01:
          if(counter == 33) next_state = 2'b10;
        2'b10:
          if(resp_rdy) next_state = 2'b00;
        default: $stop;
      endcase
  end

  // state outputs

  function void cs
  (
    input logic       cs_istream_rdy,
    input logic       cs_ostream_val,
    input logic       cs_a_mux_sel,
    input logic       cs_b_mux_sel,
    input logic       cs_result_mux_sel,
    input logic       cs_add_mux_sel,
    input logic       cs_result_reg_en
  );
    begin
      istream_rdy = cs_istream_rdy;
      ostream_val = cs_ostream_val;
      a_mux_sel = cs_a_mux_sel;
      b_mux_sel = cs_b_mux_sel;
      result_mux_sel = cs_result_mux_sel;
      add_mux_sel = cs_add_mux_sel;
      result_reg_en = cs_result_reg_en;
    end
  endfunction

  always_comb begin
      case(current_state)
        2'b00: cs(1,0,1,1,1,0,0); 
        2'b01: 
          begin
            if(b_lsb) cs(0,0,0,0,0,0,1);
            if(!b_lsb) cs(0,0,0,0,0,1,1);
          end
        2'b10: 
          begin
            if(ostream_rdy) cs(0,1,1,1,1,0,1);
            if(!ostream_rdy) cs(0,1,1,1,1,0,0);
          end
        default: $stop;
      endcase
  end

endmodule




//========================================================================
// Integer Multiplier Fixed-Latency Implementation
//========================================================================

module lab1_imul_IntMulBase
(
  input  logic        clk,
  input  logic        reset,

  input  logic        istream_val,
  output logic        istream_rdy,
  input  logic [63:0] istream_msg,

  output logic        ostream_val,
  input  logic        ostream_rdy,
  output logic [31:0] ostream_msg
);

  logic 	a_mux_sel;
  logic 	b_mux_sel;
  logic 	result_mux_sel;
  logic 	add_mux_sel;
  logic   result_reg_en;
  logic   b_lsb;

  lab1_imul_IntMulBase_data datapath
  (
  .clk(clk),
  .reset(reset),
  .istream_msg(istream_msg),
  .ostream_msg(ostream_msg),
  .a_mux_sel(a_mux_sel),  
  .b_mux_sel(b_mux_sel),  
  .result_mux_sel(result_mux_sel),  
  .add_mux_sel(add_mux_sel),  
  .result_reg_en(result_reg_en),
  .b_lsb(b_lsb)
  );
  
  lab1_imul_IntMulBase_control control_unit
  (
  .clk(clk),
  .reset(reset),
  .istream_val(istream_val),
  .istream_rdy(istream_rdy),
  .ostream_val(ostream_val),
  .ostream_rdy(ostream_rdy),
  .a_mux_sel(a_mux_sel),  
  .b_mux_sel(b_mux_sel),  
  .result_mux_sel(result_mux_sel),  
  .add_mux_sel(add_mux_sel),  
  .result_reg_en(result_reg_en),
  .b_lsb(b_lsb)
  );

  `ifndef SYNTHESIS

  logic [`VC_TRACE_NBITS-1:0] str;
  `VC_TRACE_BEGIN
  begin

    $sformat( str, "%x", istream_msg );
    vc_trace.append_val_rdy_str( trace_str, istream_val, istream_rdy, str );

    vc_trace.append_str( trace_str, "(" );

    $sformat( str, "%x", ostream_val );
    vc_trace.append_str( trace_str, str );
    vc_trace.append_str( trace_str, " " );

    vc_trace.append_str( trace_str, ")" );

    $sformat( str, "%x", ostream_msg );
    vc_trace.append_val_rdy_str( trace_str, ostream_val, ostream_rdy, str );

  end
  `VC_TRACE_END

  `endif /* SYNTHESIS */

endmodule

`endif /* LAB1_IMUL_INT_MUL_BASE_V */
