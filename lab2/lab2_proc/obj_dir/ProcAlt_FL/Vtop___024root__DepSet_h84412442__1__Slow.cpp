// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__3\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x64U)) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[__Vilp] 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__m
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (vlSelf->top__DOT__mem_clear) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared)))) {
            vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i = 0U;
            while (VL_GTS_III(32, 0x1000U, vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i)) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i)] = 0U;
                vlSymsp->__Vcoverage[3186].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                    = ((IData)(1U) + vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i);
            }
        }
    } else if (vlSelf->top__DOT__reset) {
        __Vilp = 0U;
        while ((__Vilp <= 0xfffU)) {
            vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[__Vilp] 
                = vlSelf->top__DOT__mem__DOT__mem__DOT__m_load
                [__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M) {
            vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i = 0U;
            while ((vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                    < (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_msg_len_modified_M))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (((~ ((IData)(0xffU) << (0x1fU 
                                               & ((0x18U 
                                                   & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                      << 1U)) 
                                                  + 
                                                  (vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                                                   << 3U))))) 
                        & vlSelf->top__DOT__mem__DOT__mem__DOT__m_next
                        [(0xfffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                    >> 4U))]) | (0xffffffffULL 
                                                 & ((0xffU 
                                                     & (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i)))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[
                                                          (((IData)(7U) 
                                                            + 
                                                            (0x1fU 
                                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i))))) 
                                                        | (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                                                           >> 
                                                           (0x1fU 
                                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i))))) 
                                                    << 
                                                    (0x1fU 
                                                     & ((0x18U 
                                                         & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                            << 1U)) 
                                                        + 
                                                        (vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                                                         << 3U))))));
                vlSymsp->__Vcoverage[3189].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                    = ((IData)(1U) + vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i);
            }
        }
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M) {
            vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i = 0U;
            while ((vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i 
                    < (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_msg_len_modified_M))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (((~ ((IData)(0xffU) << (0x1fU 
                                               & ((0x18U 
                                                   & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                      << 1U)) 
                                                  + 
                                                  (vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i 
                                                   << 3U))))) 
                        & vlSelf->top__DOT__mem__DOT__mem__DOT__m_next
                        [(0xfffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                    >> 4U))]) | (0xffffffffULL 
                                                 & ((0xffU 
                                                     & (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i)))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[
                                                          (((IData)(7U) 
                                                            + 
                                                            (0x1fU 
                                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i))))) 
                                                        | (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                                                           >> 
                                                           (0x1fU 
                                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i))))) 
                                                    << 
                                                    (0x1fU 
                                                     & ((0x18U 
                                                         & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                            << 1U)) 
                                                        + 
                                                        (vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i 
                                                         << 3U))))));
                vlSymsp->__Vcoverage[3192].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i 
                    = ((IData)(1U) + vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i);
            }
        }
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M) {
            if ((3U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                              >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       + vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M);
            } else if ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                     >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M);
            } else if ((5U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                     >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       | vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M);
            }
        }
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M) {
            if ((3U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                              >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       + vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M);
            } else if ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                     >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M);
            } else if ((5U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                     >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       | vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M);
            }
        }
    }
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__4\n"); );
    // Body
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[3178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
        = ((0x7ffc00000000ULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp) 
           | (((QData)((IData)((3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]))) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M))));
    if (((IData)(vlSelf->top__DOT__mngr2proc_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__mngr2proc_val))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_val 
            = vlSelf->top__DOT__mngr2proc_val;
    }
    vlSelf->top__DOT__mngr2proc_msg = ((IData)(vlSelf->top__DOT__mngr2proc_val)
                                        ? vlSelf->top__DOT__src__DOT__src_msg
                                        : 0U);
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_rdy))) {
        vlSymsp->__Vcoverage[2293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_rdy 
            = vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_val))) {
        vlSymsp->__Vcoverage[2420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_val 
            = vlSelf->top__DOT__mem__DOT__mem_memresp1_val;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_rdy))) {
        vlSymsp->__Vcoverage[2214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_rdy 
            = vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_val))) {
        vlSymsp->__Vcoverage[2371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_val 
            = vlSelf->top__DOT__mem__DOT__mem_memresp0_val;
    }
    if (((IData)(vlSelf->top__DOT__proc2mngr_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__proc2mngr_rdy))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_rdy 
            = vlSelf->top__DOT__proc2mngr_rdy;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M)))) {
        vlSymsp->__Vcoverage[3226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[3227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[3228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[3229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[3230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[3231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[3232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[3233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[3234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[3235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[3236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[3237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[3238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[3239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[3240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[3241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[3242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[3243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[3244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[3245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[3246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[3247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[3248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[3249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[3250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[3251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[3252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[3253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[3254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[3255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[3256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[3257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[3258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[3259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[3260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[3261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[3262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[3263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[3264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[3265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[3266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[3267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[3268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[3269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[3270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[3271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[3272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x3fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    vlSelf->top__DOT__mem__DOT__mem_memresp0_msg = 
        ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)
          ? vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore
          : ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)
              ? 0ULL : vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M)))) {
        vlSymsp->__Vcoverage[3273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[3274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[3275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[3276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[3277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[3278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[3279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[3280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[3281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[3282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[3283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[3284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[3285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[3286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[3287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[3288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[3289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[3290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[3291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[3292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[3293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[3294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[3295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[3296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[3297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[3298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[3299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[3300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[3301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[3302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[3303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[3304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[3305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[3306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[3307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[3308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[3309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[3310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[3311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[3312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[3313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[3314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[3315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[3316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[3317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[3318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[3319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x3fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    vlSelf->top__DOT__mem__DOT__mem_memresp1_msg = 
        ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)
          ? vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore
          : ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)
              ? 0ULL : vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp));
    if ((1U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (1U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((2U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (2U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((4U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (4U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((8U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (8U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x10U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x10U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x20U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x20U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x40U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x40U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x80U & (vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x80U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x100U & (vlSelf->top__DOT__mngr2proc_msg 
                   ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x100U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x200U & (vlSelf->top__DOT__mngr2proc_msg 
                   ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x200U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x400U & (vlSelf->top__DOT__mngr2proc_msg 
                   ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x400U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x800U & (vlSelf->top__DOT__mngr2proc_msg 
                   ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x800U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x1000U & (vlSelf->top__DOT__mngr2proc_msg 
                    ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x1000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x2000U & (vlSelf->top__DOT__mngr2proc_msg 
                    ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x2000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x4000U & (vlSelf->top__DOT__mngr2proc_msg 
                    ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x4000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x8000U & (vlSelf->top__DOT__mngr2proc_msg 
                    ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x8000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x10000U & (vlSelf->top__DOT__mngr2proc_msg 
                     ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x10000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x20000U & (vlSelf->top__DOT__mngr2proc_msg 
                     ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x20000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x40000U & (vlSelf->top__DOT__mngr2proc_msg 
                     ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x40000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x80000U & (vlSelf->top__DOT__mngr2proc_msg 
                     ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x80000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x100000U & (vlSelf->top__DOT__mngr2proc_msg 
                      ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x100000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x200000U & (vlSelf->top__DOT__mngr2proc_msg 
                      ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x200000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x400000U & (vlSelf->top__DOT__mngr2proc_msg 
                      ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x400000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x800000U & (vlSelf->top__DOT__mngr2proc_msg 
                      ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x800000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mngr2proc_msg 
                       ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x1000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mngr2proc_msg 
                       ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x2000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mngr2proc_msg 
                       ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x4000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mngr2proc_msg 
                       ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x8000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mngr2proc_msg 
                        ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x10000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mngr2proc_msg 
                        ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x20000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mngr2proc_msg 
                        ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x40000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    if (((vlSelf->top__DOT__mngr2proc_msg ^ vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_msg 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__mngr2proc_msg) 
               | (0x80000000U & vlSelf->top__DOT__mngr2proc_msg));
    }
    vlSelf->top__DOT__dmem_reqstream_rdy = ((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state)
                                             ? ((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) 
                                                & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy) 
                                                   & (0U 
                                                      == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay)))
                                             : ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy) 
                                                & (0U 
                                                   == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__dmem_reqstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_reqstream_rdy))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_rdy 
            = vlSelf->top__DOT__dmem_reqstream_rdy;
    }
    vlSelf->top__DOT__dmem_respstream_val = ((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state)
                                              ? ((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) 
                                                 & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
                                                    & (0U 
                                                       == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay)))
                                              : ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
                                                 & (0U 
                                                    == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__dmem_respstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_respstream_val))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_val 
            = vlSelf->top__DOT__dmem_respstream_val;
    }
    vlSelf->top__DOT__imem_reqstream_rdy = ((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state)
                                             ? ((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) 
                                                & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy) 
                                                   & (0U 
                                                      == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay)))
                                             : ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy) 
                                                & (0U 
                                                   == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__imem_reqstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_reqstream_rdy))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_rdy 
            = vlSelf->top__DOT__imem_reqstream_rdy;
    }
    vlSelf->top__DOT__imem_respstream_val = ((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state)
                                              ? ((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) 
                                                 & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                                                    & (0U 
                                                       == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay)))
                                              : ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                                                 & (0U 
                                                    == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__imem_respstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_val))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_val 
            = vlSelf->top__DOT__imem_respstream_val;
    }
    if (vlSelf->top__DOT__imem_respstream_val) {
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__test 
            = (3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                             >> 0x22U)));
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__len 
            = (3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                             >> 0x20U)));
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_ 
            = (7U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                             >> 0x2cU)));
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque 
            = (0xffU & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                >> 0x24U)));
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
            = (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg);
        vlSelf->top__DOT__imem_respstream_msg = vlSelf->top__DOT__mem__DOT__mem_memresp0_msg;
    } else {
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__test = 0U;
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__len = 0U;
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_ = 0U;
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque = 0U;
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data = 0U;
        vlSelf->top__DOT__imem_respstream_msg = 0ULL;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg)))) {
        vlSymsp->__Vcoverage[2373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[2374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[2375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[2376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[2377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[2378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[2379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[2380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[2381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[2382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[2383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[2385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[2386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[2387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[2388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[2389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[2390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[2391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[2392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[2393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[2394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[2395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[2396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[2397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[2398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[2399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[2400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[2401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[2402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[2403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[2404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[2405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[2406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[2407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[2408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[2409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[2410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[2411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[2412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[2413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[2414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[2415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[2416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[2417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[2418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[2419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if (vlSelf->top__DOT__dmem_respstream_val) {
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__test 
            = (3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                             >> 0x22U)));
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__len 
            = (3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                             >> 0x20U)));
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_ 
            = (7U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                             >> 0x2cU)));
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque 
            = (0xffU & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                >> 0x24U)));
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
            = (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg);
        vlSelf->top__DOT__dmem_respstream_msg = vlSelf->top__DOT__mem__DOT__mem_memresp1_msg;
    } else {
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__test = 0U;
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__len = 0U;
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_ = 0U;
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque = 0U;
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data = 0U;
        vlSelf->top__DOT__dmem_respstream_msg = 0ULL;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg)))) {
        vlSymsp->__Vcoverage[2422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[2423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[2424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[2425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[2426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[2427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[2428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[2429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[2430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[2431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[2432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[2433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[2434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[2435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[2436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[2437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[2438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[2439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[2440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[2441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[2442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[2443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[2444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[2445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[2446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[2447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[2448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[2449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[2450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[2451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[2452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[2453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[2454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[2455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[2456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[2457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[2458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[2459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[2460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[2461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[2462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[2463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[2464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[2465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[2466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[2467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[2468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[2044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__test 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__test)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__test)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[2045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__test 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__test)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__test)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[2046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__len 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__len)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[2047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__len 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__len)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__len)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[2033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[2034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[2035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[2036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xfeU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[2037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xfdU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[2038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xfbU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[2039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xf7U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[2040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xefU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[2041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xdfU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[2042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xbfU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[2043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0x7fU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
               ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (1U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
               ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (2U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
               ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (4U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
               ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (8U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                  ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                  ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                  ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                  ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                   ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                   ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                   ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                   ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                    ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                    ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                    ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                    ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                     ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                     ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                     ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                     ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                      ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                      ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                      ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                      ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                       ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                       ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                       ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                       ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                        ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                        ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                        ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
          ^ vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__data) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__imem_respstream_msg 
                  ^ vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imem_respstream_msg) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_msg)))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__imem_respstream_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[2134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__test 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__test)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__test)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[2135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__test 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__test)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__test)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[2136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__len 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__len)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[2137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__len 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__len)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__len)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[2123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[2124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[2125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[2126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xfeU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[2127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xfdU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[2128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xfbU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[2129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xf7U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[2130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xefU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[2131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xdfU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[2132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xbfU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[2133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0x7fU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
               ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
               ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
               ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
               ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                  ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                  ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                  ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                  ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                   ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                   ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                   ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                   ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                    ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                    ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                    ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                    ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                     ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                     ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                     ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                     ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                      ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                      ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                      ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                      ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                       ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                       ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                       ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                       ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                        ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                        ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                        ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[2168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
          ^ vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__data) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__dmem_respstream_msg 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__dmem_respstream_msg) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_respstream_msg)))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__dmem_respstream_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    vlSelf->top__DOT__DUT__DOT__n_state = vlSelf->top__DOT__DUT__DOT__state;
    vlSelf->top__DOT__DUT__DOT__n_PC = vlSelf->top__DOT__DUT__DOT__PC;
    vlSelf->top__DOT__DUT__DOT__n_inst = vlSelf->top__DOT__DUT__DOT__inst;
    vlSelf->top__DOT__DUT__DOT__print_trace = 1U;
    vlSelf->top__DOT__DUT__DOT__n_rf[0x1fU] = vlSelf->top__DOT__DUT__DOT__rf
        [0x1fU];
    vlSelf->top__DOT__DUT__DOT__n_rf[0x1eU] = vlSelf->top__DOT__DUT__DOT__rf
        [0x1eU];
    vlSelf->top__DOT__DUT__DOT__n_rf[0x1dU] = vlSelf->top__DOT__DUT__DOT__rf
        [0x1dU];
    vlSelf->top__DOT__DUT__DOT__n_rf[0x1cU] = vlSelf->top__DOT__DUT__DOT__rf
        [0x1cU];
    vlSelf->top__DOT__DUT__DOT__n_rf[0x1bU] = vlSelf->top__DOT__DUT__DOT__rf
        [0x1bU];
    vlSelf->top__DOT__DUT__DOT__n_rf[0x1aU] = vlSelf->top__DOT__DUT__DOT__rf
        [0x1aU];
    vlSelf->top__DOT__DUT__DOT__n_rf[0x19U] = vlSelf->top__DOT__DUT__DOT__rf
        [0x19U];
    vlSelf->top__DOT__DUT__DOT__n_rf[0x18U] = vlSelf->top__DOT__DUT__DOT__rf
        [0x18U];
    vlSelf->top__DOT__DUT__DOT__n_rf[0x17U] = vlSelf->top__DOT__DUT__DOT__rf
        [0x17U];
    vlSelf->top__DOT__DUT__DOT__n_rf[0x16U] = vlSelf->top__DOT__DUT__DOT__rf
        [0x16U];
    vlSelf->top__DOT__DUT__DOT__n_rf[0x15U] = vlSelf->top__DOT__DUT__DOT__rf
        [0x15U];
    vlSelf->top__DOT__DUT__DOT__n_rf[0x14U] = vlSelf->top__DOT__DUT__DOT__rf
        [0x14U];
    vlSelf->top__DOT__DUT__DOT__n_rf[0x13U] = vlSelf->top__DOT__DUT__DOT__rf
        [0x13U];
    vlSelf->top__DOT__DUT__DOT__n_rf[0x12U] = vlSelf->top__DOT__DUT__DOT__rf
        [0x12U];
    vlSelf->top__DOT__DUT__DOT__n_rf[0x11U] = vlSelf->top__DOT__DUT__DOT__rf
        [0x11U];
    vlSelf->top__DOT__DUT__DOT__n_rf[0x10U] = vlSelf->top__DOT__DUT__DOT__rf
        [0x10U];
    vlSelf->top__DOT__DUT__DOT__n_rf[0xfU] = vlSelf->top__DOT__DUT__DOT__rf
        [0xfU];
    vlSelf->top__DOT__DUT__DOT__n_rf[0xeU] = vlSelf->top__DOT__DUT__DOT__rf
        [0xeU];
    vlSelf->top__DOT__DUT__DOT__n_rf[0xdU] = vlSelf->top__DOT__DUT__DOT__rf
        [0xdU];
    vlSelf->top__DOT__DUT__DOT__n_rf[0xcU] = vlSelf->top__DOT__DUT__DOT__rf
        [0xcU];
    vlSelf->top__DOT__DUT__DOT__n_rf[0xbU] = vlSelf->top__DOT__DUT__DOT__rf
        [0xbU];
    vlSelf->top__DOT__DUT__DOT__n_rf[0xaU] = vlSelf->top__DOT__DUT__DOT__rf
        [0xaU];
    vlSelf->top__DOT__DUT__DOT__n_rf[9U] = vlSelf->top__DOT__DUT__DOT__rf
        [9U];
    vlSelf->top__DOT__DUT__DOT__n_rf[8U] = vlSelf->top__DOT__DUT__DOT__rf
        [8U];
    vlSelf->top__DOT__DUT__DOT__n_rf[7U] = vlSelf->top__DOT__DUT__DOT__rf
        [7U];
    vlSelf->top__DOT__DUT__DOT__n_rf[6U] = vlSelf->top__DOT__DUT__DOT__rf
        [6U];
    vlSelf->top__DOT__DUT__DOT__n_rf[5U] = vlSelf->top__DOT__DUT__DOT__rf
        [5U];
    vlSelf->top__DOT__DUT__DOT__n_rf[4U] = vlSelf->top__DOT__DUT__DOT__rf
        [4U];
    vlSelf->top__DOT__DUT__DOT__n_rf[3U] = vlSelf->top__DOT__DUT__DOT__rf
        [3U];
    vlSelf->top__DOT__DUT__DOT__n_rf[2U] = vlSelf->top__DOT__DUT__DOT__rf
        [2U];
    vlSelf->top__DOT__DUT__DOT__n_rf[1U] = vlSelf->top__DOT__DUT__DOT__rf
        [1U];
    vlSelf->top__DOT__DUT__DOT__n_rf[0U] = vlSelf->top__DOT__DUT__DOT__rf
        [0U];
    vlSelf->top__DOT__imem_reqstream_val = 0U;
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr = 0U;
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data = 0U;
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_type = 0U;
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val = 0U;
    vlSelf->top__DOT__dmem_respstream_rdy = 0U;
    vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_val = 0U;
    vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg = 0U;
    vlSelf->top__DOT__mngr2proc_rdy = 0U;
    vlSelf->top__DOT__imem_respstream_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
        if ((0U != vlSelf->top__DOT__DUT__DOT__state)) {
            if ((1U != vlSelf->top__DOT__DUT__DOT__state)) {
                if ((2U != vlSelf->top__DOT__DUT__DOT__state)) {
                    if ((3U == vlSelf->top__DOT__DUT__DOT__state)) {
                        if (((((((((0x2073U == (0x707fU 
                                                & vlSelf->top__DOT__DUT__DOT__inst)) 
                                   | (0x1073U == (0x707fU 
                                                  & vlSelf->top__DOT__DUT__DOT__inst))) 
                                  | (0x33U == (0xfe00707fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst))) 
                                 | (0x40000033U == 
                                    (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst))) 
                                | (0x7033U == (0xfe00707fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst))) 
                               | (0x6033U == (0xfe00707fU 
                                              & vlSelf->top__DOT__DUT__DOT__inst))) 
                              | (0x4033U == (0xfe00707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst))) 
                             | (0x2033U == (0xfe00707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst)))) {
                            if ((0x2073U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst))) {
                                if ((0xfc0U == (vlSelf->top__DOT__DUT__DOT__inst 
                                                >> 0x14U))) {
                                    if ((1U & (~ (IData)(vlSelf->top__DOT__mngr2proc_val)))) {
                                        vlSymsp->__Vcoverage[1412].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if (vlSelf->top__DOT__mngr2proc_val) {
                                        vlSymsp->__Vcoverage[1411].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                            }
                        }
                    }
                    if ((3U != vlSelf->top__DOT__DUT__DOT__state)) {
                        if ((4U == vlSelf->top__DOT__DUT__DOT__state)) {
                            if ((0x2003U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst))) {
                                if ((1U & (~ (IData)(vlSelf->top__DOT__dmem_respstream_val)))) {
                                    vlSymsp->__Vcoverage[1473].fetch_add(1, std::memory_order_relaxed);
                                }
                                if (vlSelf->top__DOT__dmem_respstream_val) {
                                    vlSymsp->__Vcoverage[1472].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x2003U != (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst))) {
                                if ((0x2023U == (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst))) {
                                    if ((1U & (~ (IData)(vlSelf->top__DOT__dmem_respstream_val)))) {
                                        vlSymsp->__Vcoverage[1476].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if (vlSelf->top__DOT__dmem_respstream_val) {
                                        vlSymsp->__Vcoverage[1475].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                            }
                        }
                    }
                }
                if ((2U == vlSelf->top__DOT__DUT__DOT__state)) {
                    if (vlSelf->top__DOT__imem_respstream_val) {
                        vlSymsp->__Vcoverage[1409].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((1U & (~ (IData)(vlSelf->top__DOT__imem_respstream_val)))) {
                        vlSymsp->__Vcoverage[1410].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
            if ((1U == vlSelf->top__DOT__DUT__DOT__state)) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__imem_reqstream_rdy)))) {
                    vlSymsp->__Vcoverage[1408].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__imem_reqstream_rdy) {
                    vlSymsp->__Vcoverage[1407].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if (vlSelf->top__DOT__reset) {
        vlSelf->top__DOT__DUT__DOT__n_state = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[0x1fU] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[0x1eU] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[0x1dU] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[0x1cU] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[0x1bU] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[0x1aU] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[0x19U] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[0x18U] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[0x17U] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[0x16U] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[0x15U] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[0x14U] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[0x13U] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[0x12U] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[0x11U] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[0x10U] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[0xfU] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[0xeU] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[0xdU] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[0xcU] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[0xbU] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[0xaU] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[9U] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[8U] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[7U] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[6U] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[5U] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[4U] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[3U] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[2U] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[1U] = 0U;
        vlSelf->top__DOT__DUT__DOT__n_rf[0U] = 0U;
    } else {
        if ((0U == vlSelf->top__DOT__DUT__DOT__state)) {
            vlSelf->top__DOT__DUT__DOT__n_state = 1U;
        } else if ((1U == vlSelf->top__DOT__DUT__DOT__state)) {
            vlSelf->top__DOT__imem_reqstream_val = 1U;
            vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                = vlSelf->top__DOT__DUT__DOT__PC;
            vlSelf->top__DOT__DUT__DOT__n_state = ((IData)(vlSelf->top__DOT__imem_reqstream_rdy)
                                                    ? 2U
                                                    : 1U);
        } else if ((2U == vlSelf->top__DOT__DUT__DOT__state)) {
            vlSelf->top__DOT__imem_respstream_rdy = 1U;
            if (vlSelf->top__DOT__imem_respstream_val) {
                vlSelf->top__DOT__DUT__DOT__n_state = 3U;
                vlSelf->top__DOT__DUT__DOT__n_inst 
                    = (IData)(vlSelf->top__DOT__imem_respstream_msg);
            } else {
                vlSelf->top__DOT__DUT__DOT__n_state = 2U;
            }
        } else if ((3U == vlSelf->top__DOT__DUT__DOT__state)) {
            vlSelf->top__DOT__DUT__DOT__n_state = 0U;
            vlSelf->top__DOT__DUT__DOT__n_PC = ((IData)(4U) 
                                                + vlSelf->top__DOT__DUT__DOT__PC);
            if (((((((((0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst)) 
                       | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst))) 
                      | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst))) 
                     | (0x40000033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst))) 
                    | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst))) 
                   | (0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst))) 
                  | (0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst))) 
                 | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst)))) {
                if ((0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst))) {
                    if ((0xfc0U == (vlSelf->top__DOT__DUT__DOT__inst 
                                    >> 0x14U))) {
                        vlSelf->top__DOT__mngr2proc_rdy = 1U;
                        if (vlSelf->top__DOT__mngr2proc_val) {
                            vlSelf->top__DOT__DUT__DOT__n_rf[(0x1fU 
                                                              & (vlSelf->top__DOT__DUT__DOT__inst 
                                                                 >> 7U))] 
                                = vlSelf->top__DOT__mngr2proc_msg;
                        } else {
                            vlSelf->top__DOT__DUT__DOT__n_state = 3U;
                            vlSelf->top__DOT__DUT__DOT__n_PC 
                                = vlSelf->top__DOT__DUT__DOT__PC;
                        }
                    } else if ((0xfc1U == (vlSelf->top__DOT__DUT__DOT__inst 
                                           >> 0x14U))) {
                        vlSelf->top__DOT__DUT__DOT__n_rf[(0x1fU 
                                                          & (vlSelf->top__DOT__DUT__DOT__inst 
                                                             >> 7U))] = 1U;
                    } else if ((0xf14U == (vlSelf->top__DOT__DUT__DOT__inst 
                                           >> 0x14U))) {
                        vlSelf->top__DOT__DUT__DOT__n_rf[(0x1fU 
                                                          & (vlSelf->top__DOT__DUT__DOT__inst 
                                                             >> 7U))] = 0U;
                    }
                } else if ((0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst))) {
                    if ((0x7c0U == (vlSelf->top__DOT__DUT__DOT__inst 
                                    >> 0x14U))) {
                        vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_val = 1U;
                        vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
                            = vlSelf->top__DOT__DUT__DOT__rf
                            [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                       >> 0xfU))];
                        if (vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
                            vlSelf->top__DOT__DUT__DOT__n_state = 3U;
                            vlSelf->top__DOT__DUT__DOT__n_PC 
                                = vlSelf->top__DOT__DUT__DOT__PC;
                        }
                    }
                } else {
                    vlSelf->top__DOT__DUT__DOT__n_rf[(0x1fU 
                                                      & (vlSelf->top__DOT__DUT__DOT__inst 
                                                         >> 7U))] 
                        = ((0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst))
                            ? (vlSelf->top__DOT__DUT__DOT__rf
                               [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                          >> 0xfU))] 
                               + vlSelf->top__DOT__DUT__DOT__rf
                               [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                          >> 0x14U))])
                            : ((0x40000033U == (0xfe00707fU 
                                                & vlSelf->top__DOT__DUT__DOT__inst))
                                ? (vlSelf->top__DOT__DUT__DOT__rf
                                   [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                              >> 0xfU))] 
                                   - vlSelf->top__DOT__DUT__DOT__rf
                                   [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                              >> 0x14U))])
                                : ((0x7033U == (0xfe00707fU 
                                                & vlSelf->top__DOT__DUT__DOT__inst))
                                    ? (vlSelf->top__DOT__DUT__DOT__rf
                                       [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                                  >> 0xfU))] 
                                       & vlSelf->top__DOT__DUT__DOT__rf
                                       [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                                  >> 0x14U))])
                                    : ((0x6033U == 
                                        (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst))
                                        ? (vlSelf->top__DOT__DUT__DOT__rf
                                           [(0x1fU 
                                             & (vlSelf->top__DOT__DUT__DOT__inst 
                                                >> 0xfU))] 
                                           | vlSelf->top__DOT__DUT__DOT__rf
                                           [(0x1fU 
                                             & (vlSelf->top__DOT__DUT__DOT__inst 
                                                >> 0x14U))])
                                        : ((0x4033U 
                                            == (0xfe00707fU 
                                                & vlSelf->top__DOT__DUT__DOT__inst))
                                            ? (vlSelf->top__DOT__DUT__DOT__rf
                                               [(0x1fU 
                                                 & (vlSelf->top__DOT__DUT__DOT__inst 
                                                    >> 0xfU))] 
                                               ^ vlSelf->top__DOT__DUT__DOT__rf
                                               [(0x1fU 
                                                 & (vlSelf->top__DOT__DUT__DOT__inst 
                                                    >> 0x14U))])
                                            : VL_LTS_III(32, 
                                                         vlSelf->top__DOT__DUT__DOT__rf
                                                         [
                                                         (0x1fU 
                                                          & (vlSelf->top__DOT__DUT__DOT__inst 
                                                             >> 0xfU))], 
                                                         vlSelf->top__DOT__DUT__DOT__rf
                                                         [
                                                         (0x1fU 
                                                          & (vlSelf->top__DOT__DUT__DOT__inst 
                                                             >> 0x14U))]))))));
                }
            } else if (((((((((0x3033U == (0xfe00707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst)) 
                              | (0x2000033U == (0xfe00707fU 
                                                & vlSelf->top__DOT__DUT__DOT__inst))) 
                             | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst))) 
                            | (0x7013U == (0x707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst))) 
                           | (0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst))) 
                          | (0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst))) 
                         | (0x2013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst))) 
                        | (0x3013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst)))) {
                vlSelf->top__DOT__DUT__DOT__n_rf[(0x1fU 
                                                  & (vlSelf->top__DOT__DUT__DOT__inst 
                                                     >> 7U))] 
                    = ((0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst))
                        ? (vlSelf->top__DOT__DUT__DOT__rf
                           [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                      >> 0xfU))] < 
                           vlSelf->top__DOT__DUT__DOT__rf
                           [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                      >> 0x14U))]) : 
                       ((0x2000033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst))
                         ? (vlSelf->top__DOT__DUT__DOT__rf
                            [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                       >> 0xfU))] * 
                            vlSelf->top__DOT__DUT__DOT__rf
                            [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                       >> 0x14U))])
                         : ((0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst))
                             ? (vlSelf->top__DOT__DUT__DOT__rf
                                [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                           >> 0xfU))] 
                                + (IData)(VL_EXTENDS_II(32,12, 
                                                        ([&]() {
                                                vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__64__inst 
                                                    = vlSelf->top__DOT__DUT__DOT__inst;
                                                vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__64__Vfuncout 
                                                    = 
                                                    (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__64__inst 
                                                     >> 0x14U);
                                                vlSymsp->__Vcoverage[1401].fetch_add(1, std::memory_order_relaxed);
                                            }(), (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__64__Vfuncout)))))
                             : ((0x7013U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst))
                                 ? (vlSelf->top__DOT__DUT__DOT__rf
                                    [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                               >> 0xfU))] 
                                    & VL_EXTENDS_II(32,12, 
                                                    ([&]() {
                                                vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__65__inst 
                                                    = vlSelf->top__DOT__DUT__DOT__inst;
                                                vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__65__Vfuncout 
                                                    = 
                                                    (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__65__inst 
                                                     >> 0x14U);
                                                vlSymsp->__Vcoverage[1401].fetch_add(1, std::memory_order_relaxed);
                                            }(), (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__65__Vfuncout))))
                                 : ((0x6013U == (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst))
                                     ? (vlSelf->top__DOT__DUT__DOT__rf
                                        [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                                   >> 0xfU))] 
                                        | VL_EXTENDS_II(32,12, 
                                                        ([&]() {
                                                    vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__66__inst 
                                                        = vlSelf->top__DOT__DUT__DOT__inst;
                                                    vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__66__Vfuncout 
                                                        = 
                                                        (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__66__inst 
                                                         >> 0x14U);
                                                    vlSymsp->__Vcoverage[1401].fetch_add(1, std::memory_order_relaxed);
                                                }(), (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__66__Vfuncout))))
                                     : ((0x4013U == 
                                         (0x707fU & vlSelf->top__DOT__DUT__DOT__inst))
                                         ? (vlSelf->top__DOT__DUT__DOT__rf
                                            [(0x1fU 
                                              & (vlSelf->top__DOT__DUT__DOT__inst 
                                                 >> 0xfU))] 
                                            ^ VL_EXTENDS_II(32,12, 
                                                            ([&]() {
                                                        vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__67__inst 
                                                            = vlSelf->top__DOT__DUT__DOT__inst;
                                                        vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__67__Vfuncout 
                                                            = 
                                                            (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__67__inst 
                                                             >> 0x14U);
                                                        vlSymsp->__Vcoverage[1401].fetch_add(1, std::memory_order_relaxed);
                                                    }(), (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__67__Vfuncout))))
                                         : ((0x2013U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst))
                                             ? VL_EXTEND_II(32,1, 
                                                            VL_LTS_III(32, 
                                                                       vlSelf->top__DOT__DUT__DOT__rf
                                                                       [
                                                                       (0x1fU 
                                                                        & (vlSelf->top__DOT__DUT__DOT__inst 
                                                                           >> 0xfU))], 
                                                                       VL_EXTENDS_II(32,12, 
                                                                                ([&]() {
                                                                vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__68__inst 
                                                                    = vlSelf->top__DOT__DUT__DOT__inst;
                                                                vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__68__Vfuncout 
                                                                    = 
                                                                    (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__68__inst 
                                                                     >> 0x14U);
                                                                vlSymsp->__Vcoverage[1401].fetch_add(1, std::memory_order_relaxed);
                                                            }(), (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__68__Vfuncout)))))
                                             : VL_EXTEND_II(32,1, 
                                                            (vlSelf->top__DOT__DUT__DOT__rf
                                                             [
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__DUT__DOT__inst 
                                                                 >> 0xfU))] 
                                                             < 
                                                             (((- (IData)(
                                                                          (vlSelf->top__DOT__DUT__DOT__inst 
                                                                           >> 0x1fU))) 
                                                               << 0xcU) 
                                                              | ([&]() {
                                                                vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__69__inst 
                                                                    = vlSelf->top__DOT__DUT__DOT__inst;
                                                                vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__69__Vfuncout 
                                                                    = 
                                                                    (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__69__inst 
                                                                     >> 0x14U);
                                                                vlSymsp->__Vcoverage[1401].fetch_add(1, std::memory_order_relaxed);
                                                            }(), (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__69__Vfuncout))))))))))));
            } else if (((((((((0x40005033U == (0xfe00707fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst)) 
                              | (0x5033U == (0xfe00707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst))) 
                             | (0x1033U == (0xfe00707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst))) 
                            | (0x40005013U == (0xfe00707fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst))) 
                           | (0x5013U == (0xfe00707fU 
                                          & vlSelf->top__DOT__DUT__DOT__inst))) 
                          | (0x1013U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst))) 
                         | (0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst))) 
                        | (0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst)))) {
                vlSelf->top__DOT__DUT__DOT__n_rf[(0x1fU 
                                                  & (vlSelf->top__DOT__DUT__DOT__inst 
                                                     >> 7U))] 
                    = ((0x40005033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst))
                        ? VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__DUT__DOT__rf
                                         [(0x1fU & 
                                           (vlSelf->top__DOT__DUT__DOT__inst 
                                            >> 0xfU))], 
                                         (0x1fU & vlSelf->top__DOT__DUT__DOT__rf
                                          [(0x1fU & 
                                            (vlSelf->top__DOT__DUT__DOT__inst 
                                             >> 0x14U))]))
                        : ((0x5033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst))
                            ? (vlSelf->top__DOT__DUT__DOT__rf
                               [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                          >> 0xfU))] 
                               >> (0x1fU & vlSelf->top__DOT__DUT__DOT__rf
                                   [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                              >> 0x14U))]))
                            : ((0x1033U == (0xfe00707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst))
                                ? (vlSelf->top__DOT__DUT__DOT__rf
                                   [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                              >> 0xfU))] 
                                   << (0x1fU & vlSelf->top__DOT__DUT__DOT__rf
                                       [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                                  >> 0x14U))]))
                                : ((0x40005013U == 
                                    (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst))
                                    ? VL_SHIFTRS_III(32,32,5, 
                                                     vlSelf->top__DOT__DUT__DOT__rf
                                                     [
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__DUT__DOT__inst 
                                                         >> 0xfU))], 
                                                     ([&]() {
                                            vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_shamt__70__inst 
                                                = vlSelf->top__DOT__DUT__DOT__inst;
                                            vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_shamt__70__Vfuncout 
                                                = (0x1fU 
                                                   & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_shamt__70__inst 
                                                      >> 0x14U));
                                            vlSymsp->__Vcoverage[1402].fetch_add(1, std::memory_order_relaxed);
                                        }(), (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_shamt__70__Vfuncout)))
                                    : ((0x5013U == 
                                        (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst))
                                        ? (vlSelf->top__DOT__DUT__DOT__rf
                                           [(0x1fU 
                                             & (vlSelf->top__DOT__DUT__DOT__inst 
                                                >> 0xfU))] 
                                           >> ([&]() {
                                                vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_shamt__71__inst 
                                                    = vlSelf->top__DOT__DUT__DOT__inst;
                                                vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_shamt__71__Vfuncout 
                                                    = 
                                                    (0x1fU 
                                                     & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_shamt__71__inst 
                                                        >> 0x14U));
                                                vlSymsp->__Vcoverage[1402].fetch_add(1, std::memory_order_relaxed);
                                            }(), (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_shamt__71__Vfuncout)))
                                        : ((0x1013U 
                                            == (0xfe00707fU 
                                                & vlSelf->top__DOT__DUT__DOT__inst))
                                            ? (vlSelf->top__DOT__DUT__DOT__rf
                                               [(0x1fU 
                                                 & (vlSelf->top__DOT__DUT__DOT__inst 
                                                    >> 0xfU))] 
                                               << ([&]() {
                                                    vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_shamt__72__inst 
                                                        = vlSelf->top__DOT__DUT__DOT__inst;
                                                    vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_shamt__72__Vfuncout 
                                                        = 
                                                        (0x1fU 
                                                         & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_shamt__72__inst 
                                                            >> 0x14U));
                                                    vlSymsp->__Vcoverage[1402].fetch_add(1, std::memory_order_relaxed);
                                                }(), (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_shamt__72__Vfuncout)))
                                            : ((0x37U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst))
                                                ? ((IData)(
                                                           VL_EXTEND_II(32,20, 
                                                                        ([&]() {
                                                                vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_u_sh12__73__inst 
                                                                    = vlSelf->top__DOT__DUT__DOT__inst;
                                                                vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_u_sh12__73__Vfuncout 
                                                                    = 
                                                                    (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_u_sh12__73__inst 
                                                                     >> 0xcU);
                                                                vlSymsp->__Vcoverage[1405].fetch_add(1, std::memory_order_relaxed);
                                                            }(), vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_u_sh12__73__Vfuncout))) 
                                                   << 0xcU)
                                                : (vlSelf->top__DOT__DUT__DOT__PC 
                                                   + (IData)(
                                                             ((IData)(
                                                                      VL_EXTEND_II(32,20, 
                                                                                ([&]() {
                                                                        vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_u_sh12__74__inst 
                                                                            = vlSelf->top__DOT__DUT__DOT__inst;
                                                                        vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_u_sh12__74__Vfuncout 
                                                                            = 
                                                                            (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_u_sh12__74__inst 
                                                                             >> 0xcU);
                                                                        vlSymsp->__Vcoverage[1405].fetch_add(1, std::memory_order_relaxed);
                                                                    }(), vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_u_sh12__74__Vfuncout))) 
                                                              << 0xcU))))))))));
            } else if (((((((((0x2003U == (0x707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst)) 
                              | (0x2023U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst))) 
                             | (0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst))) 
                            | (0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst))) 
                           | (0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst))) 
                          | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst))) 
                         | (0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst))) 
                        | (0x5063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst)))) {
                if ((0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst))) {
                    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                        = (vlSelf->top__DOT__DUT__DOT__rf
                           [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                      >> 0xfU))] + (IData)(
                                                           VL_EXTENDS_II(32,12, 
                                                                         ([&]() {
                                        vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__75__inst 
                                            = vlSelf->top__DOT__DUT__DOT__inst;
                                        vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__75__Vfuncout 
                                            = (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__75__inst 
                                               >> 0x14U);
                                        vlSymsp->__Vcoverage[1401].fetch_add(1, std::memory_order_relaxed);
                                    }(), (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__75__Vfuncout)))));
                    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data = 0U;
                    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_type = 0U;
                    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val = 1U;
                    if (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
                        vlSelf->top__DOT__DUT__DOT__n_state = 3U;
                        vlSelf->top__DOT__DUT__DOT__n_PC 
                            = vlSelf->top__DOT__DUT__DOT__PC;
                    } else {
                        vlSelf->top__DOT__DUT__DOT__n_state = 4U;
                    }
                } else if ((0x2023U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst))) {
                    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                        = (vlSelf->top__DOT__DUT__DOT__rf
                           [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                      >> 0xfU))] + (IData)(
                                                           VL_EXTENDS_II(32,12, 
                                                                         ([&]() {
                                        vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_s__76__inst 
                                            = vlSelf->top__DOT__DUT__DOT__inst;
                                        vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_s__76__Vfuncout 
                                            = ((0xfe0U 
                                                & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_s__76__inst 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_s__76__inst 
                                                     >> 7U)));
                                        vlSymsp->__Vcoverage[1403].fetch_add(1, std::memory_order_relaxed);
                                    }(), (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_s__76__Vfuncout)))));
                    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                        = vlSelf->top__DOT__DUT__DOT__rf
                        [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                   >> 0x14U))];
                    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_type = 1U;
                    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val = 1U;
                    if (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
                        vlSelf->top__DOT__DUT__DOT__n_state = 3U;
                        vlSelf->top__DOT__DUT__DOT__n_PC 
                            = vlSelf->top__DOT__DUT__DOT__PC;
                    } else {
                        vlSelf->top__DOT__DUT__DOT__n_state = 4U;
                    }
                } else if ((0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst))) {
                    vlSelf->top__DOT__DUT__DOT__n_rf[(0x1fU 
                                                      & (vlSelf->top__DOT__DUT__DOT__inst 
                                                         >> 7U))] 
                        = ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__PC);
                    vlSelf->top__DOT__DUT__DOT__n_PC 
                        = (vlSelf->top__DOT__DUT__DOT__PC 
                           + (IData)(VL_EXTENDS_II(32,21, 
                                                   ([&]() {
                                        vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_j__77__inst 
                                            = vlSelf->top__DOT__DUT__DOT__inst;
                                        vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_j__77__Vfuncout 
                                            = ((0x100000U 
                                                & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_j__77__inst 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_j__77__inst) 
                                                  | ((0x800U 
                                                      & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_j__77__inst 
                                                         >> 9U)) 
                                                     | ((0x7e0U 
                                                         & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_j__77__inst 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_j__77__inst 
                                                              >> 0x14U))))));
                                        vlSymsp->__Vcoverage[1406].fetch_add(1, std::memory_order_relaxed);
                                    }(), vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_j__77__Vfuncout))));
                } else if ((0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst))) {
                    vlSelf->top__DOT__DUT__DOT__n_rf[(0x1fU 
                                                      & (vlSelf->top__DOT__DUT__DOT__inst 
                                                         >> 7U))] 
                        = ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__PC);
                    vlSelf->top__DOT__DUT__DOT__n_PC 
                        = (0xfffffffeU & (vlSelf->top__DOT__DUT__DOT__rf
                                          [(0x1fU & 
                                            (vlSelf->top__DOT__DUT__DOT__inst 
                                             >> 0xfU))] 
                                          + (IData)(
                                                    VL_EXTEND_II(32,12, 
                                                                 ([&]() {
                                            vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__78__inst 
                                                = vlSelf->top__DOT__DUT__DOT__inst;
                                            vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__78__Vfuncout 
                                                = (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__78__inst 
                                                   >> 0x14U);
                                            vlSymsp->__Vcoverage[1401].fetch_add(1, std::memory_order_relaxed);
                                        }(), (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_i__78__Vfuncout))))));
                } else if ((0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst))) {
                    if ((vlSelf->top__DOT__DUT__DOT__rf
                         [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                    >> 0xfU))] == vlSelf->top__DOT__DUT__DOT__rf
                         [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                    >> 0x14U))])) {
                        vlSelf->top__DOT__DUT__DOT__n_PC 
                            = (vlSelf->top__DOT__DUT__DOT__PC 
                               + (IData)(VL_EXTENDS_II(32,13, 
                                                       ([&]() {
                                            vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__79__inst 
                                                = vlSelf->top__DOT__DUT__DOT__inst;
                                            vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__79__Vfuncout 
                                                = (
                                                   (0x1000U 
                                                    & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__79__inst 
                                                       >> 0x13U)) 
                                                   | ((0x800U 
                                                       & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__79__inst 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__79__inst 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__79__inst 
                                                               >> 7U)))));
                                            vlSymsp->__Vcoverage[1404].fetch_add(1, std::memory_order_relaxed);
                                        }(), (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__79__Vfuncout)))));
                    }
                } else if ((0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst))) {
                    if ((vlSelf->top__DOT__DUT__DOT__rf
                         [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                    >> 0xfU))] != vlSelf->top__DOT__DUT__DOT__rf
                         [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                    >> 0x14U))])) {
                        vlSelf->top__DOT__DUT__DOT__n_PC 
                            = (vlSelf->top__DOT__DUT__DOT__PC 
                               + (IData)(VL_EXTENDS_II(32,13, 
                                                       ([&]() {
                                            vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__80__inst 
                                                = vlSelf->top__DOT__DUT__DOT__inst;
                                            vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__80__Vfuncout 
                                                = (
                                                   (0x1000U 
                                                    & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__80__inst 
                                                       >> 0x13U)) 
                                                   | ((0x800U 
                                                       & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__80__inst 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__80__inst 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__80__inst 
                                                               >> 7U)))));
                                            vlSymsp->__Vcoverage[1404].fetch_add(1, std::memory_order_relaxed);
                                        }(), (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__80__Vfuncout)))));
                    }
                } else if ((0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst))) {
                    if (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__rf
                                   [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                              >> 0xfU))], 
                                   vlSelf->top__DOT__DUT__DOT__rf
                                   [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                              >> 0x14U))])) {
                        vlSelf->top__DOT__DUT__DOT__n_PC 
                            = (vlSelf->top__DOT__DUT__DOT__PC 
                               + (IData)(VL_EXTENDS_II(32,13, 
                                                       ([&]() {
                                            vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__81__inst 
                                                = vlSelf->top__DOT__DUT__DOT__inst;
                                            vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__81__Vfuncout 
                                                = (
                                                   (0x1000U 
                                                    & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__81__inst 
                                                       >> 0x13U)) 
                                                   | ((0x800U 
                                                       & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__81__inst 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__81__inst 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__81__inst 
                                                               >> 7U)))));
                                            vlSymsp->__Vcoverage[1404].fetch_add(1, std::memory_order_relaxed);
                                        }(), (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__81__Vfuncout)))));
                    }
                } else if (VL_GTES_III(32, vlSelf->top__DOT__DUT__DOT__rf
                                       [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                                  >> 0xfU))], 
                                       vlSelf->top__DOT__DUT__DOT__rf
                                       [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                                  >> 0x14U))])) {
                    vlSelf->top__DOT__DUT__DOT__n_PC 
                        = (vlSelf->top__DOT__DUT__DOT__PC 
                           + (IData)(VL_EXTENDS_II(32,13, 
                                                   ([&]() {
                                        vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__82__inst 
                                            = vlSelf->top__DOT__DUT__DOT__inst;
                                        vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__82__Vfuncout 
                                            = ((0x1000U 
                                                & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__82__inst 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__82__inst 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__82__inst 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__82__inst 
                                                           >> 7U)))));
                                        vlSymsp->__Vcoverage[1404].fetch_add(1, std::memory_order_relaxed);
                                    }(), (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__82__Vfuncout)))));
                }
            } else if ((0x6063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst))) {
                if ((vlSelf->top__DOT__DUT__DOT__rf
                     [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                >> 0xfU))] < vlSelf->top__DOT__DUT__DOT__rf
                     [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                >> 0x14U))])) {
                    vlSelf->top__DOT__DUT__DOT__n_PC 
                        = (vlSelf->top__DOT__DUT__DOT__PC 
                           + (IData)(VL_EXTENDS_II(32,13, 
                                                   ([&]() {
                                        vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__83__inst 
                                            = vlSelf->top__DOT__DUT__DOT__inst;
                                        vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__83__Vfuncout 
                                            = ((0x1000U 
                                                & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__83__inst 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__83__inst 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__83__inst 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__83__inst 
                                                           >> 7U)))));
                                        vlSymsp->__Vcoverage[1404].fetch_add(1, std::memory_order_relaxed);
                                    }(), (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__83__Vfuncout)))));
                }
            } else if ((0x7063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst))) {
                if ((vlSelf->top__DOT__DUT__DOT__rf
                     [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                >> 0xfU))] >= vlSelf->top__DOT__DUT__DOT__rf
                     [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst 
                                >> 0x14U))])) {
                    vlSelf->top__DOT__DUT__DOT__n_PC 
                        = (vlSelf->top__DOT__DUT__DOT__PC 
                           + (IData)(VL_EXTENDS_II(32,13, 
                                                   ([&]() {
                                        vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__84__inst 
                                            = vlSelf->top__DOT__DUT__DOT__inst;
                                        vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__84__Vfuncout 
                                            = ((0x1000U 
                                                & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__84__inst 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__84__inst 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__84__inst 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__84__inst 
                                                           >> 7U)))));
                                        vlSymsp->__Vcoverage[1404].fetch_add(1, std::memory_order_relaxed);
                                    }(), (IData)(vlSelf->__Vfunc_top__DOT__DUT__DOT__imm_b__84__Vfuncout)))));
                }
            }
        } else if ((4U == vlSelf->top__DOT__DUT__DOT__state)) {
            vlSelf->top__DOT__DUT__DOT__n_state = 0U;
            if ((0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst))) {
                vlSelf->top__DOT__dmem_respstream_rdy = 1U;
                if (vlSelf->top__DOT__dmem_respstream_val) {
                    vlSelf->top__DOT__DUT__DOT__n_state = 0U;
                    vlSelf->top__DOT__DUT__DOT__n_rf[(0x1fU 
                                                      & (vlSelf->top__DOT__DUT__DOT__inst 
                                                         >> 7U))] 
                        = (IData)(vlSelf->top__DOT__dmem_respstream_msg);
                } else {
                    vlSelf->top__DOT__DUT__DOT__n_state = 4U;
                }
            } else if ((0x2023U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst))) {
                vlSelf->top__DOT__dmem_respstream_rdy = 1U;
                vlSelf->top__DOT__DUT__DOT__n_state 
                    = ((IData)(vlSelf->top__DOT__dmem_respstream_val)
                        ? 0U : 4U);
            }
        }
        if ((vlSelf->top__DOT__DUT__DOT__PC != vlSelf->top__DOT__DUT__DOT__n_PC)) {
            vlSelf->top__DOT__DUT__DOT__print_trace = 0U;
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
        if ((vlSelf->top__DOT__DUT__DOT__PC == vlSelf->top__DOT__DUT__DOT__n_PC)) {
            vlSymsp->__Vcoverage[1485].fetch_add(1, std::memory_order_relaxed);
        }
        if ((vlSelf->top__DOT__DUT__DOT__PC != vlSelf->top__DOT__DUT__DOT__n_PC)) {
            vlSymsp->__Vcoverage[1484].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__print_trace) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__print_trace))) {
        vlSymsp->__Vcoverage[1400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__print_trace 
            = vlSelf->top__DOT__DUT__DOT__print_trace;
    }
    if (((IData)(vlSelf->top__DOT__mngr2proc_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__mngr2proc_rdy))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_rdy 
            = vlSelf->top__DOT__mngr2proc_rdy;
    }
    vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
           & ((IData)(vlSelf->top__DOT__mngr2proc_rdy) 
              & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__dmem_respstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_respstream_rdy))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_rdy 
            = vlSelf->top__DOT__dmem_respstream_rdy;
    }
    vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
           & ((IData)(vlSelf->top__DOT__dmem_respstream_rdy) 
              & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__imem_respstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_rdy))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_rdy 
            = vlSelf->top__DOT__imem_respstream_rdy;
    }
    vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
           & ((IData)(vlSelf->top__DOT__imem_respstream_rdy) 
              & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num)));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__n_inst ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (1U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__n_inst ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (2U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__n_inst ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (4U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__n_inst ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (8U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__n_inst 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__n_inst 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__n_inst 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__n_inst 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__n_inst 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__n_inst 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__n_inst 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__n_inst 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__n_inst 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__n_inst 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__n_inst 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__n_inst 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__n_inst 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__n_inst 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__n_inst 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__n_inst 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__n_inst 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__n_inst 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__n_inst 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__n_inst 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__n_inst 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__n_inst 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__n_inst 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__n_inst 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__n_inst 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__n_inst 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__n_inst 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst))) {
        vlSymsp->__Vcoverage[1398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if (((vlSelf->top__DOT__DUT__DOT__n_inst ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_inst) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__n_inst));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__n_PC ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (1U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__n_PC ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (2U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__n_PC ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (4U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__n_PC ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (8U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__n_PC 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__n_PC 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__n_PC 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__n_PC 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__n_PC 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__n_PC 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__n_PC 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__n_PC 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__n_PC 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__n_PC 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__n_PC 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__n_PC 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__n_PC 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__n_PC 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__n_PC 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__n_PC 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__n_PC 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__n_PC 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__n_PC 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__n_PC 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__n_PC 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__n_PC 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__n_PC 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__n_PC 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__n_PC 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__n_PC 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__n_PC 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC))) {
        vlSymsp->__Vcoverage[1359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if (((vlSelf->top__DOT__DUT__DOT__n_PC ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__n_PC) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__n_PC));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_val) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_val))) {
        vlSymsp->__Vcoverage[1225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_val 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_val;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_val));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (1U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (2U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (4U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (8U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    if (((vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    }
    vlSelf->top__DOT__proc2mngr_msg = ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                                        ? vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore
                                        : ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                                            ? 0U : vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_msg));
    if (((IData)(vlSelf->top__DOT__imem_reqstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_reqstream_val))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_val 
            = vlSelf->top__DOT__imem_reqstream_val;
    }
    vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__imem_reqstream_val) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy) 
              & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_val))) {
        vlSymsp->__Vcoverage[1124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_val 
            = vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (1U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (2U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (4U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (8U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_msg_addr) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr));
    }
    if ((0x400U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                    >> 0x1eU) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x400U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                            >> 0x1eU)));
    }
    if ((0x800U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                    >> 0x1eU) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x800U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                            >> 0x1eU)));
    }
    if ((0x1000U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                     >> 0x1eU) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x1000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                             >> 0x1eU)));
    }
    if ((4U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                >> 0x1eU) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (4U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                        >> 0x1eU)));
    }
    if ((8U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                >> 0x1eU) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (8U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                        >> 0x1eU)));
    }
    if ((0x10U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                   >> 0x1eU) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x10U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                           >> 0x1eU)));
    }
    if ((0x20U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                   >> 0x1eU) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x20U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                           >> 0x1eU)));
    }
    if ((0x40U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                   >> 0x1eU) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x40U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                           >> 0x1eU)));
    }
    if ((0x80U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                   >> 0x1eU) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x80U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                           >> 0x1eU)));
    }
    if ((0x100U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                    >> 0x1eU) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x100U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                            >> 0x1eU)));
    }
    if ((0x200U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                    >> 0x1eU) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x200U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                            >> 0x1eU)));
    }
    if ((4U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (4U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                        << 2U)));
    }
    if ((8U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (8U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                        << 2U)));
    }
    if ((0x10U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                   << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x10U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                           << 2U)));
    }
    if ((0x20U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                   << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x20U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                           << 2U)));
    }
    if ((0x40U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                   << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x40U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                           << 2U)));
    }
    if ((0x80U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                   << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x80U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                           << 2U)));
    }
    if ((0x100U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                    << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x100U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                            << 2U)));
    }
    if ((0x200U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                    << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x200U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                            << 2U)));
    }
    if ((0x400U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                    << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x400U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                            << 2U)));
    }
    if ((0x800U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                    << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x800U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                            << 2U)));
    }
    if ((0x1000U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                     << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x1000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                             << 2U)));
    }
    if ((0x2000U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                     << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x2000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                             << 2U)));
    }
    if ((0x4000U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                     << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x4000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                             << 2U)));
    }
    if ((0x8000U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                     << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x8000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                             << 2U)));
    }
    if ((0x10000U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                      << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x10000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                              << 2U)));
    }
    if ((0x20000U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                      << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x20000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                              << 2U)));
    }
    if ((0x40000U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                      << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x40000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                              << 2U)));
    }
    if ((0x80000U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                      << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x80000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                              << 2U)));
    }
    if ((0x100000U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                       << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x100000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                               << 2U)));
    }
    if ((0x200000U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                       << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x200000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                               << 2U)));
    }
    if ((0x400000U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                       << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x400000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                               << 2U)));
    }
    if ((0x800000U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                       << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x800000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                               << 2U)));
    }
    if ((0x1000000U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                        << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x1000000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                                << 2U)));
    }
    if ((0x2000000U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                        << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x2000000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                                << 2U)));
    }
    if ((0x4000000U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                        << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x4000000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                                << 2U)));
    }
    if ((0x8000000U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                        << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x8000000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                                << 2U)));
    }
    if ((0x10000000U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                         << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x10000000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                                 << 2U)));
    }
    if ((0x20000000U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                         << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x20000000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                                 << 2U)));
    }
    if ((0x40000000U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                         << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x40000000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                                 << 2U)));
    }
    if (((1U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                >> 0x1dU)) ^ (vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
                              >> 0x1fU))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x80000000U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                                 << 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                >> 0x1eU) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (1U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                        >> 0x1eU)));
    }
    if ((2U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                >> 0x1eU) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (2U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                        >> 0x1eU)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (1U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                        << 2U)));
    }
    if ((2U & ((vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                << 2U) ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (2U & (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
                        << 2U)));
    }
    if ((1U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xfffffffeU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((2U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xfffffffdU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((4U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xfffffffbU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((8U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xfffffff7U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((0x10U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xffffffefU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((0x20U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xffffffdfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((0x40U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xffffffbfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((0x80U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xffffff7fU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((0x100U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xfffffeffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((0x200U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xfffffdffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((0x400U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xfffffbffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((0x800U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xfffff7ffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((0x1000U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xffffefffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((0x2000U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xffffdfffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((0x4000U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xffffbfffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((0x8000U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xffff7fffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((0x10000U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xfffeffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((0x20000U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xfffdffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((0x40000U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xfffbffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((0x80000U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xfff7ffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((0x100000U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xffefffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((0x200000U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xffdfffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((0x400000U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xffbfffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((0x800000U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xff7fffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((0x1000000U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xfeffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((0x2000000U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xfdffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((0x4000000U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xfbffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((0x8000000U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xf7ffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((0x10000000U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xefffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((0x20000000U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xdfffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((0x40000000U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U])) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0xbfffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = (0x7fffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]);
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_type) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_type)))) {
        vlSymsp->__Vcoverage[1125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_type 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_type)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_type)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_type) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_type)))) {
        vlSymsp->__Vcoverage[1126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_type 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_type)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_type)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_type) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_type)))) {
        vlSymsp->__Vcoverage[1127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_type 
            = ((3U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_type)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_type)));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data))) {
        vlSymsp->__Vcoverage[1190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_data) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data));
    }
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
        = (IData)((QData)((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data)));
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
        = ((vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
            << 2U) | (IData)(((QData)((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data)) 
                              >> 0x20U)));
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
        = (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_type) 
            << 0xaU) | (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_addr 
                        >> 0x1eU));
    if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
        if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                  & (IData)(vlSelf->top__DOT__mngr2proc_rdy)) 
                 & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[601].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                           & (IData)(vlSelf->top__DOT__mngr2proc_rdy)) 
                          & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[602].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__src__DOT__src_rdy = ((IData)(vlSelf->top__DOT__mngr2proc_rdy) 
                                                   & (0U 
                                                      == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
        } else {
            vlSelf->top__DOT__src__DOT__src_rdy = 0U;
        }
    } else {
        vlSelf->top__DOT__src__DOT__src_rdy = ((IData)(vlSelf->top__DOT__mngr2proc_rdy) 
                                               & (0U 
                                                  == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__src_rdy) 
         ^ (IData)(vlSelf->top__DOT__src__DOT____Vtogcov__src_rdy))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_rdy 
            = vlSelf->top__DOT__src__DOT__src_rdy;
    }
    vlSelf->top__DOT__src__DOT__src__DOT__index_en 
        = ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
           & (IData)(vlSelf->top__DOT__src__DOT__src_rdy));
    if ((1U & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__src__DOT__src_val) 
             & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[598].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                      & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[599].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
        vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next = 1U;
        if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay);
            if ((((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                  & (IData)(vlSelf->top__DOT__mngr2proc_rdy)) 
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
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[4034].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[4035].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[4028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
                  & (IData)(vlSelf->top__DOT__dmem_respstream_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[4037].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next = 0U;
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
                           & (IData)(vlSelf->top__DOT__dmem_respstream_rdy)) 
                          & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[4038].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy 
                = ((IData)(vlSelf->top__DOT__dmem_respstream_rdy) 
                   & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
            vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay);
        } else {
            vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy = 0U;
            vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next = 0U;
        vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy 
            = ((IData)(vlSelf->top__DOT__dmem_respstream_rdy) 
               & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
        if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_rdy))) {
        vlSymsp->__Vcoverage[2421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_rdy 
            = vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[3891].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[3892].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[3885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                  & (IData)(vlSelf->top__DOT__imem_respstream_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[3894].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next = 0U;
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                           & (IData)(vlSelf->top__DOT__imem_respstream_rdy)) 
                          & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[3895].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy 
                = ((IData)(vlSelf->top__DOT__imem_respstream_rdy) 
                   & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
            vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay);
        } else {
            vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy = 0U;
            vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next = 0U;
        vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy 
            = ((IData)(vlSelf->top__DOT__imem_respstream_rdy) 
               & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
        if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_rdy))) {
        vlSymsp->__Vcoverage[2372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_rdy 
            = vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq))) {
        vlSymsp->__Vcoverage[1589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__proc2mngr_val = ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                                       | (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if ((1U & (vlSelf->top__DOT__proc2mngr_msg ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (1U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((2U & (vlSelf->top__DOT__proc2mngr_msg ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (2U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((4U & (vlSelf->top__DOT__proc2mngr_msg ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (4U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((8U & (vlSelf->top__DOT__proc2mngr_msg ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (8U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x10U & (vlSelf->top__DOT__proc2mngr_msg ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x10U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x20U & (vlSelf->top__DOT__proc2mngr_msg ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x20U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x40U & (vlSelf->top__DOT__proc2mngr_msg ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x40U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x80U & (vlSelf->top__DOT__proc2mngr_msg ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x80U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x100U & (vlSelf->top__DOT__proc2mngr_msg 
                   ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x100U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x200U & (vlSelf->top__DOT__proc2mngr_msg 
                   ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x200U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x400U & (vlSelf->top__DOT__proc2mngr_msg 
                   ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x400U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x800U & (vlSelf->top__DOT__proc2mngr_msg 
                   ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x800U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x1000U & (vlSelf->top__DOT__proc2mngr_msg 
                    ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x1000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x2000U & (vlSelf->top__DOT__proc2mngr_msg 
                    ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x2000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x4000U & (vlSelf->top__DOT__proc2mngr_msg 
                    ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x4000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x8000U & (vlSelf->top__DOT__proc2mngr_msg 
                    ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x8000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x10000U & (vlSelf->top__DOT__proc2mngr_msg 
                     ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x10000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x20000U & (vlSelf->top__DOT__proc2mngr_msg 
                     ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x20000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x40000U & (vlSelf->top__DOT__proc2mngr_msg 
                     ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x40000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x80000U & (vlSelf->top__DOT__proc2mngr_msg 
                     ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x80000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x100000U & (vlSelf->top__DOT__proc2mngr_msg 
                      ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x100000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x200000U & (vlSelf->top__DOT__proc2mngr_msg 
                      ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x200000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x400000U & (vlSelf->top__DOT__proc2mngr_msg 
                      ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x400000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x800000U & (vlSelf->top__DOT__proc2mngr_msg 
                      ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x800000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__proc2mngr_msg 
                       ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x1000000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__proc2mngr_msg 
                       ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x2000000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__proc2mngr_msg 
                       ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x4000000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__proc2mngr_msg 
                       ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x8000000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__proc2mngr_msg 
                        ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x10000000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__proc2mngr_msg 
                        ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x20000000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__proc2mngr_msg 
                        ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x40000000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if (((vlSelf->top__DOT__proc2mngr_msg ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x80000000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__imem_reqstream_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[2577].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[2578].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[2571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                  & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[2580].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 0U;
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                           & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy)) 
                          & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[2581].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__mem__DOT__mem_memreq0_val 
                = ((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                   & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay);
        } else {
            vlSelf->top__DOT__mem__DOT__mem_memreq0_val = 0U;
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 0U;
        vlSelf->top__DOT__mem__DOT__mem_memreq0_val 
            = ((IData)(vlSelf->top__DOT__imem_reqstream_val) 
               & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
        if (((IData)(vlSelf->top__DOT__imem_reqstream_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_val) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_val))) {
        vlSymsp->__Vcoverage[2213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_val 
            = vlSelf->top__DOT__mem__DOT__mem_memreq0_val;
    }
    if (vlSelf->top__DOT__mem__DOT__mem_memreq0_val) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
            = vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
            = vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
            = (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
               << 2U);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
            = (vlSelf->top__DOT__DUT__DOT__imem_reqstream_msg_addr 
               >> 0x1eU);
    } else {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] = 0U;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq))) {
        vlSymsp->__Vcoverage[1498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__dmem_reqstream_val = ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                                            | (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U];
        vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U];
        vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U];
    } else if (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] = 0U;
        vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] = 0U;
        vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] = 0U;
    } else {
        vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
            = vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U];
        vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
            = vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U];
        vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
            = vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U];
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_en) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_en))) {
        vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_en 
            = vlSelf->top__DOT__src__DOT__src__DOT__index_en;
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[3963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[4029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[3421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[3820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[3886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[3361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__proc2mngr_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__proc2mngr_val))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_val 
            = vlSelf->top__DOT__proc2mngr_val;
    }
    vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__proc2mngr_val) 
           & ((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
              & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num)));
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__proc2mngr_rdy) 
           & (IData)(vlSelf->top__DOT__proc2mngr_val));
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[2506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[2572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[3340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)));
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[2245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[2277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[2279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[2280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[2281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[2282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[2283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[2284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[2285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[2286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[2287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[2288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[2289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[2290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[2291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if (((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_reqstream_val))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_val 
            = vlSelf->top__DOT__dmem_reqstream_val;
    }
    vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy) 
              & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num)));
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__dmem_reqstream_rdy) 
           & (IData)(vlSelf->top__DOT__dmem_reqstream_val));
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
          ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
          ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[3422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[3362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if ((1U & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__proc2mngr_val) 
             & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[776].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__proc2mngr_val) 
                      & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[777].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 1U;
        if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__proc2mngr_val) 
                  & (IData)(vlSelf->top__DOT__sink__DOT__sink_rdy)) 
                 & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[779].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 0U;
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__proc2mngr_val) 
                           & (IData)(vlSelf->top__DOT__sink__DOT__sink_rdy)) 
                          & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[780].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__sink__DOT__sink_val = 
                ((IData)(vlSelf->top__DOT__proc2mngr_val) 
                 & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay);
        } else {
            vlSelf->top__DOT__sink__DOT__sink_val = 0U;
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 0U;
        vlSelf->top__DOT__sink__DOT__sink_val = ((IData)(vlSelf->top__DOT__proc2mngr_val) 
                                                 & (0U 
                                                    == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
        if (((IData)(vlSelf->top__DOT__proc2mngr_val) 
             & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[1590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink_val) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT____Vtogcov__sink_val))) {
        vlSymsp->__Vcoverage[635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_val 
            = vlSelf->top__DOT__sink__DOT__sink_val;
    }
    if (vlSelf->top__DOT__sink__DOT__sink_val) {
        vlSelf->top__DOT__sink__DOT__sink__DOT__index_en 
            = vlSelf->top__DOT__sink__DOT__sink_rdy;
        vlSelf->top__DOT__sink__DOT__sink_msg = vlSelf->top__DOT__proc2mngr_msg;
    } else {
        vlSelf->top__DOT__sink__DOT__sink__DOT__index_en = 0U;
        vlSelf->top__DOT__sink__DOT__sink_msg = 0U;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe))) {
        vlSymsp->__Vcoverage[3344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe)) 
               & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq))) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[2720].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[2721].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[2714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
                  & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[2723].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 0U;
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
                           & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy)) 
                          & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[2724].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__mem__DOT__mem_memreq1_val 
                = ((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
                   & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay);
        } else {
            vlSelf->top__DOT__mem__DOT__mem_memreq1_val = 0U;
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 0U;
        vlSelf->top__DOT__mem__DOT__mem_memreq1_val 
            = ((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
               & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
        if (((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[1499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_val) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_val))) {
        vlSymsp->__Vcoverage[2292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_val 
            = vlSelf->top__DOT__mem__DOT__mem_memreq1_val;
    }
    if (vlSelf->top__DOT__mem__DOT__mem_memreq1_val) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len 
            = (3U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_ 
            = (7U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                     >> 0xaU));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque 
            = (0xffU & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                        >> 2U));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
            = ((vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                << 0x1eU) | (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                             >> 2U));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U];
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
            = vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy;
    } else {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_ = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = 0U;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[3417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[3357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[1591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_en) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_en))) {
        vlSymsp->__Vcoverage[813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_en 
            = vlSelf->top__DOT__sink__DOT__sink__DOT__index_en;
    }
    if ((1U & (vlSelf->top__DOT__sink__DOT__sink_msg 
               ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (1U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__sink_msg 
               ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (2U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__sink_msg 
               ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (4U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__sink_msg 
               ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (8U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                  ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                  ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                  ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                  ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                   ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                   ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                   ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                   ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                    ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                    ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                    ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                    ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                     ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                     ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                     ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                     ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                      ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                      ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                      ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                      ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                       ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                       ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                       ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                       ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                        ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                        ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                        ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if (((vlSelf->top__DOT__sink__DOT__sink_msg ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[3341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[2649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[2715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[1500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[3595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[3596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[3552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[3553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[3554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[3349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xfeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xfdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xfbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xf7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0x7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[3593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[3627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[2324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[2356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[2358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[2359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[2360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[2361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[2362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[2363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[2364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[2365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[2366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[2367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[2368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[2369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[2370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[3419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[3359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[1585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[1494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe))) {
        vlSymsp->__Vcoverage[3353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe)) 
               & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq))) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[1587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[1496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[3350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
}
