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
    CData/*0:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__2__val;
    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__2__val = 0;
    CData/*0:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy;
    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__2__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__2__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__3__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__3__str);
    CData/*7:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__4__char;
    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__4__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__4__num;
    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__4__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__5__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__5__str);
    CData/*7:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__6__char;
    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__6__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__6__num;
    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__6__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__7__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__7__str);
    CData/*7:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__8__char;
    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__8__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__8__num;
    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__8__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__9__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__9__str);
    CData/*7:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__10__char;
    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__10__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__10__num;
    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__10__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__11__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__11__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__12__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__12__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__13__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__13__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__14__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__14__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__15__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__15__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__16__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__16__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__17__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__17__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__18__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__18__str);
    CData/*0:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__19__val;
    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__19__val = 0;
    CData/*0:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__19__rdy;
    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__19__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__19__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__19__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__20__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__20__str);
    CData/*7:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__21__char;
    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__21__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__21__num;
    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__21__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__22__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__22__str);
    CData/*7:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__23__char;
    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__23__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__23__num;
    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__23__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__24__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__24__str);
    CData/*7:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__25__char;
    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__25__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__25__num;
    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__25__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__26__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__26__str);
    CData/*7:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__27__char;
    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__27__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__27__num;
    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__27__num = 0;
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_Adder.v", 
                                                           103);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (vlSelf->linetrace) {
            vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
            if (VL_UNLIKELY((0U < (IData)(vlSelf->top__DOT__dut__DOT__vc_trace__DOT__level)))) {
                VL_WRITEF("%4d: ",32,vlSelf->top__DOT__dut__DOT__vc_trace__DOT__cycles);
                VL_SFORMAT_X(4096,vlSelf->top__DOT__dut__DOT__str
                             ,"%x",64,vlSelf->top__DOT__istream_msg);
                VL_ASSIGN_W(4096,__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__2__str, vlSelf->top__DOT__dut__DOT__str);
                __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy 
                    = vlSelf->top__DOT__istream_rdy;
                __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__2__val 
                    = vlSelf->top__DOT__istream_val;
                vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len1 = 0U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len1)))
                                          ? 0U : (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__2__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len1))))) 
                                        | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__2__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len1))))))) {
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len1 
                        = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len1);
                    vlSymsp->__Vcoverage[778].fetch_add(1, std::memory_order_relaxed);
                }
                if (VL_UNLIKELY(((IData)(__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy) 
                                 & (IData)(__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__2__val)))) {
                    VL_ASSIGN_W(4096,__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__3__str, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__2__str);
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__3__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__3__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__3__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__3__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__3__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__3__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[783].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((IData)(__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy) 
                                        & (~ (IData)(__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__2__val))))) {
                    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__4__num 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len1;
                    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__4__char = 0x20U;
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__4__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__4__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__4__char);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[771].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[772].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[782].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((~ (IData)(__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy)) 
                                        & (IData)(__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__2__val)))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__5__str,0x00000023);
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__5__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__5__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__5__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__5__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__5__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__5__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__6__num 
                        = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__6__char = 0x20U;
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__6__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__6__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__6__char);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[771].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[772].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[781].fetch_add(1, std::memory_order_relaxed);
                } else if ((1U & ((~ (IData)(__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy)) 
                                  & (~ (IData)(__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__2__val))))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__7__str,0x0000002e);
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__7__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__7__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__7__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__7__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__7__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__7__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__8__num 
                        = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__8__char = 0x20U;
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__8__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__8__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__8__char);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[771].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[772].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[779].fetch_add(1, std::memory_order_relaxed);
                } else {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__9__str,0x00000078);
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__9__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__9__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__9__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__9__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__9__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__9__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__10__num 
                        = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__10__char = 0x20U;
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__10__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__10__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__10__char);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[771].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[772].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[780].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[784].fetch_add(1, std::memory_order_relaxed);
                VL_CONST_W_1X(4096,__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__11__str,0x00202820);
                vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__11__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__11__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))))) {
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0);
                    vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
                }
                vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                    = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__11__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__11__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                    VL_WRITEF("%c",8,(0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                 ? 0U
                                                 : 
                                                (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__11__str[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xfffU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                               | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__11__str[
                                                  (0x7fU 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                        = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
                if (VL_UNLIKELY(vlSelf->top__DOT__dut__DOT__val_reg)) {
                    VL_SFORMAT_X(4096,vlSelf->top__DOT__dut__DOT__str
                                 ,"%x",32,vlSelf->top__DOT__dut__DOT__a_reg);
                    VL_ASSIGN_W(4096,__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__12__str, vlSelf->top__DOT__dut__DOT__str);
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__12__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__12__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__12__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__12__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__12__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__12__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__13__str,0x00202b20);
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__13__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__13__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__13__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__13__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__13__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__13__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
                    VL_SFORMAT_X(4096,vlSelf->top__DOT__dut__DOT__str
                                 ,"%x",32,vlSelf->top__DOT__dut__DOT__b_reg);
                    VL_ASSIGN_W(4096,__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__14__str, vlSelf->top__DOT__dut__DOT__str);
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__14__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__14__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__14__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__14__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__14__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__14__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__15__str,0x00203d20);
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__15__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__15__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__15__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__15__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__15__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__15__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
                    VL_SFORMAT_X(4096,vlSelf->top__DOT__dut__DOT__str
                                 ,"%x",32,vlSelf->top__DOT__ostream_msg);
                    VL_ASSIGN_W(4096,__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__16__str, vlSelf->top__DOT__dut__DOT__str);
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__16__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__16__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__16__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__16__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__16__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__16__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
                } else {
                    VL_CONST_W_8X(4096,__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__17__str,0x00002020,0x20202020,0x20202020,0x20202020,0x20202020,0x20202020,0x20202020,0x20202020);
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__17__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__17__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__17__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__17__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__17__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__17__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
                }
                VL_CONST_W_1X(4096,__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__18__str,0x00202920);
                vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__18__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__18__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))))) {
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0);
                    vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
                }
                vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                    = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__18__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__18__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                    VL_WRITEF("%c",8,(0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                 ? 0U
                                                 : 
                                                (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__18__str[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xfffU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                               | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__18__str[
                                                  (0x7fU 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                        = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
                VL_SFORMAT_X(4096,vlSelf->top__DOT__dut__DOT__str
                             ,"%x",32,vlSelf->top__DOT__ostream_msg);
                VL_ASSIGN_W(4096,__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__19__str, vlSelf->top__DOT__dut__DOT__str);
                __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__19__rdy 
                    = vlSelf->top__DOT__ostream_rdy;
                __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__19__val 
                    = vlSelf->top__DOT__dut__DOT__val_reg;
                vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len1 = 0U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len1)))
                                          ? 0U : (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__19__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len1))))) 
                                        | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__19__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len1))))))) {
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len1 
                        = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len1);
                    vlSymsp->__Vcoverage[778].fetch_add(1, std::memory_order_relaxed);
                }
                if (VL_UNLIKELY(((IData)(__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__19__rdy) 
                                 & (IData)(__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__19__val)))) {
                    VL_ASSIGN_W(4096,__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__20__str, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__19__str);
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__20__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__20__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__20__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__20__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__20__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__20__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[783].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((IData)(__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__19__rdy) 
                                        & (~ (IData)(__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__19__val))))) {
                    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__21__num 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len1;
                    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__21__char = 0x20U;
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__21__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__21__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__21__char);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[771].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[772].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[782].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((~ (IData)(__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__19__rdy)) 
                                        & (IData)(__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__19__val)))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__22__str,0x00000023);
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__22__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__22__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__22__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__22__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__22__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__22__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__23__num 
                        = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__23__char = 0x20U;
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__23__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__23__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__23__char);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[771].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[772].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[781].fetch_add(1, std::memory_order_relaxed);
                } else if ((1U & ((~ (IData)(__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__19__rdy)) 
                                  & (~ (IData)(__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_val_rdy_str__19__val))))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__24__str,0x0000002e);
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__24__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__24__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__24__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__24__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__24__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__24__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__25__num 
                        = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__25__char = 0x20U;
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__25__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__25__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__25__char);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[771].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[772].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[779].fetch_add(1, std::memory_order_relaxed);
                } else {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__26__str,0x00000078);
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__26__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__26__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__26__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__26__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__26__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_str__26__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__27__num 
                        = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__27__char = 0x20U;
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__27__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__27__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__dut__DOT__vc_trace__DOT__append_chars__27__char);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[771].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[772].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[780].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[784].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__dut__DOT__idx0 = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                vlSelf->top__DOT__dut__DOT__idx1 = 0x1ffU;
                while (VL_GTS_III(32, vlSelf->top__DOT__dut__DOT__idx1, vlSelf->top__DOT__dut__DOT__idx0)) {
                    vlSelf->top__DOT__dut__DOT__idx1 
                        = (vlSelf->top__DOT__dut__DOT__idx1 
                           - (IData)(1U));
                }
                VL_WRITEF("\n");
            }
            vlSelf->top__DOT__dut__DOT__vc_trace__DOT__cycles_next 
                = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__cycles);
            vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
    }
    VL_STOP_MT("tb_Adder.v", 106, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__1\n"); );
    // Body
    VL_WRITEF("Starting tb_Adder...\n");
    vlSelf->top__DOT__reset = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_Adder.v", 
                                       178);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_Adder.v", 
                                                       179);
    vlSelf->top__DOT__reset = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__snk_done)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_Adder.v", 
                                                           183);
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
    }
    if (VL_LIKELY(vlSelf->top__DOT__src_done)) {
        VL_WRITEF("The testbench has finished\n");
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
    } else {
        VL_WRITEF("[%0t] %%Error: tb_Adder.v:187: Assertion failed in %Ntop: [ FAILED ] Our sink received more messages than our source has!\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb_Adder.v", 187, "");
    }
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "tb_Adder.v", 
                                       192);
    VL_FINISH_MT("tb_Adder.v", 193, "");
    vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0xf4240U, vlSelf->top__DOT__unnamedblk2__DOT__i)) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_Adder.v", 
                                                           204);
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk2__DOT__i = ((IData)(1U) 
                                                 + vlSelf->top__DOT__unnamedblk2__DOT__i);
    }
    VL_WRITEF("[%0t] %%Error: tb_Adder.v:207: Assertion failed in %Ntop: TIMEOUT: Testbench didn't finish in time\n",
              64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
    VL_STOP_MT("tb_Adder.v", 207, "");
    VL_FINISH_MT("tb_Adder.v", 208, "");
}

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
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
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
}

void Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSymsp->__Vcoverage[665].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[669].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[680].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[683].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[689].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[757].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[765].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[887].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[891].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[936].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[947].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[950].fetch_add(1, std::memory_order_relaxed);
    if (((IData)(vlSelf->top__DOT__istream_val) & (IData)(vlSelf->top__DOT__istream_rdy))) {
        vlSymsp->__Vcoverage[667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src_done = vlSelf->top__DOT__src__DOT__done_next;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__istream_val) 
                  & (IData)(vlSelf->top__DOT__istream_rdy))))) {
        vlSymsp->__Vcoverage[668].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
        vlSymsp->__Vcoverage[670].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[672].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[674].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[676].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[678].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[937].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[939].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[941].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[945].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((~ (IData)(vlSelf->top__DOT__reset)) 
                      & (IData)(vlSelf->top__DOT__sink__DOT__index_en))))) {
            vlSymsp->__Vcoverage[934].fetch_add(1, std::memory_order_relaxed);
        }
        if (((~ (IData)(vlSelf->top__DOT__reset)) & (IData)(vlSelf->top__DOT__sink__DOT__index_en))) {
            vlSymsp->__Vcoverage[933].fetch_add(1, std::memory_order_relaxed);
            if ((vlSelf->top__DOT__ostream_msg == vlSelf->top__DOT__sink__DOT__m_curr)) {
                vlSymsp->__Vcoverage[929].fetch_add(1, std::memory_order_relaxed);
            }
            if ((vlSelf->top__DOT__ostream_msg != vlSelf->top__DOT__sink__DOT__m_curr)) {
                vlSymsp->__Vcoverage[930].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[932].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if (vlSelf->top__DOT__dut__DOT__istream_send) {
            vlSymsp->__Vcoverage[687].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[754].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__dut__DOT__istream_send)))) {
            vlSymsp->__Vcoverage[755].fetch_add(1, std::memory_order_relaxed);
            if (vlSelf->top__DOT__dut__DOT__ostream_send) {
                vlSymsp->__Vcoverage[685].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__dut__DOT__ostream_send)))) {
                vlSymsp->__Vcoverage[686].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__reset) 
                  | (IData)(vlSelf->top__DOT__sink__DOT__index_en))))) {
        vlSymsp->__Vcoverage[949].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__reset) | (IData)(vlSelf->top__DOT__dut__DOT__istream_send))) {
        vlSymsp->__Vcoverage[681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__index = ((IData)(vlSelf->top__DOT__reset)
                                              ? 0U : (IData)(vlSelf->top__DOT__src__DOT__index_next));
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__reset) 
                  | (IData)(vlSelf->top__DOT__dut__DOT__istream_send))))) {
        vlSymsp->__Vcoverage[682].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__val_reg) 
         & (IData)(vlSelf->top__DOT__ostream_rdy))) {
        vlSymsp->__Vcoverage[889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__snk_done = vlSelf->top__DOT__sink__DOT__done_next;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__val_reg) 
                  & (IData)(vlSelf->top__DOT__ostream_rdy))))) {
        vlSymsp->__Vcoverage[890].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__reset) {
        vlSelf->top__DOT__src__DOT__reset_reg = 1U;
        vlSelf->top__DOT__sink__DOT__reset_reg = 1U;
        vlSymsp->__Vcoverage[679].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[688].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[756].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[935].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__cycles = 0U;
        vlSelf->top__DOT__dut__DOT__b_reg = 0U;
        vlSelf->top__DOT__dut__DOT__a_reg = 0U;
    } else {
        vlSelf->top__DOT__src__DOT__reset_reg = 0U;
        vlSelf->top__DOT__sink__DOT__reset_reg = 0U;
        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__cycles 
            = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__cycles_next;
        if (vlSelf->top__DOT__dut__DOT__istream_send) {
            vlSelf->top__DOT__dut__DOT__b_reg = (IData)(
                                                        (vlSelf->top__DOT__istream_msg 
                                                         >> 0x20U));
            vlSelf->top__DOT__dut__DOT__a_reg = (IData)(vlSelf->top__DOT__istream_msg);
        }
    }
    if (((IData)(vlSelf->top__DOT__reset) | (IData)(vlSelf->top__DOT__sink__DOT__index_en))) {
        vlSymsp->__Vcoverage[948].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__reset) {
        vlSelf->top__DOT__sink__DOT__failed = 0U;
    } else if (((~ (IData)(vlSelf->top__DOT__reset)) 
                & (IData)(vlSelf->top__DOT__sink__DOT__index_en))) {
        if (VL_LIKELY((vlSelf->top__DOT__ostream_msg 
                       == vlSelf->top__DOT__sink__DOT__m_curr))) {
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            VL_WRITEF("     [ passed ] expected = %x, actual = %x\n",
                      32,((2U >= (IData)(vlSelf->top__DOT__sink__DOT__index))
                           ? vlSelf->top__DOT__sink__DOT__m
                          [vlSelf->top__DOT__sink__DOT__index]
                           : 0U),32,vlSelf->top__DOT__ostream_msg);
        } else {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            vlSelf->top__DOT__sink__DOT__failed = 1U;
            VL_WRITEF("     [ FAILED ] expected = %x, actual = %x\n\n ERROR: Test sink found a failure!\n  - module   : %Ntop.sink\n  - expected : %x\n  - actual   : %x\n\n Verify that all unit tests pass; if they do, then debug\n the failure and add a new unit test which would have\n caught the bug in the first place.\n\n",
                      32,((2U >= (IData)(vlSelf->top__DOT__sink__DOT__index))
                           ? vlSelf->top__DOT__sink__DOT__m
                          [vlSelf->top__DOT__sink__DOT__index]
                           : 0U),32,vlSelf->top__DOT__ostream_msg,
                      vlSymsp->name(),32,((2U >= (IData)(vlSelf->top__DOT__sink__DOT__index))
                                           ? vlSelf->top__DOT__sink__DOT__m
                                          [vlSelf->top__DOT__sink__DOT__index]
                                           : 0U),32,
                      vlSelf->top__DOT__ostream_msg);
            VL_FINISH_MT("../vc/TestSink.v", 136, "");
        }
    }
    if (((IData)(vlSelf->top__DOT__reset) | (IData)(vlSelf->top__DOT__sink__DOT__index_en))) {
        vlSelf->top__DOT__sink__DOT__index = ((IData)(vlSelf->top__DOT__reset)
                                               ? 0U
                                               : (IData)(vlSelf->top__DOT__sink__DOT__index_next));
    }
    if (vlSelf->top__DOT__reset) {
        vlSelf->top__DOT__dut__DOT__val_reg = 0U;
    } else if (vlSelf->top__DOT__dut__DOT__istream_send) {
        vlSelf->top__DOT__dut__DOT__val_reg = 1U;
    } else if (vlSelf->top__DOT__dut__DOT__ostream_send) {
        vlSelf->top__DOT__dut__DOT__val_reg = 0U;
    }
    if (((IData)(vlSelf->top__DOT__src_done) ^ (IData)(vlSelf->top__DOT____Vtogcov__src_done))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__src_done = vlSelf->top__DOT__src_done;
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__reset_reg) 
         ^ (IData)(vlSelf->top__DOT__src__DOT____Vtogcov__reset_reg))) {
        vlSymsp->__Vcoverage[664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__reset_reg 
            = vlSelf->top__DOT__src__DOT__reset_reg;
    }
    vlSelf->top__DOT__istream_val = (1U & ((~ (IData)(vlSelf->top__DOT__src__DOT__reset_reg)) 
                                           & (~ (IData)(vlSelf->top__DOT__src_done))));
    if (((IData)(vlSelf->top__DOT__sink__DOT__reset_reg) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT____Vtogcov__reset_reg))) {
        vlSymsp->__Vcoverage[886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__reset_reg 
            = vlSelf->top__DOT__sink__DOT__reset_reg;
    }
    if (((IData)(vlSelf->top__DOT__snk_done) ^ (IData)(vlSelf->top__DOT____Vtogcov__snk_done))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__snk_done = vlSelf->top__DOT__snk_done;
    }
    vlSelf->top__DOT__ostream_rdy = (1U & ((~ (IData)(vlSelf->top__DOT__sink__DOT__reset_reg)) 
                                           & (~ (IData)(vlSelf->top__DOT__snk_done))));
    vlSelf->top__DOT__src__DOT__index_next = (3U & 
                                              ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__src__DOT__index)));
    if ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__index)) 
               ^ (IData)(vlSelf->top__DOT__src__DOT____Vtogcov__index_next)))) {
        vlSymsp->__Vcoverage[660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__index_next 
            = ((2U & (IData)(vlSelf->top__DOT__src__DOT____Vtogcov__index_next)) 
               | (1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__index))));
    }
    if ((1U & ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__index)) 
                      >> 1U)) ^ ((IData)(vlSelf->top__DOT__src__DOT____Vtogcov__index_next) 
                                 >> 1U)))) {
        vlSymsp->__Vcoverage[661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__index_next 
            = ((1U & (IData)(vlSelf->top__DOT__src__DOT____Vtogcov__index_next)) 
               | (2U & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__index))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__src__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__src__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__index 
            = ((2U & (IData)(vlSelf->top__DOT__src__DOT____Vtogcov__index)) 
               | (1U & (IData)(vlSelf->top__DOT__src__DOT__index)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__src__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__src__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__index 
            = ((1U & (IData)(vlSelf->top__DOT__src__DOT____Vtogcov__index)) 
               | (2U & (IData)(vlSelf->top__DOT__src__DOT__index)));
    }
    vlSelf->top__DOT__src__DOT__done_next = ((~ (IData)(vlSelf->top__DOT__src__DOT__reset_reg)) 
                                             & (2U 
                                                == (IData)(vlSelf->top__DOT__src__DOT__index)));
    if ((1U & (vlSelf->top__DOT__dut__DOT__b_reg ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfffffffeU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (1U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((2U & (vlSelf->top__DOT__dut__DOT__b_reg ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfffffffdU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (2U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((4U & (vlSelf->top__DOT__dut__DOT__b_reg ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfffffffbU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (4U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((8U & (vlSelf->top__DOT__dut__DOT__b_reg ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfffffff7U & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (8U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x10U & (vlSelf->top__DOT__dut__DOT__b_reg 
                  ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xffffffefU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x10U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x20U & (vlSelf->top__DOT__dut__DOT__b_reg 
                  ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xffffffdfU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x20U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x40U & (vlSelf->top__DOT__dut__DOT__b_reg 
                  ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xffffffbfU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x40U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x80U & (vlSelf->top__DOT__dut__DOT__b_reg 
                  ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xffffff7fU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x80U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x100U & (vlSelf->top__DOT__dut__DOT__b_reg 
                   ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfffffeffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x100U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x200U & (vlSelf->top__DOT__dut__DOT__b_reg 
                   ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfffffdffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x200U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x400U & (vlSelf->top__DOT__dut__DOT__b_reg 
                   ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfffffbffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x400U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x800U & (vlSelf->top__DOT__dut__DOT__b_reg 
                   ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfffff7ffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x800U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x1000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                    ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xffffefffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x1000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x2000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                    ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xffffdfffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x2000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x4000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                    ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xffffbfffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x4000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x8000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                    ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xffff7fffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x8000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x10000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                     ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfffeffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x10000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x20000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                     ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfffdffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x20000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x40000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                     ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfffbffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x40000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x80000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                     ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfff7ffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x80000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x100000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                      ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xffefffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x100000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x200000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                      ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xffdfffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x200000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x400000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                      ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xffbfffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x400000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x800000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                      ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xff7fffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x800000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                       ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfeffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x1000000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                       ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfdffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x2000000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                       ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfbffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x4000000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                       ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xf7ffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x8000000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                        ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xefffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x10000000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                        ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xdfffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x20000000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                        ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xbfffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x40000000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if (((vlSelf->top__DOT__dut__DOT__b_reg ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0x7fffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x80000000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((1U & (vlSelf->top__DOT__dut__DOT__a_reg ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfffffffeU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (1U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((2U & (vlSelf->top__DOT__dut__DOT__a_reg ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfffffffdU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (2U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((4U & (vlSelf->top__DOT__dut__DOT__a_reg ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfffffffbU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (4U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((8U & (vlSelf->top__DOT__dut__DOT__a_reg ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfffffff7U & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (8U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x10U & (vlSelf->top__DOT__dut__DOT__a_reg 
                  ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xffffffefU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x10U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x20U & (vlSelf->top__DOT__dut__DOT__a_reg 
                  ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xffffffdfU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x20U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x40U & (vlSelf->top__DOT__dut__DOT__a_reg 
                  ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xffffffbfU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x40U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x80U & (vlSelf->top__DOT__dut__DOT__a_reg 
                  ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xffffff7fU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x80U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x100U & (vlSelf->top__DOT__dut__DOT__a_reg 
                   ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfffffeffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x100U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x200U & (vlSelf->top__DOT__dut__DOT__a_reg 
                   ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfffffdffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x200U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x400U & (vlSelf->top__DOT__dut__DOT__a_reg 
                   ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfffffbffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x400U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x800U & (vlSelf->top__DOT__dut__DOT__a_reg 
                   ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfffff7ffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x800U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x1000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                    ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xffffefffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x1000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x2000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                    ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xffffdfffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x2000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x4000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                    ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xffffbfffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x4000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x8000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                    ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xffff7fffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x8000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x10000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                     ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfffeffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x10000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x20000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                     ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfffdffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x20000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x40000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                     ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfffbffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x40000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x80000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                     ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfff7ffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x80000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x100000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                      ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xffefffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x100000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x200000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                      ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xffdfffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x200000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x400000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                      ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xffbfffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x400000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x800000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                      ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xff7fffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x800000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                       ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfeffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x1000000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                       ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfdffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x2000000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                       ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfbffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x4000000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                       ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xf7ffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x8000000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                        ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xefffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x10000000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                        ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xdfffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x20000000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                        ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xbfffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x40000000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if (((vlSelf->top__DOT__dut__DOT__a_reg ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0x7fffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x80000000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    vlSelf->top__DOT__ostream_msg = (vlSelf->top__DOT__dut__DOT__a_reg 
                                     + vlSelf->top__DOT__dut__DOT__b_reg);
    if (((IData)(vlSelf->top__DOT__sink__DOT__failed) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT____Vtogcov__failed))) {
        vlSymsp->__Vcoverage[892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__failed 
            = vlSelf->top__DOT__sink__DOT__failed;
    }
    if (((IData)(vlSelf->top__DOT__istream_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__istream_val))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_val = vlSelf->top__DOT__istream_val;
    }
    if (((IData)(vlSelf->top__DOT__ostream_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__ostream_rdy))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_rdy = vlSelf->top__DOT__ostream_rdy;
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__done_next) 
         ^ (IData)(vlSelf->top__DOT__src__DOT____Vtogcov__done_next))) {
        vlSymsp->__Vcoverage[666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__done_next 
            = vlSelf->top__DOT__src__DOT__done_next;
    }
    if ((1U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (1U & vlSelf->top__DOT__ostream_msg));
    }
    if ((2U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (2U & vlSelf->top__DOT__ostream_msg));
    }
    if ((4U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (4U & vlSelf->top__DOT__ostream_msg));
    }
    if ((8U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (8U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x10U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffffefU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x10U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x20U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x20U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x40U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x40U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x80U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x80U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x100U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x100U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x200U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x200U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x400U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x400U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x800U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x800U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x1000U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffefffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x1000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x2000U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x2000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x4000U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x4000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x8000U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x8000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x10000U & (vlSelf->top__DOT__ostream_msg 
                     ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x10000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x20000U & (vlSelf->top__DOT__ostream_msg 
                     ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x20000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x40000U & (vlSelf->top__DOT__ostream_msg 
                     ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x40000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x80000U & (vlSelf->top__DOT__ostream_msg 
                     ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x80000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x100000U & (vlSelf->top__DOT__ostream_msg 
                      ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffefffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x100000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x200000U & (vlSelf->top__DOT__ostream_msg 
                      ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x200000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x400000U & (vlSelf->top__DOT__ostream_msg 
                      ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x400000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x800000U & (vlSelf->top__DOT__ostream_msg 
                      ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x800000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__ostream_msg 
                       ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x1000000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__ostream_msg 
                       ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x2000000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__ostream_msg 
                       ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x4000000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__ostream_msg 
                       ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x8000000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__ostream_msg 
                        ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xefffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x10000000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__ostream_msg 
                        ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x20000000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__ostream_msg 
                        ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x40000000U & vlSelf->top__DOT__ostream_msg));
    }
    if (((vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x80000000U & vlSelf->top__DOT__ostream_msg));
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__val_reg) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__ostream_val))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_val = vlSelf->top__DOT__dut__DOT__val_reg;
    }
    vlSelf->top__DOT__sink__DOT__index_en = ((IData)(vlSelf->top__DOT__dut__DOT__val_reg) 
                                             & (IData)(vlSelf->top__DOT__ostream_rdy));
    vlSelf->top__DOT__dut__DOT__ostream_send = ((IData)(vlSelf->top__DOT__ostream_rdy) 
                                                & (IData)(vlSelf->top__DOT__dut__DOT__val_reg));
    vlSelf->top__DOT__sink__DOT__index_next = (3U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__sink__DOT__index)));
    if ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__index)) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT____Vtogcov__index_next)))) {
        vlSymsp->__Vcoverage[882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__index_next 
            = ((2U & (IData)(vlSelf->top__DOT__sink__DOT____Vtogcov__index_next)) 
               | (1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__index))));
    }
    if ((1U & ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__index)) 
                      >> 1U)) ^ ((IData)(vlSelf->top__DOT__sink__DOT____Vtogcov__index_next) 
                                 >> 1U)))) {
        vlSymsp->__Vcoverage[883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__index_next 
            = ((1U & (IData)(vlSelf->top__DOT__sink__DOT____Vtogcov__index_next)) 
               | (2U & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__index))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__sink__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__index 
            = ((2U & (IData)(vlSelf->top__DOT__sink__DOT____Vtogcov__index)) 
               | (1U & (IData)(vlSelf->top__DOT__sink__DOT__index)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__sink__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__index 
            = ((1U & (IData)(vlSelf->top__DOT__sink__DOT____Vtogcov__index)) 
               | (2U & (IData)(vlSelf->top__DOT__sink__DOT__index)));
    }
    vlSelf->top__DOT__sink__DOT__done_next = ((~ (IData)(vlSelf->top__DOT__sink__DOT__reset_reg)) 
                                              & (2U 
                                                 == (IData)(vlSelf->top__DOT__sink__DOT__index)));
    if (((IData)(vlSelf->top__DOT__sink__DOT__index_en) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT____Vtogcov__index_en))) {
        vlSymsp->__Vcoverage[881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__index_en 
            = vlSelf->top__DOT__sink__DOT__index_en;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__ostream_send) 
         ^ (IData)(vlSelf->top__DOT__dut__DOT____Vtogcov__ostream_send))) {
        vlSymsp->__Vcoverage[684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__ostream_send 
            = vlSelf->top__DOT__dut__DOT__ostream_send;
    }
    vlSelf->top__DOT__istream_rdy = (1U & ((~ (IData)(vlSelf->top__DOT__dut__DOT__val_reg)) 
                                           | (IData)(vlSelf->top__DOT__dut__DOT__ostream_send)));
    if (((IData)(vlSelf->top__DOT__sink__DOT__done_next) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT____Vtogcov__done_next))) {
        vlSymsp->__Vcoverage[888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__done_next 
            = vlSelf->top__DOT__sink__DOT__done_next;
    }
    if (((IData)(vlSelf->top__DOT__istream_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__istream_rdy))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_rdy = vlSelf->top__DOT__istream_rdy;
    }
    vlSelf->top__DOT__dut__DOT__istream_send = ((IData)(vlSelf->top__DOT__istream_val) 
                                                & (IData)(vlSelf->top__DOT__istream_rdy));
    if (((IData)(vlSelf->top__DOT__dut__DOT__istream_send) 
         ^ (IData)(vlSelf->top__DOT__src__DOT____Vtogcov__index_en))) {
        vlSymsp->__Vcoverage[659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__index_en 
            = vlSelf->top__DOT__dut__DOT__istream_send;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__istream_msg = ((2U >= (IData)(vlSelf->top__DOT__src__DOT__index))
                                      ? vlSelf->top__DOT__src__DOT__m
                                     [vlSelf->top__DOT__src__DOT__index]
                                      : 0ULL);
    vlSelf->top__DOT__sink__DOT__m_curr = ((2U >= (IData)(vlSelf->top__DOT__sink__DOT__index))
                                            ? vlSelf->top__DOT__sink__DOT__m
                                           [vlSelf->top__DOT__sink__DOT__index]
                                            : 0U);
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
    if ((1U & (vlSelf->top__DOT__sink__DOT__m_curr 
               ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (1U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__m_curr 
               ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (2U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__m_curr 
               ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (4U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__m_curr 
               ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (8U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__m_curr 
                  ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__m_curr 
                  ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__m_curr 
                  ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__m_curr 
                  ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__m_curr 
                   ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__m_curr 
                   ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__m_curr 
                   ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__m_curr 
                   ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__m_curr 
                    ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__m_curr 
                    ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__m_curr 
                    ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__m_curr 
                    ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__m_curr 
                     ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__m_curr 
                     ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__m_curr 
                     ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__m_curr 
                     ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__m_curr 
                      ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__m_curr 
                      ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__m_curr 
                      ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__m_curr 
                      ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__m_curr 
                       ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__m_curr 
                       ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__m_curr 
                       ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__m_curr 
                       ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__m_curr 
                        ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__m_curr 
                        ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__m_curr 
                        ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
    if (((vlSelf->top__DOT__sink__DOT__m_curr ^ vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__m_curr));
    }
}
