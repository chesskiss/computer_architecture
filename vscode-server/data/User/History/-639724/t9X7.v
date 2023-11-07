//=========================================================================
// Integer Multiplier Variable-Latency Implementation
//=========================================================================

`ifndef LAB1_IMUL_INT_MUL_ALT_V
`define LAB1_IMUL_INT_MUL_ALT_V

`include "vc/trace.v"

// ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// Define datapath and control unit here.
// '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\/

`include "vc/muxes.v"
`include "vc/regs.v"
`include "vc/arithmetic.v"
`include "CalcShamt.v"

//========================================================================
// Integer Multiplier Variable-Latency Datapath
//========================================================================

module lab1_imul_IntMulAltDpath
(
  input  logic        clk,
  input  logic        reset,

  // Data signals

  input  logic [31:0] istream_msg_a,
  input  logic [31:0] istream_msg_b,
  output logic [31:0] ostream_msg,

  // Control signals (ctrl -> dpath)

  input  logic        a_mux_sel,
  input  logic        b_mux_sel,
  input  logic        result_mux_sel,
  input  logic        result_reg_en,
  input  logic        add_mux_sel,

  // Status signals (dpath -> ctrl)

  output logic        b_lsb,
  output logic        is_b_zero
);

  // B mux

  logic [31:0] rshifter_out;
  logic [31:0] b_mux_out;

  vc_Mux2#(32) b_mux
  (
   .sel (b_mux_sel),
   .in0 (rshifter_out),
   .in1 (istream_msg_b),
   .out (b_mux_out)
  );

  // B register

  logic [31:0] b_reg_out;

  vc_Reg#(32) b_reg
  (
   .clk (clk),
   .d   (b_mux_out),
   .q   (b_reg_out)
  );

  // B zero comparator

  vc_ZeroComparator#(32) b_zero_cmp
  (
   .in  (b_reg_out),
   .out (is_b_zero)
  );

  // Calculate shift amount

  logic [3:0] calc_shamt_out;

  lab1_imul_CalcShamt calc_shamt
  (
   .in_ (b_reg_out[7:0]),
   .out (calc_shamt_out)
  );

  // Right shifter

  vc_RightLogicalShifter#(32,4) rshifter
  (
   .in    (b_reg_out),
   .shamt (calc_shamt_out),
   .out   (rshifter_out)
  );

  // A mux

  logic [31:0] lshifter_out;
  logic [31:0] a_mux_out;

  vc_Mux2#(32) a_mux
  (
   .sel (a_mux_sel),
   .in0 (lshifter_out),
   .in1 (istream_msg_a),
   .out (a_mux_out)
  );

  // A register

  logic [31:0] a_reg_out;

  vc_Reg#(32) a_reg
  (
   .clk (clk),
   .d   (a_mux_out),
   .q   (a_reg_out)
  );

  // Left shifter

  vc_LeftLogicalShifter#(32,4) lshifter
  (
   .in    (a_reg_out),
   .shamt (calc_shamt_out),
   .out   (lshifter_out)
  );

  // Result mux

  logic [31:0] add_mux_out;
  logic [31:0] result_mux_out;

  vc_Mux2#(32) result_mux
  (
   .sel (result_mux_sel),
   .in0 (add_mux_out),
   .in1 (32'b0),
   .out (result_mux_out)
  );

  // Result register

  logic [31:0] result_reg_out;

  vc_EnReg#(32) result_reg
  (
   .clk   (clk),
   .reset (reset),
   .en    (result_reg_en),
   .d     (result_mux_out),
   .q     (result_reg_out)
  );

  // Adder

  logic [31:0] add_out;

  vc_SimpleAdder#(32) add
  (
   .in0 (a_reg_out),
   .in1 (result_reg_out),
   .out (add_out)
  );

  // Add mux

  vc_Mux2#(32) add_mux
  (
   .sel (add_mux_sel),
   .in0 (add_out),
   .in1 (result_reg_out),
   .out (add_mux_out)
  );

  // Status signals

  assign b_lsb = b_reg_out[0];

  // Connect to output port

  assign ostream_msg = result_reg_out;

endmodule

//========================================================================
// Integer Multiplier Variable-Latency Control Unit
//========================================================================

module lab1_imul_IntMulAltCtrl
(
  input  logic clk,
  input  logic reset,

  // Dataflow signals

  input  logic istream_val,
  output logic istream_rdy,

  output logic ostream_val,
  input  logic ostream_rdy,

  // Control signals (ctrl -> dpath)

  output logic a_mux_sel,
  output logic b_mux_sel,
  output logic result_mux_sel,
  output logic result_reg_en,
  output logic add_mux_sel,

  // Status signals (dpath -> ctrl)

  input  logic b_lsb,
  input  logic is_b_zero
);

  //----------------------------------------------------------------------
  // State
  //----------------------------------------------------------------------

  localparam STATE_IDLE = 2'd0;
  localparam STATE_CALC = 2'd1;
  localparam STATE_DONE = 2'd2;

  /*
  typedef enum logic [$clog2(3)-1:0] {
    STATE_IDLE,
    STATE_CALC,
    STATE_DONE
  } state_t;

  state_t state_reg;
  state_t state_next;
  */

  logic [1:0] state_reg;
  logic [1:0] state_next;

  always @( posedge clk ) begin
    if ( reset )
      state_reg <= STATE_IDLE;
    else
      state_reg <= state_next;
  end

  //----------------------------------------------------------------------
  // State Transitions
  //----------------------------------------------------------------------

  logic istream_go, ostream_go, is_calc_done;

  assign istream_go      = istream_val && istream_rdy;
  assign ostream_go      = ostream_val && ostream_rdy;
  assign is_calc_done = is_b_zero;

  always @(*) begin

    state_next = state_reg;

    case ( state_reg )

      STATE_IDLE: if ( istream_go      ) state_next = STATE_CALC;
      STATE_CALC: if ( is_calc_done ) state_next = STATE_DONE;
      STATE_DONE: if ( ostream_go      ) state_next = STATE_IDLE;
      default:                        state_next = 'x;

    endcase

  end

  //----------------------------------------------------------------------
  // State Outputs
  //----------------------------------------------------------------------

  localparam a_x     = 1'dx;
  localparam a_lsh   = 1'd0;
  localparam a_ld    = 1'd1;

  localparam b_x     = 1'dx;
  localparam b_rsh   = 1'd0;
  localparam b_ld    = 1'd1;

  localparam res_x   = 1'dx;
  localparam res_add = 1'd0;
  localparam res_0   = 1'd1;

  localparam add_x   = 1'dx;
  localparam add_add = 1'd0;
  localparam add_res = 1'd1;

  task cs
  (
    input cs_istream_rdy,
    input cs_ostream_val,
    input cs_a_mux_sel,
    input cs_b_mux_sel,
    input cs_result_mux_sel,
    input cs_result_reg_en,
    input cs_add_mux_sel
  );
  begin
    istream_rdy       = cs_istream_rdy;
    ostream_val       = cs_ostream_val;
    a_mux_sel      = cs_a_mux_sel;
    b_mux_sel      = cs_b_mux_sel;
    result_mux_sel = cs_result_mux_sel;
    result_reg_en  = cs_result_reg_en;
    add_mux_sel    = cs_add_mux_sel;
  end
  endtask

  // Labels for Mealy transistions

  logic do_sh_add, do_sh;

  assign do_sh_add = (b_lsb == 1); // do shift and add
  assign do_sh     = (b_lsb == 0); // do shift but no add

  // Set outputs using a control signal "table"

  always @(*) begin

    case ( state_reg )

//                               istream ostream a mux  b mux  res mux  res    add mux
//                               rdy val  sel    sel    sel      en     sel
STATE_IDLE:                  cs( 1,  0,   a_ld,  b_ld,  res_0,   1,     add_x    );
STATE_CALC: if ( do_sh_add ) cs( 0,  0,   a_lsh, b_rsh, res_add, 1,     add_add  );
       else if ( do_sh )     cs( 0,  0,   a_lsh, b_rsh, res_add, 1,     add_res  );
STATE_DONE:                  cs( 0,  1,   a_x,   b_x,   res_x,   0,     add_x    );
default:                     cs('x, 'x,   a_x,   b_x,   res_x,  'x,     add_x    );

    endcase

  end

endmodule

// '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''/\

//=========================================================================
// Integer Multiplier Variable-Latency Implementation
//=========================================================================

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

  // ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  // Instantiate datapath and control models here and then connect them
  // together.
  // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\/

  // Control signals

  logic a_mux_sel;
  logic b_mux_sel;
  logic result_mux_sel;
  logic result_reg_en;
  logic add_mux_sel;

  // Status signals

  logic b_lsb;
  logic is_b_zero;

  logic [31:0] product;

  // Instantiate and connect datapath

  lab1_imul_IntMulAltDpath dpath
  (
    .istream_msg_a (istream_msg[63:32]),
    .istream_msg_b (istream_msg[31: 0]),
    .ostream_msg   (product),
    .*
  );

  // Instantiate and connect control unit

  lab1_imul_IntMulAltCtrl ctrl
  (
    .*
  );

  assign ostream_msg = product & {32{ostream_val}};

  // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''/\

  //----------------------------------------------------------------------
  // Line Tracing
  //----------------------------------------------------------------------

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
    // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\/

    $sformat( str, "%x", dpath.a_reg_out );
    vc_trace.append_str( trace_str, str );
    vc_trace.append_str( trace_str, " " );

    $sformat( str, "%x", dpath.b_reg_out );
    vc_trace.append_str( trace_str, str );
    vc_trace.append_str( trace_str, " " );

    $sformat( str, "%x", dpath.result_reg_out );
    vc_trace.append_str( trace_str, str );
    vc_trace.append_str( trace_str, " " );

    case ( ctrl.state_reg )
      ctrl.STATE_IDLE:
        vc_trace.append_str( trace_str, "I " );

      ctrl.STATE_CALC:
      begin
        if ( ctrl.do_sh_add )
          vc_trace.append_str( trace_str, "C+" );
        else if ( ctrl.do_sh )
          vc_trace.append_str( trace_str, "C " );
        else
          vc_trace.append_str( trace_str, "C?" );
      end

      ctrl.STATE_DONE:
        vc_trace.append_str( trace_str, "D " );

      default:
        vc_trace.append_str( trace_str, "? " );

    endcase

    // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''/\

    vc_trace.append_str( trace_str, ")" );

    $sformat( str, "%x", ostream_msg );
    vc_trace.append_val_rdy_str( trace_str, ostream_val, ostream_rdy, str );

  end
  `VC_TRACE_END

  `endif /* SYNTHESIS */

endmodule

`endif /* LAB1_IMUL_INT_MUL_ALT_V */


/*********************************************


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


*************************************************/