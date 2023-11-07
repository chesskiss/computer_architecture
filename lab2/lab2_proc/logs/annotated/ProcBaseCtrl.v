//      // verilator_coverage annotation
        //=========================================================================
        // 5-Stage Simple Pipelined Processor Control
        //=========================================================================
        
        `ifndef LAB2_PROC_PROC_BASE_CTRL_V
        `define LAB2_PROC_PROC_BASE_CTRL_V
        
        `include "vc/trace.v"
        
        `include "tinyrv2_encoding.v"
        
        module lab2_proc_ProcBaseCtrl
        (
 033200   input  logic        clk,
 000046   input  logic        reset,
        
          // Instruction Memory Port
        
 009332   output logic        imem_reqstream_val,
 000022   input  logic        imem_reqstream_rdy,
 008506   input  logic        imem_respstream_val,
 009286   output logic        imem_respstream_rdy,
 000320   output logic        imem_respstream_drop,
        
          // Data Memory Port
        
 001322   output logic        dmem_reqstream_val,
 008372   input  logic        dmem_reqstream_rdy,
 001330   input  logic        dmem_respstream_val,
 001330   output logic        dmem_respstream_rdy,
        
          // mngr communication port
        
 000640   input  logic        mngr2proc_val,
 000680   output logic        mngr2proc_rdy,
 000524   output logic        proc2mngr_val,
 000516   input  logic        proc2mngr_rdy,
        
          // control signals (ctrl->dpath)
 009286   output logic        reg_en_F,
 000026   output logic [1:0]  pc_sel_F,
        
 002514   output logic        reg_en_D,
 006390   output logic        op1_sel_D,
 000530   output logic [1:0]  op2_sel_D,
%000000   output logic [1:0]  csrr_sel_D,
 000038   output logic [2:0]  imm_type_D,
 000084   output logic        imul_req_val_D,
        
 000082   output logic [1:0]  ex_result_sel_D,
%000000   output logic [1:0]  dmem_reqstream_type,
        
 001040   output logic        reg_en_X,
 000690   output logic [3:0]  alu_fn_X,
 000084   output logic        imul_resp_rdy_X,
          
 000080   output logic [1:0]  ex_result_sel_X,
        
 000786   output logic        reg_en_M,
 000478   output logic        wb_result_sel_M,
        
 000122   output logic        reg_en_W,
 000172   output logic [4:0]  rf_waddr_W,
 003538   output logic        rf_wen_W,
%000000   output logic        stats_en_wen_W,
        
          // status signals (dpath->ctrl)
        
 000038   input  logic [31:0] inst_D,
 000084   input  logic        imul_req_rdy_D,
 005050   input  logic        br_cond_eq_X,
 000878   input  logic        br_cond_lt_X,
 001162   input  logic        br_cond_ltu_X,
 000084   input  logic        imul_resp_val_X,
        
          // extra ports
        
 008163   output logic        commit_inst
        );
        
          //----------------------------------------------------------------------
          // Notes
          //----------------------------------------------------------------------
          // We follow this principle to organize code for each pipeline stage in
          // the control unit.  Register enable logics should always at the
          // beginning. It followed by pipeline registers. Then logic that is not
          // dependent on stall or squash signals. Then logic that is dependent
          // on stall or squash signals. At the end there should be signals meant
          // to be passed to the next stage in the pipeline.
        
          //----------------------------------------------------------------------
          // Valid, stall, and squash signals
          //----------------------------------------------------------------------
          // We use valid signal to indicate if the instruction is valid.  An
          // instruction can become invalid because of being squashed or
          // stalled. Notice that invalid instructions are microarchitectural
          // events, they are different from archtectural no-ops. We must be
          // careful about control signals that might change the state of the
          // processor. We should always AND outgoing control signals with valid
          // signal.
        
 000046   logic val_F;
 006789   logic val_D;
 007930   logic val_X;
 008100   logic val_M;
 008129   logic val_W;
        
          // Managing the stall and squash signals is one of the most important,
          // yet also one of the most complex, aspects of designing a pipelined
          // processor. We will carefully use four signals per stage to manage
          // stalling and squashing: ostall_A, osquash_A, stall_A, and squash_A.
          //
          // We denote the stall signals _originating_ from stage A as
          // ostall_A. For example, if stage A can stall due to a pipeline
          // harzard, then ostall_A would need to factor in the stalling
          // condition for this pipeline harzard.
        
 008552   logic ostall_F;  // can ostall due to imem_respstream_val
 001812   logic ostall_D;  // can ostall due to mngr2proc_val or other hazards
 000810   logic ostall_X;  // can ostall due to dmem_reqstream_rdy
 000714   logic ostall_M;  // can ostall due to dmem_respstream_val
 000122   logic ostall_W;  // can ostall due to proc2mngr_rdy
        
          // The stall_A signal should be used to indicate when stage A is indeed
          // stalling. stall_A will be a function of ostall_A and all the ostall
          // signals of stages in front of it in the pipeline.
        
 009264   logic stall_F;
 002514   logic stall_D;
 001040   logic stall_X;
 000786   logic stall_M;
 000122   logic stall_W;
        
          // We denote the squash signals _originating_ from stage A as
          // osquash_A. For example, if stage A needs to squash the stages behind
          // A in the pipeline, then osquash_A would need to factor in this
          // squash condition.
        
 000038   logic osquash_D; // can osquash due to unconditional jumps
 000296   logic osquash_X; // can osquash due to taken branches
        
          // The squash_A signal should be used to indicate when stage A is being
          // squashed. squash_A will _not_ be a function of osquash_A, since
          // osquash_A means to squash the stages _behind_ A in the pipeline, but
          // not to squash A itself.
        
 000320   logic squash_F;
 000246   logic squash_D;
        
          //----------------------------------------------------------------------
          // F stage
          //----------------------------------------------------------------------
        
          // Register enable logic
        
          assign reg_en_F = !stall_F || squash_F;
        
          // Pipeline registers
        
 016577   always_ff @( posedge clk ) begin
 000598     if ( reset )
 000598       val_F <= 1'b0;
 006099     else if ( reg_en_F )
 006099       val_F <= 1'b1;
          end
        
          // forward declaration for PC sel
        
 000296   logic       pc_redirect_X;
 000004   logic [1:0] pc_sel_X;
%000000   logic [1:0] pc_sel_D;
        
          // PC select logic
        
%000000   always_comb begin
 000148     if ( pc_redirect_X )   // If a branch is taken in X stage
 000148       pc_sel_F = pc_sel_X; // Use pc from X
 000021     else if (pc_redirect_D)
 000021       pc_sel_F = pc_sel_D;
            else // Use pc+4
 016408       pc_sel_F = 2'b0;
          end
        
          // ostall due to the imem response not valid.
        
          assign ostall_F = val_F && !imem_respstream_val;
        
          // stall and squash in F
        
          assign stall_F  = val_F && ( ostall_F  || ostall_D || ostall_X || ostall_M || ostall_W );
          assign squash_F = val_F && ( osquash_D || osquash_X );
        
          // We drop the mem response when we are getting squashed
        
          assign imem_respstream_drop = squash_F;
        
          // imem is very special. Actually imem requests are sent before the F
          // stage. Note that we need to factor in reset to the imem_reqstream_val
          // signal because we don't want to send out imem request when we are
          // resetting.
        
          assign imem_reqstream_val  = ( !stall_F || squash_F ) && !reset;
          assign imem_respstream_rdy = !stall_F || squash_F;
        
          // Valid signal for the next stage (stage D)
        
 009218   logic  next_val_F;
          assign next_val_F = val_F && !stall_F && !squash_F;
        
          //----------------------------------------------------------------------
          // D stage
          //----------------------------------------------------------------------
        
          // Register enable logic
        
          assign reg_en_D = !stall_D || squash_D;
          assign imul_req_val_D = is_mul_D && val_D & !stall_D & !squash_D;
        
          // Pipline registers
        
 016577   always_ff @( posedge clk ) begin
 000598     if ( reset )
 000598       val_D <= 1'b0;
 004797     else if ( reg_en_D )
 011182       val_D <= next_val_F;
          end
        
          // Parse instruction fields
        
 000182   logic   [4:0] inst_rd_D;
 000072   logic   [4:0] inst_rs1_D;
 000564   logic   [4:0] inst_rs2_D;
 000564   logic   [11:0] inst_csr_D;
        
          lab2_proc_tinyrv2_encoding_InstUnpack inst_unpack
          (
            .inst     (inst_D),
            .opcode   (),
            .rd       (inst_rd_D),
            .rs1      (inst_rs1_D),
            .rs2      (inst_rs2_D),
            .funct3   (),
            .funct7   (),
            .csr      (inst_csr_D)
          );
        
          // Generic Parameters -- yes or no
        
          localparam n = 1'd0;
          localparam y = 1'd1;
        
          // Register specifiers
        
          localparam rx = 5'bx;   // don't care
          localparam r0 = 5'd0;   // zero
          localparam rL = 5'd31;  // for jal
        
          // Branch type
        
          localparam br_x     = 3'bx; // Don't care
          localparam br_na    = 3'b0; // No branch
          localparam br_bne   = 3'b1; // bne
          localparam br_beq   = 3'd2; // beq
          localparam br_blt   = 3'd3; // blt
          localparam br_bge   = 3'd4; // bge
          localparam br_bltu  = 3'd5; // bltu
          localparam br_bgeu  = 3'd6; // bgeu
          
          
          // Operand 1 Mux Select
        
          localparam bm_x1    = 1'bx; // Don't care
          localparam bm_pc    = 1'd0; // Use PC
          localparam bm_rf1   = 1'd1; // Use data from register file
        
          // Operand 2 Mux Select
        
          localparam bm_x     = 2'bx; // Don't care
          localparam bm_rf    = 2'd0; // Use data from register file
          localparam bm_imm   = 2'd1; // Use sign-extended immediate
          localparam bm_csr   = 2'd2; // Use from mngr data
        
          // ALU Function
        
          localparam alu_x    = 4'bx;
          localparam alu_add  = 4'd0;
          localparam alu_sub  = 4'd1;
          localparam alu_and  = 4'd2;
          localparam alu_or   = 4'd3;
          localparam alu_xor  = 4'd4;
          localparam alu_slt  = 4'd5;
          localparam alu_sltu = 4'd6;
          localparam alu_sra  = 4'd7;
          localparam alu_srl  = 4'd8;
          localparam alu_sll  = 4'd9;
          localparam alu_jalr = 4'd10;
          localparam alu_cp0  = 4'd11;
          localparam alu_cp1  = 4'd12;
        
          // Immediate Type
          localparam imm_x    = 3'bx;
          localparam imm_i    = 3'd0;
          localparam imm_s    = 3'd1;
          localparam imm_b    = 3'd2;
          localparam imm_u    = 3'd3;
          localparam imm_j    = 3'd4;
        
          // X Result
        
          localparam res_x    = 2'dx; // No request
          localparam res_pc   = 2'd0; // PC
          localparam res_alu  = 2'd1; // ALU
          localparam res_imul = 2'd2;
          
          // Memory Request Type
        
          localparam nr       = 2'd0; // No request
          localparam ld       = 2'd1; // Load
          localparam st       = 2'd2; // Store
        
          // Writeback Mux Select
        
          localparam wm_x     = 1'bx; // Don't care
          localparam wm_a     = 1'b0; // Use ALU output
          localparam wm_m     = 1'b1; // Use data memory response
        
          // Instruction Decode
        
 006382   logic       inst_val_D;
 000006   logic [2:0] br_type_D;
 002662   logic       rs1_en_D;
 001336   logic       rs2_en_D;
 000690   logic [3:0] alu_fn_D;
 000450   logic [1:0] dmem_reqstream_type_D;
 000694   logic       wb_result_sel_D;
 002722   logic       rf_wen_D;
 000530   logic       csrr_D;
 000766   logic       csrw_D;
 000766   logic       proc2mngr_val_D;
 000530   logic       mngr2proc_rdy_D;
%000000   logic       stats_en_wen_D;
 000082   logic       is_mul_D;
        
        
 016577   task cs
          (
            input logic       cs_inst_val,
            input logic [2:0] cs_br_type,
            input logic [2:0] cs_imm_type,
            input logic       cs_op1_sel,
            input logic       cs_rs1_en,
            input logic [1:0] cs_op2_sel,
            input logic       cs_rs2_en,
            input logic [3:0] cs_alu_fn,
            input logic [1:0] ex_result_sel,
            input logic [1:0] cs_dmem_reqstream_type,
            input logic       cs_wb_result_sel,
            input logic       cs_rf_wen,
            input logic       cs_csrr,
            input logic       cs_csrw,
            input logic       cs_mul
          );
 016577   begin
 016577     inst_val_D            = cs_inst_val;
 016577     br_type_D             = cs_br_type;
 016577     imm_type_D            = cs_imm_type;
 016577     op1_sel_D             = cs_op1_sel;
 016577     rs1_en_D              = cs_rs1_en;
 016577     op2_sel_D             = cs_op2_sel;
 016577     rs2_en_D              = cs_rs2_en;
 016577     alu_fn_D              = cs_alu_fn;
 016577     ex_result_sel_D       = ex_result_sel;
 016577     dmem_reqstream_type_D = cs_dmem_reqstream_type;
 016577     wb_result_sel_D       = cs_wb_result_sel;
 016577     rf_wen_D              = cs_rf_wen;
 016577     csrr_D                = cs_csrr;
 016577     csrw_D                = cs_csrw;
 016577     is_mul_D              = cs_mul;
          end
          endtask
        
          // Control signals table  
%000000   always_comb begin
%000000     casez ( inst_D )
        
              //                            br      imm    op1    rs1 op2     rs2 alu      ex_result  dmm wbmux rf
              //                       val  type    type   muxsel en  muxsel  en  fn       sel        typ sel   wen csrr csrw   mul
 002761       `TINYRV2_INST_NOP     :cs( y, br_na,  imm_x, bm_rf1,n,  bm_x,   n,  alu_x,   res_alu,   nr, wm_a, n,  n,   n,     n   );
 000848       `TINYRV2_INST_ADD     :cs( y, br_na,  imm_x, bm_rf1,y,  bm_rf,  y,  alu_add, res_alu,   nr, wm_a, y,  n,   n,     n   );
 000893       `TINYRV2_INST_LW      :cs( y, br_na,  imm_i, bm_rf1,y,  bm_imm, n,  alu_add, res_alu,   ld, wm_m, y,  n,   n,     n   );
 000360       `TINYRV2_INST_BNE     :cs( y, br_bne, imm_b, bm_rf1,y,  bm_rf,  y,  alu_x,   res_alu,   nr, wm_a, n,  n,   n,     n   );
 002085       `TINYRV2_INST_CSRR    :cs( y, br_na,  imm_i, bm_rf1,n,  bm_csr, n,  alu_cp1, res_alu,   nr, wm_a, y,  y,   n,     n   );
 001055       `TINYRV2_INST_CSRW    :cs( y, br_na,  imm_i, bm_rf1,y,  bm_rf,  n,  alu_cp0, res_alu,   nr, wm_a, n,  n,   y,     n   );
        
              //''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''    
        
              // reg-reg    
        
 000100       `TINYRV2_INST_SUB     :cs( y, br_na,  imm_x, bm_rf1,y,  bm_rf,  y,  alu_sub, res_alu,   nr, wm_a, y,  n,   n,     n   );
 000107       `TINYRV2_INST_AND     :cs( y, br_na,  imm_x, bm_rf1,y,  bm_rf,  y,  alu_and, res_alu,   nr, wm_a, y,  n,   n,     n   );
 000106       `TINYRV2_INST_OR      :cs( y, br_na,  imm_x, bm_rf1,y,  bm_rf,  y,  alu_or,  res_alu,   nr, wm_a, y,  n,   n,     n   );
 000065       `TINYRV2_INST_XOR     :cs( y, br_na,  imm_x, bm_rf1,y,  bm_rf,  y,  alu_xor, res_alu,   nr, wm_a, y,  n,   n,     n   );
 000059       `TINYRV2_INST_SLT     :cs( y, br_na,  imm_x, bm_rf1,y,  bm_rf,  y,  alu_slt, res_alu,   nr, wm_a, y,  n,   n,     n   );
 000027       `TINYRV2_INST_SLTU    :cs( y, br_na,  imm_x, bm_rf1,y,  bm_rf,  y,  alu_sltu,res_alu,   nr, wm_a, y,  n,   n,     n   );
 000058       `TINYRV2_INST_SRA     :cs( y, br_na,  imm_x, bm_rf1,y,  bm_rf,  y,  alu_sra, res_alu,   nr, wm_a, y,  n,   n,     n   );
 000051       `TINYRV2_INST_SRL     :cs( y, br_na,  imm_x, bm_rf1,y,  bm_rf,  y,  alu_srl, res_alu,   nr, wm_a, y,  n,   n,     n   );
 000071       `TINYRV2_INST_SLL     :cs( y, br_na,  imm_x, bm_rf1,y,  bm_rf,  y,  alu_sll, res_alu,   nr, wm_a, y,  n,   n,     n   );
 000176       `TINYRV2_INST_MUL     :cs( y, br_na,  imm_x, bm_rf1,y,  bm_rf,  y,  alu_x,   res_imul,  nr, wm_a, y,  n,   n,     y   );
        
              // reg-imm 
        
 001055       `TINYRV2_INST_ADDI  :cs( y, br_na,  imm_i, bm_rf1,y,  bm_imm,  n, alu_add, res_alu,   nr, wm_a, y,  n,   n,     n   );
 000002       `TINYRV2_INST_ANDI  :cs( y, br_na,  imm_i, bm_rf1,y,  bm_imm,  n, alu_and, res_alu,   nr, wm_a, y,  n,   n,     n   );
 000053       `TINYRV2_INST_ORI   :cs( y, br_na,  imm_i, bm_rf1,y,  bm_imm,  n, alu_or,  res_alu,   nr, wm_a, y,  n,   n,     n   );
 000030       `TINYRV2_INST_XORI  :cs( y, br_na,  imm_i, bm_rf1,y,  bm_imm,  n, alu_xor, res_alu,   nr, wm_a, y,  n,   n,     n   );
 000030       `TINYRV2_INST_SLTI  :cs( y, br_na,  imm_i, bm_rf1,y,  bm_imm,  n, alu_slt, res_alu,   nr, wm_a, y,  n,   n,     n   );
 000030       `TINYRV2_INST_SLTIU :cs( y, br_na,  imm_i, bm_rf1,y,  bm_imm,  n, alu_sltu,res_alu,   nr, wm_a, y,  n,   n,     n   );
 000062       `TINYRV2_INST_SRAI  :cs( y, br_na,  imm_i, bm_rf1,y,  bm_imm,  n, alu_sra, res_alu,   nr, wm_a, y,  n,   n,     n   );
 000002       `TINYRV2_INST_SRLI  :cs( y, br_na,  imm_i, bm_rf1,y,  bm_imm,  n, alu_srl, res_alu,   nr, wm_a, y,  n,   n,     n   );
 000043       `TINYRV2_INST_SLLI  :cs( y, br_na,  imm_i, bm_rf1,y,  bm_imm,  n, alu_sll, res_alu,   nr, wm_a, y,  n,   n,     n   );
 000009       `TINYRV2_INST_LUI   :cs( y, br_na,  imm_u, bm_x1, n,  bm_imm,  n, alu_cp1, res_alu,   nr, wm_a, y,  n,   n,     n   );
 000009       `TINYRV2_INST_AUIPC :cs( y, br_na,  imm_u, bm_pc, n,  bm_imm,  n, alu_add, res_alu,   nr, wm_a, y,  n,   n,     n   );
              
              // mem 
              
 000801       `TINYRV2_INST_SW    :cs( y, br_na,  imm_s, bm_rf1,y,  bm_imm,  y, alu_add, res_alu,   st, wm_a, n,  n,   n,     n   );
              
              // jump 
              
 000031       `TINYRV2_INST_JAL   :cs( y, br_na,  imm_j, bm_x1, n,  bm_x,    n, alu_x,   res_pc,    nr, wm_a, y,  n,   n,     n   );
 000005       `TINYRV2_INST_JALR  :cs( y, br_na,  imm_i, bm_rf1,y,  bm_imm,  n, alu_jalr,res_pc,    nr, wm_a, y,  n,   n,     n   );
              
              // branch
              
 000001       `TINYRV2_INST_BEQ   :cs( y, br_beq, imm_b, bm_rf1,y,  bm_rf,  y,  alu_x,   res_alu,   nr, wm_a, n,  n,   n,     n   );
 000001       `TINYRV2_INST_BLT   :cs( y, br_blt, imm_b, bm_rf1,y,  bm_rf,  y,  alu_x,   res_alu,   nr, wm_a, n,  n,   n,     n   );
 000001       `TINYRV2_INST_BLTU  :cs( y, br_bltu,imm_b, bm_rf1,y,  bm_rf,  y,  alu_x,   res_alu,   nr, wm_a, n,  n,   n,     n   );
 000025       `TINYRV2_INST_BGE   :cs( y, br_bge, imm_b, bm_rf1,y,  bm_rf,  y,  alu_x,   res_alu,   nr, wm_a, n,  n,   n,     n   );
 000001       `TINYRV2_INST_BGEU  :cs( y, br_bgeu,imm_b, bm_rf1,y,  bm_rf,  y,  alu_x,   res_alu,   nr, wm_a, n,  n,   n,     n   );
              
              //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
        
 005564       default               :cs( n, br_x,   imm_x, bm_x1, n,  bm_x,    n, alu_x,   res_x,     nr, wm_x, n,  n,   n,     n   );
          
            endcase
          end // always_comb
        
 000182   logic [4:0] rf_waddr_D;
          assign rf_waddr_D = inst_rd_D;
        
          // csrr and csrw logic
        
%000000   always_comb begin
%000000     proc2mngr_val_D  = 1'b0;
%000000     mngr2proc_rdy_D  = 1'b0;
%000000     csrr_sel_D       = 2'h0;
%000000     stats_en_wen_D   = 1'b0;
        
 001055     if ( csrw_D && inst_csr_D == `TINYRV2_CPR_PROC2MNGR )
 001055       proc2mngr_val_D  = 1'b1;
 002085     if ( csrr_D && inst_csr_D == `TINYRV2_CPR_MNGR2PROC )
 002085       mngr2proc_rdy_D  = 1'b1;
 016577     if ( csrw_D && inst_csr_D == `TINYRV2_CPR_STATS_EN )
%000000       stats_en_wen_D   = 1'b1;
 016577     if ( csrr_D && inst_csr_D == `TINYRV2_CPR_NUMCORES )
%000000       csrr_sel_D       = 2'h1;
 016577     if ( csrr_D && inst_csr_D == `TINYRV2_CPR_COREID )
%000000       csrr_sel_D       = 2'h2;
          end
          
        // Jal case handler
 000036   logic pc_redirect_D;
%000000   always_comb begin
 000028   if  ( val_D&& ( imm_type_D == imm_j ) ) begin // = jal
 000028       pc_redirect_D = 1'b1;
 000028       pc_sel_D      = 2'b1; // jal target
            end
 016549     else begin
 016549       pc_redirect_D = 1'b0;
 016549       pc_sel_D      = 2'b0;
            end
        
          end
        
          // mngr2proc_rdy signal for csrr instruction
        
          assign mngr2proc_rdy = val_D && !stall_D && mngr2proc_rdy_D && !squash_D;
        
 000386   logic  ostall_mngr2proc_D;
          assign ostall_mngr2proc_D = val_D && mngr2proc_rdy_D && !mngr2proc_val;
        
          // ostall if write address in X matches rs1 in D
        
 000512   logic  ostall_waddr_X_rs1_D;
          assign ostall_waddr_X_rs1_D
            = rs1_en_D && val_X && rf_wen_X
              && ( inst_rs1_D == rf_waddr_X ) && ( rf_waddr_X != 5'd0 );
        
          // ostall if write address in M matches rs1 in D
        
 000760   logic  ostall_waddr_M_rs1_D;
          assign ostall_waddr_M_rs1_D
            = rs1_en_D && val_M && rf_wen_M
              && ( inst_rs1_D == rf_waddr_M ) && ( rf_waddr_M != 5'd0 );
        
          // ostall if write address in W matches rs1 in D
        
 000954   logic  ostall_waddr_W_rs1_D;
          assign ostall_waddr_W_rs1_D
            = rs1_en_D && val_W && rf_wen_W
              && ( inst_rs1_D == rf_waddr_W ) && ( rf_waddr_W != 5'd0 );
        
          // ostall if write address in X matches rs2 in D
        
 000550   logic  ostall_waddr_X_rs2_D;
          assign ostall_waddr_X_rs2_D
            = rs2_en_D && val_X && rf_wen_X
              && ( inst_rs2_D == rf_waddr_X ) && ( rf_waddr_X != 5'd0 );
        
          // ostall if write address in M matches rs2 in D
        
 000634   logic  ostall_waddr_M_rs2_D;
          assign ostall_waddr_M_rs2_D
            = rs2_en_D && val_M && rf_wen_M
              && ( inst_rs2_D == rf_waddr_M ) && ( rf_waddr_M != 5'd0 );
        
          // ostall if write address in W matches rs2 in D
        
 000658   logic  ostall_waddr_W_rs2_D;
          assign ostall_waddr_W_rs2_D
            = rs2_en_D && val_W && rf_wen_W
              && ( inst_rs2_D == rf_waddr_W ) && ( rf_waddr_W != 5'd0 );
        
          // Put together ostall signal due to hazards
        
 001428   logic  ostall_hazard_D;
          assign ostall_hazard_D =
              ostall_waddr_X_rs1_D || ostall_waddr_M_rs1_D || ostall_waddr_W_rs1_D ||
              ostall_waddr_X_rs2_D || ostall_waddr_M_rs2_D || ostall_waddr_W_rs2_D;
        
          // Final ostall signal
        
          assign ostall_D = val_D && ( ostall_mngr2proc_D || ostall_hazard_D || (!imul_req_rdy_D && is_mul_D));
        
          // osquash due to jump instruction in D stage 
        
          assign osquash_D = imm_type_D == imm_j;
        
          // stall and squash in D
        
          assign stall_D  = val_D && ( ostall_D || ostall_X || ostall_M || ostall_W);
          assign squash_D = val_D && osquash_X;
        
          // Valid signal for the next stage
        
 008435   logic  next_val_D;
          assign next_val_D = val_D && !stall_D && !squash_D;
        
          //----------------------------------------------------------------------
          // X stage
          //----------------------------------------------------------------------
        
          // Register enable logic
        
          assign reg_en_X = !stall_X;
        
 000038   logic [31:0] inst_X;
 000400   logic [1:0]  dmem_reqstream_type_X;
 000558   logic        wb_result_sel_X;
 002468   logic        rf_wen_X;
 000172   logic [4:0]  rf_waddr_X;
 000756   logic        proc2mngr_val_X;
%000000   logic        stats_en_wen_X;
 000006   logic [2:0]  br_type_X;
 000080   logic is_mul_X;
          assign imul_resp_rdy_X = is_mul_X && val_X & !stall_X & imul_resp_val_X;
          assign       dmem_reqstream_type =  (dmem_reqstream_type_X==st)? 2'd0: 2'd1;
        
          // Pipeline registers
        
 016577   always_ff @( posedge clk )
 000598     if ( reset ) begin
 000598       val_X                 <= 1'b0;
            end
 001492     else if ( reg_en_X ) begin
 014487       val_X                 <= next_val_D;
 014487       rf_wen_X              <= rf_wen_D;
 014487       inst_X                <= inst_D;
 014487       alu_fn_X              <= alu_fn_D;
 014487       ex_result_sel_X       <= ex_result_sel_D;
 014487       rf_waddr_X            <= rf_waddr_D;
 014487       proc2mngr_val_X       <= proc2mngr_val_D;
 014487       dmem_reqstream_type_X <= dmem_reqstream_type_D;
 014487       wb_result_sel_X       <= wb_result_sel_D;
 014487       stats_en_wen_X        <= stats_en_wen_D;
 014487       br_type_X             <= br_type_D;
 014487       is_mul_X              <= is_mul_D;
            end
        
          // branch logic, redirect PC in F if branch is taken
        
%000000   always_comb begin
 000142     if ( val_X && ( br_type_X == br_bne ) ) begin
 000142       pc_redirect_X = !br_cond_eq_X;
 000142       pc_sel_X      = 2'd2; // use branch target
            end
 000001     else if ( val_X && ( br_type_X == br_beq ) ) begin
 000001       pc_redirect_X = br_cond_eq_X;
 000001       pc_sel_X      = 2'd2; // use branch target
            end
 000001     else if ( val_X && ( br_type_X == br_blt ) ) begin
 000001       pc_redirect_X = br_cond_lt_X;
 000001       pc_sel_X      = 2'd2; // use branch target
            end
 000007     else if ( val_X && ( br_type_X == br_bge ) ) begin
 000007       pc_redirect_X = !br_cond_lt_X;
 000007       pc_sel_X      = 2'd2; // use branch target
            end
 000001     else if ( val_X && ( br_type_X == br_bltu ) ) begin
 000001       pc_redirect_X = br_cond_ltu_X;
 000001       pc_sel_X      = 2'd2; // use branch target
            end
 000001     else if ( val_X && ( br_type_X == br_bgeu ) ) begin
 000001       pc_redirect_X = !br_cond_ltu_X;
 000001       pc_sel_X      = 2'd2; // use branch target
            end
 000002     else if (val_X && alu_fn_X == alu_jalr) begin
 000002       pc_redirect_X = 1'd1;
 000002       pc_sel_X      = 2'd3; // use branch target jalr
            end
 016422     else begin
 016422       pc_redirect_X = 1'd0;
 016422       pc_sel_X      = 2'd0; // use pc+4
            end
          end
        
          // ostall due to dmem_reqstream not ready.
        
          assign ostall_X = val_X && ((( dmem_reqstream_type_X != nr ) && !dmem_reqstream_rdy) || (!imul_resp_val_X && is_mul_X));
        
          // osquash due to taken branch, notice we can't osquash if current
          // stage stalls, otherwise we will send osquash twice.
        
          assign osquash_X = val_X && !stall_X && pc_redirect_X;
        
          // stall and squash used in X stage
        
          assign stall_X = val_X && ( ostall_X || ostall_M || ostall_W);
        
          // set dmem_reqstream_val only if not stalling
        
          assign dmem_reqstream_val = val_X && !stall_X && ( dmem_reqstream_type_X != nr );
        
          // Valid signal for the next stage
        
 008382   logic  next_val_X;
          assign next_val_X = val_X && !stall_X;
        
          //----------------------------------------------------------------------
          // M stage
          //----------------------------------------------------------------------
        
          // Register enable logic
        
          assign reg_en_M  = !stall_M;
        
 000038   logic [31:0] inst_M;
 000382   logic [1:0]  dmem_reqstream_type_M;
 002342   logic        rf_wen_M;
 000172   logic [4:0]  rf_waddr_M;
 000754   logic        proc2mngr_val_M;
%000000   logic        stats_en_wen_M;
        
          // Pipeline register
        
 016577   always_ff @( posedge clk )
 000598     if ( reset ) begin
 000598       val_M                 <= 1'b0;
            end
 000591     else if ( reg_en_M ) begin
 015388       val_M                 <= next_val_X;
 015388       rf_wen_M              <= rf_wen_X;
 015388       inst_M                <= inst_X;
 015388       rf_waddr_M            <= rf_waddr_X;
 015388       proc2mngr_val_M       <= proc2mngr_val_X;
 015388       dmem_reqstream_type_M <= dmem_reqstream_type_X;
 015388       wb_result_sel_M       <= wb_result_sel_X;
 015388       stats_en_wen_M        <= stats_en_wen_X;
            end
        
          // ostall due to dmem_respstream not valid
        
          assign ostall_M = val_M && ( dmem_reqstream_type_M != nr ) && !dmem_respstream_val;
        
          // stall M
        
          assign stall_M = val_M && ( ostall_M || ostall_W );
        
          // Set dmem_respstream_rdy if valid and not stalling and this is a lw/sw
        
          assign dmem_respstream_rdy = val_M && !stall_M && ( dmem_reqstream_type_M != nr );
        
          // Valid signal for the next stage
        
 008242   logic  next_val_M;
          assign next_val_M = val_M && !stall_M;
        
          //----------------------------------------------------------------------
          // W stage
          //----------------------------------------------------------------------
        
          // Register enable logic
        
          assign reg_en_W = !stall_W;
        
 000038   logic [31:0] inst_W;
 000736   logic        proc2mngr_val_W;
 002342   logic        rf_wen_pending_W;
%000000   logic        stats_en_wen_pending_W;
        
          // Pipeline registers
        
 016577   always_ff @( posedge clk ) begin
 000598     if ( reset ) begin
 000598       val_W                  <= 1'b0;
            end
 000417     else if ( reg_en_W ) begin
 015562       val_W                  <= next_val_M;
 015562       rf_wen_pending_W       <= rf_wen_M;
 015562       inst_W                 <= inst_M;
 015562       rf_waddr_W             <= rf_waddr_M;
 015562       proc2mngr_val_W        <= proc2mngr_val_M;
 015562       stats_en_wen_pending_W <= stats_en_wen_M;
            end
          end
        
          // write enable
        
          assign rf_wen_W       = val_W && rf_wen_pending_W;
          assign stats_en_wen_W = val_W && stats_en_wen_pending_W;
        
          // ostall due to proc2mngr
        
          assign ostall_W = val_W && proc2mngr_val_W && !proc2mngr_rdy;
        
          // stall and squash signal used in W stage
        
          assign stall_W = val_W && ostall_W;
        
          // proc2mngr port
        
          assign proc2mngr_val = val_W && !stall_W && proc2mngr_val_W;
        
          assign commit_inst = val_W && !stall_W;
        
        endmodule
        
        `endif /* LAB2_PROC_PROC_BASE_CTRL_V */
        
