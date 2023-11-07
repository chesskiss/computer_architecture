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
    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[663].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[664].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[506].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[515].fetch_add(1, std::memory_order_relaxed);
    if ((1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux__DOT____Vtogcov__in1)) {
        vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux__DOT____Vtogcov__in1 
            = (0xfffffffeU & vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux__DOT____Vtogcov__in1);
    }
    vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[586].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__ripple_carry_adder__DOT____Vtogcov__in1)))) {
        vlSymsp->__Vcoverage[587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module__DOT__ripple_carry_adder__DOT____Vtogcov__in1 = 1U;
    }
    vlSymsp->__Vcoverage[624].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux__DOT____Vtogcov__in1)))) {
        vlSymsp->__Vcoverage[620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux__DOT____Vtogcov__in1 
            = (1U | (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux__DOT____Vtogcov__in1));
    }
    vlSymsp->__Vcoverage[654].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[662].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level = 1U;
    vlSymsp->__Vcoverage[669].fetch_add(1, std::memory_order_relaxed);
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
    if ((1U & (~ vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out))) {
        vlSymsp->__Vcoverage[621].fetch_add(1, std::memory_order_relaxed);
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
    if (((IData)(vlSelf->top__DOT__istream_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__istream_val))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_val = vlSelf->top__DOT__istream_val;
    }
    if (((IData)(vlSelf->top__DOT__ostream_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__ostream_rdy))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_rdy = vlSelf->top__DOT__ostream_rdy;
    }
    if (((IData)(vlSelf->top__DOT__istream_val_f) ^ (IData)(vlSelf->top__DOT____Vtogcov__istream_val_f))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_val_f 
            = vlSelf->top__DOT__istream_val_f;
    }
    if (((IData)(vlSelf->top__DOT__ostream_rdy_f) ^ (IData)(vlSelf->top__DOT____Vtogcov__ostream_rdy_f))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_rdy_f 
            = vlSelf->top__DOT__ostream_rdy_f;
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__b_lsb)))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b_lsb 
            = (1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out);
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
    if ((1U & ((IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xeU & (IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (1U & (IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xdU & (IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (2U & (IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level 
            = ((0xbU & (IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (4U & (IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)))) {
        vlSymsp->__Vcoverage[668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level 
            = ((7U & (IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level)) 
               | (8U & (IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level)));
    }
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
    vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out 
        = (vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
           + vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
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
    if ((0U == (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__current_state))) {
        vlSymsp->__Vcoverage[647].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[656].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[655].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
        if ((1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out)) {
            vlSymsp->__Vcoverage[622].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out))) {
            vlSymsp->__Vcoverage[623].fetch_add(1, std::memory_order_relaxed);
        }
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
    vlSelf->top__DOT__istream_msg = (((QData)((IData)(vlSelf->top__DOT__istream_msg_a)) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__istream_msg_b)));
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
    vlSelf->top__DOT__imul__DOT__control_unit__DOT__req_val 
        = ((IData)(vlSelf->top__DOT__istream_rdy) & (IData)(vlSelf->top__DOT__istream_val));
    if (((IData)(vlSelf->top__DOT__ostream_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__ostream_val))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_val = vlSelf->top__DOT__ostream_val;
    }
    vlSelf->top__DOT__imul__DOT__control_unit__DOT__resp_rdy 
        = ((IData)(vlSelf->top__DOT__ostream_rdy) & (IData)(vlSelf->top__DOT__ostream_val));
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
            vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
                = (IData)((vlSelf->top__DOT__istream_msg 
                           >> 0x20U));
        } else {
            vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__a_mux_sel)))) {
            vlSymsp->__Vcoverage[500].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__imul__DOT__datapath__DOT__a_mux_out 
            = vlSelf->top__DOT__imul__DOT__datapath__DOT__a_shift_out;
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
            vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
                = (IData)(vlSelf->top__DOT__istream_msg);
        } else {
            vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__b_mux_sel)))) {
            vlSymsp->__Vcoverage[505].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__imul__DOT__datapath__DOT__b_mux_out 
            = vlSelf->top__DOT__imul__DOT__datapath__DOT__b_shift_out;
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
    if (((IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT__req_val) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__req_val))) {
        vlSymsp->__Vcoverage[643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__control_unit__DOT____Vtogcov__req_val 
            = vlSelf->top__DOT__imul__DOT__control_unit__DOT__req_val;
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
    if (vlSelf->top__DOT__imul__DOT__result_mux_sel) {
        if (vlSelf->top__DOT__imul__DOT__result_mux_sel) {
            vlSymsp->__Vcoverage[513].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__result_mux_sel)))) {
            vlSymsp->__Vcoverage[514].fetch_add(1, std::memory_order_relaxed);
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
    vlSelf->top__DOT__imul__DOT__datapath__DOT__result_mux_out 
        = ((IData)(vlSelf->top__DOT__imul__DOT__result_mux_sel)
            ? 0U : vlSelf->top__DOT__imul__DOT__datapath__DOT__add_mux_out);
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
    vlSelf->top__DOT__imul__DOT__datapath__DOT__my_mux_out 
        = ((1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out)
            ? ((1U & vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out)
                ? 1U : 0U) : (IData)(vlSelf->top__DOT__imul__DOT__datapath__DOT__my_module_out));
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

VL_ATTR_COLD void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "tb_IntMul.v", 20, 26, ".top", "v_toggle/top", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "tb_IntMul.v", 20, 43, ".top", "v_toggle/top", "linetrace", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "tb_IntMul.v", 23, 16, ".top", "v_toggle/top", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "tb_IntMul.v", 25, 16, ".top", "v_toggle/top", "istream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "tb_IntMul.v", 26, 16, ".top", "v_toggle/top", "istream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "tb_IntMul.v", 27, 16, ".top", "v_toggle/top", "istream_msg[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "tb_IntMul.v", 29, 16, ".top", "v_toggle/top", "ostream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "tb_IntMul.v", 30, 16, ".top", "v_toggle/top", "ostream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "tb_IntMul.v", 31, 16, ".top", "v_toggle/top", "ostream_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "tb_IntMul.v", 34, 16, ".top", "v_toggle/top", "istream_val_f", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "tb_IntMul.v", 35, 16, ".top", "v_toggle/top", "ostream_rdy_f", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "tb_IntMul.v", 37, 16, ".top", "v_toggle/top", "istream_msg_a[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "tb_IntMul.v", 38, 16, ".top", "v_toggle/top", "istream_msg_b[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "tb_IntMul.v", 41, 3, ".top", "v_line/top", "block", "41-43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "tb_IntMul.v", 67, 7, ".top", "v_branch/top", "if", "67-68");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "tb_IntMul.v", 67, 8, ".top", "v_branch/top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "tb_IntMul.v", 65, 5, ".top", "v_line/top", "block", "65-66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "tb_IntMul.v", 111, 5, ".top", "v_line/top", "block", "111");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "tb_IntMul.v", 115, 5, ".top", "v_branch/top", "if", "115");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "tb_IntMul.v", 115, 6, ".top", "v_branch/top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "tb_IntMul.v", 145, 5, ".top", "v_line/top", "block", "145");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "tb_IntMul.v", 179, 5, ".top", "v_line/top", "block", "179");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "tb_IntMul.v", 213, 5, ".top", "v_line/top", "block", "213");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "tb_IntMul.v", 253, 6, ".top", "v_line/top", "block", "253-254");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "tb_IntMul.v", 252, 5, ".top", "v_line/top", "block", "252-253");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "tb_IntMul.v", 309, 8, ".top", "v_line/top", "block", "309,311");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "tb_IntMul.v", 308, 2, ".top", "v_line/top", "block", "308-309");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "tb_IntMul.v", 321, 5, ".top", "v_line/top", "block", "321-322");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "tb_IntMul.v", 355, 5, ".top", "v_line/top", "block", "355");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "tb_IntMul.v", 361, 5, ".top", "v_branch/top", "if", "361");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "tb_IntMul.v", 361, 6, ".top", "v_branch/top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "IntMulAlt.v", 360, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "IntMulAlt.v", 361, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "IntMulAlt.v", 363, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "IntMulAlt.v", 364, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "IntMulAlt.v", 365, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "istream_msg[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "IntMulAlt.v", 367, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "IntMulAlt.v", 368, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "IntMulAlt.v", 369, 23, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "ostream_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "IntMulAlt.v", 372, 10, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "a_mux_sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "IntMulAlt.v", 373, 10, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "b_mux_sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "IntMulAlt.v", 374, 10, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "result_mux_sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "IntMulAlt.v", 375, 10, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "add_mux_sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "IntMulAlt.v", 376, 10, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "result_reg_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "IntMulAlt.v", 377, 11, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "b_lsb", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "IntMulAlt.v", 378, 16, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "shift_mnt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "IntMulAlt.v", 378, 16, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "shift_mnt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "IntMulAlt.v", 378, 16, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "shift_mnt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "IntMulAlt.v", 378, 16, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "shift_mnt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "IntMulAlt.v", 378, 16, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "shift_mnt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "IntMulAlt.v", 378, 16, ".top.imul", "v_toggle/lab1_imul_IntMulAlt", "shift_mnt[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "IntMulAlt.v", 83, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "IntMulAlt.v", 84, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "IntMulAlt.v", 86, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "IntMulAlt.v", 87, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "ostream_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "IntMulAlt.v", 89, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "IntMulAlt.v", 90, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "IntMulAlt.v", 91, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "IntMulAlt.v", 92, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "IntMulAlt.v", 93, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "IntMulAlt.v", 95, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_lsb", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "IntMulAlt.v", 96, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "shift_mnt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "IntMulAlt.v", 96, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "shift_mnt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "IntMulAlt.v", 96, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "shift_mnt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "IntMulAlt.v", 96, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "shift_mnt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "IntMulAlt.v", 96, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "shift_mnt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "IntMulAlt.v", 96, 23, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "shift_mnt[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "IntMulAlt.v", 99, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_a[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "IntMulAlt.v", 102, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "istream_msg_b[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "IntMulAlt.v", 105, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_reg_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "IntMulAlt.v", 106, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_mux_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "IntMulAlt.v", 107, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "a_shift_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "IntMulAlt.v", 109, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_reg_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "IntMulAlt.v", 110, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_mux_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[381]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[382]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[383]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[384]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[385]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[386]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[387]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[388]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[389]), first, "IntMulAlt.v", 111, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "b_shift_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "IntMulAlt.v", 113, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_reg_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[390]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[391]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[392]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[393]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[394]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[395]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[396]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[397]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[398]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[399]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[400]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[401]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[402]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[403]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[404]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[405]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[406]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[407]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[408]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[409]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[410]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[411]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[412]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[413]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[414]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[415]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[416]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[417]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[418]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[419]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[420]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[421]), first, "IntMulAlt.v", 114, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "result_mux_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[422]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[423]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[424]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[425]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[426]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[427]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[428]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[429]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[430]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[431]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[432]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[433]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[434]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[435]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[436]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[437]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[438]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[439]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[440]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[441]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[442]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[443]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[444]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[445]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[446]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[447]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[448]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[449]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[450]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[451]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[452]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[453]), first, "IntMulAlt.v", 116, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "adder_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[454]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[455]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[456]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[457]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[458]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[459]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[460]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[461]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[462]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[463]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[464]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[465]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[466]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[467]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[468]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[469]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[470]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[471]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[472]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[473]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[474]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[475]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[476]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[477]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[478]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[479]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[480]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[481]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[482]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[483]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[484]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[485]), first, "IntMulAlt.v", 117, 16, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "add_mux_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "IntMulAlt.v", 119, 15, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "my_mux_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "IntMulAlt.v", 119, 15, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "my_mux_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "IntMulAlt.v", 119, 15, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "my_mux_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "IntMulAlt.v", 119, 15, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "my_mux_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "IntMulAlt.v", 119, 15, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "my_mux_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "IntMulAlt.v", 119, 15, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "my_mux_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[486]), first, "IntMulAlt.v", 120, 15, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "my_module_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[487]), first, "IntMulAlt.v", 120, 15, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "my_module_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[488]), first, "IntMulAlt.v", 120, 15, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "my_module_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[489]), first, "IntMulAlt.v", 120, 15, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "my_module_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[490]), first, "IntMulAlt.v", 120, 15, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "my_module_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[491]), first, "IntMulAlt.v", 120, 15, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "my_module_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[492]), first, "IntMulAlt.v", 121, 15, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "shamt_reg_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[493]), first, "IntMulAlt.v", 121, 15, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "shamt_reg_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[494]), first, "IntMulAlt.v", 121, 15, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "shamt_reg_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[495]), first, "IntMulAlt.v", 121, 15, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "shamt_reg_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[496]), first, "IntMulAlt.v", 121, 15, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "shamt_reg_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[497]), first, "IntMulAlt.v", 121, 15, ".top.imul.datapath", "v_toggle/lab1_imul_IntMulBase_data", "shamt_reg_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in0[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "in1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "../vc/muxes.v", 17, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.a_mux", "v_toggle/vc_Mux2__P20", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[498]), first, "../vc/muxes.v", 24, 12, ".top.imul.datapath.a_mux", "v_line/vc_Mux2__P20", "case", "24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[499]), first, "../vc/muxes.v", 25, 12, ".top.imul.datapath.a_mux", "v_line/vc_Mux2__P20", "case", "25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[500]), first, "../vc/muxes.v", 26, 7, ".top.imul.datapath.a_mux", "v_line/vc_Mux2__P20", "case", "26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[501]), first, "../vc/muxes.v", 21, 3, ".top.imul.datapath.a_mux", "v_line/vc_Mux2__P20", "block", "21-23");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "../vc/regs.v", 23, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "q[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.a_reg", "v_toggle/vc_Reg__P20", "d[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[502]), first, "../vc/regs.v", 28, 3, ".top.imul.datapath.a_reg", "v_line/vc_Reg__P20", "block", "28-29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "../vc/arithmetic.v", 188, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "in[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[492]), first, "../vc/arithmetic.v", 189, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "shamt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[493]), first, "../vc/arithmetic.v", 189, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "shamt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[494]), first, "../vc/arithmetic.v", 189, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "shamt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[495]), first, "../vc/arithmetic.v", 189, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "shamt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[496]), first, "../vc/arithmetic.v", 189, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "shamt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[497]), first, "../vc/arithmetic.v", 189, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "shamt[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "../vc/arithmetic.v", 190, 36, ".top.imul.datapath.shift_a", "v_toggle/vc_LeftLogicalShifter__P20_PB6", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[381]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[382]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[383]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[384]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[385]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[386]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[387]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[388]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[389]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in0[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "in1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "../vc/muxes.v", 17, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.b_mux", "v_toggle/vc_Mux2__P20", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[503]), first, "../vc/muxes.v", 24, 12, ".top.imul.datapath.b_mux", "v_line/vc_Mux2__P20", "case", "24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[504]), first, "../vc/muxes.v", 25, 12, ".top.imul.datapath.b_mux", "v_line/vc_Mux2__P20", "case", "25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[505]), first, "../vc/muxes.v", 26, 7, ".top.imul.datapath.b_mux", "v_line/vc_Mux2__P20", "case", "26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[506]), first, "../vc/muxes.v", 21, 3, ".top.imul.datapath.b_mux", "v_line/vc_Mux2__P20", "block", "21-23");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "../vc/regs.v", 23, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "q[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.b_reg", "v_toggle/vc_Reg__P20", "d[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[507]), first, "../vc/regs.v", 28, 3, ".top.imul.datapath.b_reg", "v_line/vc_Reg__P20", "block", "28-29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "../vc/arithmetic.v", 206, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "in[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[492]), first, "../vc/arithmetic.v", 207, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "shamt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[493]), first, "../vc/arithmetic.v", 207, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "shamt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[494]), first, "../vc/arithmetic.v", 207, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "shamt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[495]), first, "../vc/arithmetic.v", 207, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "shamt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[496]), first, "../vc/arithmetic.v", 207, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "shamt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[497]), first, "../vc/arithmetic.v", 207, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "shamt[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[381]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[382]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[383]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[384]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[385]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[386]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[387]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[388]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[389]), first, "../vc/arithmetic.v", 208, 36, ".top.imul.datapath.shift_b", "v_toggle/vc_RightLogicalShifter__pi1", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "../vc/regs.v", 61, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "../vc/regs.v", 62, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "../vc/regs.v", 63, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "q[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[390]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[391]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[392]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[393]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[394]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[395]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[396]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[397]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[398]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[399]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[400]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[401]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[402]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[403]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[404]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[405]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[406]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[407]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[408]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[409]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[410]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[411]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[412]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[413]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[414]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[415]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[416]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[417]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[418]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[419]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[420]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[421]), first, "../vc/regs.v", 64, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "d[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "../vc/regs.v", 65, 30, ".top.imul.datapath.result_reg", "v_toggle/vc_EnReg__P20", "en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[508]), first, "../vc/regs.v", 69, 5, ".top.imul.datapath.result_reg", "v_branch/vc_EnReg__P20", "if", "69-70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[509]), first, "../vc/regs.v", 69, 6, ".top.imul.datapath.result_reg", "v_branch/vc_EnReg__P20", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[510]), first, "../vc/regs.v", 68, 3, ".top.imul.datapath.result_reg", "v_line/vc_EnReg__P20", "block", "68");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[454]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[455]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[456]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[457]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[458]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[459]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[460]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[461]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[462]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[463]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[464]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[465]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[466]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[467]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[468]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[469]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[470]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[471]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[472]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[473]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[474]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[475]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[476]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[477]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[478]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[479]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[480]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[481]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[482]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[483]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[484]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[485]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in0[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "in1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "../vc/muxes.v", 17, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[390]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[391]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[392]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[393]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[394]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[395]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[396]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[397]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[398]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[399]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[400]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[401]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[402]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[403]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[404]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[405]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[406]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[407]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[408]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[409]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[410]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[411]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[412]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[413]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[414]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[415]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[416]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[417]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[418]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[419]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[420]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[421]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.result_mux", "v_toggle/vc_Mux2__P20", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[512]), first, "../vc/muxes.v", 24, 12, ".top.imul.datapath.result_mux", "v_line/vc_Mux2__P20", "case", "24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[513]), first, "../vc/muxes.v", 25, 12, ".top.imul.datapath.result_mux", "v_line/vc_Mux2__P20", "case", "25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[514]), first, "../vc/muxes.v", 26, 7, ".top.imul.datapath.result_mux", "v_line/vc_Mux2__P20", "case", "26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[515]), first, "../vc/muxes.v", 21, 3, ".top.imul.datapath.result_mux", "v_line/vc_Mux2__P20", "block", "21-23");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[422]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[423]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[424]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[425]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[426]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[427]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[428]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[429]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[430]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[431]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[432]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[433]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[434]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[435]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[436]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[437]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[438]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[439]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[440]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[441]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[442]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[443]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[444]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[445]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[446]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[447]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[448]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[449]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[450]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[451]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[452]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[453]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in0[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "in1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "../vc/muxes.v", 17, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[454]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[455]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[456]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[457]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[458]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[459]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[460]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[461]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[462]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[463]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[464]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[465]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[466]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[467]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[468]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[469]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[470]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[471]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[472]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[473]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[474]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[475]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[476]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[477]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[478]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[479]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[480]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[481]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[482]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[483]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[484]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[485]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.add_mux", "v_toggle/vc_Mux2__P20", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[516]), first, "../vc/muxes.v", 24, 12, ".top.imul.datapath.add_mux", "v_line/vc_Mux2__P20", "case", "24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[517]), first, "../vc/muxes.v", 25, 12, ".top.imul.datapath.add_mux", "v_line/vc_Mux2__P20", "case", "25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[518]), first, "../vc/muxes.v", 26, 7, ".top.imul.datapath.add_mux", "v_line/vc_Mux2__P20", "case", "26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[519]), first, "../vc/muxes.v", 21, 3, ".top.imul.datapath.add_mux", "v_line/vc_Mux2__P20", "block", "21-23");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "../vc/arithmetic.v", 34, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in0[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "../vc/arithmetic.v", 35, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "in1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[422]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[423]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[424]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[425]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[426]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[427]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[428]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[429]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[430]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[431]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[432]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[433]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[434]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[435]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[436]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[437]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[438]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[439]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[440]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[441]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[442]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[443]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[444]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[445]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[446]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[447]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[448]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[449]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[450]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[451]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[452]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[453]), first, "../vc/arithmetic.v", 36, 30, ".top.imul.datapath.adder", "v_toggle/vc_SimpleAdder__P20", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "IntMulAlt.v", 16, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "in0[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[486]), first, "IntMulAlt.v", 17, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "shamt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[487]), first, "IntMulAlt.v", 17, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "shamt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[488]), first, "IntMulAlt.v", 17, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "shamt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[489]), first, "IntMulAlt.v", 17, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "shamt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[490]), first, "IntMulAlt.v", 17, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "shamt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[491]), first, "IntMulAlt.v", 17, 23, ".top.imul.datapath.my_module", "v_toggle/myModule", "shamt[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "IntMulAlt.v", 20, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "out", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[521]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[522]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[523]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[524]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[525]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[526]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[527]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[528]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[529]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[530]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[531]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[532]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[533]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[534]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[535]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[536]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[537]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[538]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[539]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[540]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[541]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[542]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[543]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[544]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[545]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[546]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[547]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[548]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[549]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[550]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[551]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[552]), first, "IntMulAlt.v", 21, 16, ".top.imul.datapath.my_module", "v_toggle/myModule", "cout[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[553]), first, "IntMulAlt.v", 40, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "40");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[554]), first, "IntMulAlt.v", 41, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "41");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[555]), first, "IntMulAlt.v", 42, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "42");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[556]), first, "IntMulAlt.v", 43, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[557]), first, "IntMulAlt.v", 44, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[558]), first, "IntMulAlt.v", 45, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[559]), first, "IntMulAlt.v", 46, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[560]), first, "IntMulAlt.v", 47, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[561]), first, "IntMulAlt.v", 48, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "48");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[562]), first, "IntMulAlt.v", 49, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[563]), first, "IntMulAlt.v", 50, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "50");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[564]), first, "IntMulAlt.v", 51, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[565]), first, "IntMulAlt.v", 52, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[566]), first, "IntMulAlt.v", 53, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "53");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[567]), first, "IntMulAlt.v", 54, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "54");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[568]), first, "IntMulAlt.v", 55, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[569]), first, "IntMulAlt.v", 56, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[570]), first, "IntMulAlt.v", 57, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "57");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[571]), first, "IntMulAlt.v", 58, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "58");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[572]), first, "IntMulAlt.v", 59, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "59");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[573]), first, "IntMulAlt.v", 60, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "60");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[574]), first, "IntMulAlt.v", 61, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "61");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[575]), first, "IntMulAlt.v", 62, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "62");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[576]), first, "IntMulAlt.v", 63, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "63");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[577]), first, "IntMulAlt.v", 64, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "64");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[578]), first, "IntMulAlt.v", 65, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[579]), first, "IntMulAlt.v", 66, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[580]), first, "IntMulAlt.v", 67, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[581]), first, "IntMulAlt.v", 68, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "68");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[582]), first, "IntMulAlt.v", 69, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "69");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[583]), first, "IntMulAlt.v", 70, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[584]), first, "IntMulAlt.v", 71, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "71");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[585]), first, "IntMulAlt.v", 72, 44, ".top.imul.datapath.my_module", "v_line/myModule", "case", "72");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[586]), first, "IntMulAlt.v", 36, 3, ".top.imul.datapath.my_module", "v_line/myModule", "block", "36-37,39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[588]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[1].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[1].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[588]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[1].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[1].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[589]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[1].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[2].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[2].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[589]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[2].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[2].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[590]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[2].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[3].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[3].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[590]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[3].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[3].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[591]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[3].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[4].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[4].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[591]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[4].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[4].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[592]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[4].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[5].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[5].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[592]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[5].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[5].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[593]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[5].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[6].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[6].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[593]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[6].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[6].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[594]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[6].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[7].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[7].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[594]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[7].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[7].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[595]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[7].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[8].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[8].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[595]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[8].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[8].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[596]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[8].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[9].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[9].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[596]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[9].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[9].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[597]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[9].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[10].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[10].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[597]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[10].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[10].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[598]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[10].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[11].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[11].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[598]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[11].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[11].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[599]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[11].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[12].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[12].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[599]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[12].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[12].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[600]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[12].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[13].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[13].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[600]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[13].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[13].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[601]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[13].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[14].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[14].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[601]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[14].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[14].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[602]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[14].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[15].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[15].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[602]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[15].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[15].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[603]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[15].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[16].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[16].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[603]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[16].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[16].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[604]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[16].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[17].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[17].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[604]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[17].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[17].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[605]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[17].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[18].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[18].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[605]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[18].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[18].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[606]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[18].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[19].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[19].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[606]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[19].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[19].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[607]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[19].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[20].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[20].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[607]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[20].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[20].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[608]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[20].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[21].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[21].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[608]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[21].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[21].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[609]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[21].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[22].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[22].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[609]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[22].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[22].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[610]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[22].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[23].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[23].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[610]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[23].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[23].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[611]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[23].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[24].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[24].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[611]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[24].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[24].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[612]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[24].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[25].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[25].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[612]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[25].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[25].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[613]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[25].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[26].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[26].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[613]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[26].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[26].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[614]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[26].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[27].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[27].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[614]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[27].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[27].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[615]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[27].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[28].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[28].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[615]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[28].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[28].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[616]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[28].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[29].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[29].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[616]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[29].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[29].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[617]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[29].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[30].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[30].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[617]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[30].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[30].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[618]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[30].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "../vc/arithmetic.v", 16, 30, ".top.imul.datapath.my_module.genblk1[31].ripple_carry_adder", "v_toggle/vc_Adder", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../vc/arithmetic.v", 17, 30, ".top.imul.datapath.my_module.genblk1[31].ripple_carry_adder", "v_toggle/vc_Adder", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[618]), first, "../vc/arithmetic.v", 18, 30, ".top.imul.datapath.my_module.genblk1[31].ripple_carry_adder", "v_toggle/vc_Adder", "cin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../vc/arithmetic.v", 19, 30, ".top.imul.datapath.my_module.genblk1[31].ripple_carry_adder", "v_toggle/vc_Adder", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[619]), first, "../vc/arithmetic.v", 20, 30, ".top.imul.datapath.my_module.genblk1[31].ripple_carry_adder", "v_toggle/vc_Adder", "cout", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[486]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.my_mux", "v_toggle/vc_Mux2__P6", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[487]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.my_mux", "v_toggle/vc_Mux2__P6", "in0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[488]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.my_mux", "v_toggle/vc_Mux2__P6", "in0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[489]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.my_mux", "v_toggle/vc_Mux2__P6", "in0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[490]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.my_mux", "v_toggle/vc_Mux2__P6", "in0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[491]), first, "../vc/muxes.v", 16, 30, ".top.imul.datapath.my_mux", "v_toggle/vc_Mux2__P6", "in0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[620]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.my_mux", "v_toggle/vc_Mux2__P6", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.my_mux", "v_toggle/vc_Mux2__P6", "in1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.my_mux", "v_toggle/vc_Mux2__P6", "in1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.my_mux", "v_toggle/vc_Mux2__P6", "in1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.my_mux", "v_toggle/vc_Mux2__P6", "in1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../vc/muxes.v", 16, 35, ".top.imul.datapath.my_mux", "v_toggle/vc_Mux2__P6", "in1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "../vc/muxes.v", 17, 30, ".top.imul.datapath.my_mux", "v_toggle/vc_Mux2__P6", "sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.my_mux", "v_toggle/vc_Mux2__P6", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.my_mux", "v_toggle/vc_Mux2__P6", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.my_mux", "v_toggle/vc_Mux2__P6", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.my_mux", "v_toggle/vc_Mux2__P6", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.my_mux", "v_toggle/vc_Mux2__P6", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "../vc/muxes.v", 18, 30, ".top.imul.datapath.my_mux", "v_toggle/vc_Mux2__P6", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[621]), first, "../vc/muxes.v", 24, 12, ".top.imul.datapath.my_mux", "v_line/vc_Mux2__P6", "case", "24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[622]), first, "../vc/muxes.v", 25, 12, ".top.imul.datapath.my_mux", "v_line/vc_Mux2__P6", "case", "25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[623]), first, "../vc/muxes.v", 26, 7, ".top.imul.datapath.my_mux", "v_line/vc_Mux2__P6", "case", "26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[624]), first, "../vc/muxes.v", 21, 3, ".top.imul.datapath.my_mux", "v_line/vc_Mux2__P6", "block", "21-23");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "../vc/regs.v", 23, 30, ".top.imul.datapath.shamt_reg", "v_toggle/vc_Reg__P6", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[492]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.shamt_reg", "v_toggle/vc_Reg__P6", "q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[493]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.shamt_reg", "v_toggle/vc_Reg__P6", "q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[494]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.shamt_reg", "v_toggle/vc_Reg__P6", "q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[495]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.shamt_reg", "v_toggle/vc_Reg__P6", "q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[496]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.shamt_reg", "v_toggle/vc_Reg__P6", "q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[497]), first, "../vc/regs.v", 24, 30, ".top.imul.datapath.shamt_reg", "v_toggle/vc_Reg__P6", "q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.shamt_reg", "v_toggle/vc_Reg__P6", "d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.shamt_reg", "v_toggle/vc_Reg__P6", "d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.shamt_reg", "v_toggle/vc_Reg__P6", "d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.shamt_reg", "v_toggle/vc_Reg__P6", "d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.shamt_reg", "v_toggle/vc_Reg__P6", "d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "../vc/regs.v", 25, 30, ".top.imul.datapath.shamt_reg", "v_toggle/vc_Reg__P6", "d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[625]), first, "../vc/regs.v", 28, 3, ".top.imul.datapath.shamt_reg", "v_line/vc_Reg__P6", "block", "28-29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "IntMulAlt.v", 256, 23, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "IntMulAlt.v", 257, 23, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "IntMulAlt.v", 259, 23, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "istream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "IntMulAlt.v", 260, 23, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "istream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "IntMulAlt.v", 261, 23, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "ostream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "IntMulAlt.v", 262, 23, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "ostream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "IntMulAlt.v", 264, 23, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "a_mux_sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "IntMulAlt.v", 265, 23, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "b_mux_sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "IntMulAlt.v", 266, 23, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "result_mux_sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "IntMulAlt.v", 267, 23, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "add_mux_sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "IntMulAlt.v", 268, 23, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "result_reg_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "IntMulAlt.v", 270, 23, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "b_lsb", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "IntMulAlt.v", 271, 23, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "shift_mnt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "IntMulAlt.v", 271, 23, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "shift_mnt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "IntMulAlt.v", 271, 23, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "shift_mnt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "IntMulAlt.v", 271, 23, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "shift_mnt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "IntMulAlt.v", 271, 23, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "shift_mnt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "IntMulAlt.v", 271, 23, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "shift_mnt[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[626]), first, "IntMulAlt.v", 276, 15, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "current_state[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[627]), first, "IntMulAlt.v", 276, 15, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "current_state[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[628]), first, "IntMulAlt.v", 277, 15, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "next_state[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[629]), first, "IntMulAlt.v", 277, 15, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "next_state[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[630]), first, "IntMulAlt.v", 278, 15, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "counter[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[631]), first, "IntMulAlt.v", 278, 15, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "counter[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[632]), first, "IntMulAlt.v", 278, 15, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "counter[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[633]), first, "IntMulAlt.v", 278, 15, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "counter[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[634]), first, "IntMulAlt.v", 278, 15, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "counter[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[635]), first, "IntMulAlt.v", 278, 15, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "counter[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[636]), first, "IntMulAlt.v", 281, 7, ".top.imul.control_unit", "v_branch/lab1_imul_IntMulBase_control", "if", "281-283");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[637]), first, "IntMulAlt.v", 281, 8, ".top.imul.control_unit", "v_branch/lab1_imul_IntMulBase_control", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[638]), first, "IntMulAlt.v", 287, 9, ".top.imul.control_unit", "v_branch/lab1_imul_IntMulBase_control", "if", "287-288");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[639]), first, "IntMulAlt.v", 287, 10, ".top.imul.control_unit", "v_branch/lab1_imul_IntMulBase_control", "else", "290");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[640]), first, "IntMulAlt.v", 285, 7, ".top.imul.control_unit", "v_branch/lab1_imul_IntMulBase_control", "if", "285-286");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[641]), first, "IntMulAlt.v", 285, 8, ".top.imul.control_unit", "v_branch/lab1_imul_IntMulBase_control", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[642]), first, "IntMulAlt.v", 280, 3, ".top.imul.control_unit", "v_line/lab1_imul_IntMulBase_control", "block", "280");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[643]), first, "IntMulAlt.v", 296, 9, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "req_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[644]), first, "IntMulAlt.v", 297, 9, ".top.imul.control_unit", "v_toggle/lab1_imul_IntMulBase_control", "resp_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[645]), first, "IntMulAlt.v", 307, 11, ".top.imul.control_unit", "v_branch/lab1_imul_IntMulBase_control", "if", "307");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[646]), first, "IntMulAlt.v", 307, 12, ".top.imul.control_unit", "v_branch/lab1_imul_IntMulBase_control", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[647]), first, "IntMulAlt.v", 306, 14, ".top.imul.control_unit", "v_line/lab1_imul_IntMulBase_control", "case", "306");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[648]), first, "IntMulAlt.v", 309, 11, ".top.imul.control_unit", "v_branch/lab1_imul_IntMulBase_control", "if", "309");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[649]), first, "IntMulAlt.v", 309, 12, ".top.imul.control_unit", "v_branch/lab1_imul_IntMulBase_control", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[650]), first, "IntMulAlt.v", 308, 14, ".top.imul.control_unit", "v_line/lab1_imul_IntMulBase_control", "case", "308");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[651]), first, "IntMulAlt.v", 311, 11, ".top.imul.control_unit", "v_branch/lab1_imul_IntMulBase_control", "if", "311");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[652]), first, "IntMulAlt.v", 311, 12, ".top.imul.control_unit", "v_branch/lab1_imul_IntMulBase_control", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[653]), first, "IntMulAlt.v", 310, 14, ".top.imul.control_unit", "v_line/lab1_imul_IntMulBase_control", "case", "310");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[654]), first, "IntMulAlt.v", 303, 3, ".top.imul.control_unit", "v_line/lab1_imul_IntMulBase_control", "block", "303-305");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[655]), first, "IntMulAlt.v", 318, 17, ".top.imul.control_unit", "v_line/lab1_imul_IntMulBase_control", "block", "318,328-335");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[656]), first, "IntMulAlt.v", 341, 14, ".top.imul.control_unit", "v_line/lab1_imul_IntMulBase_control", "case", "341");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[657]), first, "IntMulAlt.v", 343, 21, ".top.imul.control_unit", "v_branch/lab1_imul_IntMulBase_control", "if", "343");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[658]), first, "IntMulAlt.v", 343, 22, ".top.imul.control_unit", "v_branch/lab1_imul_IntMulBase_control", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[659]), first, "IntMulAlt.v", 342, 16, ".top.imul.control_unit", "v_line/lab1_imul_IntMulBase_control", "elsif", "342");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[660]), first, "IntMulAlt.v", 342, 14, ".top.imul.control_unit", "v_line/lab1_imul_IntMulBase_control", "case", "342");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[661]), first, "IntMulAlt.v", 344, 14, ".top.imul.control_unit", "v_line/lab1_imul_IntMulBase_control", "case", "344");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[662]), first, "IntMulAlt.v", 339, 3, ".top.imul.control_unit", "v_line/lab1_imul_IntMulBase_control", "block", "339-340");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "../vc/trace.v", 20, 15, ".top.imul.vc_trace", "v_toggle/vc_Trace", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "../vc/trace.v", 21, 15, ".top.imul.vc_trace", "v_toggle/vc_Trace", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[663]), first, "../vc/trace.v", 44, 25, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[664]), first, "../vc/trace.v", 45, 25, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[665]), first, "../vc/trace.v", 49, 15, ".top.imul.vc_trace", "v_toggle/vc_Trace", "level[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[666]), first, "../vc/trace.v", 49, 15, ".top.imul.vc_trace", "v_toggle/vc_Trace", "level[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[667]), first, "../vc/trace.v", 49, 15, ".top.imul.vc_trace", "v_toggle/vc_Trace", "level[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[668]), first, "../vc/trace.v", 49, 15, ".top.imul.vc_trace", "v_toggle/vc_Trace", "level[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[669]), first, "../vc/trace.v", 62, 3, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "62-65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[670]), first, "../vc/trace.v", 71, 3, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "71-72");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[671]), first, "../vc/trace.v", 89, 5, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "89-90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[672]), first, "../vc/trace.v", 95, 5, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "95-97,99-100");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[673]), first, "../vc/trace.v", 80, 8, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "80,85-86,88,93,95,103");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[674]), first, "../vc/trace.v", 123, 5, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "123-126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[675]), first, "../vc/trace.v", 113, 8, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "113,118,120-121,129");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[676]), first, "../vc/trace.v", 149, 5, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "149-153,155-156");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[677]), first, "../vc/trace.v", 139, 8, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "139,145-147,149,159");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[678]), first, "../vc/trace.v", 178, 5, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "178-179");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[679]), first, "../vc/trace.v", 184, 10, ".top.imul.vc_trace", "v_line/vc_Trace", "if", "184-185");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[680]), first, "../vc/trace.v", 184, 11, ".top.imul.vc_trace", "v_line/vc_Trace", "else", "186-188");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[681]), first, "../vc/trace.v", 182, 5, ".top.imul.vc_trace", "v_line/vc_Trace", "elsif", "182-183");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[682]), first, "../vc/trace.v", 169, 8, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "169,175,177");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[683]), first, "../vc/trace.v", 209, 5, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "209-210");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[684]), first, "../vc/trace.v", 223, 10, ".top.imul.vc_trace", "v_line/vc_Trace", "if", "223-225");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[685]), first, "../vc/trace.v", 223, 11, ".top.imul.vc_trace", "v_line/vc_Trace", "else", "227-229");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[686]), first, "../vc/trace.v", 219, 10, ".top.imul.vc_trace", "v_line/vc_Trace", "elsif", "219-221");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[687]), first, "../vc/trace.v", 216, 10, ".top.imul.vc_trace", "v_line/vc_Trace", "elsif", "216-217");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[688]), first, "../vc/trace.v", 213, 5, ".top.imul.vc_trace", "v_line/vc_Trace", "elsif", "213-214");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[689]), first, "../vc/trace.v", 199, 8, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "199,206,208");
}
