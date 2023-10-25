// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->top__DOT__idx = 0U;
    vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__is_mul_D 
        = (1U & vlSelf->top__DOT__DUT__DOT__inst_D);
    vlSymsp->__Vcoverage[1707].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__is_mul_X 
        = (1U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X);
    vlSymsp->__Vcoverage[1814].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
        = (((QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X)) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X)));
    vlSymsp->__Vcoverage[2501].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[3268].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[3269].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[3602].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[3603].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[3645].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[3646].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[3688].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[3689].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[3746].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[3747].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[3804].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[3805].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared = 0U;
    vlSymsp->__Vcoverage[4803].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5188].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[5189].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5308].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[5309].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5351].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[5352].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5394].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[5395].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5421].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[5422].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5750].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[5751].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5793].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[5794].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5836].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[5837].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5879].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[5880].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5906].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mem__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[5907].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    if ((1U & vlSelf->top__DOT__src__DOT____Vtogcov__max_delay)) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__max_delay 
            = (0xfffffffeU & vlSelf->top__DOT__src__DOT____Vtogcov__max_delay);
    }
    if ((1U & (~ (vlSelf->top__DOT__src__DOT____Vtogcov__max_delay 
                  >> 2U)))) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__max_delay 
            = (4U | vlSelf->top__DOT__src__DOT____Vtogcov__max_delay);
    }
    vlSymsp->__Vcoverage[604].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[608].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[782].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[786].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1520].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1530].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1533].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1627].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1673].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1700].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1746].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1757].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1831].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2637].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2689].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2761].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2765].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2770].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2798].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3170].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3174].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3179].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3187].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3191].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder__DOT____Vtogcov__in1)))) {
        vlSymsp->__Vcoverage[3192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder__DOT____Vtogcov__in1 = 1U;
    }
    vlSymsp->__Vcoverage[3254].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3267].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3299].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[3306].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4201].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4205].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4344].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4348].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4829].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5034].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5094].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5560].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5564].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5703].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5707].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[3274].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[3608].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[3651].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[3694].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[3752].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[3810].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[5194].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[5314].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[5357].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[5400].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[5427].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[5756].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[5799].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[5842].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[5885].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__mem__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__mem__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level = 3U;
    vlSymsp->__Vcoverage[5912].fetch_add(1, std::memory_order_relaxed);
}

void Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();

VL_ATTR_COLD void Vtop___024root___eval_final__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final__TOP\n"); );
    // Body
    if (vlSelf->top__DOT__src_done) {
        Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        VL_WRITEF("     [ passed ] Finished gracefully\n");
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
    } else {
        Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
        VL_WRITEF("     [ failed ] Simulation did not naturally stop\n");
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__sink__DOT__sink__DOT__t = vlSelf->top__DOT__sink__DOT__sink__DOT__index;
    while ((vlSelf->top__DOT__sink__DOT__sink__DOT__t 
            < (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max))) {
        Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
        VL_WRITEF("     [ FAILED ] expected = %x, actual = None\n",
                  32,((0x31U >= (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))
                       ? vlSelf->top__DOT__sink__DOT__sink__DOT__m
                      [vlSelf->top__DOT__sink__DOT__sink__DOT__index]
                       : 0U));
        vlSymsp->__Vcoverage[917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT__t = 
            ((IData)(1U) + vlSelf->top__DOT__sink__DOT__sink__DOT__t);
    }
    vlSymsp->__Vcoverage[918].fetch_add(1, std::memory_order_relaxed);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
    vlSelf->__VstlTriggered.set(1U, ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__top__DOT__DUT__DOT__ctrl__DOT__stall_X__0)));
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__DUT__DOT__ctrl__DOT__stall_X__0 
        = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state)))) {
        vlSymsp->__Vcoverage[600].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[605].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
        if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
            vlSymsp->__Vcoverage[603].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[606].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state)))) {
            vlSymsp->__Vcoverage[607].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)))) {
        vlSymsp->__Vcoverage[778].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[783].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
        if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
            vlSymsp->__Vcoverage[781].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[784].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)))) {
            vlSymsp->__Vcoverage[785].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state) {
        vlSymsp->__Vcoverage[1529].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1532].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state)))) {
        vlSymsp->__Vcoverage[1528].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1531].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
            vlSymsp->__Vcoverage[1625].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
            vlSymsp->__Vcoverage[1626].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSymsp->__Vcoverage[1624].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
            vlSymsp->__Vcoverage[1671].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
            vlSymsp->__Vcoverage[1672].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSymsp->__Vcoverage[1670].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                        | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))))) {
        if (((((((((0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                   | (0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x40005033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
            if ((0x6033U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                if ((0x4033U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    if ((0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[1738].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((0x2033U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        if ((0x3033U != (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            if ((0x40005033U != (0xfe00707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                if ((0x5033U != (0xfe00707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    if ((0x1033U == 
                                         (0xfe00707fU 
                                          & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[1742].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((0x1033U != 
                                         (0xfe00707fU 
                                          & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[1743].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x5033U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[1741].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x40005033U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[1740].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x3033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[1739].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[1737].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1736].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U & (~ ((((((((0x6033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                            | (0x4033U == (0xfe00707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                           | (0x2033U == (0xfe00707fU 
                                          & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x3033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x40005033U == (0xfe00707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x5033U == (0xfe00707fU 
                                       & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x2000033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst_D)))))) {
            if ((0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1744].fetch_add(1, std::memory_order_relaxed);
            }
            if ((0x33U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1745].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[2787].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[2784].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[2788].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[2789].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((4U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
            if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[2793].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[2792].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[2791].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[2790].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[2794].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[2795].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[2785].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[2796].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((4U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
            if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                vlSymsp->__Vcoverage[2797].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))) {
                    vlSymsp->__Vcoverage[2797].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)))) {
                    vlSymsp->__Vcoverage[2786].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__current_state))) {
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__current_state))) {
                vlSymsp->__Vcoverage[3253].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[3266].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__current_state))) {
            vlSymsp->__Vcoverage[3250].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[3261].fetch_add(1, std::memory_order_relaxed);
            if ((0x20U > (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__counter))) {
                vlSymsp->__Vcoverage[3249].fetch_add(1, std::memory_order_relaxed);
            }
            if ((0x20U <= (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__counter))) {
                vlSymsp->__Vcoverage[3248].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out)) {
                vlSymsp->__Vcoverage[3260].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[3257].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[3255].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out))) {
                vlSymsp->__Vcoverage[3258].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[3255].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[3259].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__current_state))) {
        vlSymsp->__Vcoverage[3247].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3256].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3255].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))) {
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))) {
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))) {
                vlSymsp->__Vcoverage[3297].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U != (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))) {
                vlSymsp->__Vcoverage[3298].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))) {
            vlSymsp->__Vcoverage[3296].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))) {
        vlSymsp->__Vcoverage[3295].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__DUT__DOT__wb_result_sel_M) {
        if (vlSelf->top__DOT__DUT__DOT__wb_result_sel_M) {
            vlSymsp->__Vcoverage[3304].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_M)))) {
            vlSymsp->__Vcoverage[3305].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_M)))) {
        vlSymsp->__Vcoverage[3303].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state)))) {
        vlSymsp->__Vcoverage[4197].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4202].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) {
        if (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) {
            vlSymsp->__Vcoverage[4200].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[4203].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state)))) {
            vlSymsp->__Vcoverage[4204].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state)))) {
        vlSymsp->__Vcoverage[4340].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4345].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) {
        if (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) {
            vlSymsp->__Vcoverage[4343].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[4346].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state)))) {
            vlSymsp->__Vcoverage[4347].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__mem_clear) {
        vlSymsp->__Vcoverage[4828].fetch_add(1, std::memory_order_relaxed);
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared) {
            vlSymsp->__Vcoverage[4806].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared)))) {
            vlSymsp->__Vcoverage[4805].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
            vlSymsp->__Vcoverage[5032].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
            vlSymsp->__Vcoverage[5033].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSymsp->__Vcoverage[5031].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)))) {
            vlSymsp->__Vcoverage[5092].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
            vlSymsp->__Vcoverage[5093].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSymsp->__Vcoverage[5091].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state)))) {
        vlSymsp->__Vcoverage[5556].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[5561].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) {
        if (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) {
            vlSymsp->__Vcoverage[5559].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[5562].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state)))) {
            vlSymsp->__Vcoverage[5563].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state)))) {
        vlSymsp->__Vcoverage[5699].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[5704].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) {
        if (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) {
            vlSymsp->__Vcoverage[5702].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[5705].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state)))) {
            vlSymsp->__Vcoverage[5706].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
         & (4U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))) {
        vlSymsp->__Vcoverage[1825].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
         & (3U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))) {
        vlSymsp->__Vcoverage[1823].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                  & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
        vlSymsp->__Vcoverage[1822].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
         & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))) {
        vlSymsp->__Vcoverage[1821].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                  & (5U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
        vlSymsp->__Vcoverage[1828].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                  & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
        vlSymsp->__Vcoverage[1820].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
         & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))) {
        vlSymsp->__Vcoverage[1819].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                  & (6U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
        vlSymsp->__Vcoverage[1830].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                  & (3U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
        vlSymsp->__Vcoverage[1824].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                  & (4U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
        vlSymsp->__Vcoverage[1826].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
         & (5U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))) {
        vlSymsp->__Vcoverage[1827].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
         & (6U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))) {
        vlSymsp->__Vcoverage[1829].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem_clear)))) {
        if (vlSelf->top__DOT__reset) {
            vlSymsp->__Vcoverage[4827].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
            if (vlSelf->top__DOT__reset) {
                vlSymsp->__Vcoverage[4826].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
                vlSymsp->__Vcoverage[4825].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->linetrace) ^ (IData)(vlSelf->top__DOT____Vtogcov__linetrace))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__linetrace = vlSelf->linetrace;
    }
    if (((IData)(vlSelf->top__DOT__reset) ^ (IData)(vlSelf->top__DOT____Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reset = vlSelf->top__DOT__reset;
    }
    if (((0U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__stats_en))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__stats_en = (0U 
                                                 != vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W);
    }
    if (((IData)(vlSelf->top__DOT__src_done) ^ (IData)(vlSelf->top__DOT____Vtogcov__src_done))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__src_done = vlSelf->top__DOT__src_done;
    }
    if (((IData)(vlSelf->top__DOT__mem_clear) ^ (IData)(vlSelf->top__DOT____Vtogcov__mem_clear))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mem_clear = vlSelf->top__DOT__mem_clear;
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__reset_reg))) {
        vlSymsp->__Vcoverage[434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__reset_reg 
            = vlSelf->top__DOT__src__DOT__src__DOT__reset_reg;
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__state 
            = vlSelf->top__DOT__src__DOT__msg_delay__DOT__state;
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__state 
            = vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state;
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__reset_reg))) {
        vlSymsp->__Vcoverage[832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__reset_reg 
            = vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg;
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__done_next) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__done_next))) {
        vlSymsp->__Vcoverage[870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__done_next 
            = vlSelf->top__DOT__sink__DOT__sink__DOT__done_next;
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__failed) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__failed))) {
        vlSymsp->__Vcoverage[872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__failed 
            = vlSelf->top__DOT__sink__DOT__sink__DOT__failed;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_rdy)))) {
        vlSymsp->__Vcoverage[1013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_rdy 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_queue_num_free_entries)))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_queue_num_free_entries 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_queue_num_free_entries)))) {
        vlSymsp->__Vcoverage[1160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_queue_num_free_entries 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_M))) {
        vlSymsp->__Vcoverage[1217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__wb_result_sel_M 
            = vlSelf->top__DOT__DUT__DOT__wb_result_sel_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_addr))) {
        vlSymsp->__Vcoverage[1264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_addr 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__read_addr))) {
        vlSymsp->__Vcoverage[1265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__read_addr 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr))) {
        vlSymsp->__Vcoverage[1267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr))) {
        vlSymsp->__Vcoverage[1269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full))) {
        vlSymsp->__Vcoverage[1271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr_plus1)))) {
        vlSymsp->__Vcoverage[1276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr_plus1 
            = (1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)));
    }
    if ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr_plus1)))) {
        vlSymsp->__Vcoverage[1277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr_plus1 
            = (1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[1521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__state 
            = vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full))) {
        vlSymsp->__Vcoverage[1538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full))) {
        vlSymsp->__Vcoverage[1629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_F))) {
        vlSymsp->__Vcoverage[1674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_F 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_D))) {
        vlSymsp->__Vcoverage[1675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_X))) {
        vlSymsp->__Vcoverage[1676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_M))) {
        vlSymsp->__Vcoverage[1677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_W))) {
        vlSymsp->__Vcoverage[1678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__val_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__is_mul_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__is_mul_D))) {
        vlSymsp->__Vcoverage[1706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__is_mul_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__is_mul_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__wb_result_sel_X))) {
        vlSymsp->__Vcoverage[1801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__wb_result_sel_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_X))) {
        vlSymsp->__Vcoverage[1802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_X))) {
        vlSymsp->__Vcoverage[1808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_X))) {
        vlSymsp->__Vcoverage[1809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__is_mul_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__is_mul_X))) {
        vlSymsp->__Vcoverage[1813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__is_mul_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__is_mul_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_M))) {
        vlSymsp->__Vcoverage[1867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_M))) {
        vlSymsp->__Vcoverage[1873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_M))) {
        vlSymsp->__Vcoverage[1874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_M;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_W))) {
        vlSymsp->__Vcoverage[1912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_W;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_pending_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_pending_W))) {
        vlSymsp->__Vcoverage[1913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_pending_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_pending_W;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_pending_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_pending_W))) {
        vlSymsp->__Vcoverage[1914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_pending_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_pending_W;
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__b_lsb)))) {
        vlSymsp->__Vcoverage[2804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__b_lsb 
            = (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out);
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[4191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__state 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[4334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__state 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_val_M))) {
        vlSymsp->__Vcoverage[4375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_val_M 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_rdy_M)))) {
        vlSymsp->__Vcoverage[4376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_rdy_M 
            = (1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_val_M))) {
        vlSymsp->__Vcoverage[4454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_val_M 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_rdy_M)))) {
        vlSymsp->__Vcoverage[4455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_rdy_M 
            = (1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memory_cleared))) {
        vlSymsp->__Vcoverage[4802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memory_cleared 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT____Vtogcov__num_free_entries)))) {
        vlSymsp->__Vcoverage[4957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT____Vtogcov__num_free_entries 
            = (1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT____Vtogcov__num_free_entries)))) {
        vlSymsp->__Vcoverage[4966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT____Vtogcov__num_free_entries 
            = (1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full))) {
        vlSymsp->__Vcoverage[4976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full))) {
        vlSymsp->__Vcoverage[5036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[5550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__state 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[5693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__state 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state;
    }
    vlSelf->top__DOT__src__DOT__src__DOT__index_next 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)));
    vlSelf->top__DOT__sink__DOT__sink__DOT__index_next 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_X)))) {
        vlSymsp->__Vcoverage[1213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_X 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_X)))) {
        vlSymsp->__Vcoverage[1214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_X 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_X)))) {
        vlSymsp->__Vcoverage[1799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_X 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_X)))) {
        vlSymsp->__Vcoverage[1800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_X 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M)))) {
        vlSymsp->__Vcoverage[1865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M)))) {
        vlSymsp->__Vcoverage[1866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_M)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M)));
    }
    if (((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
               | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
            | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
           | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
          | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
         | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
        if ((0x13U != vlSelf->top__DOT__DUT__DOT__inst_D)) {
            if ((0x33U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                if ((0x2003U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    if ((0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[1731].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((0x1063U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        if ((0x2073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            if ((0x1073U != (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                if ((0x40000033U != 
                                     (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[1735].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0x40000033U == 
                                     (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[1734].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x1073U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[1733].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[1732].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[1730].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSymsp->__Vcoverage[1729].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D)) {
            vlSymsp->__Vcoverage[1728].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
        } else if ((0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
        } else if ((0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 1U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
        } else {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
            if ((0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 1U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
            } else {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D 
                    = ((0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))
                        ? 0xcU : ((0x1073U == (0x707fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst_D))
                                   ? 0xbU : ((0x40000033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->top__DOT__DUT__DOT__inst_D))
                                              ? 1U : 2U)));
            }
        }
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_D 
            = ((0x13U != vlSelf->top__DOT__DUT__DOT__inst_D) 
               & ((0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                  | ((0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                     | ((0x1063U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                        & ((0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                           | (0x1073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))))));
        vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
    } else {
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_D 
            = (((((((((0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                      | (0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x40005033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)));
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
        if (((((((((0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                   | (0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x40005033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
            if ((0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 3U;
            } else if ((0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 4U;
            } else if ((0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 5U;
            } else if ((0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 6U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 7U;
            } else if ((0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 8U;
            } else if ((0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 9U;
            } else {
                vlSelf->top__DOT__DUT__DOT__ex_result_sel_D = 2U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
            }
        } else {
            vlSelf->top__DOT__DUT__DOT__ex_result_sel_D 
                = ((0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))
                    ? 1U : 0U);
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
        }
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__current_state) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT____Vtogcov__current_state)))) {
        vlSymsp->__Vcoverage[3226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT____Vtogcov__current_state 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT____Vtogcov__current_state)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__current_state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__current_state) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT____Vtogcov__current_state)))) {
        vlSymsp->__Vcoverage[3227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT____Vtogcov__current_state 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT____Vtogcov__current_state)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__current_state)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)))) {
        vlSymsp->__Vcoverage[4655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)))) {
        vlSymsp->__Vcoverage[4656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)))) {
        vlSymsp->__Vcoverage[1810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)))) {
        vlSymsp->__Vcoverage[1811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)))) {
        vlSymsp->__Vcoverage[1812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X 
            = ((3U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_X)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)))) {
        vlSymsp->__Vcoverage[873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose 
            = ((0xeU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)) 
               | (1U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)))) {
        vlSymsp->__Vcoverage[874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose 
            = ((0xdU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)) 
               | (2U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)))) {
        vlSymsp->__Vcoverage[875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose 
            = ((0xbU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)) 
               | (4U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)))) {
        vlSymsp->__Vcoverage[876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose 
            = ((7U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose)) 
               | (8U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[1209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[1210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[1211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)))) {
        vlSymsp->__Vcoverage[1212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__alu_fn_X)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X)));
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_val_D 
        = (((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                  | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
            | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
           | (((((((((0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                     | (0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x40005033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_D 
        = (((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                  | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
            | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
           & ((0x13U != vlSelf->top__DOT__DUT__DOT__inst_D) 
              & ((0x33U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                 & (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[3809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[5911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[1219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[1220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[1221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[1222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)))) {
        vlSymsp->__Vcoverage[1223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_waddr_W)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[1803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[1804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[1805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[1806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[1807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[1868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[1869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[1870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[1871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[1872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)))) {
        vlSymsp->__Vcoverage[3479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)))) {
        vlSymsp->__Vcoverage[3480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)))) {
        vlSymsp->__Vcoverage[3481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)))) {
        vlSymsp->__Vcoverage[3482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)))) {
        vlSymsp->__Vcoverage[3483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)))) {
        vlSymsp->__Vcoverage[3484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)))) {
        vlSymsp->__Vcoverage[3485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)))) {
        vlSymsp->__Vcoverage[3486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)))) {
        vlSymsp->__Vcoverage[3487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)))) {
        vlSymsp->__Vcoverage[3488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)))) {
        vlSymsp->__Vcoverage[3489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)))) {
        vlSymsp->__Vcoverage[3490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)))) {
        vlSymsp->__Vcoverage[3491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)))) {
        vlSymsp->__Vcoverage[3492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)))) {
        vlSymsp->__Vcoverage[3493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd)));
    }
    vlSelf->top__DOT__src__DOT__src__DOT__done_next 
        = ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
           == (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max));
    vlSelf->top__DOT__DUT__DOT__stats_en_wen_W = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_pending_W) 
                                                  & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W));
    if ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next)))) {
        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next 
            = ((0x3eU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next)) 
               | (1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index))));
    }
    if ((1U & ((0x1fU & (((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)) 
                         >> 1U)) ^ ((IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next) 
                                    >> 1U)))) {
        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next 
            = ((0x3dU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next)) 
               | (2U & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index))));
    }
    if ((1U & ((0xfU & (((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)) 
                        >> 2U)) ^ ((IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next) 
                                   >> 2U)))) {
        vlSymsp->__Vcoverage[418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next 
            = ((0x3bU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next)) 
               | (4U & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index))));
    }
    if ((1U & ((7U & (((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)) 
                      >> 3U)) ^ ((IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next) 
                                 >> 3U)))) {
        vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next 
            = ((0x37U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next)) 
               | (8U & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index))));
    }
    if ((1U & ((3U & (((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)) 
                      >> 4U)) ^ ((IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next) 
                                 >> 4U)))) {
        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next 
            = ((0x2fU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next)) 
               | (0x10U & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index))));
    }
    if ((1U & ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)) 
                      >> 5U)) ^ ((IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next) 
                                 >> 5U)))) {
        vlSymsp->__Vcoverage[421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next 
            = ((0x1fU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next)) 
               | (0x20U & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index 
            = ((0x3eU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)) 
               | (1U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index 
            = ((0x3dU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)) 
               | (2U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index 
            = ((0x3bU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)) 
               | (4U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index 
            = ((0x37U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)) 
               | (8U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
                  ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index 
            = ((0x2fU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)) 
               | (0x10U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
                  ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index 
            = ((0x1fU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)) 
               | (0x20U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max 
            = ((0x3eU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)) 
               | (1U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max 
            = ((0x3dU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)) 
               | (2U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max 
            = ((0x3bU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)) 
               | (4U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max 
            = ((0x37U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)) 
               | (8U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max) 
                  ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max 
            = ((0x2fU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)) 
               | (0x10U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max) 
                  ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max 
            = ((0x1fU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)) 
               | (0x20U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)));
    }
    if ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next)))) {
        vlSymsp->__Vcoverage[814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next 
            = ((0x3eU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next)) 
               | (1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))));
    }
    if ((1U & ((0x1fU & (((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)) 
                         >> 1U)) ^ ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next) 
                                    >> 1U)))) {
        vlSymsp->__Vcoverage[815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next 
            = ((0x3dU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next)) 
               | (2U & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))));
    }
    if ((1U & ((0xfU & (((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)) 
                        >> 2U)) ^ ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next) 
                                   >> 2U)))) {
        vlSymsp->__Vcoverage[816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next 
            = ((0x3bU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next)) 
               | (4U & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))));
    }
    if ((1U & ((7U & (((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)) 
                      >> 3U)) ^ ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next) 
                                 >> 3U)))) {
        vlSymsp->__Vcoverage[817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next 
            = ((0x37U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next)) 
               | (8U & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))));
    }
    if ((1U & ((3U & (((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)) 
                      >> 4U)) ^ ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next) 
                                 >> 4U)))) {
        vlSymsp->__Vcoverage[818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next 
            = ((0x2fU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next)) 
               | (0x10U & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))));
    }
    if ((1U & ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)) 
                      >> 5U)) ^ ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next) 
                                 >> 5U)))) {
        vlSymsp->__Vcoverage[819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next 
            = ((0x1fU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next)) 
               | (0x20U & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index 
            = ((0x3eU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)) 
               | (1U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index 
            = ((0x3dU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)) 
               | (2U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index 
            = ((0x3bU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)) 
               | (4U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index 
            = ((0x37U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)) 
               | (8U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index) 
                  ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index 
            = ((0x2fU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)) 
               | (0x10U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index) 
                  ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index 
            = ((0x1fU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)) 
               | (0x20U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max 
            = ((0x3eU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)) 
               | (1U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max 
            = ((0x3dU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)) 
               | (2U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max 
            = ((0x3bU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)) 
               | (4U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max 
            = ((0x37U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)) 
               | (8U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max) 
                  ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max 
            = ((0x2fU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)) 
               | (0x10U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max) 
                  ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max 
            = ((0x1fU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)) 
               | (0x20U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt_reg_out) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__shamt_reg_out)))) {
        vlSymsp->__Vcoverage[3131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__shamt_reg_out 
            = ((0x3eU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__shamt_reg_out)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt_reg_out)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt_reg_out) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__shamt_reg_out)))) {
        vlSymsp->__Vcoverage[3132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__shamt_reg_out 
            = ((0x3dU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__shamt_reg_out)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt_reg_out)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt_reg_out) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__shamt_reg_out)))) {
        vlSymsp->__Vcoverage[3133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__shamt_reg_out 
            = ((0x3bU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__shamt_reg_out)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt_reg_out)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt_reg_out) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__shamt_reg_out)))) {
        vlSymsp->__Vcoverage[3134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__shamt_reg_out 
            = ((0x37U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__shamt_reg_out)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt_reg_out)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt_reg_out) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__shamt_reg_out)))) {
        vlSymsp->__Vcoverage[3135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__shamt_reg_out 
            = ((0x2fU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__shamt_reg_out)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt_reg_out)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt_reg_out) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__shamt_reg_out)))) {
        vlSymsp->__Vcoverage[3136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__shamt_reg_out 
            = ((0x1fU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__shamt_reg_out)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt_reg_out)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__counter) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[3230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT____Vtogcov__counter 
            = ((0x3eU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT____Vtogcov__counter)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__counter)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__counter) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[3231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT____Vtogcov__counter 
            = ((0x3dU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT____Vtogcov__counter)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__counter)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__counter) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[3232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT____Vtogcov__counter 
            = ((0x3bU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT____Vtogcov__counter)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__counter)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__counter) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[3233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT____Vtogcov__counter 
            = ((0x37U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT____Vtogcov__counter)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__counter)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__counter) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[3234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT____Vtogcov__counter 
            = ((0x2fU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT____Vtogcov__counter)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__counter)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__counter) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[3235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT____Vtogcov__counter 
            = ((0x1fU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT____Vtogcov__counter)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__counter)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[1919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7eU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[1920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7dU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[1921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7bU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[1922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x77U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[1923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x6fU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[1924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x5fU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[1925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x3fU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_unpack__DOT__funct7)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7eU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7dU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x7bU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x77U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x6fU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x5fU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)))) {
        vlSymsp->__Vcoverage[2682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7 
            = ((0x3fU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT____Vtogcov__funct7)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_unpack__DOT__funct7)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)))) {
        vlSymsp->__Vcoverage[3506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct 
            = ((0x7eU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)))) {
        vlSymsp->__Vcoverage[3507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct 
            = ((0x7dU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)))) {
        vlSymsp->__Vcoverage[3508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct 
            = ((0x7bU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)))) {
        vlSymsp->__Vcoverage[3509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct 
            = ((0x77U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)))) {
        vlSymsp->__Vcoverage[3510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct 
            = ((0x6fU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)))) {
        vlSymsp->__Vcoverage[3511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct 
            = ((0x5fU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)))) {
        vlSymsp->__Vcoverage[3512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct 
            = ((0x3fU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xffeU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xffdU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xffbU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xff7U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xfefU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xfdfU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xfbfU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xf7fU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xeffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xdffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0xbffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)))) {
        vlSymsp->__Vcoverage[3505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr 
            = ((0x7ffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr)) 
               | (0x800U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xffeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xffdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xffbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xff7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xfefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xfdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xfbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xf7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xeffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xdffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xbffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0x7ffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[4641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3ffeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[4642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3ffdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[4643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3ffbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[4644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3ff7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[4645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3fefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[4646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3fdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[4647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3fbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[4648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3f7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[4649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3effU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[4650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3dffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[4651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x3bffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[4652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x37ffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[4653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x2fffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)))) {
        vlSymsp->__Vcoverage[4654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr 
            = ((0x1fffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_byte_addr)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_byte_addr)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)))) {
        vlSymsp->__Vcoverage[3478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__funct_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[3803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_str)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xffefU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xefffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str) 
                    ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)))) {
        vlSymsp->__Vcoverage[5878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_str)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_str)));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfffffeU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (1U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfffffdU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (2U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfffffbU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (4U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfffff7U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (8U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xffffefU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xffffdfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xffffbfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xffff7fU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfffeffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfffdffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfffbffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfff7ffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xffefffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xffdfffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xffbfffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xff7fffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfeffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfdffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xfbffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xf7ffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xefffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xdfffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0xbfffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str))) {
        vlSymsp->__Vcoverage[3342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str 
            = ((0x7fffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs1_str) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfffffeU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (1U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfffffdU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (2U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfffffbU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (4U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfffff7U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (8U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xffffefU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xffffdfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xffffbfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xffff7fU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfffeffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfffdffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfffbffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfff7ffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xffefffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xffdfffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xffbfffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xff7fffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfeffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfdffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xfbffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xf7ffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xefffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xdfffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0xbfffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str))) {
        vlSymsp->__Vcoverage[3366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str 
            = ((0x7fffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rs2_str) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfffffeU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (1U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfffffdU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (2U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfffffbU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (4U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfffff7U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (8U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xffffefU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xffffdfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xffffbfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xffff7fU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfffeffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfffdffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfffbffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfff7ffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xffefffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xffdfffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xffbfffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xff7fffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfeffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfdffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xfbffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xf7ffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xefffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xdfffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0xbfffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str))) {
        vlSymsp->__Vcoverage[3390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str 
            = ((0x7fffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__rd_str) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str));
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D = 
        (((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
            | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
           | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
          | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
         & ((0x13U != vlSelf->top__DOT__DUT__DOT__inst_D) 
            & ((0x33U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
               & ((0x2003U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                  & ((0x1063U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                     & ((0x2073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                        & (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))))))));
    if ((2U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (2U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((4U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (4U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((8U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (8U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x10U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x10U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x20U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x20U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x40U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x40U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x80U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x80U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x100U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x100U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x200U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x200U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x400U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[1999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x400U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x800U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x800U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x1000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x1000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x2000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x2000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x4000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x4000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x8000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x8000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x10000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x10000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x20000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x20000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x40000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x40000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x80000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x80000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x100000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x100000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x200000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x200000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x400000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x400000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x800000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x800000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x1000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x1000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x2000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x2000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x4000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x4000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x8000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x8000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x10000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x10000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x20000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x20000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x40000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x40000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if (((((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x80000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[2936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out));
    }
    if ((1U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffffeU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (1U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((2U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffffdU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (2U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((4U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffffbU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (4U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((8U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffff7U 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (8U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x10U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffffefU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x10U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x20U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffffdfU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x20U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x40U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffffbfU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x40U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x80U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffff7fU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x80U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x100U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffeffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x100U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x200U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffdffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x200U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x400U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffffbffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x400U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x800U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffff7ffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x800U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x1000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffefffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x1000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x2000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffdfffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x2000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x4000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffffbfffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x4000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x8000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffff7fffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x8000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x10000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffeffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x10000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x20000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffdffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x20000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x40000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfffbffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x40000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x80000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfff7ffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x80000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x100000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffefffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x100000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x200000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffdfffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x200000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x400000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xffbfffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x400000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x800000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xff7fffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x800000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x1000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfeffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x1000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x2000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfdffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x2000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x4000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xfbffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x4000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x8000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xf7ffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x8000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x10000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xefffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x10000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x20000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xdfffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x20000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((0x40000000U & (vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0xbfffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x40000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if (((vlSelf->top__DOT__core_id ^ vlSelf->top__DOT____Vtogcov__core_id) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__core_id = ((0x7fffffffU 
                                                 & vlSelf->top__DOT____Vtogcov__core_id) 
                                                | (0x80000000U 
                                                   & vlSelf->top__DOT__core_id));
    }
    if ((1U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
               ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffffffeU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (1U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((2U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
               ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffffffdU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (2U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((4U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
               ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffffffbU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (4U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((8U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
               ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffffff7U & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (8U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x10U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                  ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffffffefU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x10U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x20U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                  ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffffffdfU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x20U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x40U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                  ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffffffbfU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x40U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x80U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                  ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffffff7fU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x80U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x100U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                   ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffffeffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x100U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x200U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                   ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffffdffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x200U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x400U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                   ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffffbffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x400U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x800U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                   ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x800U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                    ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffffefffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x1000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                    ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffffdfffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x2000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                    ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffffbfffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x4000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                    ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffff7fffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x8000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                     ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffeffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x10000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                     ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffdffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x20000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                     ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfffbffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x40000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                     ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x80000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                      ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffefffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x100000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                      ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffdfffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x200000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                      ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xffbfffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x400000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                      ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xff7fffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x800000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                       ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfeffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x1000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                       ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfdffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x2000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                       ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xfbffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x4000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                       ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x8000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                        ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xefffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x10000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                        ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xdfffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x20000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__src__DOT__src__DOT__data_data 
                        ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0xbfffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x40000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if (((vlSelf->top__DOT__src__DOT__src__DOT__data_data 
          ^ vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data 
            = ((0x7fffffffU & vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__data_data) 
               | (0x80000000U & vlSelf->top__DOT__src__DOT__src__DOT__data_data));
    }
    if ((1U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffeU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (1U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((2U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffdU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (2U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((4U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffbU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (4U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((8U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffff7U & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (8U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffefU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffdfU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffbfU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x80U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffff7fU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x100U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffeffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x100U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x200U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffdffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x200U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x400U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffbffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x400U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x800U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffff7ffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x800U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x1000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffefffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x1000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x2000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffdfffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x2000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x4000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffbfffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x4000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x8000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffff7fffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x8000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffeffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffdffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffbffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x80000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfff7ffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x100000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffefffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x100000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x200000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffdfffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x200000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x400000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffbfffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x400000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x800000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xff7fffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x800000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x1000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfeffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x1000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x2000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfdffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x2000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x4000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfbffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x4000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x8000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xf7ffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x8000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xefffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xdfffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xbfffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if (((vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
          ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0x7fffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((1U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffeU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (1U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((2U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffdU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (2U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((4U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffbU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (4U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((8U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffff7U & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (8U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffefU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffdfU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffbfU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x80U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffff7fU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x100U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffeffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x100U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x200U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffdffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x200U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x400U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffbffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x400U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x800U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffff7ffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x800U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x1000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffefffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x1000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x2000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffdfffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x2000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x4000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffbfffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x4000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x8000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffff7fffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x8000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffeffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffdffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffbffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x80000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfff7ffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x100000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffefffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x100000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x200000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffdfffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x200000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x400000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffbfffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x400000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x800000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xff7fffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x800000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x1000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfeffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x1000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x2000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfdffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x2000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x4000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfbffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x4000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x8000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xf7ffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x8000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xefffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xdfffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xbfffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if (((vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
          ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0x7fffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((1U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (1U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (2U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (4U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (8U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if (((vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
          ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((1U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (1U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (2U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (4U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (8U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if (((vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
          ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((1U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (1U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (2U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (4U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (8U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if (((vlSelf->top__DOT__sink__DOT__sink__DOT__data_data 
          ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__data_data) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__data_data));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
               ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (1U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
               ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (2U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
               ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (4U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
               ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (8U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                  ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                  ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                  ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                  ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                   ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                   ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                   ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                   ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                    ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                    ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                    ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                    ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                     ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                     ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                     ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                     ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                      ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                      ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                      ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                      ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                       ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                       ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                       ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                       ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore))) {
        vlSymsp->__Vcoverage[1665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if (((vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
          ^ vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
          ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (1U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (2U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (4U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (8U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if (((vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
          ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (1U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (2U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (4U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (8U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W))) {
        vlSymsp->__Vcoverage[1910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if (((vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W 
          ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_W) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[1988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X))) {
        vlSymsp->__Vcoverage[2051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__br_target_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X))) {
        vlSymsp->__Vcoverage[2339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X))) {
        vlSymsp->__Vcoverage[2371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X))) {
        vlSymsp->__Vcoverage[2403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg))) {
        vlSymsp->__Vcoverage[2532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_resp_msg) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M))) {
        vlSymsp->__Vcoverage[2564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__ex_result_M) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W))) {
        vlSymsp->__Vcoverage[2628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__stats_en_W) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[2841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
          ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_num) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
          ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[4262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
          ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_num) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[4330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
          ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
}
