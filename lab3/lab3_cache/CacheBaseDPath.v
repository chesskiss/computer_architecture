`include "vc/muxes.v"
`include "vc/mem-msgs.v"
`include "vc/arithmetic.v"
`include "vc/regs.v"
`include "mux_16.v"
`include "vc/srams.v"

module cacheBaseDpath (
    input logic clk, 
    input logic reset,
    
    //inputs to wrapper module
    input mem_req_4B_t mem_req_msg,
    input mem_resp_4B_t cache_resp_msg,

    output mem_resp_4B_t memresp_msg,
    output mem_req_4B_t cache_req_msg, 




    //ctrl signals
    input logic memreq_en,
    input logic flush,

    input logic cache_mem_en, 
    input logic data_array_w_en,
    input logic data_array_r_en,

    input logic [4:0] line_counter,
    input logic d_array_write_mux_sel,


        
    output logic tarray_match,
    output logic [31:0] dirty_bits,
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


//Dirty Bits
logic [31:0] dirty_bits;

always_ff @(posedge clk) begin
    if(reset) begin
        dirty_bits <= 32'd0;
    end
    else begin 
        if (memreq_msg_reg.type_ == `VC_MEM_REQ_MSG_TYPE_WRITE) begin
            if (dirty) begin
            dirty_bits[index] <= 0;
            end else begin
            dirty_bits[index] <= 1;
            end
        end
    end
end




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
mem_resp_4B_t cache_resp_msg_reg;




always_ff (@posedge clk) begin 
  if(reset) begin
    memreq_msg_reg <= 0;
    mem_resp_msg_reg <= 0;
  end
  else begin
    memreq_msg_reg <= memreq_msg;
    cache_resp_msg_reg <= cache_resp_msg_reg;
  end
end



assign tag_addr = memreq_msg_reg.addr[31:11];
assign index = memreq_msg_reg.addr[10:6];
assign w_offset = memreq_msg_reg.addr[5:2];
assign b_offset = memreq_msg_reg.addr[1:0];

logic [63:0] one_hot_line_encodings; 
logic [511:0] read_data_value;
logic [511:0] write_data_value;




//Data array
vc_CombinationalSRAM_1rw #(512, 32) data_array
(
    .clk           (clk),
    .reset         (reset),

    .read_en       (data_array_r_en),
    .read_addr     (index),
    .read_data     (read_data_values),

    .write_en      (data_array_w_en),
    .write_byte_en (one_hot_line_encodings),
    .write_addr    (index),
    .write_data    (darray_write)
);




endmodule 