// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAdder.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VAdder__Syms.h"
#include "VAdder___024root.h"

VL_ATTR_COLD void VAdder___024root___eval_static(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___eval_static\n"); );
}

VL_ATTR_COLD void VAdder___024root___eval_initial(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void VAdder___024root___eval_final(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___eval_final\n"); );
}

VL_ATTR_COLD void VAdder___024root___eval_triggers__stl(VAdder___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VAdder___024root___dump_triggers__stl(VAdder___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VAdder___024root___eval_stl(VAdder___024root* vlSelf);

VL_ATTR_COLD void VAdder___024root___eval_settle(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VAdder___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VAdder___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("Adder.v", 10, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VAdder___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAdder___024root___dump_triggers__stl(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VAdder___024root___stl_sequent__TOP__0(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->ostream_val = vlSelf->sec02_Adder__DOT__val_reg;
    vlSelf->ostream_msg = (vlSelf->sec02_Adder__DOT__a_reg 
                           + vlSelf->sec02_Adder__DOT__b_reg);
    vlSelf->sec02_Adder__DOT__ostream_send = ((IData)(vlSelf->ostream_rdy) 
                                              & (IData)(vlSelf->sec02_Adder__DOT__val_reg));
    vlSelf->istream_rdy = (1U & ((~ (IData)(vlSelf->sec02_Adder__DOT__val_reg)) 
                                 | (IData)(vlSelf->sec02_Adder__DOT__ostream_send)));
    vlSelf->sec02_Adder__DOT__istream_send = ((IData)(vlSelf->istream_val) 
                                              & (IData)(vlSelf->istream_rdy));
}

VL_ATTR_COLD void VAdder___024root___eval_stl(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VAdder___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAdder___024root___dump_triggers__ico(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VAdder___024root___dump_triggers__act(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VAdder___024root___dump_triggers__nba(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VAdder___024root___ctor_var_reset(VAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->istream_val = VL_RAND_RESET_I(1);
    vlSelf->istream_rdy = VL_RAND_RESET_I(1);
    vlSelf->istream_msg = VL_RAND_RESET_Q(64);
    vlSelf->ostream_val = VL_RAND_RESET_I(1);
    vlSelf->ostream_rdy = VL_RAND_RESET_I(1);
    vlSelf->ostream_msg = VL_RAND_RESET_I(32);
    vlSelf->sec02_Adder__DOT__istream_send = VL_RAND_RESET_I(1);
    vlSelf->sec02_Adder__DOT__ostream_send = VL_RAND_RESET_I(1);
    vlSelf->sec02_Adder__DOT__val_reg = VL_RAND_RESET_I(1);
    vlSelf->sec02_Adder__DOT__a_reg = VL_RAND_RESET_I(32);
    vlSelf->sec02_Adder__DOT__b_reg = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
