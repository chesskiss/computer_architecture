//      // verilator_coverage annotation
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
 033200   input  logic        clk,
 000046   input  logic        reset,
        
          // Data signals
        
 000242   input  logic [31:0] istream_msg_a,
 000510   input  logic [31:0] istream_msg_b,
 000020   output logic [31:0] ostream_msg,
        
          // Control signals (ctrl -> dpath)
        
 000084   input  logic        a_mux_sel,
 000084   input  logic        b_mux_sel,
 000084   input  logic        result_mux_sel,
 000084   input  logic        result_reg_en,
 000272   input  logic        add_mux_sel,
        
          // Status signals (dpath -> ctrl)
        
 001118   output logic        b_lsb,
 002072   output logic        is_b_zero
        );
        
          // B mux
        
 000602   logic [31:0] rshifter_out;
 000498   logic [31:0] b_mux_out;
        
          vc_Mux2#(32) b_mux
          (
           .sel (b_mux_sel),
           .in0 (rshifter_out),
           .in1 (istream_msg_b),
           .out (b_mux_out)
          );
        
          // B register
        
 000498   logic [31:0] b_reg_out;
        
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
        
 000182   logic [3:0] calc_shamt_out;
        
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
        
 000392   logic [31:0] lshifter_out;
 000264   logic [31:0] a_mux_out;
        
          vc_Mux2#(32) a_mux
          (
           .sel (a_mux_sel),
           .in0 (lshifter_out),
           .in1 (istream_msg_a),
           .out (a_mux_out)
          );
        
          // A register
        
 000264   logic [31:0] a_reg_out;
        
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
        
 000262   logic [31:0] add_mux_out;
 000022   logic [31:0] result_mux_out;
        
          vc_Mux2#(32) result_mux
          (
           .sel (result_mux_sel),
           .in0 (add_mux_out),
           .in1 (32'b0),
           .out (result_mux_out)
          );
        
          // Result register
        
 000020   logic [31:0] result_reg_out;
        
          vc_EnReg#(32) result_reg
          (
           .clk   (clk),
           .reset (reset),
           .en    (result_reg_en),
           .d     (result_mux_out),
           .q     (result_reg_out)
          );
        
          // Adder
        
 000284   logic [31:0] add_out;
        
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
 033200   input  logic clk,
 000046   input  logic reset,
        
          // Dataflow signals
        
 000084   input  logic istream_val,
 000084   output logic istream_rdy,
        
 000084   output logic ostream_val,
 000084   input  logic ostream_rdy,
        
          // Control signals (ctrl -> dpath)
        
 000084   output logic a_mux_sel,
 000084   output logic b_mux_sel,
 000084   output logic result_mux_sel,
 000084   output logic result_reg_en,
 000272   output logic add_mux_sel,
        
          // Status signals (dpath -> ctrl)
        
 001118   input  logic b_lsb,
 002072   input  logic is_b_zero
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
        
 000084   logic [1:0] state_reg;
 000084   logic [1:0] state_next;
        
 016577   always @( posedge clk ) begin
 000598     if ( reset )
 000598       state_reg <= STATE_IDLE;
            else
 015979       state_reg <= state_next;
          end
        
          //----------------------------------------------------------------------
          // State Transitions
          //----------------------------------------------------------------------
        
 000084   logic istream_go, ostream_go, is_calc_done;
        
          assign istream_go      = istream_val && istream_rdy;
          assign ostream_go      = ostream_val && ostream_rdy;
          assign is_calc_done = is_b_zero;
        
%000000   always @(*) begin
        
%000000     state_next = state_reg;
        
%000000     case ( state_reg )
        
 000126       STATE_IDLE: if ( istream_go      ) state_next = STATE_CALC;
 000042       STATE_CALC: if ( is_calc_done ) state_next = STATE_DONE;
%000000       STATE_DONE: if ( ostream_go      ) state_next = STATE_IDLE;
%000000       default:                        state_next = 'x;
        
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
        
 016577   task cs
          (
            input cs_istream_rdy,
            input cs_ostream_val,
            input cs_a_mux_sel,
            input cs_b_mux_sel,
            input cs_result_mux_sel,
            input cs_result_reg_en,
            input cs_add_mux_sel
          );
 016577   begin
 016577     istream_rdy       = cs_istream_rdy;
 016577     ostream_val       = cs_ostream_val;
 016577     a_mux_sel      = cs_a_mux_sel;
 016577     b_mux_sel      = cs_b_mux_sel;
 016577     result_mux_sel = cs_result_mux_sel;
 016577     result_reg_en  = cs_result_reg_en;
 016577     add_mux_sel    = cs_add_mux_sel;
          end
          endtask
        
          // Labels for Mealy transistions
        
 001118   logic do_sh_add, do_sh;
        
          assign do_sh_add = (b_lsb == 1); // do shift and add
          assign do_sh     = (b_lsb == 0); // do shift but no add
        
          // Set outputs using a control signal "table"
        
%000000   always @(*) begin
        
%000000     case ( state_reg )
        
        //                               istream ostream a mux  b mux  res mux  res    add mux
        //                               rdy val  sel    sel    sel      en     sel
 016061 STATE_IDLE:                  cs( 1,  0,   a_ld,  b_ld,  res_0,   1,     add_x    );
 000338 STATE_CALC: if ( do_sh_add ) cs( 0,  0,   a_lsh, b_rsh, res_add, 1,     add_add  );
%000000        else if ( do_sh )     cs( 0,  0,   a_lsh, b_rsh, res_add, 1,     add_res  );
 000042 STATE_DONE:                  cs( 0,  1,   a_x,   b_x,   res_x,   0,     add_x    );
%000000 default:                     cs('x, 'x,   a_x,   b_x,   res_x,  'x,     add_x    );
        
            endcase
        
          end
        
        endmodule
        
        // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''/\
        
        //=========================================================================
        // Integer Multiplier Variable-Latency Implementation
        //=========================================================================
        
        module lab1_imul_IntMulAlt
        (
 033200   input  logic        clk,
 000046   input  logic        reset,
        
 000084   input  logic        istream_val,
 000084   output logic        istream_rdy,
 000242   input  logic [63:0] istream_msg,
        
 000084   output logic        ostream_val,
 000084   input  logic        ostream_rdy,
 000006   output logic [31:0] ostream_msg
        );
        
          // ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''''
          // Instantiate datapath and control models here and then connect them
          // together.
          // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\/
        
          // Control signals
        
 000084   logic a_mux_sel;
 000084   logic b_mux_sel;
 000084   logic result_mux_sel;
 000084   logic result_reg_en;
 000272   logic add_mux_sel;
        
          // Status signals
        
 001118   logic b_lsb;
 002072   logic is_b_zero;
        
 000020   logic [31:0] product;
        
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
        
