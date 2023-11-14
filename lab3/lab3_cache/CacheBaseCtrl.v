`include "vc/regs.v"

module CacheBaseCtrl (
    // Common system signals
    input logic clk,
    input logic reset,

    // Outputs to the cacheBaseDpath module (inputs of cacheBaseDpath)
    output mem_req_4B_t mem_req_msg,
    output mem_resp_4B_t cache_resp_msg,

    // Inputs from the cacheBaseDpath module (outputs of cacheBaseDpath)
    input mem_resp_4B_t memresp_msg,
    input mem_req_4B_t cache_req_msg,

    // Outputs of ctrl signals (inputs of cacheBaseDpath)
    output logic memreq_en,
    output logic flush,
    output logic cache_mem_en, 
    output logic data_array_w_en,
    output logic data_array_r_en,
    output logic [4:0] byte_counter,
    output logic data_array_write_mux_sel,
    output logic tag_array_w_en,

    // Inputs of ctrl signals (outputs of cacheBaseDpath)
    input logic tag_array_match,
    input logic [31:0] dirty_bits,
    input logic [2:0] cache_req_type
);




endmodule