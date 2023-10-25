//      // verilator_coverage annotation
        //========================================================================
        // tb_IntMul
        //========================================================================
        // A basic Verilog test bench for the multiplier
        
        `default_nettype none
        `timescale 1ps/1ps
        
        `ifndef DESIGN
          `define DESIGN IntMulBase
        `endif
        
        `include `"`DESIGN.v`"
        `include "vc/trace.v"
        
        //------------------------------------------------------------------------
        // Top-level module
        //------------------------------------------------------------------------
        
%000000 module top(  input logic clk, input logic linetrace );
        
          // DUT signals
 000003   logic        reset;
        
 018680   logic        istream_val;
 018680   logic        istream_rdy;
 000354   logic [63:0] istream_msg;
        
 018659   logic        ostream_rdy;
 018680   logic        ostream_val;
 003634   logic [31:0] ostream_msg;
        
          // Testbench signals
%000000   logic        istream_val_f;
%000000   logic        ostream_rdy_f;
        
 000354   logic [31:0] istream_msg_a;
 001317   logic [31:0] istream_msg_b;
        
          // Form istream_msg
%000000   always_comb begin
%000000     istream_msg[63:32] = istream_msg_a;
%000000     istream_msg[31: 0] = istream_msg_b;
          end
        
          //----------------------------------------------------------------------
          // Module instantiations
          //----------------------------------------------------------------------
          
          // Instantiate the multiplier
        
          lab1_imul_`DESIGN imul
          (
            .clk   (clk),
            .reset (reset),
            .istream_val(istream_val),
            .istream_rdy(istream_rdy),
            .istream_msg(istream_msg),
            .ostream_val   (ostream_val),
            .ostream_rdy   (ostream_rdy),
            .ostream_msg   (ostream_msg)
          );
        
          initial begin 
 177681     while(1) begin
 177681       @(negedge clk);  
 177681       if (linetrace) begin
%000000            imul.display_trace;
              end
            end 
            $stop;
           end
        
          //----------------------------------------------------------------------
          // Run the Test Bench
          //----------------------------------------------------------------------
        
          logic [31:0]  num [35]; 
        
          initial begin
        
            $display("Start of Testbench");
            // Send reset and init values of all signals
            reset         = 1;
            istream_msg_a = 0;
            istream_msg_b = 0;
            istream_val   = 0;
        
            // After a moment, de-assert reset
            #10 
            reset = 0;
        
            //--------------------------------------------------------------------
            // Test cases
            //--------------------------------------------------------------------
        
            // Align test bench with negedge so that it looks better
            #10
            @(negedge clk); 
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Test #1
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
        
            $display("Example Test #1");
        
            //Set inputs
            istream_msg_a = 32'd2;
            istream_msg_b = 32'd3;
            istream_val   =  1'b1;
%000000     ostream_rdy   =  1'b1;
        
%000000     while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
            @(negedge clk); // Move to next cycle.
%000000     
            istream_val = 1'b0; // Deassert ready input
 000001     if(!ostream_val) @(ostream_val);// Wait for response
            @(negedge clk); // read at low clk
            
            // Check the result
            assert ( 6 == ostream_msg) begin
              pass(); // Book keeping
              $display( "OK: in0 = %d, in1 = %d, out = %d", 
                        istream_msg_a, istream_msg_b, ostream_msg );
            end
            else begin
              fail(); // Book keeping
              $error( "Failed: in0 = %d, in1 = %d, out = %d", 
                      istream_msg_a, istream_msg_b, ostream_msg );
            end
           
            #10
            @(negedge clk);
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Test #2
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
        
            $display("Example Test #2");
            
            //Set inputs
            istream_msg_a = 32'd4;
            istream_msg_b = 32'd5;
            istream_val   =  1'b1;
%000000     ostream_rdy   =  1'b1;
        
%000000     while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
            @(negedge clk); // Move to next cycle.
            
            istream_val = 1'b0; // Deassert ready input
            if(!ostream_val) @(ostream_val);// Wait for response
            @(negedge clk); // read at low clk
            
            // Check the result
            assert ( 20 == ostream_msg) begin
              pass(); // Book keeping
              $display( "OK: in0 = %d, in1 = %d, out = %d", 
                        istream_msg_a, istream_msg_b, ostream_msg );
            end
            else begin
              fail(); // Book keeping
              $error( "Failed: in0 = %d, in1 = %d, out = %d", 
                      istream_msg_a, istream_msg_b, ostream_msg );
            end
           
            #10
            @(negedge clk);
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Test #3
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
        
            $display("Example Test #3");
        
            //Set inputs
            istream_msg_a = 32'd3;
            istream_msg_b = 32'd4;
            istream_val   =  1'b1;
%000000     ostream_rdy   =  1'b1;
            
%000000     while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
            @(negedge clk); // Move to next cycle.
            
            istream_val = 1'b0; // Deassert ready input
            if(!ostream_val) @(ostream_val);// Wait for response
            @(negedge clk); // read at low clk
            
            // Check the result
            assert ( 12 == ostream_msg) begin
              pass(); // Book keeping
              $display( "OK: in0 = %d, in1 = %d, out = %d", 
                        istream_msg_a, istream_msg_b, ostream_msg );
            end
            else begin
              fail(); // Book keeping
              $error( "Failed: in0 = %d, in1 = %d, out = %d", 
                      istream_msg_a, istream_msg_b, ostream_msg );
            end
           
            #10
            @(negedge clk);
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Test #4
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
        
            $display("Example Test #4");
        
            //Set inputs
            istream_msg_a = 32'd10;
            istream_msg_b = 32'd13;
            istream_val   =  1'b1;
%000000     ostream_rdy   =  1'b1;
            
%000000     while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
            @(negedge clk); // Move to next cycle.
            
            istream_val = 1'b0; // Deassert ready input
            if(!ostream_val) @(ostream_val);// Wait for response
            @(negedge clk); // read at low clk
            
            // Check the result
            assert ( 130 == ostream_msg) begin
              pass(); // Book keeping
              $display( "OK: in0 = %d, in1 = %d, out = %d", 
                        istream_msg_a, istream_msg_b, ostream_msg );
            end
            else begin
              fail(); // Book keeping
              $error( "Failed: in0 = %d, in1 = %d, out = %d", 
                      istream_msg_a, istream_msg_b, ostream_msg );
            end
           
            #10
            @(negedge clk);
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Test #5
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
        
            $display("Example Test #5");
            
            // We can simplify Testbench with tasks (declared below)
            test_task(8,7);
        
            #10;
            
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Test case 0
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
        
 000040     $display("Small numbers");
 000040     
 000080     for( integer x = -20; x < 20; x++ ) begin
 000080 	    for( integer y = -20; y < 20; y++ ) begin
 003200 		test_task(x, y);
        	    end
            end
        
            #10;
        
            
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Test case 1
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
        
        	$display("Large numbers");
        
        	// Big numbers
        	num[0] = 2147483648; // = 2^31
        	num[1] = 2147483649; // = 0x7FFF FFFF
        	num[2] = 1073741823; // = 0X3FFF FFFF
        	num[3] = 2147450878; // = 0x7FFF 7FFE
        	num[4] = 4294901760; // = 0xFFFF 0000
        	num[5] = 4294934527; // = 0xFFFF 7FFF
        	num[6] = 4096; // = 0x0000 1000
        	num[7] = 268435456; // = 0x1000 0000
        	num[8] = 268439553; // = 0x1000 1001
        	num[9] = -2147483648;
        	num[10] =-2147483647;
        	num[11] =-1073741823;
        	num[12] =-2147450878;
        	num[13] =-4294901760;
        	num[14] =-4294934527 ;
        	num[15] =-4096;
        	num[16] = -268435456;
        	num[17] = -268439553;
        	// Shifting byte of ones
        	num[18] = 255; 
        	num[19] = 65280;
        	num[20] = 16711680;
        	num[21] = 2139095040;
        	// Shifting byte of zeros
        	num[22] = -256;
        	num[23] = -65281;  
        	num[24] = -16711681;
        	num[25] = -2139095041;
        	// Alternating 1's and 0's = 0x55...5 , 0xAA...A
        	num[26] = 1431655765;
        	num[27] = 2863311530;
        	num[28] = 0;
        	num[29] = 1;
        	num[30] = 2;
        	num[31] = 3;
        	num[32] = -1;
        	num[33] = -2;
        	num[34] = -3;
 000035 
 000035 	for( integer x = 0; x < 35; x++ ) begin
 000035 	      test_task(num[x], $random );
 000035 	      for( integer y = 0; y < 35; y++ ) begin
 001225 		      test_task(num[x], num[y] );
 000331 		if( $random < 1000000000 ) begin
 000894 			#50;
        		end
 000322 		if( $random > 1000000000 ) begin
 000322 			#10;
        		end
        	    end
        	end
 000100 
 000100 	#10;
        
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Test Case 2
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            
            #10;
            @(negedge clk);
            $display("small negative numbers x small positive numbers");
 000020     for( integer x = 0; x < 20; x++ ) begin
 000020       test_task( -$urandom_range(32768, 0), $urandom_range(32767, 0) );
            end
            
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Test Case 3
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            
            #10;
            @(negedge clk);
            $display("small positive numbers x small negative numbers");
 000020     for( integer x = 0; x < 20; x++ ) begin
 000020       test_task( $urandom_range(32767, 0), -$urandom_range(32768, 0) );
            end
            
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Test Case 4
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            
            #10;
            @(negedge clk);
            $display("small negative numbers x small negative numbers");
 000020     for( integer x = 0; x < 20; x++ ) begin
%000000       test_task( -$urandom_range(32768, 0), -$urandom_range(32768, 0) );
            end
            
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Test Case 5
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
%000000     
            #10;
            @(negedge clk);
            $display("large positive numbers x large positive numbers");
 000020     for( integer x = 0; x < 20; x++ ) begin
 000020       test_task( $urandom_range(2147483647, 32767), $urandom_range(2147483647, 32767) );
            end
            
            
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Test Case 6
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            
            #10;
            @(negedge clk);
            $display("large positive numbers x large negative numbers");
 000020     for( integer x = 0; x < 20; x++ ) begin
 000020       test_task( $urandom_range(2147483647, 32767), -$urandom_range(2147483648, 32768) );
            end
            
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Test Case 7
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            
            #10;
            @(negedge clk);
            $display("large negative numbers x large positive numbers");
 000020     for( integer x = 0; x < 20; x++ ) begin
 000020       test_task( -$urandom_range(2147483648, 32768), $urandom_range(2147483647, 32767) );
            end
            
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Test Case 8
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            
            #10;
            @(negedge clk);
            $display("large negative numbers x large negative numbers");
 000020     for( integer x = 0; x < 20; x++ ) begin
 000020       test_task( -$urandom_range(2147483648, 32768), -$urandom_range(2147483648, 32768) );
            end
            
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Test Case 9
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            
            #10;
            @(negedge clk);
            $display("multiplying numbers with the low order bits masked off");
 000020     for( integer x = 0; x < 20; x++ ) begin
 000020       test_task( ($random & 32'b11111111111111110000000000000000), ($random & 32'b11111111111111110000000000000000) );
            end
            
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Test Case 10
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            
            #10;
            @(negedge clk);
            $display("multiplying numbers with middle bits masked off");
 000020     for( integer x = 0; x < 20; x++ ) begin
 000020       test_task( ($random & 32'b11111111000000000000000011111111), ($random & 32'b11111111000000000000000011111111) );
            end
            
            
        
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            // Random Tests
            //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            
            $display("Random Test");
 000500     for( integer x = 0; x < 500; x++ ) begin
 000500       test_task( $random, $random );
            end
        
            // Finish the testbench
            
            @(negedge clk);
            $display("Testbench finished at %d cycles", ($time()-10)/2 );
            
            // Delay for a better waveform
            #10;
            $finish;
        
          end
        
          //--------------------------------------------------------------------
          // test_task definition
          //--------------------------------------------------------------------
          // Here is a tasks that test the DUT when given 2 numbers a and b 
          //
          // Notice that the functionality is identical to the examples above
        
          task test_task( [31:0] a,  [31:0] b );
          begin
        
            // Change inputs at the negedge
            @(negedge clk);
        
            // Set inputs
            istream_msg_a = a;
            istream_msg_b = b;
            istream_val   = 1'b1;
            ostream_rdy   = 1'b0;
        
%000000     while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
            @(negedge clk); // Move to next cycle.
            
            istream_val = 1'b0; // No more ready input
            ostream_rdy = 1'b1; // Ready for output
        
 003541     if(!ostream_val) @(ostream_val);// Wait for response
            
            // Check the result
            assert ( (a * b) == ostream_msg) begin
              pass(); // Book keeping
              $display( "OK: in0 = %d, in1 = %d, out = %d", a, b, ostream_msg );
            end
            else begin
              fail(); // Book keeping
              $error( "Failed: in0 = %d, in1 = %d, out = %d", a, b, ostream_msg );
            end
        
            @(negedge clk);
          end
          endtask
        endmodule
        
