//      // verilator_coverage annotation
        //========================================================================
        // Verilog Components: Test Sink with Fixed Delays
        //========================================================================
        
        `ifndef VC_TEST_FIXED_DELAY_SINK_V
        `define VC_TEST_FIXED_DELAY_SINK_V
        
        `include "vc/TestSink.v"
        `include "vc/TestFixedDelay.v"
        
        module vc_TestFixedDelaySink
        #(
          parameter p_msg_nbits = 1,
          parameter p_num_msgs  = 1024
        )(
 000119   input  logic                   clk,
 000001   input  logic                   reset,
        
          // Max delay input
        
%000000   input  logic [31:0]            delay,
        
          // Sink message interface
        
 000002   input  logic                   val,
 000002   output logic                   rdy,
%000000   input  logic [p_msg_nbits-1:0] msg,
        
          // Goes high once all sink data has been received
        
 000001   output logic                   done
        );
        
          //----------------------------------------------------------------------
          // Test fixed delay
          //----------------------------------------------------------------------
        
 000002   logic                   sink_val;
 000002   logic                   sink_rdy;
%000000   logic [p_msg_nbits-1:0] sink_msg;
        
          vc_TestFixedDelay#(p_msg_nbits) msg_delay
          (
            .clk       (clk),
            .reset     (reset),
        
            .delay     (delay),
        
            .in_val    (val),
            .in_rdy    (rdy),
            .in_msg    (msg),
        
            .out_val   (sink_val),
            .out_rdy   (sink_rdy),
            .out_msg   (sink_msg)
          );
        
          //----------------------------------------------------------------------
          // Test sink
          //----------------------------------------------------------------------
        
          vc_TestSink#(p_msg_nbits,p_num_msgs) sink
          (
            .clk        (clk),
            .reset      (reset),
        
            .val        (sink_val),
            .rdy        (sink_rdy),
            .msg        (sink_msg),
        
            .done       (done)
          );
        
        endmodule
        
        `endif /* VC_TEST_FIXED_DELAY_SINK */
        
