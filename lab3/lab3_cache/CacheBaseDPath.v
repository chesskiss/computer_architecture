`include "vc/muxes.v"
`include "vc/mem-msgs.v"
`include "vc/arithmetic.v"
`include "vc/regs.v"
`include "mux_16.v"
`include "vc/srams.v"

module cacheBaseDpath (
    input logic clk, 
    input logic reset,
    
    input mem_req_4B_t mem_req_msg,
    input mem_resp_4B_t cache_resp_msg,

    output mem_resp_4B_t memresp_msg,
    output mem_req_4B_t cache_resp_msg, 




    //ctrl signals
    input logic memreq_en,
    input logic flush,

    input logic cache_mem_en, 
    input logic d_array_en,
    

    input logic [4:0] line_counter,
    input logic d_array_write_mux_sel,

        
    output logic tarray_match,
    output logic line_dirty,
    output logic [2:0] cache_req_type
);

localparam tag_bits = 21; //# of tag bits
localparam block_size = 64; //in bytes
localparam index_bits = 5; // # index bits
localparam word_offset_bits = 4; // # word offset bits
localparam byte_offset_bits = 2; // # word offset bits


localparam word_size = 32;
localparam num_lines = 32;
localparam words_in_line = 2;




logic [tag_bits-1:0] tag_addr;
logic [index_bits-1:0] index; 
logic [word_offset_bits:0] w_offset; 
logic [byte_offset_bits-1:0] b_offset; 


/*

typedef struct packed {
  logic [2:0]  type_;
  logic [7:0]  opaque;
  logic [31:0] addr;
  logic [1:0]  len;
  logic [31:0] data;
} mem_req_4B_t;

*/

mem_req_4B_t memreq_msg_reg;

always_ff (@posedge clk) begin 
  if(reset) begin
    memreq_msg_reg <= 0;
  end
  else begin
    memreq_msg_reg <= memreq_msg;
  end
end

assign tag_addr = memreq_msg_reg.addr[31:11];
assign index = memreq_msg_reg.addr[10:6];
assign w_offset = memreq_msg_reg.addr[5:2];
assign b_offset = memreq_msg_reg.addr[1:0];




//Cache memory
logic [word_size-1:0] data_array [num_lines-1:0][words_in_line-1:0]lab2_proc_DropUnit





always 



endmodule 