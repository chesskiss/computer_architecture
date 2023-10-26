// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->linetrace) ^ (IData)(vlSelf->top__DOT____Vtogcov__linetrace))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__linetrace = vlSelf->linetrace;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((~ (IData)(vlSelf->clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->top__DOT__ostream_val) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__top__DOT__ostream_val__0)));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__ostream_val__0 
        = vlSelf->top__DOT__ostream_val;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->top__DOT__reset) ^ (IData)(vlSelf->top__DOT____Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reset = vlSelf->top__DOT__reset;
    }
    if (((IData)(vlSelf->top__DOT__istream_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__istream_val))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_val = vlSelf->top__DOT__istream_val;
    }
    if (((IData)(vlSelf->top__DOT__ostream_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__ostream_rdy))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_rdy = vlSelf->top__DOT__ostream_rdy;
    }
    vlSelf->top__DOT__imul__DOT__control_unit__DOT__req_val 
        = ((IData)(vlSelf->top__DOT__istream_rdy) & (IData)(vlSelf->top__DOT__istream_val));
    vlSelf->top__DOT__imul__DOT__control_unit__DOT__resp_rdy 
        = ((IData)(vlSelf->top__DOT__ostream_rdy) & (IData)(vlSelf->top__DOT__ostream_val));
    if ((1U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (1U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((2U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (2U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((4U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (4U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((8U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (8U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x10U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x10U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x20U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x20U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x40U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x40U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x80U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x80U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x100U & (vlSelf->top__DOT__istream_msg_a 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x100U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x200U & (vlSelf->top__DOT__istream_msg_a 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x200U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x400U & (vlSelf->top__DOT__istream_msg_a 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x400U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x800U & (vlSelf->top__DOT__istream_msg_a 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x800U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x1000U & (vlSelf->top__DOT__istream_msg_a 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x1000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x2000U & (vlSelf->top__DOT__istream_msg_a 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x2000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x4000U & (vlSelf->top__DOT__istream_msg_a 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x4000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x8000U & (vlSelf->top__DOT__istream_msg_a 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x8000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x10000U & (vlSelf->top__DOT__istream_msg_a 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x10000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x20000U & (vlSelf->top__DOT__istream_msg_a 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x20000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x40000U & (vlSelf->top__DOT__istream_msg_a 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x40000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x80000U & (vlSelf->top__DOT__istream_msg_a 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x80000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x100000U & (vlSelf->top__DOT__istream_msg_a 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x100000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x200000U & (vlSelf->top__DOT__istream_msg_a 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x200000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x400000U & (vlSelf->top__DOT__istream_msg_a 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x400000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x800000U & (vlSelf->top__DOT__istream_msg_a 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x800000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x1000000U & (vlSelf->top__DOT__istream_msg_a 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x1000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x2000000U & (vlSelf->top__DOT__istream_msg_a 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x2000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x4000000U & (vlSelf->top__DOT__istream_msg_a 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x4000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x8000000U & (vlSelf->top__DOT__istream_msg_a 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x8000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x10000000U & (vlSelf->top__DOT__istream_msg_a 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x10000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x20000000U & (vlSelf->top__DOT__istream_msg_a 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x20000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x40000000U & (vlSelf->top__DOT__istream_msg_a 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x40000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if (((vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x80000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((1U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (1U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((2U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (2U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((4U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (4U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((8U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (8U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x10U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x10U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x20U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x20U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x40U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x40U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x80U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x80U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x100U & (vlSelf->top__DOT__istream_msg_b 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x100U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x200U & (vlSelf->top__DOT__istream_msg_b 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x200U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x400U & (vlSelf->top__DOT__istream_msg_b 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x400U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x800U & (vlSelf->top__DOT__istream_msg_b 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x800U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x1000U & (vlSelf->top__DOT__istream_msg_b 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x1000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x2000U & (vlSelf->top__DOT__istream_msg_b 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x2000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x4000U & (vlSelf->top__DOT__istream_msg_b 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x4000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x8000U & (vlSelf->top__DOT__istream_msg_b 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x8000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x10000U & (vlSelf->top__DOT__istream_msg_b 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x10000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x20000U & (vlSelf->top__DOT__istream_msg_b 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x20000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x40000U & (vlSelf->top__DOT__istream_msg_b 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x40000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x80000U & (vlSelf->top__DOT__istream_msg_b 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x80000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x100000U & (vlSelf->top__DOT__istream_msg_b 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x100000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x200000U & (vlSelf->top__DOT__istream_msg_b 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x200000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x400000U & (vlSelf->top__DOT__istream_msg_b 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x400000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x800000U & (vlSelf->top__DOT__istream_msg_b 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x800000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x1000000U & (vlSelf->top__DOT__istream_msg_b 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x1000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x2000000U & (vlSelf->top__DOT__istream_msg_b 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x2000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x4000000U & (vlSelf->top__DOT__istream_msg_b 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x4000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x8000000U & (vlSelf->top__DOT__istream_msg_b 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x8000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x10000000U & (vlSelf->top__DOT__istream_msg_b 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x10000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x20000000U & (vlSelf->top__DOT__istream_msg_b 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x20000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x40000000U & (vlSelf->top__DOT__istream_msg_b 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x40000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if (((vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x80000000U & vlSelf->top__DOT__istream_msg_b));
    }
    vlSelf->top__DOT__istream_msg = (((QData)((IData)(vlSelf->top__DOT__istream_msg_a)) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__istream_msg_b)));
    if (((IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__req_val) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__req_val))) {
        vlSymsp->__Vcoverage[643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__req_val 
            = vlSelf->top__DOT__imul__DOT__control_unit__DOT__req_val;
    }
    if ((0U != (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state))) {
            if ((2U == (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__resp_rdy)))) {
                    vlSymsp->__Vcoverage[652].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__imul__DOT__control_unit__DOT__resp_rdy) {
                    vlSymsp->__Vcoverage[651].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if (((IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__resp_rdy) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__resp_rdy))) {
        vlSymsp->__Vcoverage[644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__resp_rdy 
            = vlSelf->top__DOT__imul__DOT__control_unit__DOT__resp_rdy;
    }
    vlSelf->top__DOT__imul__DOT__control_unit__DOT__next_state 
        = vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state;
    if ((0U == (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__req_val)))) {
            vlSymsp->__Vcoverage[646].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__imul__DOT__control_unit__DOT__req_val) {
            vlSymsp->__Vcoverage[645].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state))) {
        if (vlSelf->top__DOT__imul__DOT__control_unit__DOT__req_val) {
            vlSelf->top__DOT__imul__DOT__control_unit__DOT__next_state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state))) {
        if ((0x20U <= (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__counter))) {
            vlSelf->top__DOT__imul__DOT__control_unit__DOT__next_state = 2U;
        }
    } else if (VL_LIKELY((2U == (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state)))) {
        if (vlSelf->top__DOT__imul__DOT__control_unit__DOT__resp_rdy) {
            vlSelf->top__DOT__imul__DOT__control_unit__DOT__next_state = 0U;
        }
    } else {
        VL_STOP_MT("IntMulAlt.v", 312, "");
    }
    if ((1U & ((IData)(vlSelf->top__DOT__istream_msg) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__istream_msg)))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffffeULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__istream_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffffdULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffffbULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffff7ULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffffefULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffffdfULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffffbfULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffff7fULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffeffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffdffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffbffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffff7ffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffefffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffdfffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffbfffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffff7fffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffeffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffdffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffbffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffff7ffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffefffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffdfffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffbfffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffff7fffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffeffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffdffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffbffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffff7ffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffefffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffdfffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffbfffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffff7fffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffeffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffdffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffbffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffff7ffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffefffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffdfffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffbfffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffff7fffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffeffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffdffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffbffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffff7ffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffefffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffdfffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffbfffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffff7fffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffeffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffdffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffbffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfff7ffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffefffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffdfffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffbfffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xff7fffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfeffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfdffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfbffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xf7ffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xefffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xdfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xbfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__istream_msg ^ vlSelf->top__DOT____Vtogcov__istream_msg) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0x7fffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3fU))))) 
                << 0x3fU));
    }
    vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
        = ((IData)(vlSelf->top__DOT__imul__DOT__a_mux_sel)
            ? ((IData)(vlSelf->top__DOT__imul__DOT__a_mux_sel)
                ? (IData)((vlSelf->top__DOT__istream_msg 
                           >> 0x20U)) : 0U) : vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
        = ((IData)(vlSelf->top__DOT__imul__DOT__b_mux_sel)
            ? ((IData)(vlSelf->top__DOT__imul__DOT__b_mux_sel)
                ? (IData)(vlSelf->top__DOT__istream_msg)
                : 0U) : vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out);
    if ((1U & ((IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__next_state) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__next_state)))) {
        vlSymsp->__Vcoverage[628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__next_state 
            = ((2U & (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__next_state)) 
               | (1U & (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__next_state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__next_state) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__next_state)))) {
        vlSymsp->__Vcoverage[629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__next_state 
            = ((1U & (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__next_state)) 
               | (2U & (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__next_state)));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
          ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((1U & (((IData)(1U) + vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__out 
            = (1U & ((IData)(1U) + vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((1U & ((1U & (((IData)(1U) + (1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out)) 
                      >> 1U)) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & (((IData)(1U) + (1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out)) 
                     >> 1U));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
          ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    vlSelf->__VdfgTmp_h36205fdd__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 1U)) 
                                               + (1U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (1U 
                                                       & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out)) 
                                                     >> 1U)))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h36205fdd__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__1__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__1__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h36205fdd__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h7fca9df6__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 2U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h36205fdd__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h7fca9df6__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__2__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__2__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h7fca9df6__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_hb397dc1b__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 3U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h7fca9df6__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_hb397dc1b__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__3__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__3__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_hb397dc1b__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h93dd3d91__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 4U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_hb397dc1b__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h93dd3d91__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__4__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__4__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h93dd3d91__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h29677c5c__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 5U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h93dd3d91__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h29677c5c__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__5__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__5__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h29677c5c__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h5adc78a4__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 6U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h29677c5c__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h5adc78a4__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__6__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__6__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h5adc78a4__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h9dab9844__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 7U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h5adc78a4__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h9dab9844__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__7__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__7__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h9dab9844__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_hb6b8a3ab__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 8U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h9dab9844__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_hb6b8a3ab__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__8__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__8__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_hb6b8a3ab__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_hc45a9942__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 9U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_hb6b8a3ab__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_hc45a9942__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__9__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__9__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_hc45a9942__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h3e237ee5__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0xaU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_hc45a9942__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h3e237ee5__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__10__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__10__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h3e237ee5__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h5448fa28__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0xbU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h3e237ee5__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h5448fa28__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__11__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__11__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h5448fa28__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_hc63b2d7e__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0xcU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h5448fa28__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_hc63b2d7e__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__12__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__12__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_hc63b2d7e__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_ha4a84782__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0xdU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_hc63b2d7e__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_ha4a84782__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__13__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__13__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_ha4a84782__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h2d0962be__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0xeU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_ha4a84782__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h2d0962be__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__14__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__14__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h2d0962be__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_hd910701e__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0xfU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h2d0962be__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_hd910701e__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__15__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__15__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_hd910701e__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h5f761249__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x10U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_hd910701e__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h5f761249__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__16__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__16__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h5f761249__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h8b63129a__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x11U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h5f761249__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h8b63129a__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__17__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__17__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h8b63129a__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h4ca2b416__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x12U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h8b63129a__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h4ca2b416__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__18__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__18__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h4ca2b416__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_hd46e90b3__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x13U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h4ca2b416__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_hd46e90b3__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__19__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__19__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_hd46e90b3__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h67b1c022__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x14U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_hd46e90b3__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h67b1c022__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__20__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__20__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h67b1c022__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_hbff958a0__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x15U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h67b1c022__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_hbff958a0__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__21__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__21__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_hbff958a0__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h1d34c83b__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x16U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_hbff958a0__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h1d34c83b__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__22__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__22__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h1d34c83b__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h8b089081__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x17U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h1d34c83b__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h8b089081__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__23__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__23__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h8b089081__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h81d8b85c__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x18U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h8b089081__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h81d8b85c__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__24__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__24__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h81d8b85c__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h5258ea2d__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x19U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h81d8b85c__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h5258ea2d__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__25__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__25__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h5258ea2d__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h5851b27f__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x1aU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h5258ea2d__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h5851b27f__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__26__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__26__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h5851b27f__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_hc5359ce2__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x1bU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h5851b27f__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_hc5359ce2__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__27__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__27__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_hc5359ce2__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h4a05e2ad__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x1cU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_hc5359ce2__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h4a05e2ad__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__28__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__28__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h4a05e2ad__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h02dcba2b__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x1dU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h4a05e2ad__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h02dcba2b__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__29__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__29__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h02dcba2b__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_hc1b69633__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x1eU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h02dcba2b__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_hc1b69633__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__30__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__30__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_hc1b69633__0) 
                     >> 1U));
    }
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vcellout__genblk1__BRA__31__KET____DOT__ripple_carry_adder__cout 
        = (1U & (((IData)(1U) + ((vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                  >> 0x1fU) + ((IData)(vlSelf->__VdfgTmp_hc1b69633__0) 
                                               >> 1U))) 
                 >> 1U));
    if (((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vcellout__genblk1__BRA__31__KET____DOT__ripple_carry_adder__cout) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__31__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__31__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vcellout__genblk1__BRA__31__KET____DOT__ripple_carry_adder__cout;
    }
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
        = (((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vcellout__genblk1__BRA__31__KET____DOT__ripple_carry_adder__cout) 
            << 0x1fU) | ((0x40000000U & ((IData)(vlSelf->__VdfgTmp_hc1b69633__0) 
                                         << 0x1dU)) 
                         | ((0x20000000U & ((IData)(vlSelf->__VdfgTmp_h02dcba2b__0) 
                                            << 0x1cU)) 
                            | ((0x10000000U & ((IData)(vlSelf->__VdfgTmp_h4a05e2ad__0) 
                                               << 0x1bU)) 
                               | ((0x8000000U & ((IData)(vlSelf->__VdfgTmp_hc5359ce2__0) 
                                                 << 0x1aU)) 
                                  | ((0x4000000U & 
                                      ((IData)(vlSelf->__VdfgTmp_h5851b27f__0) 
                                       << 0x19U)) | 
                                     ((0x2000000U & 
                                       ((IData)(vlSelf->__VdfgTmp_h5258ea2d__0) 
                                        << 0x18U)) 
                                      | ((0x1000000U 
                                          & ((IData)(vlSelf->__VdfgTmp_h81d8b85c__0) 
                                             << 0x17U)) 
                                         | ((0x800000U 
                                             & ((IData)(vlSelf->__VdfgTmp_h8b089081__0) 
                                                << 0x16U)) 
                                            | ((0x400000U 
                                                & ((IData)(vlSelf->__VdfgTmp_h1d34c83b__0) 
                                                   << 0x15U)) 
                                               | ((0x200000U 
                                                   & ((IData)(vlSelf->__VdfgTmp_hbff958a0__0) 
                                                      << 0x14U)) 
                                                  | ((0x100000U 
                                                      & ((IData)(vlSelf->__VdfgTmp_h67b1c022__0) 
                                                         << 0x13U)) 
                                                     | ((0x80000U 
                                                         & ((IData)(vlSelf->__VdfgTmp_hd46e90b3__0) 
                                                            << 0x12U)) 
                                                        | ((0x40000U 
                                                            & ((IData)(vlSelf->__VdfgTmp_h4ca2b416__0) 
                                                               << 0x11U)) 
                                                           | ((0x20000U 
                                                               & ((IData)(vlSelf->__VdfgTmp_h8b63129a__0) 
                                                                  << 0x10U)) 
                                                              | ((0x10000U 
                                                                  & ((IData)(vlSelf->__VdfgTmp_h5f761249__0) 
                                                                     << 0xfU)) 
                                                                 | ((0x8000U 
                                                                     & ((IData)(vlSelf->__VdfgTmp_hd910701e__0) 
                                                                        << 0xeU)) 
                                                                    | ((0x4000U 
                                                                        & ((IData)(vlSelf->__VdfgTmp_h2d0962be__0) 
                                                                           << 0xdU)) 
                                                                       | ((0x2000U 
                                                                           & ((IData)(vlSelf->__VdfgTmp_ha4a84782__0) 
                                                                              << 0xcU)) 
                                                                          | ((0x1000U 
                                                                              & ((IData)(vlSelf->__VdfgTmp_hc63b2d7e__0) 
                                                                                << 0xbU)) 
                                                                             | ((0x800U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h5448fa28__0) 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h3e237ee5__0) 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_hc45a9942__0) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_hb6b8a3ab__0) 
                                                                                << 7U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h9dab9844__0) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h5adc78a4__0) 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h29677c5c__0) 
                                                                                << 4U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h93dd3d91__0) 
                                                                                << 3U)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_hb397dc1b__0) 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h7fca9df6__0) 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h36205fdd__0)) 
                                                                                | (1U 
                                                                                & (((IData)(1U) 
                                                                                + 
                                                                                (1U 
                                                                                & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out)) 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
    if ((1U & (~ ((((((((0xffffffffU == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout) 
                        | (0xfffffffeU == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                       | (0xfffffffcU == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                      | (0xfffffff8U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                     | (0xfffffff0U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                    | (0xffffffe0U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                   | (0xffffffc0U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                  | (0xffffff80U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout))))) {
        if ((1U & (~ ((((((((0xffffff00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout) 
                            | (0xfffffe00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                           | (0xfffffc00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                          | (0xfffff800U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                         | (0xfffff000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                        | (0xffffe000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                       | (0xffffc000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                      | (0xffff8000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout))))) {
            if ((1U & (~ ((((((((0xffff0000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout) 
                                | (0xfffe0000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                               | (0xfffc0000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                              | (0xfff80000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                             | (0xfff00000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                            | (0xffe00000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                           | (0xffc00000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                          | (0xff800000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout))))) {
                if (((((((((0xff000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout) 
                           | (0xfe000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                          | (0xfc000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                         | (0xf8000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                        | (0xf0000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                       | (0xe0000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                      | (0xc0000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                     | (0x80000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout))) {
                    if ((0xff000000U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                        if ((0xfe000000U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                            if ((0xfc000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                vlSymsp->__Vcoverage[579].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((0xfc000000U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                if ((0xf8000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                    vlSymsp->__Vcoverage[580].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0xf8000000U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                    if ((0xf0000000U 
                                         == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                        vlSymsp->__Vcoverage[581].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((0xf0000000U 
                                         != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                        if ((0xe0000000U 
                                             == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                            vlSymsp->__Vcoverage[582].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((0xe0000000U 
                                             != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                            if ((0xc0000000U 
                                                 == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                                vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
                                            }
                                            if ((0xc0000000U 
                                                 != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                                vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((0xfe000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                            vlSymsp->__Vcoverage[578].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0xff000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                        vlSymsp->__Vcoverage[577].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((1U & (~ ((((((((0xff000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout) 
                                    | (0xfe000000U 
                                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                                   | (0xfc000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                                  | (0xf8000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                                 | (0xf0000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                                | (0xe0000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                               | (0xc0000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                              | (0x80000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout))))) {
                    if ((0U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                        vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
            if (((((((((0xffff0000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout) 
                       | (0xfffe0000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                      | (0xfffc0000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                     | (0xfff80000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                    | (0xfff00000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                   | (0xffe00000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                  | (0xffc00000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                 | (0xff800000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout))) {
                if ((0xffff0000U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                    if ((0xfffe0000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                        vlSymsp->__Vcoverage[570].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((0xfffe0000U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                        if ((0xfffc0000U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                            if ((0xfff80000U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                if ((0xfff00000U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                    if ((0xffe00000U 
                                         != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                        if ((0xffc00000U 
                                             != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                            vlSymsp->__Vcoverage[576].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((0xffc00000U 
                                             == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                            vlSymsp->__Vcoverage[575].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((0xffe00000U 
                                         == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                        vlSymsp->__Vcoverage[574].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0xfff00000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                    vlSymsp->__Vcoverage[573].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0xfff80000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                vlSymsp->__Vcoverage[572].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0xfffc0000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                            vlSymsp->__Vcoverage[571].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((0xffff0000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                    vlSymsp->__Vcoverage[569].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if (((((((((0xffffff00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout) 
                   | (0xfffffe00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                  | (0xfffffc00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                 | (0xfffff800U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                | (0xfffff000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
               | (0xffffe000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
              | (0xffffc000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
             | (0xffff8000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout))) {
            if ((0xffffff00U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                if ((0xfffffe00U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                    if ((0xfffffc00U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                        if ((0xfffff800U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                            if ((0xfffff000U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                if ((0xffffe000U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                    if ((0xffffc000U 
                                         != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                        vlSymsp->__Vcoverage[568].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((0xffffc000U 
                                         == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                        vlSymsp->__Vcoverage[567].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0xffffe000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                    vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0xfffff000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0xfffff800U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                            vlSymsp->__Vcoverage[564].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0xfffffc00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                        vlSymsp->__Vcoverage[563].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0xfffffe00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                    vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((0xffffff00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if (((((((((0xffffffffU == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout) 
               | (0xfffffffeU == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
              | (0xfffffffcU == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
             | (0xfffffff8U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
            | (0xfffffff0U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
           | (0xffffffe0U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
          | (0xffffffc0U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
         | (0xffffff80U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout))) {
        if ((0xffffffffU != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
            if ((0xfffffffeU != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                if ((0xfffffffcU != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                    if ((0xfffffff8U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                        if ((0xfffffff0U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                            vlSymsp->__Vcoverage[557].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((0xfffffff0U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                            if ((0xffffffe0U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                vlSymsp->__Vcoverage[558].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((0xffffffe0U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                if ((0xffffffc0U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                    vlSymsp->__Vcoverage[559].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0xffffffc0U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                    vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                    }
                    if ((0xfffffff8U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                        vlSymsp->__Vcoverage[556].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0xfffffffcU == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                    vlSymsp->__Vcoverage[555].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((0xfffffffeU == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                vlSymsp->__Vcoverage[554].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((0xffffffffU == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
            vlSymsp->__Vcoverage[553].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out = 1U;
        } else {
            vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out 
                = ((0xfffffffeU == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                    ? 1U : ((0xfffffffcU == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                             ? 2U : ((0xfffffff8U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                      ? 3U : ((0xfffffff0U 
                                               == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                               ? 4U
                                               : ((0xffffffe0U 
                                                   == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                                   ? 5U
                                                   : 
                                                  ((0xffffffc0U 
                                                    == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                                    ? 6U
                                                    : 7U))))));
        }
    } else if (((((((((0xffffff00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout) 
                      | (0xfffffe00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                     | (0xfffffc00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                    | (0xfffff800U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                   | (0xfffff000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                  | (0xffffe000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                 | (0xffffc000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                | (0xffff8000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout))) {
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out 
            = ((0xffffff00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                ? 8U : ((0xfffffe00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                         ? 9U : ((0xfffffc00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                  ? 0xaU : ((0xfffff800U 
                                             == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                             ? 0xbU
                                             : ((0xfffff000U 
                                                 == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                                 ? 0xcU
                                                 : 
                                                ((0xffffe000U 
                                                  == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                                  ? 0xdU
                                                  : 
                                                 ((0xffffc000U 
                                                   == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                                   ? 0xeU
                                                   : 0xfU)))))));
    } else if (((((((((0xffff0000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout) 
                      | (0xfffe0000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                     | (0xfffc0000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                    | (0xfff80000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                   | (0xfff00000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                  | (0xffe00000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                 | (0xffc00000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                | (0xff800000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout))) {
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out 
            = ((0xffff0000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                ? 0x10U : ((0xfffe0000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                            ? 0x11U : ((0xfffc0000U 
                                        == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                        ? 0x12U : (
                                                   (0xfff80000U 
                                                    == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                                    ? 0x13U
                                                    : 
                                                   ((0xfff00000U 
                                                     == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                                     ? 0x14U
                                                     : 
                                                    ((0xffe00000U 
                                                      == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                                      ? 0x15U
                                                      : 
                                                     ((0xffc00000U 
                                                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                                       ? 0x16U
                                                       : 0x17U)))))));
    } else if (((((((((0xff000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout) 
                      | (0xfe000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                     | (0xfc000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                    | (0xf8000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                   | (0xf0000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                  | (0xe0000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                 | (0xc0000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                | (0x80000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout))) {
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out 
            = ((0xff000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                ? 0x18U : ((0xfe000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                            ? 0x19U : ((0xfc000000U 
                                        == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                        ? 0x1aU : (
                                                   (0xf8000000U 
                                                    == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                                    ? 0x1bU
                                                    : 
                                                   ((0xf0000000U 
                                                     == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                                     ? 0x1cU
                                                     : 
                                                    ((0xe0000000U 
                                                      == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                                      ? 0x1dU
                                                      : 
                                                     ((0xc0000000U 
                                                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                                       ? 0x1eU
                                                       : 0x1fU)))))));
    } else if ((0U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out = 0x20U;
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (2U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (4U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (8U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if (((vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
          ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out)))) {
        vlSymsp->__Vcoverage[486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out 
            = ((0x3eU & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out)) 
               | (1U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out)))) {
        vlSymsp->__Vcoverage[487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out 
            = ((0x3dU & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out)) 
               | (2U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out)))) {
        vlSymsp->__Vcoverage[488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out 
            = ((0x3bU & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out)) 
               | (4U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out)))) {
        vlSymsp->__Vcoverage[489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out 
            = ((0x37U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out)) 
               | (8U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out) 
                  ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out)))) {
        vlSymsp->__Vcoverage[490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out 
            = ((0x2fU & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out)) 
               | (0x10U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out) 
                  ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out)))) {
        vlSymsp->__Vcoverage[491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out 
            = ((0x1fU & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out)) 
               | (0x20U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out)));
    }
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out 
        = ((1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out)
            ? ((1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out)
                ? 1U : 0U) : (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out));
    if ((1U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt)))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt 
            = ((0x3eU & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt)) 
               | (1U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt)))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt 
            = ((0x3dU & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt)) 
               | (2U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt)))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt 
            = ((0x3bU & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt)) 
               | (4U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt)))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt 
            = ((0x37U & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt)) 
               | (8U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out) 
                  ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt)))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt 
            = ((0x2fU & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt)) 
               | (0x10U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out) 
                  ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt)))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt 
            = ((0x1fU & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt)) 
               | (0x20U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vdly__top__DOT__imul__DOT__control_unit__DOT__counter;
    __Vdly__top__DOT__imul__DOT__control_unit__DOT__counter = 0;
    // Body
    vlSymsp->__Vcoverage[502].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[507].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[510].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[625].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[642].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[670].fetch_add(1, std::memory_order_relaxed);
    __Vdly__top__DOT__imul__DOT__control_unit__DOT__counter 
        = vlSelf->top__DOT__imul__DOT__control_unit__DOT__counter;
    if (vlSelf->top__DOT__reset) {
        vlSymsp->__Vcoverage[636].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[641].fetch_add(1, std::memory_order_relaxed);
        __Vdly__top__DOT__imul__DOT__control_unit__DOT__counter = 0U;
        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles = 0U;
        vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state = 0U;
    } else {
        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles 
            = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles_next;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
        vlSymsp->__Vcoverage[637].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[640].fetch_add(1, std::memory_order_relaxed);
        if ((0U == (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__next_state))) {
            vlSymsp->__Vcoverage[638].fetch_add(1, std::memory_order_relaxed);
            __Vdly__top__DOT__imul__DOT__control_unit__DOT__counter = 0U;
        } else {
            __Vdly__top__DOT__imul__DOT__control_unit__DOT__counter 
                = (0x3fU & ((IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__counter) 
                            + (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out)));
        }
        if ((0U != (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__next_state))) {
            vlSymsp->__Vcoverage[639].fetch_add(1, std::memory_order_relaxed);
        }
        vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state 
            = vlSelf->top__DOT__imul__DOT__control_unit__DOT__next_state;
    }
    if (vlSelf->top__DOT__imul__DOT__result_reg_en) {
        vlSymsp->__Vcoverage[508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
            = vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__result_reg_en)))) {
        vlSymsp->__Vcoverage[509].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
        = vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out;
    vlSelf->top__DOT__imul__DOT__datapath__DOT__shamt_reg_out 
        = vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out;
    vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
        = vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out;
    vlSelf->top__DOT__imul__DOT__control_unit__DOT__counter 
        = __Vdly__top__DOT__imul__DOT__control_unit__DOT__counter;
    if ((1U & ((IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__counter) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__counter 
            = ((0x3eU & (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__counter)) 
               | (1U & (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__counter)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__counter) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__counter 
            = ((0x3dU & (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__counter)) 
               | (2U & (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__counter)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__counter) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__counter 
            = ((0x3bU & (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__counter)) 
               | (4U & (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__counter)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__counter) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__counter 
            = ((0x37U & (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__counter)) 
               | (8U & (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__counter)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__counter) 
                  ^ (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__counter 
            = ((0x2fU & (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__counter)) 
               | (0x10U & (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__counter)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__counter) 
                  ^ (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__counter 
            = ((0x1fU & (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__counter)) 
               | (0x20U & (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__counter)));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
          ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
               ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
               ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (2U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
               ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (4U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
               ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (8U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
                  ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffffefU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x10U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
                  ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x20U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
                  ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x40U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
                  ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x80U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
                   ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x100U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
                   ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x200U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
                   ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x400U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
                   ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x800U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
                    ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffefffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x1000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
                    ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x2000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
                    ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x4000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
                    ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x8000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
                     ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x10000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
                     ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x20000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
                     ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x40000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
                     ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x80000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
                      ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffefffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x100000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
                      ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x200000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
                      ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x400000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
                      ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x800000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
                       ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x1000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
                       ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x2000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
                       ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x4000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
                       ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x8000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
                        ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xefffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x10000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
                        ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x20000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
                        ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x40000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out 
          ^ vlSelf->top__DOT____Vtogcov__ostream_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x80000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out));
    }
    vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
        = (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
           + vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
    if ((1U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__shamt_reg_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__shamt_reg_out)))) {
        vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__shamt_reg_out 
            = ((0x3eU & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__shamt_reg_out)) 
               | (1U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__shamt_reg_out)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__shamt_reg_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__shamt_reg_out)))) {
        vlSymsp->__Vcoverage[493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__shamt_reg_out 
            = ((0x3dU & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__shamt_reg_out)) 
               | (2U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__shamt_reg_out)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__shamt_reg_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__shamt_reg_out)))) {
        vlSymsp->__Vcoverage[494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__shamt_reg_out 
            = ((0x3bU & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__shamt_reg_out)) 
               | (4U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__shamt_reg_out)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__shamt_reg_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__shamt_reg_out)))) {
        vlSymsp->__Vcoverage[495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__shamt_reg_out 
            = ((0x37U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__shamt_reg_out)) 
               | (8U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__shamt_reg_out)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__shamt_reg_out) 
                  ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__shamt_reg_out)))) {
        vlSymsp->__Vcoverage[496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__shamt_reg_out 
            = ((0x2fU & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__shamt_reg_out)) 
               | (0x10U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__shamt_reg_out)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__shamt_reg_out) 
                  ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__shamt_reg_out)))) {
        vlSymsp->__Vcoverage[497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__shamt_reg_out 
            = ((0x1fU & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__shamt_reg_out)) 
               | (0x20U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__shamt_reg_out)));
    }
    if ((0x1fU >= (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__shamt_reg_out))) {
        vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
            = (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
               << (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__shamt_reg_out));
        vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
            = (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
               >> (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__shamt_reg_out));
    } else {
        vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out = 0U;
        vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out = 0U;
    }
    if ((0U != (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state))) {
            if ((2U == (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state))) {
                vlSymsp->__Vcoverage[653].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[655].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[661].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state))) {
            vlSymsp->__Vcoverage[650].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[660].fetch_add(1, std::memory_order_relaxed);
            if ((0x20U > (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__counter))) {
                vlSymsp->__Vcoverage[649].fetch_add(1, std::memory_order_relaxed);
            }
            if ((0x20U <= (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__counter))) {
                vlSymsp->__Vcoverage[648].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out))) {
                if ((1U & (~ vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out))) {
                    vlSymsp->__Vcoverage[655].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[657].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                    vlSymsp->__Vcoverage[658].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
                vlSymsp->__Vcoverage[659].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[655].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__current_state)))) {
        vlSymsp->__Vcoverage[626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__current_state 
            = ((2U & (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__current_state)) 
               | (1U & (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__current_state)))) {
        vlSymsp->__Vcoverage[627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__current_state 
            = ((1U & (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__current_state)) 
               | (2U & (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state)));
    }
    if ((1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
        if ((1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
            vlSymsp->__Vcoverage[622].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out))) {
            vlSymsp->__Vcoverage[623].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out))) {
        vlSymsp->__Vcoverage[621].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__b_lsb)))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b_lsb 
            = (1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out);
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
          ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out));
    }
    if ((0U == (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state))) {
        vlSymsp->__Vcoverage[647].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[656].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[655].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0U == (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state))) {
        vlSelf->top__DOT__istream_rdy = 1U;
        vlSelf->top__DOT__ostream_val = 0U;
        vlSelf->top__DOT__imul__DOT__a_mux_sel = 1U;
        vlSelf->top__DOT__imul__DOT__b_mux_sel = 1U;
        vlSelf->top__DOT__imul__DOT__result_mux_sel = 1U;
        vlSelf->top__DOT__imul__DOT__add_mux_sel = 0U;
        vlSelf->top__DOT__imul__DOT__result_reg_en = 1U;
    } else if ((1U == (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state))) {
        if ((1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
            vlSelf->top__DOT__istream_rdy = 0U;
            vlSelf->top__DOT__ostream_val = 0U;
            vlSelf->top__DOT__imul__DOT__a_mux_sel = 0U;
            vlSelf->top__DOT__imul__DOT__b_mux_sel = 0U;
            vlSelf->top__DOT__imul__DOT__result_mux_sel = 0U;
            vlSelf->top__DOT__imul__DOT__add_mux_sel = 0U;
            vlSelf->top__DOT__imul__DOT__result_reg_en = 1U;
        } else if ((1U & (~ vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out))) {
            vlSelf->top__DOT__istream_rdy = 0U;
            vlSelf->top__DOT__ostream_val = 0U;
            vlSelf->top__DOT__imul__DOT__a_mux_sel = 0U;
            vlSelf->top__DOT__imul__DOT__b_mux_sel = 0U;
            vlSelf->top__DOT__imul__DOT__result_mux_sel = 0U;
            vlSelf->top__DOT__imul__DOT__add_mux_sel = 1U;
            vlSelf->top__DOT__imul__DOT__result_reg_en = 1U;
        }
    } else if (VL_LIKELY((2U == (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state)))) {
        vlSelf->top__DOT__istream_rdy = 0U;
        vlSelf->top__DOT__ostream_val = 1U;
        vlSelf->top__DOT__imul__DOT__a_mux_sel = 1U;
        vlSelf->top__DOT__imul__DOT__b_mux_sel = 1U;
        vlSelf->top__DOT__imul__DOT__result_mux_sel = 1U;
        vlSelf->top__DOT__imul__DOT__add_mux_sel = 0U;
        vlSelf->top__DOT__imul__DOT__result_reg_en = 1U;
    } else {
        VL_STOP_MT("IntMulAlt.v", 345, "");
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
          ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out 
          ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out 
          ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out));
    }
    if (((IData)(vlSelf->top__DOT__imul__DOT__result_reg_en) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__result_reg_en))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__result_reg_en 
            = vlSelf->top__DOT__imul__DOT__result_reg_en;
    }
    if (((IData)(vlSelf->top__DOT__istream_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__istream_rdy))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_rdy = vlSelf->top__DOT__istream_rdy;
    }
    if (((IData)(vlSelf->top__DOT__ostream_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__ostream_val))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_val = vlSelf->top__DOT__ostream_val;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__result_mux_sel)))) {
        vlSymsp->__Vcoverage[512].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__imul__DOT__result_mux_sel) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__result_mux_sel))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__result_mux_sel 
            = vlSelf->top__DOT__imul__DOT__result_mux_sel;
    }
    if (vlSelf->top__DOT__imul__DOT__a_mux_sel) {
        if (vlSelf->top__DOT__imul__DOT__a_mux_sel) {
            vlSymsp->__Vcoverage[499].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__a_mux_sel)))) {
            vlSymsp->__Vcoverage[500].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__a_mux_sel)))) {
        vlSymsp->__Vcoverage[498].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__imul__DOT__a_mux_sel) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__a_mux_sel))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a_mux_sel 
            = vlSelf->top__DOT__imul__DOT__a_mux_sel;
    }
    if (vlSelf->top__DOT__imul__DOT__add_mux_sel) {
        if (vlSelf->top__DOT__imul__DOT__add_mux_sel) {
            vlSymsp->__Vcoverage[517].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
                = vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out;
        } else {
            vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__add_mux_sel)))) {
            vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
            = vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out;
    }
    if (vlSelf->top__DOT__imul__DOT__result_mux_sel) {
        if (vlSelf->top__DOT__imul__DOT__result_mux_sel) {
            vlSymsp->__Vcoverage[513].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__result_mux_sel)))) {
            vlSymsp->__Vcoverage[514].fetch_add(1, std::memory_order_relaxed);
        }
        vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out = 0U;
    } else {
        vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
            = vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__add_mux_sel)))) {
        vlSymsp->__Vcoverage[516].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__imul__DOT__add_mux_sel) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__add_mux_sel))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_mux_sel 
            = vlSelf->top__DOT__imul__DOT__add_mux_sel;
    }
    if (vlSelf->top__DOT__imul__DOT__b_mux_sel) {
        if (vlSelf->top__DOT__imul__DOT__b_mux_sel) {
            vlSymsp->__Vcoverage[504].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__b_mux_sel)))) {
            vlSymsp->__Vcoverage[505].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__b_mux_sel)))) {
        vlSymsp->__Vcoverage[503].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__imul__DOT__b_mux_sel) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__b_mux_sel))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b_mux_sel 
            = vlSelf->top__DOT__imul__DOT__b_mux_sel;
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out 
          ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
          ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->top__DOT__reset) ^ (IData)(vlSelf->top__DOT____Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reset = vlSelf->top__DOT__reset;
    }
    if (((IData)(vlSelf->top__DOT__istream_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__istream_val))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_val = vlSelf->top__DOT__istream_val;
    }
    if (((IData)(vlSelf->top__DOT__ostream_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__ostream_rdy))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_rdy = vlSelf->top__DOT__ostream_rdy;
    }
    if ((1U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (1U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((2U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (2U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((4U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (4U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((8U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (8U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x10U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x10U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x20U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x20U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x40U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x40U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x80U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x80U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x100U & (vlSelf->top__DOT__istream_msg_a 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x100U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x200U & (vlSelf->top__DOT__istream_msg_a 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x200U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x400U & (vlSelf->top__DOT__istream_msg_a 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x400U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x800U & (vlSelf->top__DOT__istream_msg_a 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x800U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x1000U & (vlSelf->top__DOT__istream_msg_a 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x1000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x2000U & (vlSelf->top__DOT__istream_msg_a 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x2000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x4000U & (vlSelf->top__DOT__istream_msg_a 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x4000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x8000U & (vlSelf->top__DOT__istream_msg_a 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x8000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x10000U & (vlSelf->top__DOT__istream_msg_a 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x10000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x20000U & (vlSelf->top__DOT__istream_msg_a 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x20000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x40000U & (vlSelf->top__DOT__istream_msg_a 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x40000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x80000U & (vlSelf->top__DOT__istream_msg_a 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x80000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x100000U & (vlSelf->top__DOT__istream_msg_a 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x100000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x200000U & (vlSelf->top__DOT__istream_msg_a 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x200000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x400000U & (vlSelf->top__DOT__istream_msg_a 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x400000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x800000U & (vlSelf->top__DOT__istream_msg_a 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x800000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x1000000U & (vlSelf->top__DOT__istream_msg_a 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x1000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x2000000U & (vlSelf->top__DOT__istream_msg_a 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x2000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x4000000U & (vlSelf->top__DOT__istream_msg_a 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x4000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x8000000U & (vlSelf->top__DOT__istream_msg_a 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x8000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x10000000U & (vlSelf->top__DOT__istream_msg_a 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x10000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x20000000U & (vlSelf->top__DOT__istream_msg_a 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x20000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x40000000U & (vlSelf->top__DOT__istream_msg_a 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x40000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if (((vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x80000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((1U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (1U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((2U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (2U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((4U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (4U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((8U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (8U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x10U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x10U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x20U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x20U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x40U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x40U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x80U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x80U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x100U & (vlSelf->top__DOT__istream_msg_b 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x100U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x200U & (vlSelf->top__DOT__istream_msg_b 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x200U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x400U & (vlSelf->top__DOT__istream_msg_b 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x400U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x800U & (vlSelf->top__DOT__istream_msg_b 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x800U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x1000U & (vlSelf->top__DOT__istream_msg_b 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x1000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x2000U & (vlSelf->top__DOT__istream_msg_b 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x2000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x4000U & (vlSelf->top__DOT__istream_msg_b 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x4000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x8000U & (vlSelf->top__DOT__istream_msg_b 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x8000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x10000U & (vlSelf->top__DOT__istream_msg_b 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x10000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x20000U & (vlSelf->top__DOT__istream_msg_b 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x20000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x40000U & (vlSelf->top__DOT__istream_msg_b 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x40000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x80000U & (vlSelf->top__DOT__istream_msg_b 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x80000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x100000U & (vlSelf->top__DOT__istream_msg_b 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x100000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x200000U & (vlSelf->top__DOT__istream_msg_b 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x200000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x400000U & (vlSelf->top__DOT__istream_msg_b 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x400000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x800000U & (vlSelf->top__DOT__istream_msg_b 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x800000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x1000000U & (vlSelf->top__DOT__istream_msg_b 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x1000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x2000000U & (vlSelf->top__DOT__istream_msg_b 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x2000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x4000000U & (vlSelf->top__DOT__istream_msg_b 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x4000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x8000000U & (vlSelf->top__DOT__istream_msg_b 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x8000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x10000000U & (vlSelf->top__DOT__istream_msg_b 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x10000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x20000000U & (vlSelf->top__DOT__istream_msg_b 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x20000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x40000000U & (vlSelf->top__DOT__istream_msg_b 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x40000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if (((vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x80000000U & vlSelf->top__DOT__istream_msg_b));
    }
    vlSelf->top__DOT__istream_msg = (((QData)((IData)(vlSelf->top__DOT__istream_msg_a)) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__istream_msg_b)));
    if ((1U & ((IData)(vlSelf->top__DOT__istream_msg) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__istream_msg)))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffffeULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__istream_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffffdULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffffbULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffff7ULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffffefULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffffdfULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffffbfULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffff7fULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffeffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffdffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffbffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffff7ffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffefffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffdfffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffbfffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffff7fffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffeffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffdffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffbffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffff7ffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffefffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffdfffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffbfffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffff7fffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffeffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffdffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffbffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffff7ffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffefffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffdfffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffbfffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffff7fffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffeffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffdffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffbffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffff7ffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffefffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffdfffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffbfffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffff7fffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffeffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffdffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffbffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffff7ffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffefffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffdfffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffbfffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffff7fffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffeffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffdffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffbffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfff7ffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffefffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffdfffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffbfffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xff7fffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfeffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfdffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfbffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xf7ffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xefffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xdfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xbfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__istream_msg ^ vlSelf->top__DOT____Vtogcov__istream_msg) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0x7fffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3fU))))) 
                << 0x3fU));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__imul__DOT__control_unit__DOT__req_val 
        = ((IData)(vlSelf->top__DOT__istream_rdy) & (IData)(vlSelf->top__DOT__istream_val));
    vlSelf->top__DOT__imul__DOT__control_unit__DOT__resp_rdy 
        = ((IData)(vlSelf->top__DOT__ostream_rdy) & (IData)(vlSelf->top__DOT__ostream_val));
    vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
        = ((IData)(vlSelf->top__DOT__imul__DOT__a_mux_sel)
            ? ((IData)(vlSelf->top__DOT__imul__DOT__a_mux_sel)
                ? (IData)((vlSelf->top__DOT__istream_msg 
                           >> 0x20U)) : 0U) : vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
        = ((IData)(vlSelf->top__DOT__imul__DOT__b_mux_sel)
            ? ((IData)(vlSelf->top__DOT__imul__DOT__b_mux_sel)
                ? (IData)(vlSelf->top__DOT__istream_msg)
                : 0U) : vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out);
    if (((IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__req_val) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__req_val))) {
        vlSymsp->__Vcoverage[643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__req_val 
            = vlSelf->top__DOT__imul__DOT__control_unit__DOT__req_val;
    }
    if ((0U != (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state))) {
            if ((2U == (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__resp_rdy)))) {
                    vlSymsp->__Vcoverage[652].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__imul__DOT__control_unit__DOT__resp_rdy) {
                    vlSymsp->__Vcoverage[651].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if (((IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__resp_rdy) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__resp_rdy))) {
        vlSymsp->__Vcoverage[644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__resp_rdy 
            = vlSelf->top__DOT__imul__DOT__control_unit__DOT__resp_rdy;
    }
    vlSelf->top__DOT__imul__DOT__control_unit__DOT__next_state 
        = vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state;
    if ((0U == (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__req_val)))) {
            vlSymsp->__Vcoverage[646].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__imul__DOT__control_unit__DOT__req_val) {
            vlSymsp->__Vcoverage[645].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state))) {
        if (vlSelf->top__DOT__imul__DOT__control_unit__DOT__req_val) {
            vlSelf->top__DOT__imul__DOT__control_unit__DOT__next_state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state))) {
        if ((0x20U <= (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__counter))) {
            vlSelf->top__DOT__imul__DOT__control_unit__DOT__next_state = 2U;
        }
    } else if (VL_LIKELY((2U == (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state)))) {
        if (vlSelf->top__DOT__imul__DOT__control_unit__DOT__resp_rdy) {
            vlSelf->top__DOT__imul__DOT__control_unit__DOT__next_state = 0U;
        }
    } else {
        VL_STOP_MT("IntMulAlt.v", 312, "");
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
          ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out));
    }
    if ((1U & (((IData)(1U) + vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__out 
            = (1U & ((IData)(1U) + vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((1U & ((1U & (((IData)(1U) + (1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out)) 
                      >> 1U)) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & (((IData)(1U) + (1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out)) 
                     >> 1U));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
          ^ vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out));
    }
    vlSelf->__VdfgTmp_h36205fdd__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 1U)) 
                                               + (1U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (1U 
                                                       & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out)) 
                                                     >> 1U)))));
    if ((1U & ((IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__next_state) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__next_state)))) {
        vlSymsp->__Vcoverage[628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__next_state 
            = ((2U & (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__next_state)) 
               | (1U & (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__next_state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__next_state) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__next_state)))) {
        vlSymsp->__Vcoverage[629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__next_state 
            = ((1U & (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__next_state)) 
               | (2U & (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__next_state)));
    }
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h36205fdd__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__1__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__1__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h36205fdd__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h7fca9df6__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 2U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h36205fdd__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h7fca9df6__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__2__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__2__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h7fca9df6__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_hb397dc1b__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 3U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h7fca9df6__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_hb397dc1b__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__3__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__3__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_hb397dc1b__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h93dd3d91__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 4U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_hb397dc1b__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h93dd3d91__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__4__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__4__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h93dd3d91__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h29677c5c__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 5U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h93dd3d91__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h29677c5c__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__5__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__5__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h29677c5c__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h5adc78a4__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 6U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h29677c5c__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h5adc78a4__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__6__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__6__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h5adc78a4__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h9dab9844__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 7U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h5adc78a4__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h9dab9844__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__7__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__7__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h9dab9844__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_hb6b8a3ab__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 8U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h9dab9844__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_hb6b8a3ab__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__8__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__8__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_hb6b8a3ab__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_hc45a9942__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 9U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_hb6b8a3ab__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_hc45a9942__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__9__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__9__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_hc45a9942__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h3e237ee5__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0xaU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_hc45a9942__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h3e237ee5__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__10__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__10__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h3e237ee5__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h5448fa28__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0xbU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h3e237ee5__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h5448fa28__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__11__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__11__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h5448fa28__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_hc63b2d7e__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0xcU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h5448fa28__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_hc63b2d7e__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__12__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__12__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_hc63b2d7e__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_ha4a84782__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0xdU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_hc63b2d7e__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_ha4a84782__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__13__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__13__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_ha4a84782__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h2d0962be__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0xeU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_ha4a84782__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h2d0962be__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__14__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__14__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h2d0962be__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_hd910701e__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0xfU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h2d0962be__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_hd910701e__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__15__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__15__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_hd910701e__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h5f761249__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x10U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_hd910701e__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h5f761249__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__16__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__16__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h5f761249__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h8b63129a__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x11U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h5f761249__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h8b63129a__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__17__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__17__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h8b63129a__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h4ca2b416__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x12U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h8b63129a__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h4ca2b416__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__18__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__18__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h4ca2b416__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_hd46e90b3__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x13U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h4ca2b416__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_hd46e90b3__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__19__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__19__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_hd46e90b3__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h67b1c022__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x14U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_hd46e90b3__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h67b1c022__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__20__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__20__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h67b1c022__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_hbff958a0__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x15U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h67b1c022__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_hbff958a0__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__21__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__21__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_hbff958a0__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h1d34c83b__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x16U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_hbff958a0__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h1d34c83b__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__22__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__22__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h1d34c83b__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h8b089081__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x17U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h1d34c83b__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h8b089081__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__23__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__23__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h8b089081__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h81d8b85c__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x18U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h8b089081__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h81d8b85c__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__24__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__24__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h81d8b85c__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h5258ea2d__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x19U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h81d8b85c__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h5258ea2d__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__25__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__25__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h5258ea2d__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h5851b27f__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x1aU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h5258ea2d__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h5851b27f__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__26__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__26__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h5851b27f__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_hc5359ce2__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x1bU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h5851b27f__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_hc5359ce2__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__27__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__27__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_hc5359ce2__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h4a05e2ad__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x1cU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_hc5359ce2__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h4a05e2ad__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__28__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__28__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h4a05e2ad__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h02dcba2b__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x1dU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h4a05e2ad__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h02dcba2b__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__29__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__29__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h02dcba2b__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_hc1b69633__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x1eU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h02dcba2b__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_hc1b69633__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__30__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__30__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_hc1b69633__0) 
                     >> 1U));
    }
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vcellout__genblk1__BRA__31__KET____DOT__ripple_carry_adder__cout 
        = (1U & (((IData)(1U) + ((vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                                  >> 0x1fU) + ((IData)(vlSelf->__VdfgTmp_hc1b69633__0) 
                                               >> 1U))) 
                 >> 1U));
    if (((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vcellout__genblk1__BRA__31__KET____DOT__ripple_carry_adder__cout) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__31__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__31__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vcellout__genblk1__BRA__31__KET____DOT__ripple_carry_adder__cout;
    }
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
        = (((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vcellout__genblk1__BRA__31__KET____DOT__ripple_carry_adder__cout) 
            << 0x1fU) | ((0x40000000U & ((IData)(vlSelf->__VdfgTmp_hc1b69633__0) 
                                         << 0x1dU)) 
                         | ((0x20000000U & ((IData)(vlSelf->__VdfgTmp_h02dcba2b__0) 
                                            << 0x1cU)) 
                            | ((0x10000000U & ((IData)(vlSelf->__VdfgTmp_h4a05e2ad__0) 
                                               << 0x1bU)) 
                               | ((0x8000000U & ((IData)(vlSelf->__VdfgTmp_hc5359ce2__0) 
                                                 << 0x1aU)) 
                                  | ((0x4000000U & 
                                      ((IData)(vlSelf->__VdfgTmp_h5851b27f__0) 
                                       << 0x19U)) | 
                                     ((0x2000000U & 
                                       ((IData)(vlSelf->__VdfgTmp_h5258ea2d__0) 
                                        << 0x18U)) 
                                      | ((0x1000000U 
                                          & ((IData)(vlSelf->__VdfgTmp_h81d8b85c__0) 
                                             << 0x17U)) 
                                         | ((0x800000U 
                                             & ((IData)(vlSelf->__VdfgTmp_h8b089081__0) 
                                                << 0x16U)) 
                                            | ((0x400000U 
                                                & ((IData)(vlSelf->__VdfgTmp_h1d34c83b__0) 
                                                   << 0x15U)) 
                                               | ((0x200000U 
                                                   & ((IData)(vlSelf->__VdfgTmp_hbff958a0__0) 
                                                      << 0x14U)) 
                                                  | ((0x100000U 
                                                      & ((IData)(vlSelf->__VdfgTmp_h67b1c022__0) 
                                                         << 0x13U)) 
                                                     | ((0x80000U 
                                                         & ((IData)(vlSelf->__VdfgTmp_hd46e90b3__0) 
                                                            << 0x12U)) 
                                                        | ((0x40000U 
                                                            & ((IData)(vlSelf->__VdfgTmp_h4ca2b416__0) 
                                                               << 0x11U)) 
                                                           | ((0x20000U 
                                                               & ((IData)(vlSelf->__VdfgTmp_h8b63129a__0) 
                                                                  << 0x10U)) 
                                                              | ((0x10000U 
                                                                  & ((IData)(vlSelf->__VdfgTmp_h5f761249__0) 
                                                                     << 0xfU)) 
                                                                 | ((0x8000U 
                                                                     & ((IData)(vlSelf->__VdfgTmp_hd910701e__0) 
                                                                        << 0xeU)) 
                                                                    | ((0x4000U 
                                                                        & ((IData)(vlSelf->__VdfgTmp_h2d0962be__0) 
                                                                           << 0xdU)) 
                                                                       | ((0x2000U 
                                                                           & ((IData)(vlSelf->__VdfgTmp_ha4a84782__0) 
                                                                              << 0xcU)) 
                                                                          | ((0x1000U 
                                                                              & ((IData)(vlSelf->__VdfgTmp_hc63b2d7e__0) 
                                                                                << 0xbU)) 
                                                                             | ((0x800U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h5448fa28__0) 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h3e237ee5__0) 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_hc45a9942__0) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_hb6b8a3ab__0) 
                                                                                << 7U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h9dab9844__0) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h5adc78a4__0) 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h29677c5c__0) 
                                                                                << 4U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h93dd3d91__0) 
                                                                                << 3U)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_hb397dc1b__0) 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h7fca9df6__0) 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h36205fdd__0)) 
                                                                                | (1U 
                                                                                & (((IData)(1U) 
                                                                                + 
                                                                                (1U 
                                                                                & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out)) 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
    if ((1U & (~ ((((((((0xffffffffU == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout) 
                        | (0xfffffffeU == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                       | (0xfffffffcU == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                      | (0xfffffff8U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                     | (0xfffffff0U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                    | (0xffffffe0U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                   | (0xffffffc0U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                  | (0xffffff80U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout))))) {
        if ((1U & (~ ((((((((0xffffff00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout) 
                            | (0xfffffe00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                           | (0xfffffc00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                          | (0xfffff800U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                         | (0xfffff000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                        | (0xffffe000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                       | (0xffffc000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                      | (0xffff8000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout))))) {
            if ((1U & (~ ((((((((0xffff0000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout) 
                                | (0xfffe0000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                               | (0xfffc0000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                              | (0xfff80000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                             | (0xfff00000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                            | (0xffe00000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                           | (0xffc00000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                          | (0xff800000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout))))) {
                if (((((((((0xff000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout) 
                           | (0xfe000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                          | (0xfc000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                         | (0xf8000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                        | (0xf0000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                       | (0xe0000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                      | (0xc0000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                     | (0x80000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout))) {
                    if ((0xff000000U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                        if ((0xfe000000U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                            if ((0xfc000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                vlSymsp->__Vcoverage[579].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((0xfc000000U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                if ((0xf8000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                    vlSymsp->__Vcoverage[580].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0xf8000000U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                    if ((0xf0000000U 
                                         == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                        vlSymsp->__Vcoverage[581].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((0xf0000000U 
                                         != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                        if ((0xe0000000U 
                                             == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                            vlSymsp->__Vcoverage[582].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((0xe0000000U 
                                             != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                            if ((0xc0000000U 
                                                 == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                                vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
                                            }
                                            if ((0xc0000000U 
                                                 != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                                vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((0xfe000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                            vlSymsp->__Vcoverage[578].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0xff000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                        vlSymsp->__Vcoverage[577].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((1U & (~ ((((((((0xff000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout) 
                                    | (0xfe000000U 
                                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                                   | (0xfc000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                                  | (0xf8000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                                 | (0xf0000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                                | (0xe0000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                               | (0xc0000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                              | (0x80000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout))))) {
                    if ((0U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                        vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
            if (((((((((0xffff0000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout) 
                       | (0xfffe0000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                      | (0xfffc0000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                     | (0xfff80000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                    | (0xfff00000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                   | (0xffe00000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                  | (0xffc00000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                 | (0xff800000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout))) {
                if ((0xffff0000U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                    if ((0xfffe0000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                        vlSymsp->__Vcoverage[570].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((0xfffe0000U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                        if ((0xfffc0000U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                            if ((0xfff80000U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                if ((0xfff00000U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                    if ((0xffe00000U 
                                         != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                        if ((0xffc00000U 
                                             != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                            vlSymsp->__Vcoverage[576].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((0xffc00000U 
                                             == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                            vlSymsp->__Vcoverage[575].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((0xffe00000U 
                                         == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                        vlSymsp->__Vcoverage[574].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0xfff00000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                    vlSymsp->__Vcoverage[573].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0xfff80000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                vlSymsp->__Vcoverage[572].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0xfffc0000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                            vlSymsp->__Vcoverage[571].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((0xffff0000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                    vlSymsp->__Vcoverage[569].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if (((((((((0xffffff00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout) 
                   | (0xfffffe00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                  | (0xfffffc00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                 | (0xfffff800U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                | (0xfffff000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
               | (0xffffe000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
              | (0xffffc000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
             | (0xffff8000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout))) {
            if ((0xffffff00U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                if ((0xfffffe00U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                    if ((0xfffffc00U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                        if ((0xfffff800U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                            if ((0xfffff000U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                if ((0xffffe000U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                    if ((0xffffc000U 
                                         != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                        vlSymsp->__Vcoverage[568].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((0xffffc000U 
                                         == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                        vlSymsp->__Vcoverage[567].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0xffffe000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                    vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0xfffff000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0xfffff800U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                            vlSymsp->__Vcoverage[564].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0xfffffc00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                        vlSymsp->__Vcoverage[563].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0xfffffe00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                    vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((0xffffff00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if (((((((((0xffffffffU == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout) 
               | (0xfffffffeU == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
              | (0xfffffffcU == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
             | (0xfffffff8U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
            | (0xfffffff0U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
           | (0xffffffe0U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
          | (0xffffffc0U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
         | (0xffffff80U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout))) {
        if ((0xffffffffU != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
            if ((0xfffffffeU != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                if ((0xfffffffcU != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                    if ((0xfffffff8U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                        if ((0xfffffff0U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                            vlSymsp->__Vcoverage[557].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((0xfffffff0U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                            if ((0xffffffe0U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                vlSymsp->__Vcoverage[558].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((0xffffffe0U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                if ((0xffffffc0U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                    vlSymsp->__Vcoverage[559].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0xffffffc0U != vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                                    vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                    }
                    if ((0xfffffff8U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                        vlSymsp->__Vcoverage[556].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0xfffffffcU == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                    vlSymsp->__Vcoverage[555].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((0xfffffffeU == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
                vlSymsp->__Vcoverage[554].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((0xffffffffU == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
            vlSymsp->__Vcoverage[553].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out = 1U;
        } else {
            vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out 
                = ((0xfffffffeU == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                    ? 1U : ((0xfffffffcU == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                             ? 2U : ((0xfffffff8U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                      ? 3U : ((0xfffffff0U 
                                               == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                               ? 4U
                                               : ((0xffffffe0U 
                                                   == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                                   ? 5U
                                                   : 
                                                  ((0xffffffc0U 
                                                    == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                                    ? 6U
                                                    : 7U))))));
        }
    } else if (((((((((0xffffff00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout) 
                      | (0xfffffe00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                     | (0xfffffc00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                    | (0xfffff800U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                   | (0xfffff000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                  | (0xffffe000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                 | (0xffffc000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                | (0xffff8000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout))) {
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out 
            = ((0xffffff00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                ? 8U : ((0xfffffe00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                         ? 9U : ((0xfffffc00U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                  ? 0xaU : ((0xfffff800U 
                                             == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                             ? 0xbU
                                             : ((0xfffff000U 
                                                 == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                                 ? 0xcU
                                                 : 
                                                ((0xffffe000U 
                                                  == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                                  ? 0xdU
                                                  : 
                                                 ((0xffffc000U 
                                                   == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                                   ? 0xeU
                                                   : 0xfU)))))));
    } else if (((((((((0xffff0000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout) 
                      | (0xfffe0000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                     | (0xfffc0000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                    | (0xfff80000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                   | (0xfff00000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                  | (0xffe00000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                 | (0xffc00000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                | (0xff800000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout))) {
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out 
            = ((0xffff0000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                ? 0x10U : ((0xfffe0000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                            ? 0x11U : ((0xfffc0000U 
                                        == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                        ? 0x12U : (
                                                   (0xfff80000U 
                                                    == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                                    ? 0x13U
                                                    : 
                                                   ((0xfff00000U 
                                                     == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                                     ? 0x14U
                                                     : 
                                                    ((0xffe00000U 
                                                      == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                                      ? 0x15U
                                                      : 
                                                     ((0xffc00000U 
                                                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                                       ? 0x16U
                                                       : 0x17U)))))));
    } else if (((((((((0xff000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout) 
                      | (0xfe000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                     | (0xfc000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                    | (0xf8000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                   | (0xf0000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                  | (0xe0000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                 | (0xc0000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) 
                | (0x80000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout))) {
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out 
            = ((0xff000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                ? 0x18U : ((0xfe000000U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                            ? 0x19U : ((0xfc000000U 
                                        == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                        ? 0x1aU : (
                                                   (0xf8000000U 
                                                    == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                                    ? 0x1bU
                                                    : 
                                                   ((0xf0000000U 
                                                     == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                                     ? 0x1cU
                                                     : 
                                                    ((0xe0000000U 
                                                      == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                                      ? 0x1dU
                                                      : 
                                                     ((0xc0000000U 
                                                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)
                                                       ? 0x1eU
                                                       : 0x1fU)))))));
    } else if ((0U == vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout)) {
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out = 0x20U;
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (2U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (4U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
               ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (8U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                  ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                   ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                    ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                     ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                      ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                       ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
                        ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if (((vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout 
          ^ vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out)))) {
        vlSymsp->__Vcoverage[486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out 
            = ((0x3eU & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out)) 
               | (1U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out)))) {
        vlSymsp->__Vcoverage[487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out 
            = ((0x3dU & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out)) 
               | (2U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out)))) {
        vlSymsp->__Vcoverage[488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out 
            = ((0x3bU & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out)) 
               | (4U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out)))) {
        vlSymsp->__Vcoverage[489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out 
            = ((0x37U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out)) 
               | (8U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out) 
                  ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out)))) {
        vlSymsp->__Vcoverage[490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out 
            = ((0x2fU & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out)) 
               | (0x10U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out) 
                  ^ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out)))) {
        vlSymsp->__Vcoverage[491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out 
            = ((0x1fU & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out)) 
               | (0x20U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out)));
    }
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out 
        = ((1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out)
            ? ((1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out)
                ? 1U : 0U) : (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out));
    if ((1U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt)))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt 
            = ((0x3eU & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt)) 
               | (1U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt)))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt 
            = ((0x3dU & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt)) 
               | (2U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt)))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt 
            = ((0x3bU & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt)) 
               | (4U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt)))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt 
            = ((0x37U & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt)) 
               | (8U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out) 
                  ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt)))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt 
            = ((0x2fU & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt)) 
               | (0x10U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out) 
                  ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt)))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt 
            = ((0x1fU & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt)) 
               | (0x20U & (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out)));
    }
}
