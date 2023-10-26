// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("tb_IntMul.v", 20, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] top.ostream_val)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] top.ostream_val)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->linetrace = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__istream_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__istream_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__istream_msg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ostream_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__istream_val_f = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ostream_rdy_f = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__istream_msg_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__istream_msg_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__linetrace = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__istream_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__istream_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__istream_msg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT____Vtogcov__ostream_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__ostream_msg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__istream_val_f = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__ostream_rdy_f = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__istream_msg_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__istream_msg_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__unnamedblk1__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__unnamedblk3__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__unnamedblk5__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__a_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__b_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__result_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__add_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__result_reg_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(4096, vlSelf->top__DOT__imul__DOT__str);
    vlSelf->top__DOT__imul__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT____Vtogcov__a_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT____Vtogcov__b_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT____Vtogcov__result_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT____Vtogcov__add_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT____Vtogcov__result_reg_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT____Vtogcov__b_lsb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT____Vtogcov__shift_mnt = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__shamt_reg_out = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__imul__DOT__datapath__DOT____Vtogcov__shamt_reg_out = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux__DOT____Vtogcov__in1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vcellout__genblk1__BRA__31__KET____DOT__ripple_carry_adder__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__ripple_carry_adder__DOT____Vtogcov__in1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__1__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__2__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__3__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__4__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__5__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__6__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__7__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__8__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__9__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__10__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__11__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__12__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__13__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__14__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__15__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__16__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__17__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__18__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__19__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__20__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__21__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__22__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__23__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__24__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__25__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__26__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__27__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__28__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__29__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__30__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__31__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux__DOT____Vtogcov__in1 = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__imul__DOT__control_unit__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__imul__DOT__control_unit__DOT__counter = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__imul__DOT__control_unit__DOT__req_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__control_unit__DOT__resp_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__current_state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__next_state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__counter = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__req_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__resp_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage);
    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles_next = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level = VL_RAND_RESET_I(4);
    vlSelf->__VdfgTmp_hc1b69633__0 = 0;
    vlSelf->__VdfgTmp_h36205fdd__0 = 0;
    vlSelf->__VdfgTmp_h7fca9df6__0 = 0;
    vlSelf->__VdfgTmp_hb397dc1b__0 = 0;
    vlSelf->__VdfgTmp_h93dd3d91__0 = 0;
    vlSelf->__VdfgTmp_h29677c5c__0 = 0;
    vlSelf->__VdfgTmp_h5adc78a4__0 = 0;
    vlSelf->__VdfgTmp_h9dab9844__0 = 0;
    vlSelf->__VdfgTmp_hb6b8a3ab__0 = 0;
    vlSelf->__VdfgTmp_hc45a9942__0 = 0;
    vlSelf->__VdfgTmp_h3e237ee5__0 = 0;
    vlSelf->__VdfgTmp_h5448fa28__0 = 0;
    vlSelf->__VdfgTmp_hc63b2d7e__0 = 0;
    vlSelf->__VdfgTmp_ha4a84782__0 = 0;
    vlSelf->__VdfgTmp_h2d0962be__0 = 0;
    vlSelf->__VdfgTmp_hd910701e__0 = 0;
    vlSelf->__VdfgTmp_h5f761249__0 = 0;
    vlSelf->__VdfgTmp_h8b63129a__0 = 0;
    vlSelf->__VdfgTmp_h4ca2b416__0 = 0;
    vlSelf->__VdfgTmp_hd46e90b3__0 = 0;
    vlSelf->__VdfgTmp_h67b1c022__0 = 0;
    vlSelf->__VdfgTmp_hbff958a0__0 = 0;
    vlSelf->__VdfgTmp_h1d34c83b__0 = 0;
    vlSelf->__VdfgTmp_h8b089081__0 = 0;
    vlSelf->__VdfgTmp_h81d8b85c__0 = 0;
    vlSelf->__VdfgTmp_h5258ea2d__0 = 0;
    vlSelf->__VdfgTmp_h5851b27f__0 = 0;
    vlSelf->__VdfgTmp_hc5359ce2__0 = 0;
    vlSelf->__VdfgTmp_h4a05e2ad__0 = 0;
    vlSelf->__VdfgTmp_h02dcba2b__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__ostream_val__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
