`ifndef LAB3_CACHE_BASE_DPATH_V
`define LAB3_CACHE_BASE_DPATH_V

`include "vc/muxes.v"
`include "vc/mem-msgs.v"
`include "vc/arithmetic.v"
`include "vc/regs.v"
`include "vc/mux_16.v"
`include "vc/srams.v"

module CacheBaseDpath (
    input logic                         clk, 
    input logic                         reset,

    //inputs to wrapper module
    output logic                        memreq_rdy,             // cache ready to receive request from proc
    input mem_req_4B_t                  mem_req_msg,            // msg: proc -> cache
    input mem_resp_4B_t                 cache_resp_msg,         // msg: mem -> cache

    output mem_resp_4B_t                memresp_msg,            // msg: cache -> proc
    output mem_req_4B_t                 cache_req_msg,          // msg: cache -> mem

    //ctrl-dpath signals        
    input logic                         data_array_w_en,
    input logic                         data_array_r_en,
    input logic [dirty_size-1:0]        flush_counter,          // on flush we're going over all the dirty bites
    input logic                         data_array_write_mux_sel,
    input logic                         tag_array_w_en,
    input logic [3:0]                   received_mem_resp_num,  // number of responses from mem during refill (counter reaches 15 when line filled)

    //dpath-ctrl signals              
    output logic                        tag_array_match,
    output logic [2**index_bits-1:0]    dirty_bits,
    output logic [dirty_size-1:0]       dirty_bit,
    output logic                        read                    // 1 if it's a read inst
);

localparam tag_bits           = 21;             // # of tag bits
localparam block_size         = 64;             // in bytes
localparam index_bits         = 5;              // # index bits
localparam word_offset_bits   = 4;              // # word offset bits
localparam byte_offset_bits   = 2;              // # word offset bits
localparam dirty_size         = index_bits - 2; // we have 1 dirty bit for every 4 words

localparam word_size          = 32;
localparam num_bits_in_line   = 512;
localparam num_lines          = 32;
localparam words_in_line      = 2;

logic [tag_bits-1:0]          tag_value;
logic [index_bits-1:0]        index; 
logic [word_offset_bits-1:0]  w_offset; 
logic [byte_offset_bits-1:0]  b_offset;               // not being used

logic [4:0]                   shift_amount = received_mem_resp_num*4; // we'll use it only if refill from memory
logic [block_size-1:0]        one_hot_line_encodings = read ? 64'd15 << shift_amount : 64'd15 << w_offset; // if read we're in refill stage -> bring entire line from mem. If write only 1 word

logic [num_bits_in_line-1:0]  read_data_values;       //from data sram
logic [num_bits_in_line-1:0]  write_data_value;       //to data sram

logic [word_size-1:0]         data_array_val_32;      // output of data_array_write_mux
logic [tag_bits-1:0]          read_tag_data;          //tag output

logic [word_size-1:0]         data_from_mem;

assign dirty_bit  = index >> 2;                       // we need dirty bit only for 1 size

assign read = (cache_req_msg.type_ != `VC_MEM_REQ_MSG_TYPE_WRITE);

assign tag_array_match  = (read_tag_data == tag_value);  //Tag comparison

assign write_data_value = {16{data_array_val_32}};

/**************************
typedef struct packed {
  logic [2:0]  type_;
  logic [7:0]  opaque;
  logic [1:0]  test;
  logic [1:0]  len;
  logic [31:0] data;
} mem_resp_4B_t;

typedef struct packed {
  logic [2:0]  type_;
  logic [7:0]  opaque;
  logic [31:0] addr;
  logic [1:0]  len;
  logic [31:0] data;
} mem_req_4B_t;
**************************/
// decode proc. msg addr
assign tag_value          = cache_req_msg.addr[31:11];
assign index              = cache_req_msg.addr[10:6];
assign w_offset           = cache_req_msg.addr[5:2];
assign b_offset           = cache_req_msg.addr[1:0];

assign memresp_msg.type_  = cache_req_msg.type_;
assign memresp_msg.opaque = cache_req_msg.opaque;
assign memresp_msg.addr   = cache_req_msg.addr;
assign memresp_msg.len    = cache_req_msg.len;

vc_EnResetReg#(77) cache_req_addr_reg
  (
    .clk    (clk),
    .reset  (reset),
    .en     (memreq_rdy),         //receive cache req only if cache is ready
    .d      (mem_req_msg),        // msg from proc.
    .q      (cache_req_msg)       // output = write data from proc.
  );

vc_EnResetReg#(32) mem_resp_data_reg
  (
    .clk    (clk),
    .reset  (reset),
    .en     (cache_resp_rdy),     //receive mem response only if cache is ready
    .d      (cache_resp_msg.data),
    .q      (data_from_mem)       // output = memory from proc.
  );

vc_CombinationalBitSRAM_1rw #(21, 32) tag_array
(
    .clk           (clk),
    .reset         (reset),

    .read_en       (tag_array_en),
    .read_addr     (index),
    .read_data     (read_tag_data),

    .write_en      (tag_array_w_en),
    .write_addr    (index),
    .write_data    (tag_value)
);

// choose between memory (if read & refill) or data from proc. (if write)
vc_Mux2 #(32) data_array_write_mux
(
    .in0           (cache_req_msg.data),        //from proc. reg (on write)
    .in1           (cache_resp_msg.data),       //from memory
    .sel           (data_array_write_mux_sel),
    .out           (data_array_val_32)
);

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
    .write_data    (write_data_value)
);

// choosing final output
vc_Mux16 #(32) read_word_mux
  (
    .in0           (read_data_values[31:0]),
    .in1           (read_data_values[63:32]),
    .in2           (read_data_values[95:64]),
    .in3           (read_data_values[127:96]),
    .in4           (read_data_values[159:128]),
    .in5           (read_data_values[191:160]),
    .in6           (read_data_values[223:192]),
    .in7           (read_data_values[255:224]),
    .in8           (read_data_values[287:256]),
    .in9           (read_data_values[319:288]),
    .in10          (read_data_values[351:320]),
    .in11          (read_data_values[383:352]),
    .in12          (read_data_values[415:384]),
    .in13          (read_data_values[447:416]),
    .in14          (read_data_values[479:448]),
    .in15          (read_data_values[511:480]),
    .sel           (w_offset),
    .out           (memresp_msg.data)  //output message that goes back to proc.
  );

endmodule 

`endif /* LAB3_CACHE_BASE_DPATH_V */
