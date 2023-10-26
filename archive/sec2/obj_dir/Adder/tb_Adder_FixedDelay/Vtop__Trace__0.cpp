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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[2]),32);
        bufp->chgQData(oldp+3,(vlSelf->top__DOT__src__DOT__src__DOT__m[0]),64);
        bufp->chgQData(oldp+5,(vlSelf->top__DOT__src__DOT__src__DOT__m[1]),64);
        bufp->chgQData(oldp+7,(vlSelf->top__DOT__src__DOT__src__DOT__m[2]),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgQData(oldp+9,(vlSelf->top__DOT__src_msgs[0]),64);
        bufp->chgQData(oldp+11,(vlSelf->top__DOT__src_msgs[1]),64);
        bufp->chgQData(oldp+13,(vlSelf->top__DOT__src_msgs[2]),64);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__snk_msgs[0]),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__snk_msgs[1]),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__snk_msgs[2]),32);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__dut__DOT__vc_trace__DOT__level),4);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgWData(oldp+20,(vlSelf->top__DOT__dut__DOT__str),4096);
        bufp->chgIData(oldp+148,(vlSelf->top__DOT__dut__DOT__idx0),32);
        bufp->chgIData(oldp+149,(vlSelf->top__DOT__dut__DOT__idx1),32);
        bufp->chgIData(oldp+150,(vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0),32);
        bufp->chgIData(oldp+151,(vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len1),32);
        bufp->chgIData(oldp+152,(vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0),32);
        bufp->chgIData(oldp+153,(vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1),32);
        bufp->chgWData(oldp+154,(vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage),4096);
        bufp->chgIData(oldp+282,(vlSelf->top__DOT__dut__DOT__vc_trace__DOT__cycles_next),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+283,(vlSelf->top__DOT__istream_val));
        bufp->chgBit(oldp+284,(vlSelf->top__DOT__istream_rdy));
        bufp->chgBit(oldp+285,(vlSelf->top__DOT__ostream_rdy));
        bufp->chgBit(oldp+286,(vlSelf->top__DOT__dut__DOT__val_reg));
        bufp->chgIData(oldp+287,(vlSelf->top__DOT__ostream_msg),32);
        bufp->chgBit(oldp+288,(vlSelf->top__DOT__src_done));
        bufp->chgBit(oldp+289,(vlSelf->top__DOT__snk_done));
        bufp->chgBit(oldp+290,(vlSelf->top__DOT__dut__DOT__istream_send));
        bufp->chgBit(oldp+291,(vlSelf->top__DOT__dut__DOT__ostream_send));
        bufp->chgIData(oldp+292,(vlSelf->top__DOT__dut__DOT__a_reg),32);
        bufp->chgIData(oldp+293,(vlSelf->top__DOT__dut__DOT__b_reg),32);
        bufp->chgIData(oldp+294,(vlSelf->top__DOT__dut__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+295,(vlSelf->top__DOT__sink__DOT__sink_val));
        bufp->chgBit(oldp+296,(vlSelf->top__DOT__sink__DOT__sink_rdy));
        bufp->chgIData(oldp+297,(vlSelf->top__DOT__sink__DOT__sink_msg),32);
        bufp->chgBit(oldp+298,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en));
        bufp->chgIData(oldp+299,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+300,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay),32);
        bufp->chgBit(oldp+301,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+302,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next));
        bufp->chgBit(oldp+303,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state));
        bufp->chgBit(oldp+304,(vlSelf->top__DOT__sink__DOT__sink__DOT__index_en));
        bufp->chgCData(oldp+305,((3U & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)))),2);
        bufp->chgCData(oldp+306,(vlSelf->top__DOT__sink__DOT__sink__DOT__index),2);
        bufp->chgBit(oldp+307,(vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg));
        bufp->chgBit(oldp+308,(vlSelf->top__DOT__sink__DOT__sink__DOT__done_next));
        bufp->chgBit(oldp+309,(vlSelf->top__DOT__sink__DOT__sink__DOT__failed));
        bufp->chgBit(oldp+310,(vlSelf->top__DOT__src__DOT__src_val));
        bufp->chgBit(oldp+311,(vlSelf->top__DOT__src__DOT__src_rdy));
        bufp->chgBit(oldp+312,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en));
        bufp->chgIData(oldp+313,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+314,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay),32);
        bufp->chgBit(oldp+315,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+316,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next));
        bufp->chgBit(oldp+317,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state));
        bufp->chgBit(oldp+318,(vlSelf->top__DOT__src__DOT__src__DOT__index_en));
        bufp->chgCData(oldp+319,((3U & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)))),2);
        bufp->chgCData(oldp+320,(vlSelf->top__DOT__src__DOT__src__DOT__index),2);
        bufp->chgBit(oldp+321,(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg));
        bufp->chgBit(oldp+322,(vlSelf->top__DOT__src__DOT__src__DOT__done_next));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgQData(oldp+323,(vlSelf->top__DOT__istream_msg),64);
        bufp->chgIData(oldp+325,(vlSelf->top__DOT__dut__DOT__a),32);
        bufp->chgIData(oldp+326,(vlSelf->top__DOT__dut__DOT__b),32);
        bufp->chgIData(oldp+327,(vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr),32);
        bufp->chgQData(oldp+328,(vlSelf->top__DOT__src__DOT__src_msg),64);
    }
    bufp->chgBit(oldp+330,(vlSelf->clk));
    bufp->chgBit(oldp+331,(vlSelf->linetrace));
    bufp->chgBit(oldp+332,(vlSelf->top__DOT__reset));
    bufp->chgIData(oldp+333,(vlSelf->top__DOT__unnamedblk2__DOT__i),32);
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
}
