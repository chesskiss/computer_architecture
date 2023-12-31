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
  input  logic                   clk,
  input  logic                   reset,

  // Max delay input

  input  logic [31:0]            delay,

  // Sink message interface

  input  logic                   val,
  output logic                   rdy,
  input  logic [p_msg_nbits-1:0] msg,

  // Goes high once all sink data has been received

  output logic                   done
);

  //----------------------------------------------------------------------
  // Test fixed delay
  //----------------------------------------------------------------------

  logic                   sink_val;
  logic                   sink_rdy;
  logic [p_msg_nbits-1:0] sink_msg;

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
