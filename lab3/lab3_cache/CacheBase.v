//=========================================================================
// Cache Base Design
//=========================================================================

`ifndef LAB3_CACHE_CACHE_BASE_V
`define LAB3_CACHE_CACHE_BASE_V

`include "vc/mem-msgs.v"
`include "vc/regs.v"
`include "CacheBaseDPath.v"
`include "CacheBaseCtrl.v"

module lab3_cache_CacheBase
(
  input  logic                    clk,
  input  logic                    reset,


  // imem
  input  logic                    memreq_val, // proc. is making a request to the cache.
  output logic                    memreq_rdy, // cache ready to receive request from proc
  input  mem_req_4B_t             memreq_msg, // msg: proc -> cache

  output logic                    memresp_val, // cache gave a valid response to proc.
  input  logic                    memresp_rdy, // proc. ready to receive response from cache.
  output mem_resp_4B_t            memresp_msg, // msg: cache -> proc

  //cache
  output  logic                    cache_req_val, // cache wants to make a request to mem
  input   logic                    cache_req_rdy, // mem is ready to receive requests
  output  mem_req_4B_t             cache_req_msg, // msg: cache -> mem
 
  input  logic                     cache_resp_val, // mem gave a valid response to cache
  output logic                     cache_resp_rdy, // cache is ready to receive response from memory.
  input  mem_resp_4B_t             cache_resp_msg, // msg: mem -> cache

  // flush
  input  logic                     flush,
  output logic                     flush_done
);

//todo rewrite memory access in processor and copy mem access to here and change names ? Wait for Ed

assign cache_req_val = memreq_val;
assign memreq_rdy = cache_req_rdy;
assign cache_req_msg = memreq_msg;

assign memresp_val = cache_resp_val;
assign cache_resp_rdy = memresp_rdy;
assign memresp_msg = cache_resp_msg;
// todo replace these assign signals


// todo - fix and add dpath
  lab3_cache_CacheBaseCtrl ctrl
  (
    // Instruction Memory Port

    .imem_reqstream_val       (imem_reqstream_enq_val),
    .imem_reqstream_rdy       (imem_reqstream_enq_rdy),
    .imem_respstream_val      (imem_respstream_drop_val),
    .imem_respstream_rdy      (imem_respstream_drop_rdy),

    // Data Memory Port

    .dmem_reqstream_val       (dmem_reqstream_enq_val),
    .dmem_reqstream_rdy       (dmem_reqstream_rdy),
    .dmem_respstream_val      (dmem_respstream_val),
    .dmem_respstream_rdy      (dmem_respstream_rdy),
    .dmem_reqstream_type      (dmem_reqstream_type_enq),

    .*
  );



endmodule


`endif /* LAB3_CACHE_CACHE_BASE_V */
