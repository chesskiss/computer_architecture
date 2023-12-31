//      // verilator_coverage annotation
        //========================================================================
        // Verilog Components: Register Files
        //========================================================================
        
        `ifndef VC_REGFILES_V
        `define VC_REGFILES_V
        
        //------------------------------------------------------------------------
        // 1r1w register file
        //------------------------------------------------------------------------
        
        module vc_Regfile_1r1w
        #(
          parameter p_data_nbits  = 1,
          parameter p_num_entries = 2,
        
          // Local constants not meant to be set from outside the module
          parameter c_addr_nbits  = $clog2(p_num_entries)
        )(
 033200   input  logic                    clk,
 000046   input  logic                    reset,
        
          // Read port (combinational read)
        
 002827   input  logic [c_addr_nbits-1:0] read_addr,
%000000   output logic [p_data_nbits-1:0] read_data,
        
          // Write port (sampled on the rising clock edge)
        
 005493   input  logic                    write_en,
 002836   input  logic [c_addr_nbits-1:0] write_addr,
%000000   input  logic [p_data_nbits-1:0] write_data
        );
        
%000000   logic [p_data_nbits-1:0] rfile[p_num_entries-1:0];
        
          // Combinational read
        
          assign read_data = rfile[read_addr];
        
          // Write on positive clock edge
        
 016577   always_ff @( posedge clk )
 002836     if ( write_en )
 002836       rfile[write_addr] <= write_data;
        
          // Assertions
        
          /*
          always_ff @( posedge clk ) begin
            if ( !reset ) begin
              `VC_ASSERT_NOT_X( write_en );
        
              // If write_en is one, then write address better be less than the
              // number of entries and definitely cannot be X's.
        
              if ( write_en ) begin
                `VC_ASSERT_NOT_X( write_addr );
                `VC_ASSERT( write_addr < p_num_entries );
              end
        
            end
          end
          */
        
        endmodule
        
        //------------------------------------------------------------------------
        // 1r1w register file with reset
        //------------------------------------------------------------------------
        
        module vc_ResetRegfile_1r1w
        #(
          parameter p_data_nbits  = 1,
          parameter p_num_entries = 2,
          parameter p_reset_value = 0,
        
          // Local constants not meant to be set from outside the module
          parameter c_addr_nbits  = $clog2(p_num_entries)
        )(
          input  logic                    clk,
          input  logic                    reset,
        
          // Read port (combinational read)
        
          input  logic [c_addr_nbits-1:0] read_addr,
          output logic [p_data_nbits-1:0] read_data,
        
          // Write port (sampled on the rising clock edge)
        
          input  logic                    write_en,
          input  logic [c_addr_nbits-1:0] write_addr,
          input  logic [p_data_nbits-1:0] write_data
        );
        
          logic [p_data_nbits-1:0] rfile[p_num_entries-1:0];
        
          // Combinational read
        
          assign read_data = rfile[read_addr];
        
          // Write on positive clock edge. We have to use a generate statement to
          // allow us to include the reset logic for each individual register.
        
          genvar i;
          generate
            for ( i = 0; i < p_num_entries; i = i+1 )
            begin : wport
              always_ff @( posedge clk )
                if ( reset )
                  rfile[i] <= p_reset_value;
                else if ( write_en && (i[c_addr_nbits-1:0] == write_addr) )
                  rfile[i] <= write_data;
            end
          endgenerate
        
          // Assertions
        
          /*
          always_ff @( posedge clk ) begin
            if ( !reset ) begin
              `VC_ASSERT_NOT_X( write_en );
        
              // If write_en is one, then write address better be less than the
              // number of entries and definitely cannot be X's.
        
              if ( write_en ) begin
                `VC_ASSERT_NOT_X( write_addr );
                `VC_ASSERT( write_addr < p_num_entries );
              end
        
            end
          end
          */
        
        endmodule
        
        //------------------------------------------------------------------------
        // 2r1w register file
        //------------------------------------------------------------------------
        
        module vc_Regfile_2r1w
        #(
          parameter p_data_nbits  = 1,
          parameter p_num_entries = 2,
        
          // Local constants not meant to be set from outside the module
          parameter c_addr_nbits  = $clog2(p_num_entries)
        )(
 033200   input  logic                   clk,
 000046   input  logic                   reset,
        
          // Read port 0 (combinational read)
        
 000072   input  logic [c_addr_nbits-1:0] read_addr0,
 000242   output logic [p_data_nbits-1:0] read_data0,
        
          // Read port 1 (combinational read)
        
 000564   input  logic [c_addr_nbits-1:0] read_addr1,
 000100   output logic [p_data_nbits-1:0] read_data1,
        
          // Write port (sampled on the rising clock edge)
        
 003538   input  logic                    write_en,
 000172   input  logic [c_addr_nbits-1:0] write_addr,
 000362   input  logic [p_data_nbits-1:0] write_data
        );
        
          logic [p_data_nbits-1:0] rfile[p_num_entries-1:0];
        
          // Combinational read
        
          assign read_data0 = rfile[read_addr0];
          assign read_data1 = rfile[read_addr1];
        
          // Write on positive clock edge
        
 016577   always_ff @( posedge clk )
 002061     if ( write_en )
 002061       rfile[write_addr] <= write_data;
        
          // Assertions
        
          /*
          always_ff @( posedge clk ) begin
            if ( !reset ) begin
              `VC_ASSERT_NOT_X( write_en );
        
              // If write_en is one, then write address better be less than the
              // number of entries and definitely cannot be X's.
        
              if ( write_en ) begin
                `VC_ASSERT_NOT_X( write_addr );
                `VC_ASSERT( write_addr < p_num_entries );
              end
        
            end
          end
          */
        
        endmodule
        
        //------------------------------------------------------------------------
        // 2r2w register file
        //------------------------------------------------------------------------
        
        module vc_Regfile_2r2w
        #(
          parameter p_data_nbits  = 1,
          parameter p_num_entries = 2,
        
          // Local constants not meant to be set from outside the module
          parameter c_addr_nbits  = $clog2(p_num_entries)
        )(
          input  logic                    clk,
          input  logic                    reset,
        
          // Read port 0 (combinational read)
        
          input  logic [c_addr_nbits-1:0] read_addr0,
          output logic [p_data_nbits-1:0] read_data0,
        
          // Read port 1 (combinational read)
        
          input  logic [c_addr_nbits-1:0] read_addr1,
          output logic [p_data_nbits-1:0] read_data1,
        
          // Write port (sampled on the rising clock edge)
        
          input  logic                    write_en0,
          input  logic [c_addr_nbits-1:0] write_addr0,
          input  logic [p_data_nbits-1:0] write_data0,
        
          // Write port (sampled on the rising clock edge)
        
          input  logic                    write_en1,
          input  logic [c_addr_nbits-1:0] write_addr1,
          input  logic [p_data_nbits-1:0] write_data1
        );
        
          logic [p_data_nbits-1:0] rfile[p_num_entries-1:0];
        
          // Combinational read
        
          assign read_data0 = rfile[read_addr0];
          assign read_data1 = rfile[read_addr1];
        
          // Write on positive clock edge
        
          always_ff @( posedge clk ) begin
        
            if ( write_en0 )
              rfile[write_addr0] <= write_data0;
        
            if ( write_en1 )
              rfile[write_addr1] <= write_data1;
        
          end
        
          // Assertions
        
          /*
          always_ff @( posedge clk ) begin
            if ( !reset ) begin
              `VC_ASSERT_NOT_X( write_en0 );
              `VC_ASSERT_NOT_X( write_en1 );
        
              // If write_en is one, then write address better be less than the
              // number of entries and definitely cannot be X's.
        
              if ( write_en0 ) begin
                `VC_ASSERT_NOT_X( write_addr0 );
                `VC_ASSERT( write_addr0 < p_num_entries );
              end
        
              if ( write_en1 ) begin
                `VC_ASSERT_NOT_X( write_addr1 );
                `VC_ASSERT( write_addr1 < p_num_entries );
              end
        
              // It is invalid to use the same write address for both write ports
        
              if ( write_en0 && write_en1 ) begin
                `VC_ASSERT( write_addr0 != write_addr1 );
              end
        
            end
          end
          */
        
        endmodule
        
        //------------------------------------------------------------------------
        // Register file specialized for r0 == 0
        //------------------------------------------------------------------------
        
        module vc_Regfile_2r1w_zero
        (
 033200   input  logic        clk,
 000046   input  logic        reset,
        
 000072   input  logic  [4:0] rd_addr0,
 000242   output logic [31:0] rd_data0,
        
 000564   input  logic  [4:0] rd_addr1,
 000100   output logic [31:0] rd_data1,
        
 003538   input  logic        wr_en,
 000172   input  logic  [4:0] wr_addr,
 000362   input  logic [31:0] wr_data
        );
        
          // these wires are to be hooked up to the actual register file read
          // ports
        
 000242   logic [31:0] rf_read_data0;
 000100   logic [31:0] rf_read_data1;
        
          vc_Regfile_2r1w
          #(
            .p_data_nbits  (32),
            .p_num_entries (32)
          )
          rfile
          (
            .clk         (clk),
            .reset       (reset),
            .read_addr0  (rd_addr0),
            .read_data0  (rf_read_data0),
            .read_addr1  (rd_addr1),
            .read_data1  (rf_read_data1),
            .write_en    (wr_en),
            .write_addr  (wr_addr),
            .write_data  (wr_data)
          );
        
          // we pick 0 value when either read address is 0
          assign rd_data0 = ( rd_addr0 == 5'd0 ) ? 32'd0 : rf_read_data0;
          assign rd_data1 = ( rd_addr1 == 5'd0 ) ? 32'd0 : rf_read_data1;
        
        endmodule
        
        `endif /* VC_REGFILES_V */
        
        
