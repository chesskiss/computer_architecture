// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__val;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__val = 0;
    CData/*0:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str);
    CData/*0:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__val;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__val = 0;
    CData/*0:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__rdy;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__14__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__14__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__15__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__15__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__15__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__15__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__16__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__16__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__17__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__17__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__17__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__17__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__18__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__18__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__19__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__19__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__19__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__19__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__20__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__20__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__21__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__21__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__21__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__21__num = 0;
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           66);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (vlSelf->linetrace) {
            vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
            if (VL_UNLIKELY((0U < (IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level)))) {
                VL_WRITEF("%4d: ",32,vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles);
                VL_SFORMAT_X(4096,vlSelf->top__DOT__imul__DOT__str
                             ,"%x",64,vlSelf->top__DOT__istream_msg);
                VL_ASSIGN_W(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__str, vlSelf->top__DOT__imul__DOT__str);
                __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy 
                    = vlSelf->top__DOT__istream_rdy;
                __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__val 
                    = vlSelf->top__DOT__istream_val;
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 = 0U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1)))
                                          ? 0U : (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1))))) 
                                        | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1))))))) {
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                        = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1);
                    vlSymsp->__Vcoverage[530].fetch_add(1, std::memory_order_relaxed);
                }
                if (VL_UNLIKELY(((IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy) 
                                 & (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__val)))) {
                    VL_ASSIGN_W(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__str);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[535].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy) 
                                        & (~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__val))))) {
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__num 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1;
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[534].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy)) 
                                        & (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__val)))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str,0x00000023);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__num 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[533].fetch_add(1, std::memory_order_relaxed);
                } else if ((1U & ((~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy)) 
                                  & (~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__val))))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str,0x0000002e);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__num 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[531].fetch_add(1, std::memory_order_relaxed);
                } else {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str,0x00000078);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__num 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[532].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
                VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str,0x00000028);
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                    vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                    = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    VL_WRITEF("%c",8,(0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                 ? 0U
                                                 : 
                                                (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xfffU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                               | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str[
                                                  (0x7fU 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
                VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str,0x00000029);
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                    vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                    = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    VL_WRITEF("%c",8,(0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                 ? 0U
                                                 : 
                                                (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xfffU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                               | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str[
                                                  (0x7fU 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
                VL_SFORMAT_X(4096,vlSelf->top__DOT__imul__DOT__str
                             ,"%x",32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_ASSIGN_W(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__str, vlSelf->top__DOT__imul__DOT__str);
                __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__rdy 
                    = vlSelf->top__DOT__ostream_rdy;
                __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__val 
                    = vlSelf->top__DOT__ostream_val;
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 = 0U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1)))
                                          ? 0U : (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1))))) 
                                        | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1))))))) {
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                        = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1);
                    vlSymsp->__Vcoverage[530].fetch_add(1, std::memory_order_relaxed);
                }
                if (VL_UNLIKELY(((IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__rdy) 
                                 & (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__val)))) {
                    VL_ASSIGN_W(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__14__str, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__str);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__14__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__14__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__14__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__14__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__14__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__14__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[535].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__rdy) 
                                        & (~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__val))))) {
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__15__num 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1;
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__15__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__15__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__15__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__15__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[534].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__rdy)) 
                                        & (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__val)))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__16__str,0x00000023);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__16__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__16__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__16__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__16__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__16__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__16__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__17__num 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__17__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__17__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__17__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__17__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[533].fetch_add(1, std::memory_order_relaxed);
                } else if ((1U & ((~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__rdy)) 
                                  & (~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__val))))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__18__str,0x0000002e);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__18__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__18__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__18__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__18__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__18__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__18__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__19__num 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__19__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__19__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__19__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__19__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[531].fetch_add(1, std::memory_order_relaxed);
                } else {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__20__str,0x00000078);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__20__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__20__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__20__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__20__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__20__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__20__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__21__num 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__21__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__21__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__21__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__21__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[532].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__imul__DOT__idx0 = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                vlSelf->top__DOT__imul__DOT__idx1 = 0x1ffU;
                while (VL_GTS_III(32, vlSelf->top__DOT__imul__DOT__idx1, vlSelf->top__DOT__imul__DOT__idx0)) {
                    vlSelf->top__DOT__imul__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__idx1 
                           - (IData)(1U));
                }
                VL_WRITEF("\n");
            }
            vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles_next 
                = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles);
            vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
    }
    VL_STOP_MT("tb_IntMul.v", 71, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

void Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vtask_top__DOT__test_task__30__a;
    __Vtask_top__DOT__test_task__30__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__30__b;
    __Vtask_top__DOT__test_task__30__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__33__a;
    __Vtask_top__DOT__test_task__33__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__33__b;
    __Vtask_top__DOT__test_task__33__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__36__a;
    __Vtask_top__DOT__test_task__36__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__36__b;
    __Vtask_top__DOT__test_task__36__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__39__a;
    __Vtask_top__DOT__test_task__39__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__39__b;
    __Vtask_top__DOT__test_task__39__b = 0;
    // Body
    VL_WRITEF("Start of Testbench\n");
    vlSelf->top__DOT__reset = 1U;
    vlSelf->top__DOT__istream_msg_a = 0U;
    vlSelf->top__DOT__istream_msg_b = 0U;
    vlSelf->top__DOT__istream_val = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       88);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__reset = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       96);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       97);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("Example Test #1\n");
    vlSelf->top__DOT__istream_msg_a = 2U;
    vlSelf->top__DOT__istream_msg_b = 3U;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           111);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       112);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           115);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       116);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((6U == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,vlSelf->top__DOT__istream_msg_a,
                          32,vlSelf->top__DOT__istream_msg_b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:126: Assertion failed in %Ntop: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->top__DOT__istream_msg_a,
                      32,vlSelf->top__DOT__istream_msg_b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 126, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       130);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       131);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("Example Test #2\n");
    vlSelf->top__DOT__istream_msg_a = 4U;
    vlSelf->top__DOT__istream_msg_b = 5U;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           145);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       146);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    if ((1U & (~ (IData)(vlSelf->top__DOT__ostream_val)))) {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           149);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       150);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x14U == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,vlSelf->top__DOT__istream_msg_a,
                          32,vlSelf->top__DOT__istream_msg_b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:160: Assertion failed in %Ntop: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->top__DOT__istream_msg_a,
                      32,vlSelf->top__DOT__istream_msg_b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 160, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       164);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       165);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("Example Test #3\n");
    vlSelf->top__DOT__istream_msg_a = 3U;
    vlSelf->top__DOT__istream_msg_b = 4U;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           179);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       180);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    if ((1U & (~ (IData)(vlSelf->top__DOT__ostream_val)))) {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           183);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       184);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xcU == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,vlSelf->top__DOT__istream_msg_a,
                          32,vlSelf->top__DOT__istream_msg_b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:194: Assertion failed in %Ntop: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->top__DOT__istream_msg_a,
                      32,vlSelf->top__DOT__istream_msg_b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 194, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       198);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       199);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("Example Test #4\n");
    vlSelf->top__DOT__istream_msg_a = 0xaU;
    vlSelf->top__DOT__istream_msg_b = 0xdU;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           213);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       214);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    if ((1U & (~ (IData)(vlSelf->top__DOT__ostream_val)))) {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           217);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       218);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x82U == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,vlSelf->top__DOT__istream_msg_a,
                          32,vlSelf->top__DOT__istream_msg_b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:228: Assertion failed in %Ntop: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->top__DOT__istream_msg_a,
                      32,vlSelf->top__DOT__istream_msg_b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 228, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       232);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       233);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("Example Test #5\n");
    __Vtask_top__DOT__test_task__30__b = 7U;
    __Vtask_top__DOT__test_task__30__a = 8U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__30__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__30__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__30__a 
                        * __Vtask_top__DOT__test_task__30__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__30__a,
                          32,__Vtask_top__DOT__test_task__30__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__30__a,
                      32,__Vtask_top__DOT__test_task__30__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       244);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("Small numbers\n");
    vlSelf->top__DOT__unnamedblk1__DOT__x = 0xffffffecU;
    while (VL_GTS_III(32, 0x14U, vlSelf->top__DOT__unnamedblk1__DOT__x)) {
        __Vtask_top__DOT__test_task__33__b = 0xffffffecU;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0xffffffedU;
        __Vtask_top__DOT__test_task__33__b = 0xffffffedU;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0xffffffeeU;
        __Vtask_top__DOT__test_task__33__b = 0xffffffeeU;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0xffffffefU;
        __Vtask_top__DOT__test_task__33__b = 0xffffffefU;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0xfffffff0U;
        __Vtask_top__DOT__test_task__33__b = 0xfffffff0U;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0xfffffff1U;
        __Vtask_top__DOT__test_task__33__b = 0xfffffff1U;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0xfffffff2U;
        __Vtask_top__DOT__test_task__33__b = 0xfffffff2U;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0xfffffff3U;
        __Vtask_top__DOT__test_task__33__b = 0xfffffff3U;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0xfffffff4U;
        __Vtask_top__DOT__test_task__33__b = 0xfffffff4U;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0xfffffff5U;
        __Vtask_top__DOT__test_task__33__b = 0xfffffff5U;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0xfffffff6U;
        __Vtask_top__DOT__test_task__33__b = 0xfffffff6U;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0xfffffff7U;
        __Vtask_top__DOT__test_task__33__b = 0xfffffff7U;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0xfffffff8U;
        __Vtask_top__DOT__test_task__33__b = 0xfffffff8U;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0xfffffff9U;
        __Vtask_top__DOT__test_task__33__b = 0xfffffff9U;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0xfffffffaU;
        __Vtask_top__DOT__test_task__33__b = 0xfffffffaU;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0xfffffffbU;
        __Vtask_top__DOT__test_task__33__b = 0xfffffffbU;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0xfffffffcU;
        __Vtask_top__DOT__test_task__33__b = 0xfffffffcU;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0xfffffffdU;
        __Vtask_top__DOT__test_task__33__b = 0xfffffffdU;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0xfffffffeU;
        __Vtask_top__DOT__test_task__33__b = 0xfffffffeU;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0xffffffffU;
        __Vtask_top__DOT__test_task__33__b = 0xffffffffU;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0U;
        __Vtask_top__DOT__test_task__33__b = 0U;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 1U;
        __Vtask_top__DOT__test_task__33__b = 1U;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 2U;
        __Vtask_top__DOT__test_task__33__b = 2U;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 3U;
        __Vtask_top__DOT__test_task__33__b = 3U;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 4U;
        __Vtask_top__DOT__test_task__33__b = 4U;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 5U;
        __Vtask_top__DOT__test_task__33__b = 5U;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 6U;
        __Vtask_top__DOT__test_task__33__b = 6U;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 7U;
        __Vtask_top__DOT__test_task__33__b = 7U;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 8U;
        __Vtask_top__DOT__test_task__33__b = 8U;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 9U;
        __Vtask_top__DOT__test_task__33__b = 9U;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0xaU;
        __Vtask_top__DOT__test_task__33__b = 0xaU;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0xbU;
        __Vtask_top__DOT__test_task__33__b = 0xbU;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0xcU;
        __Vtask_top__DOT__test_task__33__b = 0xcU;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0xdU;
        __Vtask_top__DOT__test_task__33__b = 0xdU;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0xeU;
        __Vtask_top__DOT__test_task__33__b = 0xeU;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0xfU;
        __Vtask_top__DOT__test_task__33__b = 0xfU;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0x10U;
        __Vtask_top__DOT__test_task__33__b = 0x10U;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0x11U;
        __Vtask_top__DOT__test_task__33__b = 0x11U;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0x12U;
        __Vtask_top__DOT__test_task__33__b = 0x12U;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0x13U;
        __Vtask_top__DOT__test_task__33__b = 0x13U;
        __Vtask_top__DOT__test_task__33__a = vlSelf->top__DOT__unnamedblk1__DOT__x;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                            * __Vtask_top__DOT__test_task__33__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__33__a,
                              32,__Vtask_top__DOT__test_task__33__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y = 0x14U;
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__x = ((IData)(1U) 
                                                 + vlSelf->top__DOT__unnamedblk1__DOT__x);
    }
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       258);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("Large numbers\n");
    vlSelf->top__DOT__unnamedblk3__DOT__x = 0U;
    while (VL_GTS_III(32, 0x23U, vlSelf->top__DOT__unnamedblk3__DOT__x)) {
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 1U;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 2U;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 3U;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 4U;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 5U;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 6U;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 7U;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 8U;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 9U;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 0xaU;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 0xbU;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 0xcU;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 0xdU;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 0xeU;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 0xfU;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 0x10U;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 0x11U;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 0x12U;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 0x13U;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 0x14U;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 0x15U;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 0x16U;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 0x17U;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 0x18U;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 0x19U;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 0x1aU;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 0x1bU;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 0x1cU;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 0x1dU;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 0x1eU;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 0x1fU;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 0x20U;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 0x21U;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 0x22U;
        __Vtask_top__DOT__test_task__36__b = vlSelf->top__DOT__unnamedblk3__DOT__x;
        __Vtask_top__DOT__test_task__36__a = 0xfffe7960U;
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           347);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__36__a;
        vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__36__b;
        vlSelf->top__DOT__istream_val = 1U;
        vlSelf->top__DOT__ostream_rdy = 0U;
        while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
            co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_IntMul.v", 
                                                               355);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           356);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->top__DOT__istream_val = 0U;
        vlSelf->top__DOT__ostream_rdy = 1U;
        if (vlSelf->top__DOT__ostream_val) {
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        } else {
            co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@([changed] top.ostream_val)", 
                                                               "tb_IntMul.v", 
                                                               361);
            vlSelf->__Vm_traceActivity[3U] = 1U;
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY(((__Vtask_top__DOT__test_task__36__a 
                            * __Vtask_top__DOT__test_task__36__b) 
                           == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                    VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                              32,__Vtask_top__DOT__test_task__36__a,
                              32,__Vtask_top__DOT__test_task__36__b,
                              32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                }
            } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
                VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name(),32,__Vtask_top__DOT__test_task__36__a,
                          32,__Vtask_top__DOT__test_task__36__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_STOP_MT("tb_IntMul.v", 370, "");
            }
        }
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           373);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y = 0x23U;
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk3__DOT__x = ((IData)(1U) 
                                                 + vlSelf->top__DOT__unnamedblk3__DOT__x);
    }
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       315);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("Random Test\n");
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 1U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 2U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 3U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 4U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 5U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 6U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 7U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 8U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 9U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0xaU;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0xbU;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0xcU;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0xdU;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0xeU;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0xfU;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x10U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x11U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x12U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x13U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x14U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x15U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x16U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x17U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x18U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x19U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x1aU;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x1bU;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x1cU;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x1dU;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x1eU;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x1fU;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x20U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x21U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x22U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x23U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x24U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x25U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x26U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x27U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x28U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x29U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x2aU;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x2bU;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x2cU;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x2dU;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x2eU;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x2fU;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x30U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x31U;
    __Vtask_top__DOT__test_task__39__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__39__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       347);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           355);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       356);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           361);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:370: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 370, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       373);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 0x32U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       327);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("Testbench finished at %20# cycles\n",
              64,(((QData)(VL_TIME_UNITED_Q(1)) - 0xaULL) 
                  >> 1U));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       331);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_FINISH_MT("tb_IntMul.v", 332, "");
    vlSelf->__Vm_traceActivity[3U] = 1U;
}
