//========================================================================
// Integer Multiplier Fixed-Latency Implementation
//========================================================================


`ifndef LAB1_IMUL_INT_MUL_BASE_V
`define LAB1_IMUL_INT_MUL_BASE_V

`include "vc/trace.v"
`include "vc/muxes.v"
`include "vc/regs.v"
`include "vc/arithmetic.v"

module myModule
(
  input  logic [31:0] in0,
  output logic [5:0]  shamt
);

  logic        out;
  logic [31:0] cout;
  

  genvar i;
  
  vc_Adder#(1) ripple_carry_adder( .in0(in0[0]) , .in1(1) , .cin(0) , .out(out) , .cout(cout[0]) );
  
  generate
    for( i=1 ; i<32 ; i++ )
    
      vc_Adder#(1) ripple_carry_adder( .in0(in0[i]) , .in1(1) , .cin(cout[i-1]) , .out(out) , .cout(cout[i]) );
          
  endgenerate
      
      
  always_comb
  begin
  
    case ( cout )
      32'b11111111111111111111111111111111 : shamt = 1;
      32'b11111111111111111111111111111110 : shamt = 1;
      32'b11111111111111111111111111111100 : shamt = 2;
      32'b11111111111111111111111111111000 : shamt = 3;
      32'b11111111111111111111111111110000 : shamt = 4;
      32'b11111111111111111111111111100000 : shamt = 5;
      32'b11111111111111111111111111000000 : shamt = 6;
      32'b11111111111111111111111110000000 : shamt = 7;
      32'b11111111111111111111111100000000 : shamt = 8;
      32'b11111111111111111111111000000000 : shamt = 9;
      32'b11111111111111111111110000000000 : shamt = 10;
      32'b11111111111111111111100000000000 : shamt = 11;
      32'b11111111111111111111000000000000 : shamt = 12;
      32'b11111111111111111110000000000000 : shamt = 13;
      32'b11111111111111111100000000000000 : shamt = 14;
      32'b11111111111111111000000000000000 : shamt = 15;
      32'b11111111111111110000000000000000 : shamt = 16;
      32'b11111111111111100000000000000000 : shamt = 17;
      32'b11111111111111000000000000000000 : shamt = 18;
      32'b11111111111110000000000000000000 : shamt = 19;
      32'b11111111111100000000000000000000 : shamt = 20;
      32'b11111111111000000000000000000000 : shamt = 21;
      32'b11111111110000000000000000000000 : shamt = 22;
      32'b11111111100000000000000000000000 : shamt = 23;
      32'b11111111000000000000000000000000 : shamt = 24;
      32'b11111110000000000000000000000000 : shamt = 25;
      32'b11111100000000000000000000000000 : shamt = 26;
      32'b11111000000000000000000000000000 : shamt = 27;
      32'b11110000000000000000000000000000 : shamt = 28;
      32'b11100000000000000000000000000000 : shamt = 29;
      32'b11000000000000000000000000000000 : shamt = 30;
      32'b10000000000000000000000000000000 : shamt = 31;
      32'b00000000000000000000000000000000 : shamt = 32;
    endcase
    
  end
  
endmodule

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

  output logic        b_lsb,
  output logic [5:0]  shift_mnt
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
  
  logic [5:0] my_mux_out;
  logic [5:0] my_module_out;
  logic [5:0] shamt_reg_out;  
  
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
  
  vc_LeftLogicalShifter#(32,6) shift_a
  (
    .in    (a_reg_out),
    .shamt (shamt_reg_out),
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

  vc_RightLogicalShifter#(32,6) shift_b
  (
    .in   (b_reg_out),
    .shamt (shamt_reg_out),
    .out   (b_shift_out)
  );

  // result reg

  vc_EnReg#(32) result_reg
  (
    .clk   (clk),
    .reset (reset),
    .en    (result_reg_en),
    .d     (result_mux_out),
    .q     (result_reg_out)
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
  
  //my module

  myModule my_module
  (
    .in0   (b_mux_out),
    .shamt (my_module_out)
  );
  
  //my mux

  vc_Mux2#(6) my_mux
  (
    .sel   (b_reg_out[0]),
    .in0   (my_module_out),
    .in1   (6'b1),
    .out   (my_mux_out)
  );
  
  vc_Reg#(6) shamt_reg
  (
    .clk   (clk),
    .d     (my_mux_out),
    .q     (shamt_reg_out)
  );

  
  assign shift_mnt = my_mux_out;
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

  input  logic        b_lsb,
  input  logic [5:0]  shift_mnt
);

  // state

  logic [1:0] current_state;
  logic [1:0] next_state;
  logic [5:0] counter;
  
  always_ff @(posedge clk) begin
      if(reset)begin
        current_state <= 2'b00;
        counter <= 0;
      end
      if(!reset)begin
        current_state <= next_state;
        if(next_state == 2'b00) 
          counter <= 0;
        else
          counter <= counter + shift_mnt;
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
          if(counter >= 32) next_state = 2'b10;
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
    input logic       cs_result_reg_en,
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
        2'b00: cs(1,0,1,1,1,0,1); 
        2'b01: if(b_lsb) cs(0,0,0,0,0,0,1);
               else if(!b_lsb) cs(0,0,0,0,0,1,1);
        2'b10: cs(0,1,1,1,1,0,1);
        default: $stop;
      endcase
  end

endmodule




//========================================================================
// Integer Multiplier Fixed-Latency Implementation
//========================================================================

module lab1_imul_IntMulAlt
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
  logic 	result_reg_en;
  logic   b_lsb;
  logic [5:0]  shift_mnt;

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
  .b_lsb(b_lsb),
  .shift_mnt(shift_mnt)
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
  .b_lsb(b_lsb),
  .shift_mnt(shift_mnt)
  );

  `ifndef SYNTHESIS

  logic [`VC_TRACE_NBITS-1:0] str;
  `VC_TRACE_BEGIN
  begin

    $sformat( str, "%x", istream_msg );
    vc_trace.append_val_rdy_str( trace_str, istream_val, istream_rdy, str );

    vc_trace.append_str( trace_str, "(" );

    // ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''
    // Add additional line tracing using the helper tasks for
    // internal state including the current FSM state.
    // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

    vc_trace.append_str( trace_str, ")" );

    $sformat( str, "%x", ostream_msg );
    vc_trace.append_val_rdy_str( trace_str, ostream_val, ostream_rdy, str );

  end
  `VC_TRACE_END

  `endif /* SYNTHESIS */

endmodule

`endif /* LAB1_IMUL_INT_MUL_BASE_V */
