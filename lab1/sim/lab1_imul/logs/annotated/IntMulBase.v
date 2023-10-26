//      // verilator_coverage annotation
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
 198321   input  logic        clk,
 000001   input  logic        reset,
        
 000030   input  logic [63:0] istream_msg,
 001410   output logic [31:0] ostream_msg,
        
 005830   input  logic        a_mux_sel,  
 005830   input  logic        b_mux_sel,  
 005830   input  logic        result_mux_sel,  
 011556   input  logic        add_mux_sel,  
%000000   input  logic        result_reg_en,
        
 013880   output logic        b_lsb
        );
        
 000030   logic [31:0] istream_msg_a;
          assign istream_msg_a = istream_msg[63:32];
        
 000454   logic [31:0] istream_msg_b;
          assign istream_msg_b = istream_msg[31:0];
        
 002958   logic [31:0] a_reg_out;
 002958   logic [31:0] a_mux_out;
 002958   logic [31:0] a_shift_out;
        
 003569   logic [31:0] b_reg_out;
 003569   logic [31:0] b_mux_out;
 006808   logic [31:0] b_shift_out;
         
 001410   logic [31:0] result_reg_out;
 001410   logic [31:0] result_mux_out;
        
 001548   logic [31:0] adder_out;
 001480   logic [31:0] add_mux_out;
        
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
        
          assign b_lsb = b_reg_out[0];
          assign ostream_msg = result_reg_out;
        
        endmodule
        
        // control unit
        
        module lab1_imul_IntMulBase_control
        (
 198321   input  logic        clk,
 000001   input  logic        reset,
        
 005830   input  logic        istream_val,
 005830   output logic        istream_rdy,
 005830   output logic        ostream_val,
 005823   input  logic        ostream_rdy,
        
 005830   output logic        a_mux_sel,  
 005830   output logic        b_mux_sel,  
 005830   output logic        result_mux_sel,  
 011556   output logic        add_mux_sel,  
%000000   output logic        result_reg_en,  
        
 013880   input  logic        b_lsb
        );
        
          // state
        
 005830   logic [1:0] current_state;
 005830   logic [1:0] next_state;
%000000   logic [6:0] counter;
          
 099160   always_ff @(posedge clk) begin
 000003       if(reset)begin
 000003         current_state <= 2'b00;
 000003         counter <= 0;
              end
 000003       if(!reset)begin
 099157         current_state <= next_state;
 002962         if(next_state == 2'b00) 
 002962           counter <= 0;
                else
 096195           counter <= counter + 1;
              end
          end
        
          // state transitions
        
 005830   logic req_val;
 005830   logic resp_rdy;
          
            
          assign req_val = ( istream_val & istream_rdy );
          assign resp_rdy = ( ostream_val & ostream_rdy );
        
%000000   always_comb begin
%000000       next_state = current_state;
%000000       case(current_state)
 002965         2'b00:
 005830           if(req_val) next_state = 2'b01;
 093280         2'b01:
 002915           if(counter == 32) next_state = 2'b10;
 002915         2'b10:
%000000           if(resp_rdy) next_state = 2'b00;
                default: $stop;
              endcase
          end
        
          // state outputs
        
 099160   function void cs
          (
            input logic       cs_istream_rdy,
            input logic       cs_ostream_val,
            input logic       cs_a_mux_sel,
            input logic       cs_b_mux_sel,
            input logic       cs_result_mux_sel,
            input logic       cs_add_mux_sel,
            input logic       cs_result_reg_en,
          );
 099160     begin
 099160       istream_rdy = cs_istream_rdy;
 099160       ostream_val = cs_ostream_val;
 099160       a_mux_sel = cs_a_mux_sel;
 099160       b_mux_sel = cs_b_mux_sel;
 099160       result_mux_sel = cs_result_mux_sel;
 099160       add_mux_sel = cs_add_mux_sel;
 099160       result_reg_en = cs_result_reg_en;
            end
          endfunction
        
%000000   always_comb begin
%000000       case(current_state)
 002965         2'b00: cs(1,0,1,1,1,0,1); 
 041780         2'b01: if(b_lsb) cs(0,0,0,0,0,0,1);
%000000                else if(!b_lsb) cs(0,0,0,0,0,1,1);
 002915         2'b10: cs(0,1,1,1,1,0,1);
                default: $stop;
              endcase
          end
        
        endmodule
        
        
        
        
        //========================================================================
        // Integer Multiplier Fixed-Latency Implementation
        //========================================================================
        
        module lab1_imul_IntMulBase
        (
 198321   input  logic        clk,
 000001   input  logic        reset,
        
 005830   input  logic        istream_val,
 005830   output logic        istream_rdy,
 000030   input  logic [63:0] istream_msg,
        
 005830   output logic        ostream_val,
 005823   input  logic        ostream_rdy,
 001410   output logic [31:0] ostream_msg
        );
        
 005830   logic 	a_mux_sel;
 005830   logic 	b_mux_sel;
 005830   logic 	result_mux_sel;
 011556   logic 	add_mux_sel;
%000000   logic 	result_reg_en;
 013880   logic   b_lsb;
        
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
        
