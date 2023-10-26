// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();

VlCoroutine Vtop___024root___eval_initial__TOP__1__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__1__1\n"); );
    // Init
    IData/*31:0*/ __Vtask_top__DOT__test_task__57__a;
    __Vtask_top__DOT__test_task__57__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__57__b;
    __Vtask_top__DOT__test_task__57__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__60__a;
    __Vtask_top__DOT__test_task__60__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__60__b;
    __Vtask_top__DOT__test_task__60__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__63__a;
    __Vtask_top__DOT__test_task__63__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__63__b;
    __Vtask_top__DOT__test_task__63__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__66__a;
    __Vtask_top__DOT__test_task__66__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__66__b;
    __Vtask_top__DOT__test_task__66__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__69__a;
    __Vtask_top__DOT__test_task__69__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__69__b;
    __Vtask_top__DOT__test_task__69__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__72__a;
    __Vtask_top__DOT__test_task__72__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__72__b;
    __Vtask_top__DOT__test_task__72__b = 0;
    // Body
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((vlSelf->__Vtask_top__DOT__test_task__54__a 
                        * vlSelf->__Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                          32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                      32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk7__DOT__x = 5U;
    vlSelf->__Vtask_top__DOT__test_task__54__b = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    vlSelf->__Vtask_top__DOT__test_task__54__a = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = vlSelf->__Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = vlSelf->__Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((vlSelf->__Vtask_top__DOT__test_task__54__a 
                        * vlSelf->__Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                          32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                      32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk7__DOT__x = 6U;
    vlSelf->__Vtask_top__DOT__test_task__54__b = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    vlSelf->__Vtask_top__DOT__test_task__54__a = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = vlSelf->__Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = vlSelf->__Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((vlSelf->__Vtask_top__DOT__test_task__54__a 
                        * vlSelf->__Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                          32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                      32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk7__DOT__x = 7U;
    vlSelf->__Vtask_top__DOT__test_task__54__b = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    vlSelf->__Vtask_top__DOT__test_task__54__a = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = vlSelf->__Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = vlSelf->__Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((vlSelf->__Vtask_top__DOT__test_task__54__a 
                        * vlSelf->__Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                          32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                      32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk7__DOT__x = 8U;
    vlSelf->__Vtask_top__DOT__test_task__54__b = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    vlSelf->__Vtask_top__DOT__test_task__54__a = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = vlSelf->__Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = vlSelf->__Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((vlSelf->__Vtask_top__DOT__test_task__54__a 
                        * vlSelf->__Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                          32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                      32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk7__DOT__x = 9U;
    vlSelf->__Vtask_top__DOT__test_task__54__b = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    vlSelf->__Vtask_top__DOT__test_task__54__a = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = vlSelf->__Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = vlSelf->__Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((vlSelf->__Vtask_top__DOT__test_task__54__a 
                        * vlSelf->__Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                          32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                      32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk7__DOT__x = 0xaU;
    vlSelf->__Vtask_top__DOT__test_task__54__b = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    vlSelf->__Vtask_top__DOT__test_task__54__a = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = vlSelf->__Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = vlSelf->__Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((vlSelf->__Vtask_top__DOT__test_task__54__a 
                        * vlSelf->__Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                          32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                      32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk7__DOT__x = 0xbU;
    vlSelf->__Vtask_top__DOT__test_task__54__b = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    vlSelf->__Vtask_top__DOT__test_task__54__a = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = vlSelf->__Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = vlSelf->__Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((vlSelf->__Vtask_top__DOT__test_task__54__a 
                        * vlSelf->__Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                          32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                      32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk7__DOT__x = 0xcU;
    vlSelf->__Vtask_top__DOT__test_task__54__b = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    vlSelf->__Vtask_top__DOT__test_task__54__a = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = vlSelf->__Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = vlSelf->__Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((vlSelf->__Vtask_top__DOT__test_task__54__a 
                        * vlSelf->__Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                          32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                      32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk7__DOT__x = 0xdU;
    vlSelf->__Vtask_top__DOT__test_task__54__b = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    vlSelf->__Vtask_top__DOT__test_task__54__a = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = vlSelf->__Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = vlSelf->__Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((vlSelf->__Vtask_top__DOT__test_task__54__a 
                        * vlSelf->__Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                          32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                      32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk7__DOT__x = 0xeU;
    vlSelf->__Vtask_top__DOT__test_task__54__b = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    vlSelf->__Vtask_top__DOT__test_task__54__a = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = vlSelf->__Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = vlSelf->__Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((vlSelf->__Vtask_top__DOT__test_task__54__a 
                        * vlSelf->__Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                          32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                      32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk7__DOT__x = 0xfU;
    vlSelf->__Vtask_top__DOT__test_task__54__b = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    vlSelf->__Vtask_top__DOT__test_task__54__a = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = vlSelf->__Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = vlSelf->__Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((vlSelf->__Vtask_top__DOT__test_task__54__a 
                        * vlSelf->__Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                          32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                      32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk7__DOT__x = 0x10U;
    vlSelf->__Vtask_top__DOT__test_task__54__b = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    vlSelf->__Vtask_top__DOT__test_task__54__a = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = vlSelf->__Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = vlSelf->__Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((vlSelf->__Vtask_top__DOT__test_task__54__a 
                        * vlSelf->__Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                          32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                      32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk7__DOT__x = 0x11U;
    vlSelf->__Vtask_top__DOT__test_task__54__b = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    vlSelf->__Vtask_top__DOT__test_task__54__a = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = vlSelf->__Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = vlSelf->__Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((vlSelf->__Vtask_top__DOT__test_task__54__a 
                        * vlSelf->__Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                          32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                      32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk7__DOT__x = 0x12U;
    vlSelf->__Vtask_top__DOT__test_task__54__b = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    vlSelf->__Vtask_top__DOT__test_task__54__a = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = vlSelf->__Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = vlSelf->__Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((vlSelf->__Vtask_top__DOT__test_task__54__a 
                        * vlSelf->__Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                          32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                      32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk7__DOT__x = 0x13U;
    vlSelf->__Vtask_top__DOT__test_task__54__b = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    vlSelf->__Vtask_top__DOT__test_task__54__a = (- (IData)(
                                                            VL_URANDOM_RANGE_I(0x8000U, 0U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = vlSelf->__Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = vlSelf->__Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((vlSelf->__Vtask_top__DOT__test_task__54__a 
                        * vlSelf->__Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                          32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_top__DOT__test_task__54__a,
                      32,vlSelf->__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk7__DOT__x = 0x14U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       362);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       363);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    VL_WRITEF("large positive numbers x large positive numbers\n");
    __Vtask_top__DOT__test_task__57__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__57__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__57__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__57__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__57__a 
                        * __Vtask_top__DOT__test_task__57__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__57__a,
                          32,__Vtask_top__DOT__test_task__57__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__57__a,
                      32,__Vtask_top__DOT__test_task__57__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk8__DOT__x = 1U;
    __Vtask_top__DOT__test_task__57__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__57__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__57__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__57__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__57__a 
                        * __Vtask_top__DOT__test_task__57__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__57__a,
                          32,__Vtask_top__DOT__test_task__57__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__57__a,
                      32,__Vtask_top__DOT__test_task__57__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk8__DOT__x = 2U;
    __Vtask_top__DOT__test_task__57__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__57__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__57__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__57__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__57__a 
                        * __Vtask_top__DOT__test_task__57__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__57__a,
                          32,__Vtask_top__DOT__test_task__57__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__57__a,
                      32,__Vtask_top__DOT__test_task__57__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk8__DOT__x = 3U;
    __Vtask_top__DOT__test_task__57__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__57__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__57__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__57__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__57__a 
                        * __Vtask_top__DOT__test_task__57__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__57__a,
                          32,__Vtask_top__DOT__test_task__57__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__57__a,
                      32,__Vtask_top__DOT__test_task__57__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk8__DOT__x = 4U;
    __Vtask_top__DOT__test_task__57__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__57__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__57__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__57__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__57__a 
                        * __Vtask_top__DOT__test_task__57__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__57__a,
                          32,__Vtask_top__DOT__test_task__57__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__57__a,
                      32,__Vtask_top__DOT__test_task__57__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk8__DOT__x = 5U;
    __Vtask_top__DOT__test_task__57__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__57__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__57__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__57__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__57__a 
                        * __Vtask_top__DOT__test_task__57__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__57__a,
                          32,__Vtask_top__DOT__test_task__57__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__57__a,
                      32,__Vtask_top__DOT__test_task__57__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk8__DOT__x = 6U;
    __Vtask_top__DOT__test_task__57__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__57__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__57__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__57__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__57__a 
                        * __Vtask_top__DOT__test_task__57__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__57__a,
                          32,__Vtask_top__DOT__test_task__57__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__57__a,
                      32,__Vtask_top__DOT__test_task__57__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk8__DOT__x = 7U;
    __Vtask_top__DOT__test_task__57__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__57__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__57__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__57__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__57__a 
                        * __Vtask_top__DOT__test_task__57__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__57__a,
                          32,__Vtask_top__DOT__test_task__57__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__57__a,
                      32,__Vtask_top__DOT__test_task__57__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk8__DOT__x = 8U;
    __Vtask_top__DOT__test_task__57__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__57__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__57__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__57__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__57__a 
                        * __Vtask_top__DOT__test_task__57__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__57__a,
                          32,__Vtask_top__DOT__test_task__57__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__57__a,
                      32,__Vtask_top__DOT__test_task__57__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk8__DOT__x = 9U;
    __Vtask_top__DOT__test_task__57__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__57__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__57__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__57__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__57__a 
                        * __Vtask_top__DOT__test_task__57__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__57__a,
                          32,__Vtask_top__DOT__test_task__57__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__57__a,
                      32,__Vtask_top__DOT__test_task__57__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk8__DOT__x = 0xaU;
    __Vtask_top__DOT__test_task__57__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__57__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__57__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__57__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__57__a 
                        * __Vtask_top__DOT__test_task__57__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__57__a,
                          32,__Vtask_top__DOT__test_task__57__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__57__a,
                      32,__Vtask_top__DOT__test_task__57__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk8__DOT__x = 0xbU;
    __Vtask_top__DOT__test_task__57__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__57__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__57__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__57__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__57__a 
                        * __Vtask_top__DOT__test_task__57__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__57__a,
                          32,__Vtask_top__DOT__test_task__57__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__57__a,
                      32,__Vtask_top__DOT__test_task__57__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk8__DOT__x = 0xcU;
    __Vtask_top__DOT__test_task__57__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__57__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__57__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__57__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__57__a 
                        * __Vtask_top__DOT__test_task__57__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__57__a,
                          32,__Vtask_top__DOT__test_task__57__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__57__a,
                      32,__Vtask_top__DOT__test_task__57__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk8__DOT__x = 0xdU;
    __Vtask_top__DOT__test_task__57__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__57__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__57__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__57__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__57__a 
                        * __Vtask_top__DOT__test_task__57__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__57__a,
                          32,__Vtask_top__DOT__test_task__57__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__57__a,
                      32,__Vtask_top__DOT__test_task__57__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk8__DOT__x = 0xeU;
    __Vtask_top__DOT__test_task__57__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__57__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__57__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__57__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__57__a 
                        * __Vtask_top__DOT__test_task__57__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__57__a,
                          32,__Vtask_top__DOT__test_task__57__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__57__a,
                      32,__Vtask_top__DOT__test_task__57__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk8__DOT__x = 0xfU;
    __Vtask_top__DOT__test_task__57__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__57__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__57__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__57__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__57__a 
                        * __Vtask_top__DOT__test_task__57__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__57__a,
                          32,__Vtask_top__DOT__test_task__57__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__57__a,
                      32,__Vtask_top__DOT__test_task__57__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk8__DOT__x = 0x10U;
    __Vtask_top__DOT__test_task__57__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__57__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__57__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__57__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__57__a 
                        * __Vtask_top__DOT__test_task__57__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__57__a,
                          32,__Vtask_top__DOT__test_task__57__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__57__a,
                      32,__Vtask_top__DOT__test_task__57__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk8__DOT__x = 0x11U;
    __Vtask_top__DOT__test_task__57__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__57__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__57__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__57__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__57__a 
                        * __Vtask_top__DOT__test_task__57__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__57__a,
                          32,__Vtask_top__DOT__test_task__57__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__57__a,
                      32,__Vtask_top__DOT__test_task__57__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk8__DOT__x = 0x12U;
    __Vtask_top__DOT__test_task__57__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__57__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__57__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__57__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__57__a 
                        * __Vtask_top__DOT__test_task__57__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__57__a,
                          32,__Vtask_top__DOT__test_task__57__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__57__a,
                      32,__Vtask_top__DOT__test_task__57__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk8__DOT__x = 0x13U;
    __Vtask_top__DOT__test_task__57__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__57__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__57__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__57__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__57__a 
                        * __Vtask_top__DOT__test_task__57__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__57__a,
                          32,__Vtask_top__DOT__test_task__57__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__57__a,
                      32,__Vtask_top__DOT__test_task__57__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk8__DOT__x = 0x14U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       374);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       375);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    VL_WRITEF("large positive numbers x large negative numbers\n");
    __Vtask_top__DOT__test_task__60__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__60__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__60__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__60__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__60__a 
                        * __Vtask_top__DOT__test_task__60__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__60__a,
                          32,__Vtask_top__DOT__test_task__60__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__60__a,
                      32,__Vtask_top__DOT__test_task__60__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk9__DOT__x = 1U;
    __Vtask_top__DOT__test_task__60__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__60__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__60__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__60__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__60__a 
                        * __Vtask_top__DOT__test_task__60__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__60__a,
                          32,__Vtask_top__DOT__test_task__60__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__60__a,
                      32,__Vtask_top__DOT__test_task__60__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk9__DOT__x = 2U;
    __Vtask_top__DOT__test_task__60__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__60__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__60__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__60__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__60__a 
                        * __Vtask_top__DOT__test_task__60__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__60__a,
                          32,__Vtask_top__DOT__test_task__60__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__60__a,
                      32,__Vtask_top__DOT__test_task__60__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk9__DOT__x = 3U;
    __Vtask_top__DOT__test_task__60__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__60__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__60__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__60__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__60__a 
                        * __Vtask_top__DOT__test_task__60__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__60__a,
                          32,__Vtask_top__DOT__test_task__60__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__60__a,
                      32,__Vtask_top__DOT__test_task__60__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk9__DOT__x = 4U;
    __Vtask_top__DOT__test_task__60__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__60__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__60__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__60__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__60__a 
                        * __Vtask_top__DOT__test_task__60__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__60__a,
                          32,__Vtask_top__DOT__test_task__60__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__60__a,
                      32,__Vtask_top__DOT__test_task__60__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk9__DOT__x = 5U;
    __Vtask_top__DOT__test_task__60__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__60__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__60__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__60__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__60__a 
                        * __Vtask_top__DOT__test_task__60__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__60__a,
                          32,__Vtask_top__DOT__test_task__60__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__60__a,
                      32,__Vtask_top__DOT__test_task__60__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk9__DOT__x = 6U;
    __Vtask_top__DOT__test_task__60__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__60__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__60__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__60__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__60__a 
                        * __Vtask_top__DOT__test_task__60__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__60__a,
                          32,__Vtask_top__DOT__test_task__60__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__60__a,
                      32,__Vtask_top__DOT__test_task__60__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk9__DOT__x = 7U;
    __Vtask_top__DOT__test_task__60__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__60__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__60__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__60__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__60__a 
                        * __Vtask_top__DOT__test_task__60__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__60__a,
                          32,__Vtask_top__DOT__test_task__60__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__60__a,
                      32,__Vtask_top__DOT__test_task__60__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk9__DOT__x = 8U;
    __Vtask_top__DOT__test_task__60__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__60__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__60__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__60__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__60__a 
                        * __Vtask_top__DOT__test_task__60__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__60__a,
                          32,__Vtask_top__DOT__test_task__60__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__60__a,
                      32,__Vtask_top__DOT__test_task__60__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk9__DOT__x = 9U;
    __Vtask_top__DOT__test_task__60__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__60__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__60__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__60__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__60__a 
                        * __Vtask_top__DOT__test_task__60__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__60__a,
                          32,__Vtask_top__DOT__test_task__60__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__60__a,
                      32,__Vtask_top__DOT__test_task__60__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk9__DOT__x = 0xaU;
    __Vtask_top__DOT__test_task__60__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__60__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__60__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__60__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__60__a 
                        * __Vtask_top__DOT__test_task__60__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__60__a,
                          32,__Vtask_top__DOT__test_task__60__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__60__a,
                      32,__Vtask_top__DOT__test_task__60__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk9__DOT__x = 0xbU;
    __Vtask_top__DOT__test_task__60__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__60__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__60__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__60__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__60__a 
                        * __Vtask_top__DOT__test_task__60__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__60__a,
                          32,__Vtask_top__DOT__test_task__60__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__60__a,
                      32,__Vtask_top__DOT__test_task__60__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk9__DOT__x = 0xcU;
    __Vtask_top__DOT__test_task__60__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__60__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__60__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__60__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__60__a 
                        * __Vtask_top__DOT__test_task__60__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__60__a,
                          32,__Vtask_top__DOT__test_task__60__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__60__a,
                      32,__Vtask_top__DOT__test_task__60__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk9__DOT__x = 0xdU;
    __Vtask_top__DOT__test_task__60__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__60__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__60__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__60__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__60__a 
                        * __Vtask_top__DOT__test_task__60__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__60__a,
                          32,__Vtask_top__DOT__test_task__60__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__60__a,
                      32,__Vtask_top__DOT__test_task__60__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk9__DOT__x = 0xeU;
    __Vtask_top__DOT__test_task__60__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__60__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__60__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__60__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__60__a 
                        * __Vtask_top__DOT__test_task__60__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__60__a,
                          32,__Vtask_top__DOT__test_task__60__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__60__a,
                      32,__Vtask_top__DOT__test_task__60__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk9__DOT__x = 0xfU;
    __Vtask_top__DOT__test_task__60__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__60__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__60__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__60__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__60__a 
                        * __Vtask_top__DOT__test_task__60__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__60__a,
                          32,__Vtask_top__DOT__test_task__60__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__60__a,
                      32,__Vtask_top__DOT__test_task__60__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk9__DOT__x = 0x10U;
    __Vtask_top__DOT__test_task__60__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__60__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__60__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__60__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__60__a 
                        * __Vtask_top__DOT__test_task__60__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__60__a,
                          32,__Vtask_top__DOT__test_task__60__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__60__a,
                      32,__Vtask_top__DOT__test_task__60__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk9__DOT__x = 0x11U;
    __Vtask_top__DOT__test_task__60__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__60__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__60__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__60__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__60__a 
                        * __Vtask_top__DOT__test_task__60__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__60__a,
                          32,__Vtask_top__DOT__test_task__60__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__60__a,
                      32,__Vtask_top__DOT__test_task__60__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk9__DOT__x = 0x12U;
    __Vtask_top__DOT__test_task__60__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__60__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__60__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__60__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__60__a 
                        * __Vtask_top__DOT__test_task__60__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__60__a,
                          32,__Vtask_top__DOT__test_task__60__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__60__a,
                      32,__Vtask_top__DOT__test_task__60__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk9__DOT__x = 0x13U;
    __Vtask_top__DOT__test_task__60__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__60__a = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__60__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__60__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__60__a 
                        * __Vtask_top__DOT__test_task__60__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__60__a,
                          32,__Vtask_top__DOT__test_task__60__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__60__a,
                      32,__Vtask_top__DOT__test_task__60__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk9__DOT__x = 0x14U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       385);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       386);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    VL_WRITEF("large negative numbers x large positive numbers\n");
    __Vtask_top__DOT__test_task__63__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__63__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__63__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__63__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__63__a 
                        * __Vtask_top__DOT__test_task__63__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__63__a,
                          32,__Vtask_top__DOT__test_task__63__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__63__a,
                      32,__Vtask_top__DOT__test_task__63__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk10__DOT__x = 1U;
    __Vtask_top__DOT__test_task__63__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__63__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__63__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__63__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__63__a 
                        * __Vtask_top__DOT__test_task__63__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__63__a,
                          32,__Vtask_top__DOT__test_task__63__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__63__a,
                      32,__Vtask_top__DOT__test_task__63__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk10__DOT__x = 2U;
    __Vtask_top__DOT__test_task__63__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__63__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__63__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__63__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__63__a 
                        * __Vtask_top__DOT__test_task__63__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__63__a,
                          32,__Vtask_top__DOT__test_task__63__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__63__a,
                      32,__Vtask_top__DOT__test_task__63__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk10__DOT__x = 3U;
    __Vtask_top__DOT__test_task__63__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__63__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__63__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__63__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__63__a 
                        * __Vtask_top__DOT__test_task__63__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__63__a,
                          32,__Vtask_top__DOT__test_task__63__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__63__a,
                      32,__Vtask_top__DOT__test_task__63__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk10__DOT__x = 4U;
    __Vtask_top__DOT__test_task__63__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__63__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__63__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__63__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__63__a 
                        * __Vtask_top__DOT__test_task__63__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__63__a,
                          32,__Vtask_top__DOT__test_task__63__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__63__a,
                      32,__Vtask_top__DOT__test_task__63__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk10__DOT__x = 5U;
    __Vtask_top__DOT__test_task__63__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__63__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__63__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__63__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__63__a 
                        * __Vtask_top__DOT__test_task__63__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__63__a,
                          32,__Vtask_top__DOT__test_task__63__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__63__a,
                      32,__Vtask_top__DOT__test_task__63__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk10__DOT__x = 6U;
    __Vtask_top__DOT__test_task__63__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__63__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__63__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__63__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__63__a 
                        * __Vtask_top__DOT__test_task__63__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__63__a,
                          32,__Vtask_top__DOT__test_task__63__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__63__a,
                      32,__Vtask_top__DOT__test_task__63__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk10__DOT__x = 7U;
    __Vtask_top__DOT__test_task__63__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__63__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__63__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__63__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__63__a 
                        * __Vtask_top__DOT__test_task__63__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__63__a,
                          32,__Vtask_top__DOT__test_task__63__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__63__a,
                      32,__Vtask_top__DOT__test_task__63__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk10__DOT__x = 8U;
    __Vtask_top__DOT__test_task__63__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__63__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__63__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__63__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__63__a 
                        * __Vtask_top__DOT__test_task__63__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__63__a,
                          32,__Vtask_top__DOT__test_task__63__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__63__a,
                      32,__Vtask_top__DOT__test_task__63__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk10__DOT__x = 9U;
    __Vtask_top__DOT__test_task__63__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__63__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__63__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__63__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__63__a 
                        * __Vtask_top__DOT__test_task__63__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__63__a,
                          32,__Vtask_top__DOT__test_task__63__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__63__a,
                      32,__Vtask_top__DOT__test_task__63__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk10__DOT__x = 0xaU;
    __Vtask_top__DOT__test_task__63__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__63__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__63__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__63__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__63__a 
                        * __Vtask_top__DOT__test_task__63__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__63__a,
                          32,__Vtask_top__DOT__test_task__63__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__63__a,
                      32,__Vtask_top__DOT__test_task__63__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk10__DOT__x = 0xbU;
    __Vtask_top__DOT__test_task__63__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__63__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__63__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__63__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__63__a 
                        * __Vtask_top__DOT__test_task__63__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__63__a,
                          32,__Vtask_top__DOT__test_task__63__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__63__a,
                      32,__Vtask_top__DOT__test_task__63__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk10__DOT__x = 0xcU;
    __Vtask_top__DOT__test_task__63__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__63__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__63__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__63__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__63__a 
                        * __Vtask_top__DOT__test_task__63__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__63__a,
                          32,__Vtask_top__DOT__test_task__63__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__63__a,
                      32,__Vtask_top__DOT__test_task__63__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk10__DOT__x = 0xdU;
    __Vtask_top__DOT__test_task__63__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__63__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__63__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__63__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__63__a 
                        * __Vtask_top__DOT__test_task__63__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__63__a,
                          32,__Vtask_top__DOT__test_task__63__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__63__a,
                      32,__Vtask_top__DOT__test_task__63__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk10__DOT__x = 0xeU;
    __Vtask_top__DOT__test_task__63__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__63__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__63__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__63__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__63__a 
                        * __Vtask_top__DOT__test_task__63__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__63__a,
                          32,__Vtask_top__DOT__test_task__63__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__63__a,
                      32,__Vtask_top__DOT__test_task__63__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk10__DOT__x = 0xfU;
    __Vtask_top__DOT__test_task__63__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__63__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__63__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__63__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__63__a 
                        * __Vtask_top__DOT__test_task__63__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__63__a,
                          32,__Vtask_top__DOT__test_task__63__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__63__a,
                      32,__Vtask_top__DOT__test_task__63__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk10__DOT__x = 0x10U;
    __Vtask_top__DOT__test_task__63__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__63__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__63__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__63__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__63__a 
                        * __Vtask_top__DOT__test_task__63__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__63__a,
                          32,__Vtask_top__DOT__test_task__63__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__63__a,
                      32,__Vtask_top__DOT__test_task__63__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk10__DOT__x = 0x11U;
    __Vtask_top__DOT__test_task__63__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__63__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__63__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__63__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__63__a 
                        * __Vtask_top__DOT__test_task__63__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__63__a,
                          32,__Vtask_top__DOT__test_task__63__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__63__a,
                      32,__Vtask_top__DOT__test_task__63__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk10__DOT__x = 0x12U;
    __Vtask_top__DOT__test_task__63__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__63__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__63__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__63__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__63__a 
                        * __Vtask_top__DOT__test_task__63__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__63__a,
                          32,__Vtask_top__DOT__test_task__63__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__63__a,
                      32,__Vtask_top__DOT__test_task__63__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk10__DOT__x = 0x13U;
    __Vtask_top__DOT__test_task__63__b = VL_URANDOM_RANGE_I(0x7fffffffU, 0x7fffU);
    __Vtask_top__DOT__test_task__63__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__63__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__63__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__63__a 
                        * __Vtask_top__DOT__test_task__63__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__63__a,
                          32,__Vtask_top__DOT__test_task__63__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__63__a,
                      32,__Vtask_top__DOT__test_task__63__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk10__DOT__x = 0x14U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       396);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       397);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    VL_WRITEF("large negative numbers x large negative numbers\n");
    __Vtask_top__DOT__test_task__66__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__66__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__66__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__66__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__66__a 
                        * __Vtask_top__DOT__test_task__66__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__66__a,
                          32,__Vtask_top__DOT__test_task__66__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__66__a,
                      32,__Vtask_top__DOT__test_task__66__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk11__DOT__x = 1U;
    __Vtask_top__DOT__test_task__66__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__66__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__66__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__66__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__66__a 
                        * __Vtask_top__DOT__test_task__66__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__66__a,
                          32,__Vtask_top__DOT__test_task__66__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__66__a,
                      32,__Vtask_top__DOT__test_task__66__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk11__DOT__x = 2U;
    __Vtask_top__DOT__test_task__66__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__66__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__66__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__66__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__66__a 
                        * __Vtask_top__DOT__test_task__66__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__66__a,
                          32,__Vtask_top__DOT__test_task__66__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__66__a,
                      32,__Vtask_top__DOT__test_task__66__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk11__DOT__x = 3U;
    __Vtask_top__DOT__test_task__66__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__66__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__66__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__66__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__66__a 
                        * __Vtask_top__DOT__test_task__66__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__66__a,
                          32,__Vtask_top__DOT__test_task__66__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__66__a,
                      32,__Vtask_top__DOT__test_task__66__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk11__DOT__x = 4U;
    __Vtask_top__DOT__test_task__66__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__66__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__66__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__66__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__66__a 
                        * __Vtask_top__DOT__test_task__66__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__66__a,
                          32,__Vtask_top__DOT__test_task__66__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__66__a,
                      32,__Vtask_top__DOT__test_task__66__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk11__DOT__x = 5U;
    __Vtask_top__DOT__test_task__66__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__66__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__66__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__66__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__66__a 
                        * __Vtask_top__DOT__test_task__66__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__66__a,
                          32,__Vtask_top__DOT__test_task__66__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__66__a,
                      32,__Vtask_top__DOT__test_task__66__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk11__DOT__x = 6U;
    __Vtask_top__DOT__test_task__66__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__66__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__66__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__66__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__66__a 
                        * __Vtask_top__DOT__test_task__66__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__66__a,
                          32,__Vtask_top__DOT__test_task__66__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__66__a,
                      32,__Vtask_top__DOT__test_task__66__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk11__DOT__x = 7U;
    __Vtask_top__DOT__test_task__66__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__66__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__66__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__66__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__66__a 
                        * __Vtask_top__DOT__test_task__66__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__66__a,
                          32,__Vtask_top__DOT__test_task__66__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__66__a,
                      32,__Vtask_top__DOT__test_task__66__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk11__DOT__x = 8U;
    __Vtask_top__DOT__test_task__66__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__66__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__66__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__66__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__66__a 
                        * __Vtask_top__DOT__test_task__66__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__66__a,
                          32,__Vtask_top__DOT__test_task__66__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__66__a,
                      32,__Vtask_top__DOT__test_task__66__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk11__DOT__x = 9U;
    __Vtask_top__DOT__test_task__66__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__66__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__66__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__66__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__66__a 
                        * __Vtask_top__DOT__test_task__66__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__66__a,
                          32,__Vtask_top__DOT__test_task__66__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__66__a,
                      32,__Vtask_top__DOT__test_task__66__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk11__DOT__x = 0xaU;
    __Vtask_top__DOT__test_task__66__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__66__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__66__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__66__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__66__a 
                        * __Vtask_top__DOT__test_task__66__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__66__a,
                          32,__Vtask_top__DOT__test_task__66__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__66__a,
                      32,__Vtask_top__DOT__test_task__66__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk11__DOT__x = 0xbU;
    __Vtask_top__DOT__test_task__66__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__66__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__66__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__66__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__66__a 
                        * __Vtask_top__DOT__test_task__66__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__66__a,
                          32,__Vtask_top__DOT__test_task__66__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__66__a,
                      32,__Vtask_top__DOT__test_task__66__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk11__DOT__x = 0xcU;
    __Vtask_top__DOT__test_task__66__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__66__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__66__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__66__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__66__a 
                        * __Vtask_top__DOT__test_task__66__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__66__a,
                          32,__Vtask_top__DOT__test_task__66__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__66__a,
                      32,__Vtask_top__DOT__test_task__66__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk11__DOT__x = 0xdU;
    __Vtask_top__DOT__test_task__66__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__66__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__66__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__66__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__66__a 
                        * __Vtask_top__DOT__test_task__66__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__66__a,
                          32,__Vtask_top__DOT__test_task__66__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__66__a,
                      32,__Vtask_top__DOT__test_task__66__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk11__DOT__x = 0xeU;
    __Vtask_top__DOT__test_task__66__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__66__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__66__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__66__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__66__a 
                        * __Vtask_top__DOT__test_task__66__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__66__a,
                          32,__Vtask_top__DOT__test_task__66__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__66__a,
                      32,__Vtask_top__DOT__test_task__66__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk11__DOT__x = 0xfU;
    __Vtask_top__DOT__test_task__66__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__66__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__66__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__66__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__66__a 
                        * __Vtask_top__DOT__test_task__66__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__66__a,
                          32,__Vtask_top__DOT__test_task__66__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__66__a,
                      32,__Vtask_top__DOT__test_task__66__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk11__DOT__x = 0x10U;
    __Vtask_top__DOT__test_task__66__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__66__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__66__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__66__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__66__a 
                        * __Vtask_top__DOT__test_task__66__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__66__a,
                          32,__Vtask_top__DOT__test_task__66__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__66__a,
                      32,__Vtask_top__DOT__test_task__66__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk11__DOT__x = 0x11U;
    __Vtask_top__DOT__test_task__66__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__66__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__66__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__66__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__66__a 
                        * __Vtask_top__DOT__test_task__66__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__66__a,
                          32,__Vtask_top__DOT__test_task__66__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__66__a,
                      32,__Vtask_top__DOT__test_task__66__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk11__DOT__x = 0x12U;
    __Vtask_top__DOT__test_task__66__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__66__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__66__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__66__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__66__a 
                        * __Vtask_top__DOT__test_task__66__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__66__a,
                          32,__Vtask_top__DOT__test_task__66__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__66__a,
                      32,__Vtask_top__DOT__test_task__66__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk11__DOT__x = 0x13U;
    __Vtask_top__DOT__test_task__66__b = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    __Vtask_top__DOT__test_task__66__a = (- (IData)(
                                                    VL_URANDOM_RANGE_I(0x80000000U, 0x8000U)));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__66__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__66__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__66__a 
                        * __Vtask_top__DOT__test_task__66__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__66__a,
                          32,__Vtask_top__DOT__test_task__66__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__66__a,
                      32,__Vtask_top__DOT__test_task__66__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk11__DOT__x = 0x14U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       407);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       408);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    VL_WRITEF("multiplying numbers with the low order bits masked off\n");
    __Vtask_top__DOT__test_task__69__b = (0xffff0000U 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__69__a = (0xffff0000U 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__69__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__69__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__69__a 
                        * __Vtask_top__DOT__test_task__69__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__69__a,
                          32,__Vtask_top__DOT__test_task__69__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__69__a,
                      32,__Vtask_top__DOT__test_task__69__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk12__DOT__x = 1U;
    __Vtask_top__DOT__test_task__69__b = (0xffff0000U 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__69__a = (0xffff0000U 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__69__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__69__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__69__a 
                        * __Vtask_top__DOT__test_task__69__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__69__a,
                          32,__Vtask_top__DOT__test_task__69__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__69__a,
                      32,__Vtask_top__DOT__test_task__69__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk12__DOT__x = 2U;
    __Vtask_top__DOT__test_task__69__b = (0xffff0000U 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__69__a = (0xffff0000U 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__69__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__69__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__69__a 
                        * __Vtask_top__DOT__test_task__69__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__69__a,
                          32,__Vtask_top__DOT__test_task__69__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__69__a,
                      32,__Vtask_top__DOT__test_task__69__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk12__DOT__x = 3U;
    __Vtask_top__DOT__test_task__69__b = (0xffff0000U 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__69__a = (0xffff0000U 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__69__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__69__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__69__a 
                        * __Vtask_top__DOT__test_task__69__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__69__a,
                          32,__Vtask_top__DOT__test_task__69__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__69__a,
                      32,__Vtask_top__DOT__test_task__69__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk12__DOT__x = 4U;
    __Vtask_top__DOT__test_task__69__b = (0xffff0000U 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__69__a = (0xffff0000U 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__69__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__69__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__69__a 
                        * __Vtask_top__DOT__test_task__69__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__69__a,
                          32,__Vtask_top__DOT__test_task__69__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__69__a,
                      32,__Vtask_top__DOT__test_task__69__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk12__DOT__x = 5U;
    __Vtask_top__DOT__test_task__69__b = (0xffff0000U 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__69__a = (0xffff0000U 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__69__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__69__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__69__a 
                        * __Vtask_top__DOT__test_task__69__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__69__a,
                          32,__Vtask_top__DOT__test_task__69__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__69__a,
                      32,__Vtask_top__DOT__test_task__69__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk12__DOT__x = 6U;
    __Vtask_top__DOT__test_task__69__b = (0xffff0000U 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__69__a = (0xffff0000U 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__69__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__69__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__69__a 
                        * __Vtask_top__DOT__test_task__69__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__69__a,
                          32,__Vtask_top__DOT__test_task__69__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__69__a,
                      32,__Vtask_top__DOT__test_task__69__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk12__DOT__x = 7U;
    __Vtask_top__DOT__test_task__69__b = (0xffff0000U 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__69__a = (0xffff0000U 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__69__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__69__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__69__a 
                        * __Vtask_top__DOT__test_task__69__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__69__a,
                          32,__Vtask_top__DOT__test_task__69__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__69__a,
                      32,__Vtask_top__DOT__test_task__69__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk12__DOT__x = 8U;
    __Vtask_top__DOT__test_task__69__b = (0xffff0000U 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__69__a = (0xffff0000U 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__69__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__69__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__69__a 
                        * __Vtask_top__DOT__test_task__69__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__69__a,
                          32,__Vtask_top__DOT__test_task__69__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__69__a,
                      32,__Vtask_top__DOT__test_task__69__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk12__DOT__x = 9U;
    __Vtask_top__DOT__test_task__69__b = (0xffff0000U 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__69__a = (0xffff0000U 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__69__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__69__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__69__a 
                        * __Vtask_top__DOT__test_task__69__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__69__a,
                          32,__Vtask_top__DOT__test_task__69__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__69__a,
                      32,__Vtask_top__DOT__test_task__69__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk12__DOT__x = 0xaU;
    __Vtask_top__DOT__test_task__69__b = (0xffff0000U 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__69__a = (0xffff0000U 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__69__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__69__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__69__a 
                        * __Vtask_top__DOT__test_task__69__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__69__a,
                          32,__Vtask_top__DOT__test_task__69__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__69__a,
                      32,__Vtask_top__DOT__test_task__69__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk12__DOT__x = 0xbU;
    __Vtask_top__DOT__test_task__69__b = (0xffff0000U 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__69__a = (0xffff0000U 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__69__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__69__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__69__a 
                        * __Vtask_top__DOT__test_task__69__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__69__a,
                          32,__Vtask_top__DOT__test_task__69__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__69__a,
                      32,__Vtask_top__DOT__test_task__69__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk12__DOT__x = 0xcU;
    __Vtask_top__DOT__test_task__69__b = (0xffff0000U 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__69__a = (0xffff0000U 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__69__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__69__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__69__a 
                        * __Vtask_top__DOT__test_task__69__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__69__a,
                          32,__Vtask_top__DOT__test_task__69__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__69__a,
                      32,__Vtask_top__DOT__test_task__69__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk12__DOT__x = 0xdU;
    __Vtask_top__DOT__test_task__69__b = (0xffff0000U 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__69__a = (0xffff0000U 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__69__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__69__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__69__a 
                        * __Vtask_top__DOT__test_task__69__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__69__a,
                          32,__Vtask_top__DOT__test_task__69__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__69__a,
                      32,__Vtask_top__DOT__test_task__69__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk12__DOT__x = 0xeU;
    __Vtask_top__DOT__test_task__69__b = (0xffff0000U 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__69__a = (0xffff0000U 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__69__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__69__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__69__a 
                        * __Vtask_top__DOT__test_task__69__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__69__a,
                          32,__Vtask_top__DOT__test_task__69__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__69__a,
                      32,__Vtask_top__DOT__test_task__69__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk12__DOT__x = 0xfU;
    __Vtask_top__DOT__test_task__69__b = (0xffff0000U 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__69__a = (0xffff0000U 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__69__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__69__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__69__a 
                        * __Vtask_top__DOT__test_task__69__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__69__a,
                          32,__Vtask_top__DOT__test_task__69__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__69__a,
                      32,__Vtask_top__DOT__test_task__69__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk12__DOT__x = 0x10U;
    __Vtask_top__DOT__test_task__69__b = (0xffff0000U 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__69__a = (0xffff0000U 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__69__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__69__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__69__a 
                        * __Vtask_top__DOT__test_task__69__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__69__a,
                          32,__Vtask_top__DOT__test_task__69__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__69__a,
                      32,__Vtask_top__DOT__test_task__69__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk12__DOT__x = 0x11U;
    __Vtask_top__DOT__test_task__69__b = (0xffff0000U 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__69__a = (0xffff0000U 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__69__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__69__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__69__a 
                        * __Vtask_top__DOT__test_task__69__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__69__a,
                          32,__Vtask_top__DOT__test_task__69__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__69__a,
                      32,__Vtask_top__DOT__test_task__69__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk12__DOT__x = 0x12U;
    __Vtask_top__DOT__test_task__69__b = (0xffff0000U 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__69__a = (0xffff0000U 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__69__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__69__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__69__a 
                        * __Vtask_top__DOT__test_task__69__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__69__a,
                          32,__Vtask_top__DOT__test_task__69__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__69__a,
                      32,__Vtask_top__DOT__test_task__69__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk12__DOT__x = 0x13U;
    __Vtask_top__DOT__test_task__69__b = (0xffff0000U 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__69__a = (0xffff0000U 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__69__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__69__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__69__a 
                        * __Vtask_top__DOT__test_task__69__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__69__a,
                          32,__Vtask_top__DOT__test_task__69__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__69__a,
                      32,__Vtask_top__DOT__test_task__69__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk12__DOT__x = 0x14U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       418);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       419);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    VL_WRITEF("multiplying numbers with middle bits masked off\n");
    __Vtask_top__DOT__test_task__72__b = (0xff0000ffU 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__72__a = (0xff0000ffU 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__72__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__72__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__72__a 
                        * __Vtask_top__DOT__test_task__72__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__72__a,
                          32,__Vtask_top__DOT__test_task__72__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__72__a,
                      32,__Vtask_top__DOT__test_task__72__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk13__DOT__x = 1U;
    __Vtask_top__DOT__test_task__72__b = (0xff0000ffU 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__72__a = (0xff0000ffU 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__72__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__72__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__72__a 
                        * __Vtask_top__DOT__test_task__72__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__72__a,
                          32,__Vtask_top__DOT__test_task__72__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__72__a,
                      32,__Vtask_top__DOT__test_task__72__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk13__DOT__x = 2U;
    __Vtask_top__DOT__test_task__72__b = (0xff0000ffU 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__72__a = (0xff0000ffU 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__72__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__72__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__72__a 
                        * __Vtask_top__DOT__test_task__72__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__72__a,
                          32,__Vtask_top__DOT__test_task__72__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__72__a,
                      32,__Vtask_top__DOT__test_task__72__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk13__DOT__x = 3U;
    __Vtask_top__DOT__test_task__72__b = (0xff0000ffU 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__72__a = (0xff0000ffU 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__72__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__72__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__72__a 
                        * __Vtask_top__DOT__test_task__72__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__72__a,
                          32,__Vtask_top__DOT__test_task__72__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__72__a,
                      32,__Vtask_top__DOT__test_task__72__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk13__DOT__x = 4U;
    __Vtask_top__DOT__test_task__72__b = (0xff0000ffU 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__72__a = (0xff0000ffU 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__72__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__72__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__72__a 
                        * __Vtask_top__DOT__test_task__72__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__72__a,
                          32,__Vtask_top__DOT__test_task__72__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__72__a,
                      32,__Vtask_top__DOT__test_task__72__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk13__DOT__x = 5U;
    __Vtask_top__DOT__test_task__72__b = (0xff0000ffU 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__72__a = (0xff0000ffU 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__72__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__72__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__72__a 
                        * __Vtask_top__DOT__test_task__72__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__72__a,
                          32,__Vtask_top__DOT__test_task__72__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__72__a,
                      32,__Vtask_top__DOT__test_task__72__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk13__DOT__x = 6U;
    __Vtask_top__DOT__test_task__72__b = (0xff0000ffU 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__72__a = (0xff0000ffU 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__72__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__72__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__72__a 
                        * __Vtask_top__DOT__test_task__72__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__72__a,
                          32,__Vtask_top__DOT__test_task__72__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__72__a,
                      32,__Vtask_top__DOT__test_task__72__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk13__DOT__x = 7U;
    __Vtask_top__DOT__test_task__72__b = (0xff0000ffU 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__72__a = (0xff0000ffU 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__72__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__72__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__72__a 
                        * __Vtask_top__DOT__test_task__72__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__72__a,
                          32,__Vtask_top__DOT__test_task__72__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__72__a,
                      32,__Vtask_top__DOT__test_task__72__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk13__DOT__x = 8U;
    __Vtask_top__DOT__test_task__72__b = (0xff0000ffU 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__72__a = (0xff0000ffU 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__72__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__72__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__72__a 
                        * __Vtask_top__DOT__test_task__72__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__72__a,
                          32,__Vtask_top__DOT__test_task__72__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__72__a,
                      32,__Vtask_top__DOT__test_task__72__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk13__DOT__x = 9U;
    __Vtask_top__DOT__test_task__72__b = (0xff0000ffU 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__72__a = (0xff0000ffU 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__72__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__72__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__72__a 
                        * __Vtask_top__DOT__test_task__72__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__72__a,
                          32,__Vtask_top__DOT__test_task__72__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__72__a,
                      32,__Vtask_top__DOT__test_task__72__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk13__DOT__x = 0xaU;
    __Vtask_top__DOT__test_task__72__b = (0xff0000ffU 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__72__a = (0xff0000ffU 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__72__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__72__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__72__a 
                        * __Vtask_top__DOT__test_task__72__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__72__a,
                          32,__Vtask_top__DOT__test_task__72__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__72__a,
                      32,__Vtask_top__DOT__test_task__72__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk13__DOT__x = 0xbU;
    __Vtask_top__DOT__test_task__72__b = (0xff0000ffU 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__72__a = (0xff0000ffU 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__72__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__72__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__72__a 
                        * __Vtask_top__DOT__test_task__72__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__72__a,
                          32,__Vtask_top__DOT__test_task__72__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__72__a,
                      32,__Vtask_top__DOT__test_task__72__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk13__DOT__x = 0xcU;
    __Vtask_top__DOT__test_task__72__b = (0xff0000ffU 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__72__a = (0xff0000ffU 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__72__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__72__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__72__a 
                        * __Vtask_top__DOT__test_task__72__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__72__a,
                          32,__Vtask_top__DOT__test_task__72__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__72__a,
                      32,__Vtask_top__DOT__test_task__72__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk13__DOT__x = 0xdU;
    __Vtask_top__DOT__test_task__72__b = (0xff0000ffU 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__72__a = (0xff0000ffU 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__72__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__72__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__72__a 
                        * __Vtask_top__DOT__test_task__72__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__72__a,
                          32,__Vtask_top__DOT__test_task__72__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__72__a,
                      32,__Vtask_top__DOT__test_task__72__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk13__DOT__x = 0xeU;
    __Vtask_top__DOT__test_task__72__b = (0xff0000ffU 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__72__a = (0xff0000ffU 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__72__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__72__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__72__a 
                        * __Vtask_top__DOT__test_task__72__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__72__a,
                          32,__Vtask_top__DOT__test_task__72__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__72__a,
                      32,__Vtask_top__DOT__test_task__72__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk13__DOT__x = 0xfU;
    __Vtask_top__DOT__test_task__72__b = (0xff0000ffU 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__72__a = (0xff0000ffU 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__72__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__72__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__72__a 
                        * __Vtask_top__DOT__test_task__72__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__72__a,
                          32,__Vtask_top__DOT__test_task__72__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__72__a,
                      32,__Vtask_top__DOT__test_task__72__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk13__DOT__x = 0x10U;
    __Vtask_top__DOT__test_task__72__b = (0xff0000ffU 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__72__a = (0xff0000ffU 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__72__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__72__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__72__a 
                        * __Vtask_top__DOT__test_task__72__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__72__a,
                          32,__Vtask_top__DOT__test_task__72__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__72__a,
                      32,__Vtask_top__DOT__test_task__72__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk13__DOT__x = 0x11U;
    __Vtask_top__DOT__test_task__72__b = (0xff0000ffU 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__72__a = (0xff0000ffU 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__72__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__72__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__72__a 
                        * __Vtask_top__DOT__test_task__72__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__72__a,
                          32,__Vtask_top__DOT__test_task__72__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__72__a,
                      32,__Vtask_top__DOT__test_task__72__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk13__DOT__x = 0x12U;
    __Vtask_top__DOT__test_task__72__b = (0xff0000ffU 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__72__a = (0xff0000ffU 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__72__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__72__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__72__a 
                        * __Vtask_top__DOT__test_task__72__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__72__a,
                          32,__Vtask_top__DOT__test_task__72__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__72__a,
                      32,__Vtask_top__DOT__test_task__72__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk13__DOT__x = 0x13U;
    __Vtask_top__DOT__test_task__72__b = (0xff0000ffU 
                                          & VL_RANDOM_I());
    __Vtask_top__DOT__test_task__72__a = (0xff0000ffU 
                                          & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       458);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__72__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__72__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           466);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       467);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           472);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__72__a 
                        * __Vtask_top__DOT__test_task__72__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__72__a,
                          32,__Vtask_top__DOT__test_task__72__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:481: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__72__a,
                      32,__Vtask_top__DOT__test_task__72__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 481, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       484);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk13__DOT__x = 0x14U;
    VL_WRITEF("Random Test\n");
    vlSelf->top__DOT__unnamedblk14__DOT__x = 0U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
}
