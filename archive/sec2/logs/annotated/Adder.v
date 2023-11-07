//      // verilator_coverage annotation
        //========================================================================
        // Latency-Insensitive Adder Implementation
        //========================================================================
        
        `ifndef SEC02_ADDER_V
        `define SEC02_ADDER_V
        
        `include "vc/trace.v"
        
        module sec02_Adder
        (
 000357   input  logic        clk,
 000003   input  logic        reset,
        
 000006   input  logic        istream_val,
%000000   output logic        istream_rdy,
%000000   input  logic [63:0] istream_msg,
        
 000006   output logic        ostream_val,
 000006   input  logic        ostream_rdy,
%000000   output logic [31:0] ostream_msg
        );
        
          // Split apart our operands
%000000   logic [31:0] a;
%000000   logic [31:0] b;
        
          assign a = istream_msg[31: 0];
          assign b = istream_msg[63:32];
        
          //----------------------------------------------------------------------
          // Control Logic
          //----------------------------------------------------------------------
        
 000006   logic istream_send;
 000006   logic ostream_send;
        
          assign istream_send = ( istream_val & istream_rdy );
          assign ostream_send = ( ostream_val & ostream_rdy );
        
 000006   logic val_reg;
        
 000177   always_ff @( posedge clk ) begin
 000012     if     ( reset        ) val_reg <= 0;
 000009     else if( istream_send ) val_reg <= 1; // New transaction
 000003     else if( ostream_send ) val_reg <= 0; // Remove old transaction
          end
        
          assign ostream_val = val_reg;
        
          // Ready whenever we aren't valid, or are passing on the old message
          assign istream_rdy = ( ostream_send | !val_reg );
        
          //----------------------------------------------------------------------
          // Datapath Logic
          //----------------------------------------------------------------------
        
%000000   logic [31:0] a_reg;
%000000   logic [31:0] b_reg;
        
 000177   always_ff @( posedge clk ) begin
 000012     if( reset ) begin
 000012       a_reg <= 32'b0;
 000012       b_reg <= 32'b0;
            end
        
 000009     else if( istream_send ) begin
 000009       a_reg <= a;
 000009       b_reg <= b;
            end
          end
        
          // Calculate the sum
          assign ostream_msg = a_reg + b_reg;
        
          //----------------------------------------------------------------------
          // Line Tracing
          //----------------------------------------------------------------------
        
          `ifndef SYNTHESIS
        
          logic [`VC_TRACE_NBITS-1:0] str;
          `VC_TRACE_BEGIN
          begin
        
            $sformat( str, "%x", istream_msg );
            vc_trace.append_val_rdy_str( trace_str, istream_val, istream_rdy, str );
        
            vc_trace.append_str( trace_str, " ( " );
        
            if( val_reg ) begin
              $sformat( str, "%x", a_reg );
              vc_trace.append_str( trace_str, str );
        
              vc_trace.append_str( trace_str, " + " );
        
              $sformat( str, "%x", b_reg );
              vc_trace.append_str( trace_str, str );
        
              vc_trace.append_str( trace_str, " = " );
        
              $sformat( str, "%x", ostream_msg );
              vc_trace.append_str( trace_str, str );
        
            end
        
            else begin
              vc_trace.append_str( trace_str, "                              ") ;
            end
        
            vc_trace.append_str( trace_str, " ) " );
        
            $sformat( str, "%x", ostream_msg );
            vc_trace.append_val_rdy_str( trace_str, ostream_val, ostream_rdy, str );
        
          end
          `VC_TRACE_END
        
          `endif /* SYNTHESIS */
          
        endmodule
        
        `endif /* SEC02_ADDER_V */
        
