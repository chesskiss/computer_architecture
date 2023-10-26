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
        
        module myModule
        (
 001749   input  logic [31:0] in0,
 005693   output logic [5:0]  shamt
        );
        
 011324   logic        out;
 005693   logic [31:0] cout;
          
        
          genvar i;
          
          vc_Adder#(1) ripple_carry_adder( .in0(in0[0]) , .in1(1) , .cin(0) , .out(out) , .cout(cout[0]) );
          
          generate
            for( i=1 ; i<32 ; i++ )
            
              vc_Adder#(1) ripple_carry_adder( .in0(in0[i]) , .in1(1) , .cin(cout[i-1]) , .out(out) , .cout(cout[i]) );
                  
          endgenerate
              
              
%000000   always_comb
%000000   begin
          
%000000     case ( cout )
 098342       32'b11111111111111111111111111111111 : shamt = 1;
 013240       32'b11111111111111111111111111111110 : shamt = 1;
 005742       32'b11111111111111111111111111111100 : shamt = 2;
 002485       32'b11111111111111111111111111111000 : shamt = 3;
 001367       32'b11111111111111111111111111110000 : shamt = 4;
 000395       32'b11111111111111111111111111100000 : shamt = 5;
 000015       32'b11111111111111111111111111000000 : shamt = 6;
 000006       32'b11111111111111111111111110000000 : shamt = 7;
%000000       32'b11111111111111111111111100000000 : shamt = 8;
%000000       32'b11111111111111111111111000000000 : shamt = 9;
%000000       32'b11111111111111111111110000000000 : shamt = 10;
%000000       32'b11111111111111111111100000000000 : shamt = 11;
%000000       32'b11111111111111111111000000000000 : shamt = 12;
%000000       32'b11111111111111111110000000000000 : shamt = 13;
%000000       32'b11111111111111111100000000000000 : shamt = 14;
%000000       32'b11111111111111111000000000000000 : shamt = 15;
%000000       32'b11111111111111110000000000000000 : shamt = 16;
%000000       32'b11111111111111100000000000000000 : shamt = 17;
%000000       32'b11111111111111000000000000000000 : shamt = 18;
%000000       32'b11111111111110000000000000000000 : shamt = 19;
%000000       32'b11111111111100000000000000000000 : shamt = 20;
%000000       32'b11111111111000000000000000000000 : shamt = 21;
%000000       32'b11111111110000000000000000000000 : shamt = 22;
%000000       32'b11111111100000000000000000000000 : shamt = 23;
%000000       32'b11111111000000000000000000000000 : shamt = 24;
%000000       32'b11111110000000000000000000000000 : shamt = 25;
%000000       32'b11111100000000000000000000000000 : shamt = 26;
%000000       32'b11111000000000000000000000000000 : shamt = 27;
%000000       32'b11110000000000000000000000000000 : shamt = 28;
%000000       32'b11100000000000000000000000000000 : shamt = 29;
%000000       32'b11000000000000000000000000000000 : shamt = 30;
%000000       32'b10000000000000000000000000000000 : shamt = 31;
 021389       32'b00000000000000000000000000000000 : shamt = 32;
            endcase
            
          end
          
        endmodule
        
        // datapath
        
        module lab1_imul_IntMulBase_data
        (
 087639   input  logic        clk,
 000001   input  logic        reset,
        
 000019   input  logic [63:0] istream_msg,
 000832   output logic [31:0] ostream_msg,
        
 005760   input  logic        a_mux_sel,  
 005760   input  logic        b_mux_sel,  
 005760   input  logic        result_mux_sel,  
 010926   input  logic        add_mux_sel,  
%000000   input  logic        result_reg_en,
        
 011324   output logic        b_lsb,
 004047   output logic [5:0]  shift_mnt
        );
        
 000019   logic [31:0] istream_msg_a;
          assign istream_msg_a = istream_msg[63:32];
        
 000098   logic [31:0] istream_msg_b;
          assign istream_msg_b = istream_msg[31:0];
        
 001714   logic [31:0] a_reg_out;
 001714   logic [31:0] a_mux_out;
 001712   logic [31:0] a_shift_out;
        
 001749   logic [31:0] b_reg_out;
 001749   logic [31:0] b_mux_out;
 002227   logic [31:0] b_shift_out;
         
 000832   logic [31:0] result_reg_out;
 000832   logic [31:0] result_mux_out;
        
 000882   logic [31:0] adder_out;
 000834   logic [31:0] add_mux_out;
          
 004047   logic [5:0] my_mux_out;
 005693   logic [5:0] my_module_out;
 004047   logic [5:0] shamt_reg_out;  
          
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
 087639   input  logic        clk,
 000001   input  logic        reset,
        
 005760   input  logic        istream_val,
 005760   output logic        istream_rdy,
 005760   output logic        ostream_val,
 005753   input  logic        ostream_rdy,
        
 005760   output logic        a_mux_sel,  
 005760   output logic        b_mux_sel,  
 005760   output logic        result_mux_sel,  
 010926   output logic        add_mux_sel,  
%000000   output logic        result_reg_en,  
        
 011324   input  logic        b_lsb,
 004047   input  logic [5:0]  shift_mnt
        );
        
          // state
        
 005760   logic [1:0] current_state;
 005760   logic [1:0] next_state;
 001700   logic [5:0] counter;
          
 043819   always_ff @(posedge clk) begin
 000003       if(reset)begin
 000003         current_state <= 2'b00;
 000003         counter <= 0;
              end
 000003       if(!reset)begin
 043816         current_state <= next_state;
 002927         if(next_state == 2'b00) 
 002927           counter <= 0;
                else
 040889           counter <= counter + shift_mnt;
              end
          end
        
          // state transitions
        
 005760   logic req_val;
 005760   logic resp_rdy;
          
            
          assign req_val = ( istream_val & istream_rdy );
          assign resp_rdy = ( ostream_val & ostream_rdy );
        
%000000   always_comb begin
%000000       next_state = current_state;
%000000       case(current_state)
 002930         2'b00:
 005760           if(req_val) next_state = 2'b01;
 038009         2'b01:
 002880           if(counter >= 32) next_state = 2'b10;
 002880         2'b10:
%000000           if(resp_rdy) next_state = 2'b00;
                default: $stop;
              endcase
          end
        
          // state outputs
        
 043819   function void cs
          (
            input logic       cs_istream_rdy,
            input logic       cs_ostream_val,
            input logic       cs_a_mux_sel,
            input logic       cs_b_mux_sel,
            input logic       cs_result_mux_sel,
            input logic       cs_add_mux_sel,
            input logic       cs_result_reg_en,
          );
 043819     begin
 043819       istream_rdy = cs_istream_rdy;
 043819       ostream_val = cs_ostream_val;
 043819       a_mux_sel = cs_a_mux_sel;
 043819       b_mux_sel = cs_b_mux_sel;
 043819       result_mux_sel = cs_result_mux_sel;
 043819       add_mux_sel = cs_add_mux_sel;
 043819       result_reg_en = cs_result_reg_en;
            end
          endfunction
        
%000000   always_comb begin
%000000       case(current_state)
 002930         2'b00: cs(1,0,1,1,1,0,1); 
 029425         2'b01: if(b_lsb) cs(0,0,0,0,0,0,1);
%000000                else if(!b_lsb) cs(0,0,0,0,0,1,1);
 002880         2'b10: cs(0,1,1,1,1,0,1);
                default: $stop;
              endcase
          end
        
        endmodule
        
        
        
        
        //========================================================================
        // Integer Multiplier Fixed-Latency Implementation
        //========================================================================
        
        module lab1_imul_IntMulAlt
        (
 087639   input  logic        clk,
 000001   input  logic        reset,
        
 005760   input  logic        istream_val,
 005760   output logic        istream_rdy,
 000019   input  logic [63:0] istream_msg,
        
 005760   output logic        ostream_val,
 005753   input  logic        ostream_rdy,
 000832   output logic [31:0] ostream_msg
        );
        
 005760   logic 	a_mux_sel;
 005760   logic 	b_mux_sel;
 005760   logic 	result_mux_sel;
 010926   logic 	add_mux_sel;
%000000   logic 	result_reg_en;
 011324   logic   b_lsb;
 004047   logic [5:0]  shift_mnt;
        
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
        
