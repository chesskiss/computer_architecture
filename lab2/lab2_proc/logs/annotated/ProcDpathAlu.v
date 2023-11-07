//      // verilator_coverage annotation
        //========================================================================
        // Proc Datapath ALU
        //========================================================================
        
        `ifndef LAB2_PROC_PROC_DPATH_ALU_V
        `define LAB2_PROC_PROC_DPATH_ALU_V
        
        `include "vc/arithmetic.v"
        
        module lab2_proc_ProcDpathAlu
        (
 000242   input  logic [31:0] in0,
 000508   input  logic [31:0] in1,
 000690   input  logic [ 3:0] fn,
 000346   output logic [31:0] out,
 005050   output logic        ops_eq,
 000878   output logic        ops_lt,
 001162   output logic        ops_ltu
        );
        
%000000   always_comb begin
        
%000000     case ( fn )
 012813       4'd0    : out = in0 + in1;                               // ADD
 000854       4'd11   : out = in0;                                     // CP OP0
 002111       4'd12   : out = in1;                                     // CP OP1
        
              //''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''
              
 000086       4'd1   : out = in0 - in1;                                // SUB
 000110       4'd2   : out = in0 & in1;                                // AND
 000123       4'd3   : out = in0 | in1;                                // OR
 000095       4'd4   : out = in0 ^ in1;                                // XOR
 000088       4'd5   : out = ops_lt ? 1 : 0;                           // SLT
 000057       4'd6   : out = ops_ltu ? 1 : 0;                          // SLTU
 000120       4'd7   : out = in0 >>> in1[4:0];                         // SRA
 000050       4'd8   : out = in0 >> in1[4:0];                          // SRL
 000065       4'd9   : out = in0 << in1[4:0];                          // SLL
 000005       4'd10  : out = (in0 + in1) & 32'hfffffffe;               // JALR
              
              //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
        
%000000       default : out = 32'b0;
            endcase
        
          end
        
          // Calculate equality, zero, negative flags
        
          vc_EqComparator #(32) cond_eq_comp
          (
            .in0  (in0),
            .in1  (in1),
            .out  (ops_eq)
          );
        
          assign ops_lt = $signed(in0) < $signed(in1);
          assign ops_ltu = in0 < in1;
        
        endmodule
        
        `endif /* LAB2_PROC_PROC_DPATH_ALU_V */
        
