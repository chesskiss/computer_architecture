// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgWData(oldp+0,(vlSelf->top__DOT__imul__DOT__str),4096);
        bufp->chgIData(oldp+128,(vlSelf->top__DOT__imul__DOT__idx0),32);
        bufp->chgIData(oldp+129,(vlSelf->top__DOT__imul__DOT__idx1),32);
        bufp->chgIData(oldp+130,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0),32);
        bufp->chgIData(oldp+131,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1),32);
        bufp->chgIData(oldp+132,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0),32);
        bufp->chgIData(oldp+133,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1),32);
        bufp->chgWData(oldp+134,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage),4096);
        bufp->chgIData(oldp+262,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles_next),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+263,(vlSelf->top__DOT__reset));
        bufp->chgBit(oldp+264,(vlSelf->top__DOT__istream_val));
        bufp->chgBit(oldp+265,(vlSelf->top__DOT__ostream_rdy));
        bufp->chgIData(oldp+266,(vlSelf->top__DOT__istream_msg_a),32);
        bufp->chgIData(oldp+267,(vlSelf->top__DOT__istream_msg_b),32);
        bufp->chgIData(oldp+268,(vlSelf->top__DOT__unnamedblk1__DOT__x),32);
        bufp->chgIData(oldp+269,(vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y),32);
        bufp->chgIData(oldp+270,(vlSelf->top__DOT__unnamedblk3__DOT__x),32);
        bufp->chgIData(oldp+271,(vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y),32);
        bufp->chgIData(oldp+272,(vlSelf->top__DOT__unnamedblk5__DOT__x),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgCData(oldp+273,(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out),6);
        bufp->chgCData(oldp+274,(vlSelf->top__DOT__imul__DOT__control_unit__DOT__next_state),2);
        bufp->chgBit(oldp+275,(vlSelf->top__DOT__imul__DOT__control_unit__DOT__req_val));
        bufp->chgBit(oldp+276,(vlSelf->top__DOT__imul__DOT__control_unit__DOT__resp_rdy));
        bufp->chgIData(oldp+277,(vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out),32);
        bufp->chgIData(oldp+278,(vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out),32);
        bufp->chgCData(oldp+279,(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out),6);
        bufp->chgBit(oldp+280,((1U & ((IData)(1U) + vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out))));
        bufp->chgIData(oldp+281,(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout),32);
        bufp->chgBit(oldp+282,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 0xaU))));
        bufp->chgBit(oldp+283,((1U & ((IData)(vlSelf->__VdfgTmp_hc45a9942__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+284,((1U & ((IData)(vlSelf->__VdfgTmp_h3e237ee5__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+285,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 0xbU))));
        bufp->chgBit(oldp+286,((1U & ((IData)(vlSelf->__VdfgTmp_h5448fa28__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+287,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 0xcU))));
        bufp->chgBit(oldp+288,((1U & ((IData)(vlSelf->__VdfgTmp_hc63b2d7e__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+289,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 0xdU))));
        bufp->chgBit(oldp+290,((1U & ((IData)(vlSelf->__VdfgTmp_ha4a84782__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+291,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 0xeU))));
        bufp->chgBit(oldp+292,((1U & ((IData)(vlSelf->__VdfgTmp_h2d0962be__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+293,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 0xfU))));
        bufp->chgBit(oldp+294,((1U & ((IData)(vlSelf->__VdfgTmp_hd910701e__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+295,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 0x10U))));
        bufp->chgBit(oldp+296,((1U & ((IData)(vlSelf->__VdfgTmp_h5f761249__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+297,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 0x11U))));
        bufp->chgBit(oldp+298,((1U & ((IData)(vlSelf->__VdfgTmp_h8b63129a__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+299,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 0x12U))));
        bufp->chgBit(oldp+300,((1U & ((IData)(vlSelf->__VdfgTmp_h4ca2b416__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+301,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 0x13U))));
        bufp->chgBit(oldp+302,((1U & ((IData)(vlSelf->__VdfgTmp_hd46e90b3__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+303,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 1U))));
        bufp->chgBit(oldp+304,((1U & (((IData)(1U) 
                                       + (1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out)) 
                                      >> 1U))));
        bufp->chgBit(oldp+305,((1U & ((IData)(vlSelf->__VdfgTmp_h36205fdd__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+306,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 0x14U))));
        bufp->chgBit(oldp+307,((1U & ((IData)(vlSelf->__VdfgTmp_h67b1c022__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+308,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 0x15U))));
        bufp->chgBit(oldp+309,((1U & ((IData)(vlSelf->__VdfgTmp_hbff958a0__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+310,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 0x16U))));
        bufp->chgBit(oldp+311,((1U & ((IData)(vlSelf->__VdfgTmp_h1d34c83b__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+312,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 0x17U))));
        bufp->chgBit(oldp+313,((1U & ((IData)(vlSelf->__VdfgTmp_h8b089081__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+314,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 0x18U))));
        bufp->chgBit(oldp+315,((1U & ((IData)(vlSelf->__VdfgTmp_h81d8b85c__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+316,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 0x19U))));
        bufp->chgBit(oldp+317,((1U & ((IData)(vlSelf->__VdfgTmp_h5258ea2d__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+318,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+319,((1U & ((IData)(vlSelf->__VdfgTmp_h5851b27f__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+320,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+321,((1U & ((IData)(vlSelf->__VdfgTmp_hc5359ce2__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+322,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+323,((1U & ((IData)(vlSelf->__VdfgTmp_h4a05e2ad__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+324,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+325,((1U & ((IData)(vlSelf->__VdfgTmp_h02dcba2b__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+326,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 2U))));
        bufp->chgBit(oldp+327,((1U & ((IData)(vlSelf->__VdfgTmp_h7fca9df6__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+328,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+329,((1U & ((IData)(vlSelf->__VdfgTmp_hc1b69633__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+330,((vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                >> 0x1fU)));
        bufp->chgBit(oldp+331,(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vcellout__genblk1__BRA__31__KET____DOT__ripple_carry_adder__cout));
        bufp->chgBit(oldp+332,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 3U))));
        bufp->chgBit(oldp+333,((1U & ((IData)(vlSelf->__VdfgTmp_hb397dc1b__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+334,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 4U))));
        bufp->chgBit(oldp+335,((1U & ((IData)(vlSelf->__VdfgTmp_h93dd3d91__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+336,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 5U))));
        bufp->chgBit(oldp+337,((1U & ((IData)(vlSelf->__VdfgTmp_h29677c5c__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+338,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 6U))));
        bufp->chgBit(oldp+339,((1U & ((IData)(vlSelf->__VdfgTmp_h5adc78a4__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+340,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 7U))));
        bufp->chgBit(oldp+341,((1U & ((IData)(vlSelf->__VdfgTmp_h9dab9844__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+342,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 8U))));
        bufp->chgBit(oldp+343,((1U & ((IData)(vlSelf->__VdfgTmp_hb6b8a3ab__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+344,((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                      >> 9U))));
        bufp->chgBit(oldp+345,((1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out)));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+346,(vlSelf->top__DOT__istream_rdy));
        bufp->chgBit(oldp+347,(vlSelf->top__DOT__ostream_val));
        bufp->chgIData(oldp+348,(vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out),32);
        bufp->chgBit(oldp+349,(vlSelf->top__DOT__imul__DOT__a_mux_sel));
        bufp->chgBit(oldp+350,(vlSelf->top__DOT__imul__DOT__b_mux_sel));
        bufp->chgBit(oldp+351,(vlSelf->top__DOT__imul__DOT__result_mux_sel));
        bufp->chgBit(oldp+352,(vlSelf->top__DOT__imul__DOT__add_mux_sel));
        bufp->chgBit(oldp+353,(vlSelf->top__DOT__imul__DOT__result_reg_en));
        bufp->chgBit(oldp+354,((1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out)));
        bufp->chgCData(oldp+355,(vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state),2);
        bufp->chgCData(oldp+356,(vlSelf->top__DOT__imul__DOT__control_unit__DOT__counter),6);
        bufp->chgIData(oldp+357,(vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out),32);
        bufp->chgIData(oldp+358,(vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out),32);
        bufp->chgIData(oldp+359,(vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out),32);
        bufp->chgIData(oldp+360,(vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out),32);
        bufp->chgIData(oldp+361,(vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out),32);
        bufp->chgIData(oldp+362,(vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out),32);
        bufp->chgIData(oldp+363,(vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out),32);
        bufp->chgCData(oldp+364,(vlSelf->top__DOT__imul__DOT__datapath__DOT__shamt_reg_out),6);
        bufp->chgIData(oldp+365,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles),32);
    }
    bufp->chgBit(oldp+366,(vlSelf->clk));
    bufp->chgBit(oldp+367,(vlSelf->linetrace));
    bufp->chgQData(oldp+368,(vlSelf->top__DOT__istream_msg),64);
    bufp->chgIData(oldp+370,((IData)((vlSelf->top__DOT__istream_msg 
                                      >> 0x20U))),32);
    bufp->chgIData(oldp+371,((IData)(vlSelf->top__DOT__istream_msg)),32);
    bufp->chgCData(oldp+372,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level),4);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
