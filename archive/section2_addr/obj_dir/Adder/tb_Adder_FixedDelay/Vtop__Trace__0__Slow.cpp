// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+331,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+332,"linetrace",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+331,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+332,"linetrace",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+333,"reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+284,"istream_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+285,"istream_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+324,"istream_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBit(c+286,"ostream_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+287,"ostream_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+288,"ostream_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+10+i*2,"src_msgs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 63,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+16+i*1,"snk_msgs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBit(c+289,"src_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+290,"snk_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+335,"rand_msg1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+336,"rand_msg2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+331,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+333,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+284,"istream_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"istream_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+324,"istream_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+287,"ostream_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+286,"ostream_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+288,"ostream_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+326,"a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+327,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+291,"istream_send",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+292,"ostream_send",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+287,"val_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+293,"a_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+294,"b_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declArray(c+21,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+149,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+150,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("vc_trace ");
    tracep->declBit(c+331,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+333,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+151,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+152,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+153,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+154,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+337,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+338,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+155,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+283,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+295,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+19,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sink ");
    tracep->declBus(c+339,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+340,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+331,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+333,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+341,"delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+287,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+286,"rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+288,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+290,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+296,"sink_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+297,"sink_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+298,"sink_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("msg_delay ");
    tracep->declBus(c+339,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+331,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+333,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+341,"delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+287,"in_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+286,"in_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+288,"in_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+296,"out_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+297,"out_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+298,"out_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+341,"rand_num",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+299,"rand_delay_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+300,"rand_delay_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,"rand_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+302,"zero_cycle_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+342,"c_state_sz",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+343,"c_state_idle",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+344,"c_state_delay",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+303,"state_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+304,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->pushNamePrefix("rand_delay_reg ");
    tracep->declBus(c+339,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+341,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+331,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+333,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+301,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+300,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+299,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sink ");
    tracep->declBus(c+339,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+340,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+341,"p_sim_mode",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+331,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+333,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+296,"val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+297,"rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+298,"msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+290,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+345,"c_index_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+1+i*1,"m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBit(c+305,"index_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+306,"index_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+307,"index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+308,"reset_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+309,"done_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+305,"go",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+310,"failed",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+346,"verbose",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+328,"m_curr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("index_reg ");
    tracep->declBus(c+345,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+347,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBit(c+331,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+333,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+307,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+306,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+305,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("src ");
    tracep->declBus(c+348,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+340,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+331,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+333,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+341,"delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+284,"val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+324,"msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+289,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+311,"src_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+312,"src_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+329,"src_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->pushNamePrefix("msg_delay ");
    tracep->declBus(c+348,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+331,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+333,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+341,"delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+311,"in_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+312,"in_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+329,"in_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+284,"out_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"out_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+324,"out_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+341,"rand_num",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+313,"rand_delay_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+314,"rand_delay_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+315,"rand_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+316,"zero_cycle_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+342,"c_state_sz",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+343,"c_state_idle",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+344,"c_state_delay",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+317,"state_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+318,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->pushNamePrefix("rand_delay_reg ");
    tracep->declBus(c+339,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+341,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+331,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+333,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+315,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+314,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+313,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("src ");
    tracep->declBus(c+348,"p_msg_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+340,"p_num_msgs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+331,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+333,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+311,"val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+312,"rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+329,"msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+289,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+345,"c_index_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+4+i*2,"m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 63,0);
    }
    tracep->declBit(c+319,"index_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+320,"index_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+321,"index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+322,"reset_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+323,"done_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+319,"go",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("index_reg ");
    tracep->declBus(c+345,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+347,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBit(c+331,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+333,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+321,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+320,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+319,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("test_case__Vstatic__unnamedblk1 ");
    tracep->declBus(c+20,"idx",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+334,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP____024unit__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP____024unit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+340,"NUM_TESTS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+348,"INPUT_TEST_SIZE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+339,"OUTPUT_TEST_SIZE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+341,"SRC_DELAY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+341,"SNK_DELAY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("$unit ");
    Vtop___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[2]),32);
    bufp->fullQData(oldp+4,(vlSelf->top__DOT__src__DOT__src__DOT__m[0]),64);
    bufp->fullQData(oldp+6,(vlSelf->top__DOT__src__DOT__src__DOT__m[1]),64);
    bufp->fullQData(oldp+8,(vlSelf->top__DOT__src__DOT__src__DOT__m[2]),64);
    bufp->fullQData(oldp+10,(vlSelf->top__DOT__src_msgs[0]),64);
    bufp->fullQData(oldp+12,(vlSelf->top__DOT__src_msgs[1]),64);
    bufp->fullQData(oldp+14,(vlSelf->top__DOT__src_msgs[2]),64);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__snk_msgs[0]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__snk_msgs[1]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__snk_msgs[2]),32);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__dut__DOT__vc_trace__DOT__level),4);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx),32);
    bufp->fullWData(oldp+21,(vlSelf->top__DOT__dut__DOT__str),4096);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__dut__DOT__idx0),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__dut__DOT__idx1),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len1),32);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1),32);
    bufp->fullWData(oldp+155,(vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage),4096);
    bufp->fullIData(oldp+283,(vlSelf->top__DOT__dut__DOT__vc_trace__DOT__cycles_next),32);
    bufp->fullBit(oldp+284,(vlSelf->top__DOT__istream_val));
    bufp->fullBit(oldp+285,(vlSelf->top__DOT__istream_rdy));
    bufp->fullBit(oldp+286,(vlSelf->top__DOT__ostream_rdy));
    bufp->fullBit(oldp+287,(vlSelf->top__DOT__dut__DOT__val_reg));
    bufp->fullIData(oldp+288,(vlSelf->top__DOT__ostream_msg),32);
    bufp->fullBit(oldp+289,(vlSelf->top__DOT__src_done));
    bufp->fullBit(oldp+290,(vlSelf->top__DOT__snk_done));
    bufp->fullBit(oldp+291,(vlSelf->top__DOT__dut__DOT__istream_send));
    bufp->fullBit(oldp+292,(vlSelf->top__DOT__dut__DOT__ostream_send));
    bufp->fullIData(oldp+293,(vlSelf->top__DOT__dut__DOT__a_reg),32);
    bufp->fullIData(oldp+294,(vlSelf->top__DOT__dut__DOT__b_reg),32);
    bufp->fullIData(oldp+295,(vlSelf->top__DOT__dut__DOT__vc_trace__DOT__cycles),32);
    bufp->fullBit(oldp+296,(vlSelf->top__DOT__sink__DOT__sink_val));
    bufp->fullBit(oldp+297,(vlSelf->top__DOT__sink__DOT__sink_rdy));
    bufp->fullIData(oldp+298,(vlSelf->top__DOT__sink__DOT__sink_msg),32);
    bufp->fullBit(oldp+299,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en));
    bufp->fullIData(oldp+300,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next),32);
    bufp->fullIData(oldp+301,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay),32);
    bufp->fullBit(oldp+302,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay));
    bufp->fullBit(oldp+303,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next));
    bufp->fullBit(oldp+304,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state));
    bufp->fullBit(oldp+305,(vlSelf->top__DOT__sink__DOT__sink__DOT__index_en));
    bufp->fullCData(oldp+306,((3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)))),2);
    bufp->fullCData(oldp+307,(vlSelf->top__DOT__sink__DOT__sink__DOT__index),2);
    bufp->fullBit(oldp+308,(vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg));
    bufp->fullBit(oldp+309,(vlSelf->top__DOT__sink__DOT__sink__DOT__done_next));
    bufp->fullBit(oldp+310,(vlSelf->top__DOT__sink__DOT__sink__DOT__failed));
    bufp->fullBit(oldp+311,(vlSelf->top__DOT__src__DOT__src_val));
    bufp->fullBit(oldp+312,(vlSelf->top__DOT__src__DOT__src_rdy));
    bufp->fullBit(oldp+313,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en));
    bufp->fullIData(oldp+314,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next),32);
    bufp->fullIData(oldp+315,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay),32);
    bufp->fullBit(oldp+316,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay));
    bufp->fullBit(oldp+317,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next));
    bufp->fullBit(oldp+318,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state));
    bufp->fullBit(oldp+319,(vlSelf->top__DOT__src__DOT__src__DOT__index_en));
    bufp->fullCData(oldp+320,((3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)))),2);
    bufp->fullCData(oldp+321,(vlSelf->top__DOT__src__DOT__src__DOT__index),2);
    bufp->fullBit(oldp+322,(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg));
    bufp->fullBit(oldp+323,(vlSelf->top__DOT__src__DOT__src__DOT__done_next));
    bufp->fullQData(oldp+324,(vlSelf->top__DOT__istream_msg),64);
    bufp->fullIData(oldp+326,(vlSelf->top__DOT__dut__DOT__a),32);
    bufp->fullIData(oldp+327,(vlSelf->top__DOT__dut__DOT__b),32);
    bufp->fullIData(oldp+328,(vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr),32);
    bufp->fullQData(oldp+329,(vlSelf->top__DOT__src__DOT__src_msg),64);
    bufp->fullBit(oldp+331,(vlSelf->clk));
    bufp->fullBit(oldp+332,(vlSelf->linetrace));
    bufp->fullBit(oldp+333,(vlSelf->top__DOT__reset));
    bufp->fullIData(oldp+334,(vlSelf->top__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+335,(vlSelf->top__DOT__rand_msg1),32);
    bufp->fullIData(oldp+336,(vlSelf->top__DOT__rand_msg2),32);
    bufp->fullIData(oldp+337,(0x200U),32);
    bufp->fullIData(oldp+338,(0x1000U),32);
    bufp->fullIData(oldp+339,(0x20U),32);
    bufp->fullIData(oldp+340,(3U),32);
    bufp->fullIData(oldp+341,(0U),32);
    bufp->fullIData(oldp+342,(1U),32);
    bufp->fullBit(oldp+343,(0U));
    bufp->fullBit(oldp+344,(1U));
    bufp->fullIData(oldp+345,(2U),32);
    bufp->fullCData(oldp+346,(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose),4);
    bufp->fullCData(oldp+347,(0U),2);
    bufp->fullIData(oldp+348,(0x40U),32);
}
