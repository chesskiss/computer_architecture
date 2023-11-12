//=========================================================================
// Cache Base Design
//=========================================================================

`ifndef LAB3_CACHE_CACHE_BASE_V
`define LAB3_CACHE_CACHE_BASE_V

`include "vc/mem-msgs.v"
`include "vc/regs.v"

module lab3_cache_CacheBase
(
  input  logic                    clk,
  input  logic                    reset,


  // imem

  input  logic                    memreq_val,
  output logic                    memreq_rdy,
  input  mem_req_4B_t             memreq_msg,

  output logic                    memresp_val,
  input  logic                    memresp_rdy,
  output mem_resp_4B_t            memresp_msg,

  //cache
  output  logic                    cache_req_val,
  input   logic                    cache_req_rdy,
  output  mem_req_4B_t             cache_req_msg,
 
  input  logic                     cache_resp_val,
  output logic                     cache_resp_rdy,
  input  mem_resp_4B_t             cache_resp_msg,


  // flush
  input logic                     flush,
  output logic                    flush_done
);

assign cache_req_val = memreq_val;
assign memreq_rdy = cache_req_rdy;
assign cache_req_msg = memreq_msg;

assign memresp_val = cache_resp_val;
assign cache_resp_rdy = memresp_rdy;
assign memresp_msg = cache_resp_msg;

localparam tag_bits = 21; //# of tag bits
localparam block_size = 64; //in bytes
localparam index_bits = 5; // # index bits
localparam offset_bits = 6; // # offset bits


localparam word_size = 32;
localparam num_lines = 32;
localparam words_in_line = 2;


/*

typedef struct packed {
  logic [2:0]  type_;
  logic [7:0]  opaque;
  logic [31:0] addr;
  logic [1:0]  len;
  logic [31:0] data;
} mem_req_4B_t;

*/



logic [tag_bits-1:0] tag_addr;
mem_req_4B_t memreq_msg_reg;

always_ff (@posedge clk) begin 
  if(reset) begin
    memreq_msg_reg <= 0;
  end
  else begin
    memreq_msg_reg <= memreq_msg;
  end
end

//Cache memory
logic [word_size-1:0] data_array [num_lines-1:0][words_in_line-1:0]




endmodule


`endif /* LAB3_CACHE_CACHE_BASE_V */
