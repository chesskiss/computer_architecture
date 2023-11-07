//      // verilator_coverage annotation
        //========================================================================
        // Verilog Components: Drop Unit
        //========================================================================
        // Drop unit allows dropping a packet when the drop signal is high. This
        // is useful especially in pipelined processor, when a squash should drop
        // a late arriving memory response.
        
        `ifndef LAB2_PROC_DROP_UNIT_V
        `define LAB2_PROC_DROP_UNIT_V
        
        module lab2_proc_DropUnit
        #(
          parameter p_msg_nbits = 1
        )
        (
 033200   input  logic                   clk,
 000046   input  logic                   reset,
        
          // the drop signal will drop the next arriving packet
        
 000320   input  logic                   drop,
        
 001438   input  logic [p_msg_nbits-1:0] istream_msg,
 008642   input  logic                   istream_val,
 009204   output logic                   istream_rdy,
        
 001438   output logic [p_msg_nbits-1:0] ostream_msg,
 008506   output logic                   ostream_val,
 009286   input  logic                   ostream_rdy
        );
        
          localparam c_state_pass = 1'b0;
          localparam c_state_drop = 1'b1;
        
 000210   logic state;
 000210   logic next_state;
 009354   logic istream_go;
        
          assign istream_go = istream_rdy && istream_val;
        
          // assign output message same as input message
        
          assign ostream_msg = istream_msg;
        
          // next state
        
%000000   always_comb begin
 000144     if ( state == c_state_pass ) begin
        
              // we only go to drop state if there is a drop request and we cannot
              // drop it right away (!istream_en)
 000315       if ( drop && !istream_go )
 000315         next_state = c_state_drop;
              else
 049076         next_state = c_state_pass;
        
 000144     end else begin
        
              // if we are in the drop mode and a message arrives, we can go back
              // to pass state
 000117       if ( istream_go )
 000315         next_state = c_state_pass;
              else
 000117         next_state = c_state_drop;
        
            end
          end
        
          // state outputs
        
%000000   always_comb begin
 000144     if ( state == c_state_pass ) begin
        
              // we combinationally take care of dropping if the packet is already
              // available
 016433       ostream_val = istream_val && !drop;
 016433       istream_rdy  = ostream_rdy;
        
 000144     end else begin
        
              // we just drop the packet
 000144       ostream_val = 1'b0;
 000144       istream_rdy  = 1'b1;
        
            end
          end
        
          // state transitions
        
 016577   always_ff @( posedge clk ) begin
        
 000598     if ( reset )
 000598       state <= c_state_pass;
            else
 015979       state <= next_state;
        
          end
        
        endmodule
        
        `endif /* LAB2_PROC_DROP_UNIT_V */
        
        
