//      // verilator_coverage annotation
        //========================================================================
        // tb_Adder
        //========================================================================
        // A Verilog test bench for our latency-insensitive adder
        
        `default_nettype none
        `timescale 1ps/1ps
        
        `ifndef DESIGN
          `define DESIGN Adder
        `endif
        
        `include `"`DESIGN.v`"
        `include "vc/trace.v"
        `include "vc/TestRandDelaySource.v"
        `include "vc/TestRandDelaySink.v"
        
        //------------------------------------------------------------------------
        // Testbench defines
        //------------------------------------------------------------------------
        
        localparam NUM_TESTS = 3;
        
        localparam  INPUT_TEST_SIZE = 64;
        localparam OUTPUT_TEST_SIZE = 32;
        
        //------------------------------------------------------------------------
        // Top-level module
        //------------------------------------------------------------------------
        
%000000 module top(  input logic clk, input logic linetrace );
          
          // DUT signals
 000001   logic        reset;
        
 000002   logic        istream_val;
%000000   logic        istream_rdy;
%000000   logic [63:0] istream_msg;
        
 000002   logic        ostream_rdy;
 000002   logic        ostream_val;
%000000   logic [31:0] ostream_msg;
        
          // Source and sink messages
        
%000000   logic [  INPUT_TEST_SIZE-1:0 ] src_msgs [ NUM_TESTS-1:0 ];
%000000   logic [ OUTPUT_TEST_SIZE-1:0 ] snk_msgs [ NUM_TESTS-1:0 ];
        
          // Signals to indicate completion
        
 000001   logic src_done;
 000001   logic snk_done;
        
          //----------------------------------------------------------------------
          // Module instantiations
          //----------------------------------------------------------------------
        
          //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
          // Test source
          //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
        
          vc_TestSource 
          #(
            .p_msg_nbits ( INPUT_TEST_SIZE ),
            .p_num_msgs  (       NUM_TESTS )
          ) src (
            .clk         (             clk ),
            .reset       (           reset ),
        
            .val         (     istream_val ),
            .rdy         (     istream_rdy ),
            .msg         (     istream_msg ),
        
            .done        (        src_done )
          );
        
          assign src.m = src_msgs;
          
          //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
          // DUT
          //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
          
          sec02_`DESIGN dut
          (
            .clk         (       clk   ),
            .reset       (       reset ),
        
            // Input stream
        
            .istream_val ( istream_val ),
            .istream_rdy ( istream_rdy ),
            .istream_msg ( istream_msg ),
        
            // Output stream
        
            .ostream_val ( ostream_val ),
            .ostream_rdy ( ostream_rdy ),
            .ostream_msg ( ostream_msg )
          );
        
          initial begin 
 000060     while( 1 ) begin
 000060       @( negedge clk );  
 000060       if( linetrace ) dut.display_trace;
            end 
            $stop;
           end
        
          //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
          // Test sink
          //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
        
          vc_TestSink
          #(
            .p_msg_nbits ( OUTPUT_TEST_SIZE ),
            .p_num_msgs  (        NUM_TESTS ),
            .p_sim_mode  (                1 )
          ) sink (
            .clk         (              clk ),
            .reset       (            reset ),
        
            .val         (      ostream_val ),
            .rdy         (      ostream_rdy ),
            .msg         (      ostream_msg ),
        
            .done        (         snk_done )
          );
        
          assign sink.m = snk_msgs;
        
          //----------------------------------------------------------------------
          // Task for adding test cases
          //----------------------------------------------------------------------
        
%000000   task test_case(
            input logic [  INPUT_TEST_SIZE-1:0 ] src_msg,
            input logic [ OUTPUT_TEST_SIZE-1:0 ] snk_msg
          );
%000000   begin
%000000     integer idx = 0;
        
            // Add messages to test arrays
%000000     src_msgs[ idx ] = src_msg;
%000000     snk_msgs[ idx ] = snk_msg;
        
%000000     idx = idx + 1;
          end
          endtask
        
          //----------------------------------------------------------------------
          // Test cases
          //----------------------------------------------------------------------
          // Don't forget to change NUM_TESTS above when adding new tests!
        
%000000   logic [31:0] rand_msg1;
%000000   logic [31:0] rand_msg2;
        
%000000   initial begin
        
            // Test cases
        
%000000     test_case( { 32'd1, 32'd1 },  32'd2 );
%000000     test_case( { 32'd2, 32'd2 },  32'd4 );
%000000     test_case( { 32'd4, 32'd5 },  32'd9 );
        
          end
        
          //----------------------------------------------------------------------
          // Run the Test Bench
          //----------------------------------------------------------------------
        
 000001   initial begin
        
 000001     $display( "Starting tb_Adder..." );
 000001     reset = 1;
            
            // Wait a bit, then de-assert reset on negedge
 000001     #10 
 000001     @( negedge clk );
 000001     reset = 0;
        
            // Wait for the test to finish
 000005     while( !snk_done ) @( negedge clk );
        
            // Check that the source is also done
 000001     if( !src_done )
              $error( "[ FAILED ] Our sink received more messages than our source has!" );
            else
 000001       $display( "The testbench has finished" );
        
            // Delay for a bit for a better waveform
 000001     #100
 000001     $finish;
          end
        
          //----------------------------------------------------------------------
          // Timeout
          //----------------------------------------------------------------------
          // This is to ensure that our test eventually finishes, even if the sink
          // isn't receiving messages
        
          initial begin
 000060     for( integer i = 0; i < 1000000; i = i + 1 ) begin
 000060       @( negedge clk );
            end
        
            $error( "TIMEOUT: Testbench didn't finish in time" );
            $finish;
          end
        
        endmodule
        
