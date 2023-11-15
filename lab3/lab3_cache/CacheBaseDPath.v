`ifndef LAB3_CACHE_BASE_DPATH_V
`define LAB3_CACHE_BASE_DPATH_V

`include "vc/muxes.v"
`include "vc/mem-msgs.v"
`include "vc/arithmetic.v"
`include "vc/regs.v"
`include "mux_16.v"
`include "vc/srams.v"
`include 

module CacheBaseDpath (
    input logic                   clk, 
    input logic                   reset,

    //inputs to wrapper module
    input mem_req_4B_t            mem_req_msg,
    input mem_resp_4B_t           cache_resp_msg,

    output mem_resp_4B_t          memresp_msg,
    output mem_req_4B_t           cache_req_msg, 

    //ctrl-dpath signals        
    input logic                   memreq_en,
    input logic                   flush,

    input logic                   cache_mem_en, 
    input logic                   data_array_w_en,
    input logic                   data_array_r_en,

    input logic [dirty_size-1:0]  flush_counter, // on flush we're going over all the dirty bites
    input logic                   data_array_write_mux_sel,

    input logic                   tag_array_w_en,

    //dpath-ctrl signals        
    output logic                  tag_array_match,
    output logic [7:0]            dirty_bits,
    output logic [dirty_size-1:0] dirty_bit,
    output logic                  read,
    output logic [2:0]            cache_req_type
);

localparam tag_bits           = 21; //# of tag bits
localparam block_size         = 64; //in bytes
localparam index_bits         = 5; // # index bits
localparam word_offset_bits   = 4; // # word offset bits
localparam byte_offset_bits   = 2; // # word offset bits
localparam dirty_size         = index_bits - 2; // we have 1 dirty bit for every 4 words

localparam word_size          = 32;
localparam num_lines          = 32;
localparam words_in_line      = 2;

logic [tag_bits-1:0]         tag_val;
logic [index_bits-1:0]       index; 
logic [word_offset_bits:0]   w_offset; 
logic [byte_offset_bits-1:0] b_offset; 

logic [4:0]                  shift_amount = flush_counter*4;
logic [63:0]                 one_hot_line_encodings = 64'd15 << shift_amount; 
              
logic [511:0]                read_data_value;
logic [511:0]                write_data_value;
              
logic [31:0]                 data_array_val_32;
logic [511:0]                data_array_write_value

assign read = (memreq_msg_reg.type_ != `VC_MEM_REQ_MSG_TYPE_WRITE)

// on write add a dirty bit
always_ff @(posedge clk) begin
    if(reset) begin
        dirty_bits <= 8'd0;
    end 
    else if (!read) begin
        dirty_bits[dirty_bit] <= 1;
    end
end


/* 
typedef struct packed {
  logic [2:0]  type_;
  logic [7:0]  opaque;
  logic [31:0] addr;
  logic [1:0]  len;
  logic [31:0] data;
} mem_req_4B_t;
*/

mem_req_4B_t  memreq_msg_reg;
mem_resp_4B_t cache_resp_msg_reg;

always_ff (@posedge clk) begin 
  if(reset) begin
    memreq_msg_reg     <= 0;
    mem_resp_msg_reg   <= 0;
  end
  else begin
    memreq_msg_reg     <= memreq_msg;
    cache_resp_msg_reg <= cache_resp_msg_reg;
  end
end

assign tag_addr   = memreq_msg_reg.addr[31:11];
assign index      = memreq_msg_reg.addr[10:6];
assign w_offset   = memreq_msg_reg.addr[5:2];
assign b_offset   = memreq_msg_reg.addr[1:0];

assign dirty_bit  = index >> 2; // we need dirty bit only for 1 size

logic [tag_bits-1:0] read_tag_data;

vc_CombinationalBitSRAM_1rw #(21, 32) tag_array
(
    .clk           (clk),
    .reset         (reset),

    .read_en       (tag_array_en),
    .read_addr     (index),
    .read_data     (read_tag_data),

    .write_en      (tag_array_w_en),
    .write_addr    (index),
    .write_data    (tag_val)
);


//Tag comparison
assign tag_array_match = (read_tag_data == tag_val);;

vc_Mux2 #(32) data_array_write_mux
(
    .in0           (memreq_msg_reg.data),
    .in1           (cache_resp_msg_reg.data),
    .sel           (data_array_write_mux_sel),
    .out           (data_array_val_32)
);


assign data_array_write_value = {16{data_array_val_32}};

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
    .write_data    (data_array_write_value)
);


  vc_Mux16 #(32) read_word_mux
  (
    .in0           (read_data_data[31:0]),
    .in1           (read_data_data[63:32]),
    .in2           (read_data_data[95:64]),
    .in3           (read_data_data[127:96]),
    .in4           (read_data_data[159:128]),
    .in5           (read_data_data[191:160]),
    .in6           (read_data_data[223:192]),
    .in7           (read_data_data[255:224]),
    .in8           (read_data_data[287:256]),
    .in9           (read_data_data[319:288]),
    .in10          (read_data_data[351:320]),
    .in11          (read_data_data[383:352]),
    .in12          (read_data_data[415:384]),
    .in13          (read_data_data[447:416]),
    .in14          (read_data_data[479:448]),
    .in15          (read_data_data[511:480]),
    .sel           (w_offset),
    .out           (read_word)
  );


// assign cache_req_msg.addr
assign cache_req_msg.len = cache_resp_msg.len;
assign cache_req_msg.data = read_word;

assign memresp_msg.type_ = memreq_msg.type;
assign memresp_msg.opaque = memreq_msg.opaque;

assign memresp_msg.len = memreq_msg.len;
assign memresp_msg.data = read_word;

endmodule 

`endif /* LAB3_CACHE_BASE_DPATH_V */
