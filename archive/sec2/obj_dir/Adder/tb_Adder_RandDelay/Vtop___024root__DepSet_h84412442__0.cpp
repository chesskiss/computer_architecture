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
                                                           "tb_Adder_RandDelay.v", 
                                                           109);
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
                    vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
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
                    vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
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
                    vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
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
                    vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
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
                    vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
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
                    vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
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
    VL_STOP_MT("tb_Adder_RandDelay.v", 112, "");
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
                                       "tb_Adder_RandDelay.v", 
                                       185);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_Adder_RandDelay.v", 
                                                       186);
    vlSelf->top__DOT__reset = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__snk_done)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_Adder_RandDelay.v", 
                                                           190);
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
    }
    if (VL_LIKELY(vlSelf->top__DOT__src_done)) {
        VL_WRITEF("The testbench has finished\n");
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
    } else {
        VL_WRITEF("[%0t] %%Error: tb_Adder_RandDelay.v:194: Assertion failed in %Ntop: [ FAILED ] Our sink received more messages than our source has!\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb_Adder_RandDelay.v", 194, "");
    }
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "tb_Adder_RandDelay.v", 
                                       199);
    VL_FINISH_MT("tb_Adder_RandDelay.v", 200, "");
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
                                                           "tb_Adder_RandDelay.v", 
                                                           211);
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk2__DOT__i = ((IData)(1U) 
                                                 + vlSelf->top__DOT__unnamedblk2__DOT__i);
    }
    VL_WRITEF("[%0t] %%Error: tb_Adder_RandDelay.v:214: Assertion failed in %Ntop: TIMEOUT: Testbench didn't finish in time\n",
              64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
    VL_STOP_MT("tb_Adder_RandDelay.v", 214, "");
    VL_FINISH_MT("tb_Adder_RandDelay.v", 215, "");
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
    vlSymsp->__Vcoverage[732].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[736].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[747].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[750].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[783].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[785].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[856].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[890].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[893].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[964].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1032].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1126].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1128].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1199].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1233].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1236].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1339].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1343].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1388].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1399].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1402].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
        vlSymsp->__Vcoverage[737].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[739].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[741].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[743].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[745].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[855].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[886].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[884].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[882].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[880].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[878].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[876].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[874].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[872].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[870].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[868].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[888].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1198].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1229].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1227].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1225].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1223].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1221].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1219].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1217].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1215].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1213].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1211].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1231].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1389].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1391].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1393].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1395].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1397].fetch_add(1, std::memory_order_relaxed);
        if (vlSelf->top__DOT__dut__DOT__istream_send) {
            vlSymsp->__Vcoverage[962].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[1029].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__dut__DOT__istream_send)))) {
            vlSymsp->__Vcoverage[1030].fetch_add(1, std::memory_order_relaxed);
            if (vlSelf->top__DOT__dut__DOT__ostream_send) {
                vlSymsp->__Vcoverage[960].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__dut__DOT__ostream_send)))) {
                vlSymsp->__Vcoverage[961].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if (((~ (IData)(vlSelf->top__DOT__reset)) & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_en))) {
            vlSymsp->__Vcoverage[1385].fetch_add(1, std::memory_order_relaxed);
            if ((vlSelf->top__DOT__sink__DOT__sink_msg 
                 == vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr)) {
                vlSymsp->__Vcoverage[1381].fetch_add(1, std::memory_order_relaxed);
            }
            if ((vlSelf->top__DOT__sink__DOT__sink_msg 
                 != vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr)) {
                vlSymsp->__Vcoverage[1383].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1384].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U & (~ ((~ (IData)(vlSelf->top__DOT__reset)) 
                      & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_en))))) {
            vlSymsp->__Vcoverage[1386].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__reset) | (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_en))) {
        vlSymsp->__Vcoverage[748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT__index 
            = ((IData)(vlSelf->top__DOT__reset) ? 0U
                : (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_next));
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__reset) 
                  | (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_en))))) {
        vlSymsp->__Vcoverage[749].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__reset) | (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en))) {
        vlSymsp->__Vcoverage[891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
            = ((IData)(vlSelf->top__DOT__reset) ? 0U
                : vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__reset) 
                  | (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en))))) {
        vlSymsp->__Vcoverage[892].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__reset) | (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en))) {
        vlSymsp->__Vcoverage[1234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
            = ((IData)(vlSelf->top__DOT__reset) ? 0U
                : vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__reset) 
                  | (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en))))) {
        vlSymsp->__Vcoverage[1235].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__reset) 
                  | (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_en))))) {
        vlSymsp->__Vcoverage[1401].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink_val) 
         & (IData)(vlSelf->top__DOT__sink__DOT__sink_rdy))) {
        vlSymsp->__Vcoverage[1341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__snk_done = vlSelf->top__DOT__sink__DOT__sink__DOT__done_next;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__sink__DOT__sink_val) 
                  & (IData)(vlSelf->top__DOT__sink__DOT__sink_rdy))))) {
        vlSymsp->__Vcoverage[1342].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__src_val) 
         & (IData)(vlSelf->top__DOT__src__DOT__src_rdy))) {
        vlSymsp->__Vcoverage[734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src_done = vlSelf->top__DOT__src__DOT__src__DOT__done_next;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                  & (IData)(vlSelf->top__DOT__src__DOT__src_rdy))))) {
        vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg 
        = vlSelf->top__DOT__reset;
    vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state 
        = ((~ (IData)(vlSelf->top__DOT__reset)) & (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next));
    vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num = 0U;
    vlSelf->top__DOT__src__DOT__src__DOT__reset_reg 
        = vlSelf->top__DOT__reset;
    vlSelf->top__DOT__src__DOT__msg_delay__DOT__state 
        = ((~ (IData)(vlSelf->top__DOT__reset)) & (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next));
    vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num = 0U;
    if (vlSelf->top__DOT__reset) {
        vlSymsp->__Vcoverage[746].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[854].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[889].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[963].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1031].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1197].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1232].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1387].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__cycles = 0U;
        vlSelf->top__DOT__dut__DOT__val_reg = 0U;
        vlSelf->top__DOT__dut__DOT__b_reg = 0U;
        vlSelf->top__DOT__dut__DOT__a_reg = 0U;
    } else {
        vlSelf->top__DOT__dut__DOT__vc_trace__DOT__cycles 
            = vlSelf->top__DOT__dut__DOT__vc_trace__DOT__cycles_next;
        if (vlSelf->top__DOT__dut__DOT__istream_send) {
            vlSelf->top__DOT__dut__DOT__val_reg = 1U;
            vlSelf->top__DOT__dut__DOT__b_reg = vlSelf->top__DOT__dut__DOT__b;
            vlSelf->top__DOT__dut__DOT__a_reg = vlSelf->top__DOT__dut__DOT__a;
        } else if (vlSelf->top__DOT__dut__DOT__ostream_send) {
            vlSelf->top__DOT__dut__DOT__val_reg = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__reset) | (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_en))) {
        vlSymsp->__Vcoverage[1400].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__reset) {
        vlSelf->top__DOT__sink__DOT__sink__DOT__failed = 0U;
    } else if (((~ (IData)(vlSelf->top__DOT__reset)) 
                & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_en))) {
        if ((vlSelf->top__DOT__sink__DOT__sink_msg 
             == vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr)) {
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            VL_WRITEF("     [ passed ] expected = %x, actual = %x\n",
                      32,((2U >= (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))
                           ? vlSelf->top__DOT__sink__DOT__sink__DOT__m
                          [vlSelf->top__DOT__sink__DOT__sink__DOT__index]
                           : 0U),32,vlSelf->top__DOT__sink__DOT__sink_msg);
        } else {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            vlSelf->top__DOT__sink__DOT__sink__DOT__failed = 1U;
            VL_WRITEF("     [ FAILED ] expected = %x, actual = %x\n",
                      32,((2U >= (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))
                           ? vlSelf->top__DOT__sink__DOT__sink__DOT__m
                          [vlSelf->top__DOT__sink__DOT__sink__DOT__index]
                           : 0U),32,vlSelf->top__DOT__sink__DOT__sink_msg);
        }
    }
    if (((IData)(vlSelf->top__DOT__reset) | (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_en))) {
        vlSelf->top__DOT__sink__DOT__sink__DOT__index 
            = ((IData)(vlSelf->top__DOT__reset) ? 0U
                : (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_next));
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__reset_reg))) {
        vlSymsp->__Vcoverage[1338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__reset_reg 
            = vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg;
    }
    if (((IData)(vlSelf->top__DOT__snk_done) ^ (IData)(vlSelf->top__DOT____Vtogcov__snk_done))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__snk_done = vlSelf->top__DOT__snk_done;
    }
    vlSelf->top__DOT__sink__DOT__sink_rdy = (1U & (
                                                   (~ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg)) 
                                                   & (~ (IData)(vlSelf->top__DOT__snk_done))));
    if (((IData)(vlSelf->top__DOT__dut__DOT__val_reg) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__ostream_val))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_val = vlSelf->top__DOT__dut__DOT__val_reg;
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[1196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__state 
            = vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state;
    }
    if ((1U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (1U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (2U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (4U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (8U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[1124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if (((vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
          ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((1U & (vlSelf->top__DOT__dut__DOT__b_reg ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfffffffeU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (1U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((2U & (vlSelf->top__DOT__dut__DOT__b_reg ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfffffffdU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (2U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((4U & (vlSelf->top__DOT__dut__DOT__b_reg ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfffffffbU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (4U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((8U & (vlSelf->top__DOT__dut__DOT__b_reg ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[1000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfffffff7U & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (8U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x10U & (vlSelf->top__DOT__dut__DOT__b_reg 
                  ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[1001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xffffffefU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x10U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x20U & (vlSelf->top__DOT__dut__DOT__b_reg 
                  ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[1002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xffffffdfU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x20U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x40U & (vlSelf->top__DOT__dut__DOT__b_reg 
                  ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[1003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xffffffbfU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x40U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x80U & (vlSelf->top__DOT__dut__DOT__b_reg 
                  ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[1004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xffffff7fU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x80U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x100U & (vlSelf->top__DOT__dut__DOT__b_reg 
                   ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[1005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfffffeffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x100U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x200U & (vlSelf->top__DOT__dut__DOT__b_reg 
                   ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[1006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfffffdffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x200U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x400U & (vlSelf->top__DOT__dut__DOT__b_reg 
                   ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[1007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfffffbffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x400U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x800U & (vlSelf->top__DOT__dut__DOT__b_reg 
                   ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[1008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfffff7ffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x800U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x1000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                    ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[1009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xffffefffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x1000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x2000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                    ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[1010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xffffdfffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x2000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x4000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                    ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[1011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xffffbfffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x4000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x8000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                    ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[1012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xffff7fffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x8000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x10000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                     ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[1013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfffeffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x10000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x20000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                     ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[1014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfffdffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x20000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x40000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                     ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[1015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfffbffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x40000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x80000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                     ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[1016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfff7ffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x80000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x100000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                      ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[1017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xffefffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x100000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x200000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                      ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[1018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xffdfffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x200000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x400000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                      ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[1019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xffbfffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x400000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x800000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                      ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[1020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xff7fffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x800000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                       ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[1021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfeffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x1000000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                       ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[1022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfdffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x2000000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                       ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[1023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xfbffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x4000000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                       ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[1024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xf7ffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x8000000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                        ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[1025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xefffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x10000000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                        ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[1026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xdfffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x20000000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__dut__DOT__b_reg 
                        ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg))) {
        vlSymsp->__Vcoverage[1027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0xbfffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x40000000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if (((vlSelf->top__DOT__dut__DOT__b_reg ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg 
            = ((0x7fffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b_reg) 
               | (0x80000000U & vlSelf->top__DOT__dut__DOT__b_reg));
    }
    if ((1U & (vlSelf->top__DOT__dut__DOT__a_reg ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfffffffeU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (1U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((2U & (vlSelf->top__DOT__dut__DOT__a_reg ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfffffffdU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (2U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((4U & (vlSelf->top__DOT__dut__DOT__a_reg ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfffffffbU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (4U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((8U & (vlSelf->top__DOT__dut__DOT__a_reg ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfffffff7U & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (8U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x10U & (vlSelf->top__DOT__dut__DOT__a_reg 
                  ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xffffffefU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x10U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x20U & (vlSelf->top__DOT__dut__DOT__a_reg 
                  ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xffffffdfU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x20U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x40U & (vlSelf->top__DOT__dut__DOT__a_reg 
                  ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xffffffbfU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x40U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x80U & (vlSelf->top__DOT__dut__DOT__a_reg 
                  ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xffffff7fU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x80U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x100U & (vlSelf->top__DOT__dut__DOT__a_reg 
                   ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfffffeffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x100U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x200U & (vlSelf->top__DOT__dut__DOT__a_reg 
                   ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfffffdffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x200U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x400U & (vlSelf->top__DOT__dut__DOT__a_reg 
                   ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfffffbffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x400U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x800U & (vlSelf->top__DOT__dut__DOT__a_reg 
                   ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfffff7ffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x800U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x1000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                    ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xffffefffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x1000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x2000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                    ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xffffdfffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x2000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x4000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                    ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xffffbfffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x4000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x8000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                    ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xffff7fffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x8000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x10000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                     ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfffeffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x10000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x20000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                     ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfffdffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x20000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x40000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                     ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfffbffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x40000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x80000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                     ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfff7ffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x80000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x100000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                      ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xffefffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x100000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x200000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                      ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xffdfffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x200000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x400000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                      ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xffbfffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x400000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x800000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                      ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xff7fffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x800000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                       ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfeffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x1000000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                       ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfdffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x2000000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                       ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xfbffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x4000000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                       ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xf7ffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x8000000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                        ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xefffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x10000000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                        ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xdfffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x20000000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__dut__DOT__a_reg 
                        ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg))) {
        vlSymsp->__Vcoverage[995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0xbfffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x40000000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    if (((vlSelf->top__DOT__dut__DOT__a_reg ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg 
            = ((0x7fffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a_reg) 
               | (0x80000000U & vlSelf->top__DOT__dut__DOT__a_reg));
    }
    vlSelf->top__DOT__ostream_msg = (vlSelf->top__DOT__dut__DOT__a_reg 
                                     + vlSelf->top__DOT__dut__DOT__b_reg);
    if ((1U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (1U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (2U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (4U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (8U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[1192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if (((vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
          ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__reset_reg))) {
        vlSymsp->__Vcoverage[731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__reset_reg 
            = vlSelf->top__DOT__src__DOT__src__DOT__reset_reg;
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__state))) {
        vlSymsp->__Vcoverage[853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__state 
            = vlSelf->top__DOT__src__DOT__msg_delay__DOT__state;
    }
    if ((1U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffeU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (1U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((2U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffdU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (2U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((4U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffffbU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (4U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((8U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffff7U & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (8U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffefU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffdfU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffffbfU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x80U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffff7fU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x100U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffeffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x100U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x200U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffdffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x200U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x400U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffffbffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x400U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x800U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffff7ffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x800U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x1000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffefffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x1000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x2000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffdfffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x2000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x4000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffffbfffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x4000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x8000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffff7fffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x8000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffeffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffdffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfffbffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x80000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfff7ffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x100000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffefffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x100000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x200000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffdfffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x200000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x400000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xffbfffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x400000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x800000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xff7fffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x800000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x1000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfeffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x1000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x2000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfdffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x2000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x4000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xfbffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x4000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x8000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xf7ffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x8000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x10000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xefffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x10000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x20000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xdfffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x20000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x40000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0xbfffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x40000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if (((vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
          ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num 
            = ((0x7fffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num) 
               | (0x80000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((1U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffeU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (1U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((2U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffdU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (2U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((4U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffffbU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (4U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((8U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffff7U & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (8U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffefU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffdfU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffffbfU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x80U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffff7fU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x100U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffeffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x100U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x200U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffdffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x200U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x400U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffffbffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x400U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x800U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffff7ffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x800U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x1000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffefffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x1000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x2000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffdfffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x2000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x4000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffffbfffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x4000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x8000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffff7fffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x8000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffeffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffdffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfffbffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x80000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfff7ffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x100000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffefffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x100000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x200000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffdfffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x200000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x400000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xffbfffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x400000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x800000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xff7fffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x800000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x1000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfeffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x1000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x2000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfdffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x2000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x4000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xfbffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x4000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x8000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xf7ffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x8000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x10000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xefffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x10000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x20000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xdfffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x20000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if ((0x40000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0xbfffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x40000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if (((vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
          ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay 
            = ((0x7fffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay) 
               | (0x80000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
    }
    if (((IData)(vlSelf->top__DOT__src_done) ^ (IData)(vlSelf->top__DOT____Vtogcov__src_done))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__src_done = vlSelf->top__DOT__src_done;
    }
    vlSelf->top__DOT__src__DOT__src_val = (1U & ((~ (IData)(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg)) 
                                                 & (~ (IData)(vlSelf->top__DOT__src_done))));
    vlSelf->top__DOT__src__DOT__src__DOT__index_next 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)));
    if ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next)))) {
        vlSymsp->__Vcoverage[727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next 
            = ((2U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next)) 
               | (1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index))));
    }
    if ((1U & ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)) 
                      >> 1U)) ^ ((IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next) 
                                 >> 1U)))) {
        vlSymsp->__Vcoverage[728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next 
            = ((1U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_next)) 
               | (2U & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index 
            = ((2U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)) 
               | (1U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index 
            = ((1U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index)) 
               | (2U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)));
    }
    vlSelf->top__DOT__src__DOT__src__DOT__done_next 
        = ((~ (IData)(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg)) 
           & (2U == (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)));
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__failed) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__failed))) {
        vlSymsp->__Vcoverage[1344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__failed 
            = vlSelf->top__DOT__sink__DOT__sink__DOT__failed;
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT____Vtogcov__sink_rdy))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_rdy 
            = vlSelf->top__DOT__sink__DOT__sink_rdy;
    }
    vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__dut__DOT__val_reg) 
           & ((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
              & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num)));
    if ((1U & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)))) {
        vlSymsp->__Vcoverage[1202].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1207].fetch_add(1, std::memory_order_relaxed);
        if (((IData)(vlSelf->top__DOT__dut__DOT__val_reg) 
             & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[1200].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__val_reg) 
                      & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[1201].fetch_add(1, std::memory_order_relaxed);
        }
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
    if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
        if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
            vlSymsp->__Vcoverage[1205].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[1208].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                = (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                   - (IData)(1U));
        } else {
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)))) {
            vlSymsp->__Vcoverage[1209].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
            = ((0U < vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num)
                ? (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                   - (IData)(1U)) : vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num);
    }
    if ((1U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (1U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (2U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (4U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (8U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[1160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if (((vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
          ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    vlSelf->top__DOT__sink__DOT__sink_val = ((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)
                                              ? ((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) 
                                                 & ((IData)(vlSelf->top__DOT__dut__DOT__val_reg) 
                                                    & (0U 
                                                       == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay)))
                                              : ((IData)(vlSelf->top__DOT__dut__DOT__val_reg) 
                                                 & (0U 
                                                    == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink_val) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT____Vtogcov__sink_val))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_val 
            = vlSelf->top__DOT__sink__DOT__sink_val;
    }
    vlSelf->top__DOT__sink__DOT__sink_msg = ((IData)(vlSelf->top__DOT__sink__DOT__sink_val)
                                              ? vlSelf->top__DOT__ostream_msg
                                              : 0U);
    if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
        if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
            vlSymsp->__Vcoverage[862].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[865].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                = (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                   - (IData)(1U));
        } else {
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state)))) {
            vlSymsp->__Vcoverage[866].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
            = ((0U < vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num)
                ? (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                   - (IData)(1U)) : vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num);
    }
    if ((1U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffeU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (1U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((2U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffdU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (2U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((4U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffbU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (4U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((8U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffff7U & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (8U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x10U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffefU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x10U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x20U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffdfU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x20U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x40U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffbfU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x40U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x80U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffff7fU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x80U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x100U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffeffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x100U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x200U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffdffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x200U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x400U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffbffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x400U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x800U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffff7ffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x800U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x1000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffefffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x1000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x2000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffdfffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x2000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x4000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffbfffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x4000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x8000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffff7fffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x8000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x10000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffeffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x10000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x20000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffdffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x20000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x40000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffbffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x40000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x80000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfff7ffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x80000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x100000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffefffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x100000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x200000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffdfffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x200000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x400000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffbfffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x400000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x800000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xff7fffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x800000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x1000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfeffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x1000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x2000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfdffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x2000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x4000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfbffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x4000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x8000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xf7ffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x8000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x10000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xefffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x10000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x20000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xdfffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x20000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x40000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xbfffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x40000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if (((vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
          ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0x7fffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x80000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__src_val) 
         ^ (IData)(vlSelf->top__DOT__src__DOT____Vtogcov__src_val))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_val 
            = vlSelf->top__DOT__src__DOT__src_val;
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__src__DOT__done_next) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__done_next))) {
        vlSymsp->__Vcoverage[733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__done_next 
            = vlSelf->top__DOT__src__DOT__src__DOT__done_next;
    }
    vlSelf->top__DOT__sink__DOT__sink__DOT__index_en 
        = ((IData)(vlSelf->top__DOT__sink__DOT__sink_val) 
           & (IData)(vlSelf->top__DOT__sink__DOT__sink_rdy));
    if (((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[1194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 1U;
        if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__dut__DOT__val_reg) 
                  & (IData)(vlSelf->top__DOT__sink__DOT__sink_rdy)) 
                 & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[1203].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 0U;
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__dut__DOT__val_reg) 
                           & (IData)(vlSelf->top__DOT__sink__DOT__sink_rdy)) 
                          & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[1204].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__ostream_rdy = ((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
                                             & (0U 
                                                == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay);
        } else {
            vlSelf->top__DOT__ostream_rdy = 0U;
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 0U;
        vlSelf->top__DOT__ostream_rdy = ((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
                                         & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
        if (((IData)(vlSelf->top__DOT__dut__DOT__val_reg) 
             & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__ostream_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__ostream_rdy))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_rdy = vlSelf->top__DOT__ostream_rdy;
    }
    vlSelf->top__DOT__dut__DOT__ostream_send = ((IData)(vlSelf->top__DOT__dut__DOT__val_reg) 
                                                & (IData)(vlSelf->top__DOT__ostream_rdy));
    if ((1U & (vlSelf->top__DOT__sink__DOT__sink_msg 
               ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (1U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__sink_msg 
               ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (2U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__sink_msg 
               ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (4U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__sink_msg 
               ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (8U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                  ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                  ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                  ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                  ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                   ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                   ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                   ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                   ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                    ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                    ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                    ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                    ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                     ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                     ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                     ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                     ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                      ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                      ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                      ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                      ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                       ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                       ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                       ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                       ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                        ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                        ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                        ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[1092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if (((vlSelf->top__DOT__sink__DOT__sink_msg ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    vlSelf->top__DOT__istream_val = ((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state)
                                      ? ((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) 
                                         & ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                                            & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay)))
                                      : ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                                         & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__istream_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__istream_val))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_val = vlSelf->top__DOT__istream_val;
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_en) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_en))) {
        vlSymsp->__Vcoverage[1333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_en 
            = vlSelf->top__DOT__sink__DOT__sink__DOT__index_en;
    }
    vlSelf->top__DOT__sink__DOT__sink__DOT__index_next 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)));
    if ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next)))) {
        vlSymsp->__Vcoverage[1334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next 
            = ((2U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next)) 
               | (1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))));
    }
    if ((1U & ((1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)) 
                      >> 1U)) ^ ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next) 
                                 >> 1U)))) {
        vlSymsp->__Vcoverage[1335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next 
            = ((1U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next)) 
               | (2U & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[1336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index 
            = ((2U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)) 
               | (1U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)))) {
        vlSymsp->__Vcoverage[1337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index 
            = ((1U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index)) 
               | (2U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)));
    }
    vlSelf->top__DOT__sink__DOT__sink__DOT__done_next 
        = ((~ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg)) 
           & (2U == (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)));
    if (((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[1129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[1195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__ostream_send) 
         ^ (IData)(vlSelf->top__DOT__dut__DOT____Vtogcov__ostream_send))) {
        vlSymsp->__Vcoverage[959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__ostream_send 
            = vlSelf->top__DOT__dut__DOT__ostream_send;
    }
    vlSelf->top__DOT__istream_rdy = (1U & ((~ (IData)(vlSelf->top__DOT__dut__DOT__val_reg)) 
                                           | (IData)(vlSelf->top__DOT__dut__DOT__ostream_send)));
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__done_next) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__done_next))) {
        vlSymsp->__Vcoverage[1340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__done_next 
            = vlSelf->top__DOT__sink__DOT__sink__DOT__done_next;
    }
    if (((IData)(vlSelf->top__DOT__istream_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__istream_rdy))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_rdy = vlSelf->top__DOT__istream_rdy;
    }
    vlSelf->top__DOT__dut__DOT__istream_send = ((IData)(vlSelf->top__DOT__istream_val) 
                                                & (IData)(vlSelf->top__DOT__istream_rdy));
    vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
           & ((IData)(vlSelf->top__DOT__istream_rdy) 
              & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num)));
    if ((1U & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state)))) {
        vlSymsp->__Vcoverage[859].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[864].fetch_add(1, std::memory_order_relaxed);
        if (((IData)(vlSelf->top__DOT__src__DOT__src_val) 
             & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[857].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                      & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[858].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__dut__DOT__istream_send) 
         ^ (IData)(vlSelf->top__DOT__dut__DOT____Vtogcov__istream_send))) {
        vlSymsp->__Vcoverage[958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__istream_send 
            = vlSelf->top__DOT__dut__DOT__istream_send;
    }
    if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
        if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                  & (IData)(vlSelf->top__DOT__istream_rdy)) 
                 & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[860].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                           & (IData)(vlSelf->top__DOT__istream_rdy)) 
                          & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[861].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__src__DOT__src_rdy = ((IData)(vlSelf->top__DOT__istream_rdy) 
                                                   & (0U 
                                                      == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
        } else {
            vlSelf->top__DOT__src__DOT__src_rdy = 0U;
        }
    } else {
        vlSelf->top__DOT__src__DOT__src_rdy = ((IData)(vlSelf->top__DOT__istream_rdy) 
                                               & (0U 
                                                  == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__src_rdy) 
         ^ (IData)(vlSelf->top__DOT__src__DOT____Vtogcov__src_rdy))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_rdy 
            = vlSelf->top__DOT__src__DOT__src_rdy;
    }
    vlSelf->top__DOT__src__DOT__src__DOT__index_en 
        = ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
           & (IData)(vlSelf->top__DOT__src__DOT__src_rdy));
    if (((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
        vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next = 1U;
        if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay);
            if ((((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                  & (IData)(vlSelf->top__DOT__istream_rdy)) 
                 & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay))) {
                vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next = 0U;
            }
        } else {
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next = 0U;
        if (((IData)(vlSelf->top__DOT__src__DOT__src_val) 
             & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_en) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_en))) {
        vlSymsp->__Vcoverage[726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_en 
            = vlSelf->top__DOT__src__DOT__src__DOT__index_en;
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__src__DOT__src_msg = ((2U >= (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index))
                                            ? vlSelf->top__DOT__src__DOT__src__DOT__m
                                           [vlSelf->top__DOT__src__DOT__src__DOT__index]
                                            : 0ULL);
    vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
        = ((2U >= (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))
            ? vlSelf->top__DOT__sink__DOT__sink__DOT__m
           [vlSelf->top__DOT__sink__DOT__sink__DOT__index]
            : 0U);
    if ((1U & ((IData)(vlSelf->top__DOT__src__DOT__src_msg) 
               ^ (IData)(vlSelf->top__DOT__src__DOT____Vtogcov__src_msg)))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__src__DOT__src_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src__DOT__src_msg 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__src__DOT__src_msg 
                  ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (vlSelf->top__DOT__istream_val) {
        vlSelf->top__DOT__dut__DOT__a = (IData)(vlSelf->top__DOT__src__DOT__src_msg);
        vlSelf->top__DOT__dut__DOT__b = (IData)((vlSelf->top__DOT__src__DOT__src_msg 
                                                 >> 0x20U));
        vlSelf->top__DOT__istream_msg = vlSelf->top__DOT__src__DOT__src_msg;
    } else {
        vlSelf->top__DOT__dut__DOT__a = 0U;
        vlSelf->top__DOT__dut__DOT__b = 0U;
        vlSelf->top__DOT__istream_msg = 0ULL;
    }
    if ((1U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (1U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (2U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (4U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (8U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if (((vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
          ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((1U & (vlSelf->top__DOT__dut__DOT__a ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xfffffffeU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (1U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((2U & (vlSelf->top__DOT__dut__DOT__a ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xfffffffdU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (2U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((4U & (vlSelf->top__DOT__dut__DOT__a ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xfffffffbU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (4U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((8U & (vlSelf->top__DOT__dut__DOT__a ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xfffffff7U & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (8U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((0x10U & (vlSelf->top__DOT__dut__DOT__a ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xffffffefU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (0x10U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((0x20U & (vlSelf->top__DOT__dut__DOT__a ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xffffffdfU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (0x20U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((0x40U & (vlSelf->top__DOT__dut__DOT__a ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xffffffbfU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (0x40U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((0x80U & (vlSelf->top__DOT__dut__DOT__a ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xffffff7fU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (0x80U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((0x100U & (vlSelf->top__DOT__dut__DOT__a ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xfffffeffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (0x100U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((0x200U & (vlSelf->top__DOT__dut__DOT__a ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xfffffdffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (0x200U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((0x400U & (vlSelf->top__DOT__dut__DOT__a ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xfffffbffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (0x400U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((0x800U & (vlSelf->top__DOT__dut__DOT__a ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xfffff7ffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (0x800U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((0x1000U & (vlSelf->top__DOT__dut__DOT__a ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xffffefffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (0x1000U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((0x2000U & (vlSelf->top__DOT__dut__DOT__a ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xffffdfffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (0x2000U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((0x4000U & (vlSelf->top__DOT__dut__DOT__a ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xffffbfffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (0x4000U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((0x8000U & (vlSelf->top__DOT__dut__DOT__a ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xffff7fffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (0x8000U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((0x10000U & (vlSelf->top__DOT__dut__DOT__a 
                     ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xfffeffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (0x10000U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((0x20000U & (vlSelf->top__DOT__dut__DOT__a 
                     ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xfffdffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (0x20000U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((0x40000U & (vlSelf->top__DOT__dut__DOT__a 
                     ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xfffbffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (0x40000U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((0x80000U & (vlSelf->top__DOT__dut__DOT__a 
                     ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xfff7ffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (0x80000U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((0x100000U & (vlSelf->top__DOT__dut__DOT__a 
                      ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xffefffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (0x100000U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((0x200000U & (vlSelf->top__DOT__dut__DOT__a 
                      ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xffdfffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (0x200000U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((0x400000U & (vlSelf->top__DOT__dut__DOT__a 
                      ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xffbfffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (0x400000U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((0x800000U & (vlSelf->top__DOT__dut__DOT__a 
                      ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xff7fffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (0x800000U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((0x1000000U & (vlSelf->top__DOT__dut__DOT__a 
                       ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xfeffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (0x1000000U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((0x2000000U & (vlSelf->top__DOT__dut__DOT__a 
                       ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xfdffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (0x2000000U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((0x4000000U & (vlSelf->top__DOT__dut__DOT__a 
                       ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xfbffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (0x4000000U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((0x8000000U & (vlSelf->top__DOT__dut__DOT__a 
                       ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xf7ffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (0x8000000U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((0x10000000U & (vlSelf->top__DOT__dut__DOT__a 
                        ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xefffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (0x10000000U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((0x20000000U & (vlSelf->top__DOT__dut__DOT__a 
                        ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xdfffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (0x20000000U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((0x40000000U & (vlSelf->top__DOT__dut__DOT__a 
                        ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a))) {
        vlSymsp->__Vcoverage[924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0xbfffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (0x40000000U & vlSelf->top__DOT__dut__DOT__a));
    }
    if (((vlSelf->top__DOT__dut__DOT__a ^ vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__a = 
            ((0x7fffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__a) 
             | (0x80000000U & vlSelf->top__DOT__dut__DOT__a));
    }
    if ((1U & (vlSelf->top__DOT__dut__DOT__b ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xfffffffeU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (1U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((2U & (vlSelf->top__DOT__dut__DOT__b ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xfffffffdU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (2U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((4U & (vlSelf->top__DOT__dut__DOT__b ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xfffffffbU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (4U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((8U & (vlSelf->top__DOT__dut__DOT__b ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xfffffff7U & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (8U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((0x10U & (vlSelf->top__DOT__dut__DOT__b ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xffffffefU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (0x10U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((0x20U & (vlSelf->top__DOT__dut__DOT__b ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xffffffdfU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (0x20U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((0x40U & (vlSelf->top__DOT__dut__DOT__b ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xffffffbfU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (0x40U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((0x80U & (vlSelf->top__DOT__dut__DOT__b ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xffffff7fU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (0x80U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((0x100U & (vlSelf->top__DOT__dut__DOT__b ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xfffffeffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (0x100U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((0x200U & (vlSelf->top__DOT__dut__DOT__b ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xfffffdffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (0x200U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((0x400U & (vlSelf->top__DOT__dut__DOT__b ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xfffffbffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (0x400U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((0x800U & (vlSelf->top__DOT__dut__DOT__b ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xfffff7ffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (0x800U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((0x1000U & (vlSelf->top__DOT__dut__DOT__b ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xffffefffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (0x1000U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((0x2000U & (vlSelf->top__DOT__dut__DOT__b ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xffffdfffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (0x2000U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((0x4000U & (vlSelf->top__DOT__dut__DOT__b ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xffffbfffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (0x4000U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((0x8000U & (vlSelf->top__DOT__dut__DOT__b ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xffff7fffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (0x8000U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((0x10000U & (vlSelf->top__DOT__dut__DOT__b 
                     ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xfffeffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (0x10000U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((0x20000U & (vlSelf->top__DOT__dut__DOT__b 
                     ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xfffdffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (0x20000U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((0x40000U & (vlSelf->top__DOT__dut__DOT__b 
                     ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xfffbffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (0x40000U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((0x80000U & (vlSelf->top__DOT__dut__DOT__b 
                     ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xfff7ffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (0x80000U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((0x100000U & (vlSelf->top__DOT__dut__DOT__b 
                      ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xffefffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (0x100000U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((0x200000U & (vlSelf->top__DOT__dut__DOT__b 
                      ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xffdfffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (0x200000U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((0x400000U & (vlSelf->top__DOT__dut__DOT__b 
                      ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xffbfffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (0x400000U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((0x800000U & (vlSelf->top__DOT__dut__DOT__b 
                      ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xff7fffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (0x800000U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((0x1000000U & (vlSelf->top__DOT__dut__DOT__b 
                       ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xfeffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (0x1000000U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((0x2000000U & (vlSelf->top__DOT__dut__DOT__b 
                       ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xfdffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (0x2000000U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((0x4000000U & (vlSelf->top__DOT__dut__DOT__b 
                       ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xfbffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (0x4000000U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((0x8000000U & (vlSelf->top__DOT__dut__DOT__b 
                       ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xf7ffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (0x8000000U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((0x10000000U & (vlSelf->top__DOT__dut__DOT__b 
                        ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xefffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (0x10000000U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((0x20000000U & (vlSelf->top__DOT__dut__DOT__b 
                        ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xdfffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (0x20000000U & vlSelf->top__DOT__dut__DOT__b));
    }
    if ((0x40000000U & (vlSelf->top__DOT__dut__DOT__b 
                        ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b))) {
        vlSymsp->__Vcoverage[956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0xbfffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (0x40000000U & vlSelf->top__DOT__dut__DOT__b));
    }
    if (((vlSelf->top__DOT__dut__DOT__b ^ vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__dut__DOT____Vtogcov__b = 
            ((0x7fffffffU & vlSelf->top__DOT__dut__DOT____Vtogcov__b) 
             | (0x80000000U & vlSelf->top__DOT__dut__DOT__b));
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
}
