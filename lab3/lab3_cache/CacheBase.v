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
  input  logic                     flush,

  // ctrl-dpath
  input  logic                     tarray_en,

  // dbath-ctrl
  output [offset_bit-1:0] offset = memreq_msg.data[offset_bit+1:2],
  output [index_bits-1:0] idx = memreq_msg.data[index_bits+offset_bit+1:offset_bit+2],
  output logic                     flush_done,
  output logic                     tarray_match    
);

assign cache_req_val = memreq_val;
assign memreq_rdy = cache_req_rdy;
assign cache_req_msg = memreq_msg;

assign memresp_val = cache_resp_val;
assign cache_resp_rdy = memresp_rdy;
assign memresp_msg = cache_resp_msg;

localparam tag_bits = 21; //# of tag bits
localparam block_size = 64*8; //in bits
localparam index_bits = 5; // # index bits
localparam offset_bits = 4; // # offset bits


localparam line_size = 512; //size in bits
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

//--------------------------------------------------------------------
// M0 stage
//--------------------------------------------------------------------
logic dirty_bits[num_lines];

mem_req_4B_t memreq_msg_reg;
//Cache memory
logic [line_size-1:0]  data_array [num_lines-1:0][words_in_line-1:0];

assign offset = memreq_msg.data[offset_bit+1:2];
assign idx = memreq_msg.data[index_bits+offset_bit+1:offset_bit+2];

always_ff (@posedge clk) begin 
  if(reset) begin
    memreq_msg_reg <= 0;
  end
  else begin
    memreq_msg_reg <= memreq_msg;
  end
end

//Cache memory
logic [line_size-1:0] data_array [num_lines-1:0][words_in_line-1:0]

//--------------------------------------------------------------------
// M1 stage
//--------------------------------------------------------------------



endmodule


`endif /* LAB3_CACHE_CACHE_BASE_V */
