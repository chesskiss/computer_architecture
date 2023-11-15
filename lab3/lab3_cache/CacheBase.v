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
  input  logic                    memreq_val, // proc. is making a request to the cache.
  output logic                    memreq_rdy, // cache ready to receive request from proc
  input  mem_req_4B_t             memreq_msg,

  output logic                    memresp_val, // cache gave a valid response to proc.
  input  logic                    memresp_rdy, // proc. ready to receive response from cache.
  output mem_resp_4B_t            memresp_msg,

  //cache
  output  logic                    cache_req_val, // cache wants to make a request to mem
  input   logic                    cache_req_rdy, // mem is ready to receive requests
  output  mem_req_4B_t             cache_req_msg,
 
  input  logic                     cache_resp_val, // mem gave a valid response to cache
  output logic                     cache_resp_rdy, // cache is ready to receive response from memory.
  input  mem_resp_4B_t             cache_resp_msg,

  // flush
  input  logic                     flush,
  output logic                     flush_done
);

assign cache_req_val = memreq_val;
assign memreq_rdy = cache_req_rdy;
assign cache_req_msg = memreq_msg;

assign memresp_val = cache_resp_val;
assign cache_resp_rdy = memresp_rdy;
assign memresp_msg = cache_resp_msg;



endmodule


`endif /* LAB3_CACHE_CACHE_BASE_V */
