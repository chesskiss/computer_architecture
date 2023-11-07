//      // verilator_coverage annotation
        //========================================================================
        // Verilog Components: Registers
        //========================================================================
        
        // Note that we place the register output earlier in the port list since
        // this is one place we might actually want to use positional port
        // binding like this:
        //
        //  logic [p_nbits-1:0] result_B;
        //  vc_Reg#(p_nbits) result_AB( clk, result_B, result_A );
        
        `ifndef VC_REGS_V
        `define VC_REGS_V
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop
        //------------------------------------------------------------------------
        
        module vc_Reg
        #(
          parameter p_nbits = 1
        )(
 066400   input  logic               clk, // Clock input
 000764   output logic [p_nbits-1:0] q,   // Data output
 000764   input  logic [p_nbits-1:0] d    // Data input
        );
        
 033154   always_ff @( posedge clk )
 033154     q <= d;
        
        endmodule
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop with reset
        //------------------------------------------------------------------------
        
        module vc_ResetReg
        #(
          parameter p_nbits       = 1,
          parameter p_reset_value = 0
        )(
 099600   input  logic               clk,   // Clock input
 000138   input  logic               reset, // Sync reset input
 005685   output logic [p_nbits-1:0] q,     // Data output
 005703   input  logic [p_nbits-1:0] d      // Data input
        );
        
 049731   always_ff @( posedge clk )
 049731     q <= reset ? p_reset_value : d;
        
        endmodule
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop with enable
        //------------------------------------------------------------------------
        
        module vc_EnReg
        #(
          parameter p_nbits = 1
        )(
 061514   input  logic               clk,   // Clock input
 000046   input  logic               reset, // Sync reset input
 000416   output logic [p_nbits-1:0] q,     // Data output
 000844   input  logic [p_nbits-1:0] d,     // Data input
 000504   input  logic               en     // Enable input
        );
        
 030734   always_ff @( posedge clk )
 000252     if ( en )
 000252       q <= d;
        
          // Assertions
        
          `ifndef SYNTHESIS
        
          /*
          always_ff @( posedge clk )
            if ( !reset )
              `VC_ASSERT_NOT_X( en );
          */
        
          `endif /* SYNTHESIS */
        
        endmodule
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop with enable and reset
        //------------------------------------------------------------------------
        
        module vc_EnResetReg
        #(
          parameter p_nbits       = 1,
          parameter p_reset_value = 0
        )(
 033200   input  logic               clk,   // Clock input
 000046   input  logic               reset, // Sync reset input
 000004   output logic [p_nbits-1:0] q,     // Data output
 000004   input  logic [p_nbits-1:0] d,     // Data input
 002408   input  logic               en     // Enable input
        );
        
 016577   always_ff @( posedge clk )
 003604     if ( reset || en )
 003604       q <= reset ? p_reset_value : d;
        
          // Assertions
        
          `ifndef SYNTHESIS
        
          /*
          always_ff @( posedge clk )
            if ( !reset )
              `VC_ASSERT_NOT_X( en );
          */
        
          `endif /* SYNTHESIS */
        
        endmodule
        
        `endif /* VC_REGS_V */
        
        
