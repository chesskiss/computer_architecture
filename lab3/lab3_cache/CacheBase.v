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

// assign cache_req_val = memreq_val;
// assign memreq_rdy = cache_req_rdy;
// assign cache_req_msg = memreq_msg;

// assign memresp_val = cache_resp_val;
// assign cache_resp_rdy = memresp_rdy;
// assign memresp_msg = cache_resp_msg;
// todo replace these assign signals

localparam index_bits         = 5;
localparam dirty_size         = 5;

  // Internal signals
  logic memreq_en, data_array_w_en, data_array_r_en;
  // logic [dirty_size-1:0] flush_counter;
  logic data_array_write_mux_sel, tag_array_w_en, tag_array_r_en;
  logic [4:0] received_mem_resp_num;
  logic tag_array_match;
  logic [index_bits-1:0] index;
  logic read;

 

// todo - fix and add dpath
    CacheBaseCtrl cache_ctrl (
        .clk                      (clk),
        .reset                    (reset),
        .flush                    (flush),
        .flush_done               (flush_done),

        .memreq_val               (memreq_val),
        .memreq_rdy               (memreq_rdy),
        .memresp_val              (memresp_val),
        .memresp_rdy              (memresp_rdy),
        .cache_req_val            (cache_req_val),
        .cache_req_rdy            (cache_req_rdy),
        .cache_resp_val           (cache_resp_val),
        .cache_resp_rdy           (cache_resp_rdy),
        
        .memreq_en                (memreq_en),
        .data_array_w_en          (data_array_w_en),
        .data_array_r_en          (data_array_r_en),

        //.flush_counter            (flush_counter),
        .data_array_write_mux_sel (data_array_write_mux_sel),
        .tag_array_w_en           (tag_array_w_en),
        .tag_array_r_en           (tag_array_r_en),
        .received_mem_resp_num    (received_mem_resp_num),

        .tag_array_match          (tag_array_match),
        .index                    (index),
        .read                     (read)
    );

    CacheBaseDpath cache_base_dpath(
        .clk                      (clk),
        .reset                    (reset),
        .memreq_rdy               (memreq_rdy),
        .cache_resp_rdy           (cache_resp_rdy),
        .mem_req_msg              (memreq_msg),
        .cache_resp_msg           (cache_resp_msg),
        .memresp_msg              (memresp_msg),
        .cache_req_msg            (cache_req_msg),
        .data_array_w_en          (data_array_w_en),
        .data_array_r_en          (data_array_r_en),
        .data_array_write_mux_sel (data_array_write_mux_sel),
        .tag_array_w_en           (tag_array_w_en),
        .received_mem_resp_num    (received_mem_resp_num),
        .tag_array_match          (tag_array_match),
        .index                    (index),
        .read                     (read)
    );


endmodule


`endif /* LAB3_CACHE_CACHE_BASE_V */

