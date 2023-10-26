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
  
  logic        out;
  logic [31:0] cout;
  logic [5:0]  shamt;
  logic [5:0]  shamt_reg_out;  
  
  
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
  
  // ripple carry adder
  
  vc_Adder#(1) ripple_carry_adder( .in0(b_mux_out[0]) , .in1(1) , .cin(0) , .out(out) , .cout(cout[0]) );
  vc_Adder#(1) ripple_carry_adder1( .in0(b_mux_out[1]) , .in1(1) , .cin(cout[0]) , .out(out) , .cout(cout[1]) );
  vc_Adder#(1) ripple_carry_adder2( .in0(b_mux_out[2]) , .in1(1) , .cin(cout[1]) , .out(out) , .cout(cout[2]) );
  vc_Adder#(1) ripple_carry_adder3( .in0(b_mux_out[3]) , .in1(1) , .cin(cout[2]) , .out(out) , .cout(cout[3]) );
  vc_Adder#(1) ripple_carry_adder4( .in0(b_mux_out[4]) , .in1(1) , .cin(cout[3]) , .out(out) , .cout(cout[4]) );
  vc_Adder#(1) ripple_carry_adder5( .in0(b_mux_out[5]) , .in1(1) , .cin(cout[4]) , .out(out) , .cout(cout[5]) );
  vc_Adder#(1) ripple_carry_adder6( .in0(b_mux_out[6]) , .in1(1) , .cin(cout[5]) , .out(out) , .cout(cout[6]) );
  vc_Adder#(1) ripple_carry_adder7( .in0(b_mux_out[7]) , .in1(1) , .cin(cout[6]) , .out(out) , .cout(cout[7]) );
  vc_Adder#(1) ripple_carry_adder8( .in0(b_mux_out[8]) , .in1(1) , .cin(cout[7]) , .out(out) , .cout(cout[8]) );
  vc_Adder#(1) ripple_carry_adder9( .in0(b_mux_out[9]) , .in1(1) , .cin(cout[8]) , .out(out) , .cout(cout[9]) );
  vc_Adder#(1) ripple_carry_adder10( .in0(b_mux_out[10]) , .in1(1) , .cin(cout[9]) , .out(out) , .cout(cout[10]) );
  vc_Adder#(1) ripple_carry_adder11( .in0(b_mux_out[11]) , .in1(1) , .cin(cout[10]) , .out(out) , .cout(cout[11]) );
  vc_Adder#(1) ripple_carry_adder12( .in0(b_mux_out[12]) , .in1(1) , .cin(cout[11]) , .out(out) , .cout(cout[12]) );
  vc_Adder#(1) ripple_carry_adder13( .in0(b_mux_out[13]) , .in1(1) , .cin(cout[12]) , .out(out) , .cout(cout[13]) );
  vc_Adder#(1) ripple_carry_adder14( .in0(b_mux_out[14]) , .in1(1) , .cin(cout[13]) , .out(out) , .cout(cout[14]) );
  vc_Adder#(1) ripple_carry_adder15( .in0(b_mux_out[15]) , .in1(1) , .cin(cout[14]) , .out(out) , .cout(cout[15]) );
  vc_Adder#(1) ripple_carry_adder16( .in0(b_mux_out[16]) , .in1(1) , .cin(cout[15]) , .out(out) , .cout(cout[16]) );
  vc_Adder#(1) ripple_carry_adder17( .in0(b_mux_out[17]) , .in1(1) , .cin(cout[16]) , .out(out) , .cout(cout[17]) );
  vc_Adder#(1) ripple_carry_adder18( .in0(b_mux_out[18]) , .in1(1) , .cin(cout[17]) , .out(out) , .cout(cout[18]) );
  vc_Adder#(1) ripple_carry_adder19( .in0(b_mux_out[19]) , .in1(1) , .cin(cout[18]) , .out(out) , .cout(cout[19]) );
  vc_Adder#(1) ripple_carry_adder20( .in0(b_mux_out[20]) , .in1(1) , .cin(cout[19]) , .out(out) , .cout(cout[20]) );
  vc_Adder#(1) ripple_carry_adder21( .in0(b_mux_out[21]) , .in1(1) , .cin(cout[20]) , .out(out) , .cout(cout[21]) );
  vc_Adder#(1) ripple_carry_adder22( .in0(b_mux_out[22]) , .in1(1) , .cin(cout[21]) , .out(out) , .cout(cout[22]) );
  vc_Adder#(1) ripple_carry_adder23( .in0(b_mux_out[23]) , .in1(1) , .cin(cout[22]) , .out(out) , .cout(cout[23]) );
  vc_Adder#(1) ripple_carry_adder24( .in0(b_mux_out[24]) , .in1(1) , .cin(cout[23]) , .out(out) , .cout(cout[24]) );
  vc_Adder#(1) ripple_carry_adder25( .in0(b_mux_out[25]) , .in1(1) , .cin(cout[24]) , .out(out) , .cout(cout[25]) );
  vc_Adder#(1) ripple_carry_adder26( .in0(b_mux_out[26]) , .in1(1) , .cin(cout[25]) , .out(out) , .cout(cout[26]) );
  vc_Adder#(1) ripple_carry_adder27( .in0(b_mux_out[27]) , .in1(1) , .cin(cout[26]) , .out(out) , .cout(cout[27]) );
  vc_Adder#(1) ripple_carry_adder28( .in0(b_mux_out[28]) , .in1(1) , .cin(cout[27]) , .out(out) , .cout(cout[28]) );
  vc_Adder#(1) ripple_carry_adder29( .in0(b_mux_out[29]) , .in1(1) , .cin(cout[28]) , .out(out) , .cout(cout[29]) );
  vc_Adder#(1) ripple_carry_adder30( .in0(b_mux_out[30]) , .in1(1) , .cin(cout[29]) , .out(out) , .cout(cout[30]) );
  vc_Adder#(1) ripple_carry_adder31( .in0(b_mux_out[31]) , .in1(1) , .cin(cout[30]) , .out(out) , .cout(cout[31]) );

  // mux32
  
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
      default: $stop;
    endcase
    
  end
  
  vc_Reg#(6) shamt_reg
  (
    .clk   (clk),
    .d     (shamt),
    .q     (shamt_reg_out)
  );
  
  assign shift_mnt = shamt;
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
// Integer Multiplier Variable-Latency Implementation
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
  logic   result_reg_en;
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
