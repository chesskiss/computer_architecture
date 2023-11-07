//=========================================================================
// Cache Base Design
//=========================================================================

`ifndef LAB3_CACHE_CACHE_BASE_V
`define LAB3_CACHE_CACHE_BASE_V

`include "vc/mem-msgs.v"
`include "vc/srams.v"
`include "vc/regs.v"

module lab3_cache_CacheBase (
    input logic clk,
    input logic reset,


    // imem

    input  logic        memreq_val,
    output logic        memreq_rdy,
    input  mem_req_4B_t memreq_msg,

    output logic         memresp_val,
    input  logic         memresp_rdy,
    output mem_resp_4B_t memresp_msg,

    //cache
    output logic        cache_req_val,
    input  logic        cache_req_rdy,
    output mem_req_4B_t cache_req_msg,

    input  logic         cache_resp_val,
    output logic         cache_resp_rdy,
    input  mem_resp_4B_t cache_resp_msg,


    // flush
    input  logic flush,
    output logic flush_done

    // ctrl to data-path
    input  logic         reg_en_M0;
    input  logic         reg_en_M1;
);

  assign cache_req_val = memreq_val;
  assign memreq_rdy = cache_req_rdy;
  assign cache_req_msg = memreq_msg;

  assign memresp_val = cache_resp_val;
  assign cache_resp_rdy = memresp_rdy;
  assign memresp_msg = cache_resp_msg;

//--------------------------------------------------------------------
// M0 stage
//--------------------------------------------------------------------

  // TODO : Split input signals into cache_req_addr

  logic [31:0] cache_req_addr_M0;

  vc_EnResetReg #(32) cache_req_addr_reg_M0 (
      .clk       (clk),
      .reset     (reset),
      .en        (reg_en_M0),
      .d         (cache_req_addr),
      .q         (cache_req_addr_M0)
  );     

  vc_EnResetReg #(32) cache_req_data_reg_M0 (
      .clk       (clk),
      .reset     (reset),
      .en        (reg_en_M0),
      .d         (cache_req_addr),
      .q         (cache_req_addr_M0)
  );     

  vc_CombinationalBitSRAM_1rw #(32, 4) pc_incr_F
  (
      .clk       (clk),
      .reset     (reset),
      .read_en   (),
      .read_addr (),
      .read_data (), // output
      .write_en  (),
      .write_addr(),
      .write_data()
  );

  vc_Mux4 #(32) pc_sel_mux_F
  (
    .in0  (pc_plus4_F),
    .in1  (br_target_X),
    .in2  (jal_target_D),
    .in3  (jalr_target_X),
    .sel  (pc_sel_F),
    .out  (pc_next_F)
  );



//--------------------------------------------------------------------
// M1 stage
//--------------------------------------------------------------------




endmodule


`endif  /* LAB3_CACHE_CACHE_BASE_V */
