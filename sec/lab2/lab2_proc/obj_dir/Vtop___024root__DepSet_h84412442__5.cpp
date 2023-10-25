// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__9\n"); );
    // Body
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x400U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            >> 0x1eU)));
    }
    if ((0x800U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            >> 0x1eU)));
    }
    if ((0x1000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             >> 0x1eU)));
    }
    if ((4U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        >> 0x1eU)));
    }
    if ((8U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        >> 0x1eU)));
    }
    if ((0x10U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           >> 0x1eU)));
    }
    if ((0x20U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           >> 0x1eU)));
    }
    if ((0x40U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           >> 0x1eU)));
    }
    if ((0x80U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           >> 0x1eU)));
    }
    if ((0x100U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            >> 0x1eU)));
    }
    if ((0x200U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            >> 0x1eU)));
    }
    if ((4U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U)));
    }
    if ((8U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U)));
    }
    if ((0x10U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           << 2U)));
    }
    if ((0x20U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           << 2U)));
    }
    if ((0x40U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           << 2U)));
    }
    if ((0x80U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           << 2U)));
    }
    if ((0x100U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            << 2U)));
    }
    if ((0x200U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            << 2U)));
    }
    if ((0x400U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            << 2U)));
    }
    if ((0x800U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            << 2U)));
    }
    if ((0x1000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             << 2U)));
    }
    if ((0x2000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             << 2U)));
    }
    if ((0x4000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             << 2U)));
    }
    if ((0x8000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             << 2U)));
    }
    if ((0x10000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                              << 2U)));
    }
    if ((0x20000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                              << 2U)));
    }
    if ((0x40000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                              << 2U)));
    }
    if ((0x80000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                              << 2U)));
    }
    if ((0x100000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                               << 2U)));
    }
    if ((0x200000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                               << 2U)));
    }
    if ((0x400000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                               << 2U)));
    }
    if ((0x800000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                               << 2U)));
    }
    if ((0x1000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                << 2U)));
    }
    if ((0x2000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                << 2U)));
    }
    if ((0x4000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                << 2U)));
    }
    if ((0x8000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                << 2U)));
    }
    if ((0x10000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                         << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                 << 2U)));
    }
    if ((0x20000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                         << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                 << 2U)));
    }
    if ((0x40000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                         << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                 << 2U)));
    }
    if (((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1dU)) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
                              >> 0x1fU))) {
        vlSymsp->__Vcoverage[975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x80000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                 << 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        >> 0x1eU)));
    }
    if ((2U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        >> 0x1eU)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U)));
    }
    if ((2U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U)));
    }
    if ((1U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((2U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((4U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((8U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x10U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x20U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x40U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x80U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x100U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x200U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x400U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x800U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x1000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x2000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x4000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x8000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x10000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x20000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x40000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x80000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x100000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[1000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x200000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[1001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x400000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[1002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x800000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[1003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x1000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[1004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x2000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[1005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x4000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[1006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x8000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[1007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x10000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[1008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x20000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[1009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x40000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[1010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) {
        vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] = 0U;
        if (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) {
            vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   << 2U);
            vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU);
        } else {
            vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] = 0U;
            vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] = 0U;
        }
    } else {
        vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U];
        vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U];
        vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U];
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[5035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
          ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
          ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[5037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__10\n"); );
    // Body
    if (vlSelf->top__DOT__mem_clear) {
        vlSymsp->__Vcoverage[4828].fetch_add(1, std::memory_order_relaxed);
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
    if (((IData)(vlSelf->top__DOT__reset) ^ (IData)(vlSelf->top__DOT____Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reset = vlSelf->top__DOT__reset;
    }
    if (((IData)(vlSelf->top__DOT__mem_clear) ^ (IData)(vlSelf->top__DOT____Vtogcov__mem_clear))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mem_clear = vlSelf->top__DOT__mem_clear;
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
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    if (vlSelf->top__DOT__mem_clear) {
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared) {
            vlSymsp->__Vcoverage[4806].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared)))) {
            vlSymsp->__Vcoverage[4805].fetch_add(1, std::memory_order_relaxed);
        }
    }
    vlSelf->top__DOT__src__DOT__src__DOT__done_next 
        = ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
           == (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem_clear)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M)))) {
                    vlSymsp->__Vcoverage[4809].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M) {
                    vlSymsp->__Vcoverage[4808].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M)))) {
                    vlSymsp->__Vcoverage[4818].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M) {
                    vlSymsp->__Vcoverage[4817].fetch_add(1, std::memory_order_relaxed);
                    if ((3U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        if ((4U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            if ((5U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[4816].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((5U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[4815].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            vlSymsp->__Vcoverage[4814].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((3U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        vlSymsp->__Vcoverage[4813].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M)))) {
                    vlSymsp->__Vcoverage[4812].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M) {
                    vlSymsp->__Vcoverage[4811].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M) {
                    vlSymsp->__Vcoverage[4823].fetch_add(1, std::memory_order_relaxed);
                    if ((3U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        vlSymsp->__Vcoverage[4819].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((3U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        if ((4U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            if ((5U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[4822].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((5U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[4821].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            vlSymsp->__Vcoverage[4820].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M)))) {
                    vlSymsp->__Vcoverage[4824].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    vlSelf->top__DOT__snk_done = ((~ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg)) 
                                  & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index) 
                                     == (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    __Vilp = 0x508U;
    while ((__Vilp <= 0xfffU)) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[__Vilp] 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__m
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x507U)) {
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
                vlSymsp->__Vcoverage[4804].fetch_add(1, std::memory_order_relaxed);
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
                vlSymsp->__Vcoverage[4807].fetch_add(1, std::memory_order_relaxed);
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
                vlSymsp->__Vcoverage[4810].fetch_add(1, std::memory_order_relaxed);
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

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    // Body
    if (((IData)(vlSelf->top__DOT__src__DOT__src__DOT__done_next) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__done_next))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__done_next 
            = vlSelf->top__DOT__src__DOT__src__DOT__done_next;
    }
    if (((IData)(vlSelf->top__DOT__snk_done) ^ (IData)(vlSelf->top__DOT____Vtogcov__snk_done))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__snk_done = vlSelf->top__DOT__snk_done;
    }
    vlSelf->top__DOT__sink__DOT__sink_rdy = (1U & (
                                                   (~ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg)) 
                                                   & (~ (IData)(vlSelf->top__DOT__snk_done))));
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT____Vtogcov__sink_rdy))) {
        vlSymsp->__Vcoverage[636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_rdy 
            = vlSelf->top__DOT__sink__DOT__sink_rdy;
    }
    vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__proc2mngr_val) 
           & ((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
              & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num)));
    vlSelf->top__DOT__sink__DOT__sink__DOT__index_en 
        = ((IData)(vlSelf->top__DOT__sink__DOT__sink_val) 
           & (IData)(vlSelf->top__DOT__sink__DOT__sink_rdy));
    vlSelf->top__DOT__proc2mngr_rdy = ((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)
                                        ? ((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) 
                                           & ((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
                                              & (0U 
                                                 == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay)))
                                        : ((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
                                           & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__proc2mngr_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__proc2mngr_rdy))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_rdy 
            = vlSelf->top__DOT__proc2mngr_rdy;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__proc2mngr_rdy) 
           & (IData)(vlSelf->top__DOT__proc2mngr_val));
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
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay);
        } else {
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 0U;
        if (((IData)(vlSelf->top__DOT__proc2mngr_val) 
             & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_en) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_en))) {
        vlSymsp->__Vcoverage[813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_en 
            = vlSelf->top__DOT__sink__DOT__sink__DOT__index_en;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[1633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
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
        vlSymsp->__Vcoverage[1634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[1628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[1630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    // Body
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_X))) {
        vlSymsp->__Vcoverage[1832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X;
    }
    vlSelf->top__DOT__DUT__DOT__imul_resp_rdy_X = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__is_mul_X) 
                                                   & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X));
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X) 
           & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X)));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_X));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imul_resp_rdy_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imul_resp_rdy_X))) {
        vlSymsp->__Vcoverage[1215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imul_resp_rdy_X 
            = vlSelf->top__DOT__DUT__DOT__imul_resp_rdy_X;
    }
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__current_state))) {
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__current_state))) {
                if (vlSelf->top__DOT__DUT__DOT__imul_resp_rdy_X) {
                    vlSymsp->__Vcoverage[3265].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[3262].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[3255].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imul_resp_rdy_X)))) {
                    vlSymsp->__Vcoverage[3263].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[3255].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[3264].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__current_state))) {
        vlSelf->top__DOT__DUT__DOT__imul_req_rdy_D = 1U;
        vlSelf->top__DOT__DUT__DOT__imul_resp_val_X = 0U;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__a_mux_sel = 1U;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__b_mux_sel = 1U;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__result_mux_sel = 1U;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__add_mux_sel = 0U;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__result_reg_en = 0U;
    } else if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__current_state))) {
        if ((1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out)) {
            vlSelf->top__DOT__DUT__DOT__imul_req_rdy_D = 0U;
            vlSelf->top__DOT__DUT__DOT__imul_resp_val_X = 0U;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__a_mux_sel = 0U;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__b_mux_sel = 0U;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__result_mux_sel = 0U;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__add_mux_sel = 0U;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__result_reg_en = 1U;
        }
        if ((1U & (~ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out))) {
            vlSelf->top__DOT__DUT__DOT__imul_req_rdy_D = 0U;
            vlSelf->top__DOT__DUT__DOT__imul_resp_val_X = 0U;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__a_mux_sel = 0U;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__b_mux_sel = 0U;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__result_mux_sel = 0U;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__add_mux_sel = 1U;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__result_reg_en = 1U;
        }
    } else if (VL_LIKELY((2U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__current_state)))) {
        if (vlSelf->top__DOT__DUT__DOT__imul_resp_rdy_X) {
            vlSelf->top__DOT__DUT__DOT__imul_req_rdy_D = 0U;
            vlSelf->top__DOT__DUT__DOT__imul_resp_val_X = 1U;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__a_mux_sel = 1U;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__b_mux_sel = 1U;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__result_mux_sel = 1U;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__add_mux_sel = 0U;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__result_reg_en = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imul_resp_rdy_X)))) {
            vlSelf->top__DOT__DUT__DOT__imul_req_rdy_D = 0U;
            vlSelf->top__DOT__DUT__DOT__imul_resp_val_X = 1U;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__a_mux_sel = 1U;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__b_mux_sel = 1U;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__result_mux_sel = 1U;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__add_mux_sel = 0U;
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__result_reg_en = 0U;
        }
    } else {
        VL_STOP_MT("../lab1_imul/../lab1_imul/IntMulAlt.v", 349, "");
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_val))) {
        vlSymsp->__Vcoverage[1127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_val 
            = vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__osquash_X))) {
        vlSymsp->__Vcoverage[1689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__osquash_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__result_reg_en) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__result_reg_en))) {
        vlSymsp->__Vcoverage[2803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__result_reg_en 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__result_reg_en;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imul_resp_val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imul_resp_val_X))) {
        vlSymsp->__Vcoverage[1262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imul_resp_val_X 
            = vlSelf->top__DOT__DUT__DOT__imul_resp_val_X;
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__resp_rdy 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__imul_resp_rdy_X) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__imul_resp_val_X));
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__current_state))) {
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__current_state))) {
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__resp_rdy)))) {
                    vlSymsp->__Vcoverage[3252].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__resp_rdy) {
                    vlSymsp->__Vcoverage[3251].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_X) 
              | ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_M) 
                 | ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imul_resp_val_X)) 
                    | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_W)))));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imul_req_rdy_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imul_req_rdy_D))) {
        vlSymsp->__Vcoverage[1258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imul_req_rdy_D 
            = vlSelf->top__DOT__DUT__DOT__imul_req_rdy_D;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__result_mux_sel)))) {
        vlSymsp->__Vcoverage[3184].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__result_mux_sel) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__result_mux_sel))) {
        vlSymsp->__Vcoverage[2801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__result_mux_sel 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__result_mux_sel;
    }
    if (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__a_mux_sel) {
        if (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__a_mux_sel) {
            vlSymsp->__Vcoverage[3172].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
                = (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                           >> 0x20U));
        } else {
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__a_mux_sel)))) {
            vlSymsp->__Vcoverage[3173].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__a_mux_sel)))) {
        vlSymsp->__Vcoverage[3171].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__a_mux_sel) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__a_mux_sel))) {
        vlSymsp->__Vcoverage[2799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__a_mux_sel 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__a_mux_sel;
    }
    if (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__add_mux_sel) {
        if (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__add_mux_sel) {
            vlSymsp->__Vcoverage[3189].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
                = vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out;
        } else {
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__add_mux_sel)))) {
            vlSymsp->__Vcoverage[3190].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out;
    }
    if (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__result_mux_sel) {
        if (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__result_mux_sel) {
            vlSymsp->__Vcoverage[3185].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__result_mux_sel)))) {
            vlSymsp->__Vcoverage[3186].fetch_add(1, std::memory_order_relaxed);
        }
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out = 0U;
    } else {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__add_mux_sel)))) {
        vlSymsp->__Vcoverage[3188].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__add_mux_sel) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__add_mux_sel))) {
        vlSymsp->__Vcoverage[2802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__add_mux_sel 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__add_mux_sel;
    }
    if (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__b_mux_sel) {
        if (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__b_mux_sel) {
            vlSymsp->__Vcoverage[3177].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                = (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input);
        } else {
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__b_mux_sel)))) {
            vlSymsp->__Vcoverage[3178].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__b_mux_sel)))) {
        vlSymsp->__Vcoverage[3176].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__b_mux_sel) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__b_mux_sel))) {
        vlSymsp->__Vcoverage[2800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__b_mux_sel 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__b_mux_sel;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq))) {
        vlSymsp->__Vcoverage[1541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__dmem_reqstream_val = ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                                            | (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__squash_D))) {
        vlSymsp->__Vcoverage[1690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__squash_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F;
    }
    vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state)) 
           & ((IData)(vlSelf->top__DOT__imem_respstream_val) 
              & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F))));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__resp_rdy) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT____Vtogcov__resp_rdy))) {
        vlSymsp->__Vcoverage[3244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT____Vtogcov__resp_rdy 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__resp_rdy;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_X)))) {
        vlSymsp->__Vcoverage[1208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_X 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_X))) {
        vlSymsp->__Vcoverage[1686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X;
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__add_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out));
    }
    if ((1U & (((IData)(1U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[3098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__out 
            = (1U & ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((1U & ((1U & (((IData)(1U) + (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out)) 
                      >> 1U)) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder__DOT____Vtogcov__cout 
            = (1U & (((IData)(1U) + (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out)) 
                     >> 1U));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out));
    }
    vlSelf->__VdfgTmp_h8e4ae4ed__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 1U)) 
                                               + (1U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (1U 
                                                       & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out)) 
                                                     >> 1U)))));
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop_val))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop_val 
            = vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__result_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out));
    }
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h8e4ae4ed__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder1__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder1__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h8e4ae4ed__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_hd0ae7ccf__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 2U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h8e4ae4ed__0) 
                                                  >> 1U))));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[4338].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[4339].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[4332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
                  & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[4341].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 0U;
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
                           & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy)) 
                          & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[4342].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_val) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_val))) {
        vlSymsp->__Vcoverage[3910].fetch_add(1, std::memory_order_relaxed);
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_F))) {
        vlSymsp->__Vcoverage[1679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_F 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F;
    }
    if ((IData)((((IData)(vlSelf->__VdfgTmp_hd0ae7ccf__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder2__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder2__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_hd0ae7ccf__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h22d3d55e__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 3U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_hd0ae7ccf__0) 
                                                  >> 1U))));
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[4267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[4333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[1543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[5258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[5259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[5215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[5216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[5217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[4967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xfeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xfdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xfbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xf7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0x7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h22d3d55e__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder3__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder3__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h22d3d55e__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h5f7bc1f5__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 4U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h22d3d55e__0) 
                                                  >> 1U))));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[1537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe))) {
        vlSymsp->__Vcoverage[4971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe)) 
               & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq))) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h5f7bc1f5__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder4__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder4__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h5f7bc1f5__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_hcdd18853__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 5U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h5f7bc1f5__0) 
                                                  >> 1U))));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[1539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[4968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if ((IData)((((IData)(vlSelf->__VdfgTmp_hcdd18853__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder5__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder5__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_hcdd18853__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h1436be50__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 6U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_hcdd18853__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h1436be50__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder6__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder6__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h1436be50__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h70292768__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 7U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h1436be50__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h70292768__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder7__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder7__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h70292768__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h91a101b1__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 8U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h70292768__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h91a101b1__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder8__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder8__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h91a101b1__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h6cbfed38__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 9U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h91a101b1__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h6cbfed38__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder9__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder9__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h6cbfed38__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h27002de6__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0xaU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h6cbfed38__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h27002de6__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder10__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder10__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h27002de6__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h05cdcf9e__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0xbU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h27002de6__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h05cdcf9e__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder11__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder11__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h05cdcf9e__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_hb4877cc9__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0xcU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h05cdcf9e__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_hb4877cc9__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder12__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder12__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_hb4877cc9__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h146abd17__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0xdU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_hb4877cc9__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h146abd17__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder13__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder13__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h146abd17__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_hbf1cd620__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0xeU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h146abd17__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_hbf1cd620__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder14__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder14__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_hbf1cd620__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h8bf02f2a__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0xfU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_hbf1cd620__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h8bf02f2a__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder15__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder15__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h8bf02f2a__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h172c05cb__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x10U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h8bf02f2a__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h172c05cb__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder16__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder16__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h172c05cb__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h3e0e4264__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x11U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h172c05cb__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h3e0e4264__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder17__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder17__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h3e0e4264__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h136edbd2__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x12U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h3e0e4264__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h136edbd2__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder18__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder18__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h136edbd2__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h8b92d417__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x13U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h136edbd2__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h8b92d417__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder19__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder19__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h8b92d417__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_hf5149ce1__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x14U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h8b92d417__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_hf5149ce1__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder20__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder20__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_hf5149ce1__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h14b60fc5__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x15U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_hf5149ce1__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h14b60fc5__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder21__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder21__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h14b60fc5__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h8953702b__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x16U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h14b60fc5__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h8953702b__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder22__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder22__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h8953702b__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h9a51c0ca__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x17U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h8953702b__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h9a51c0ca__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder23__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder23__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h9a51c0ca__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_hb19f1736__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x18U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h9a51c0ca__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_hb19f1736__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder24__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder24__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_hb19f1736__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h5f983465__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x19U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_hb19f1736__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h5f983465__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder25__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder25__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h5f983465__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_ha087345d__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x1aU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h5f983465__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_ha087345d__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder26__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder26__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_ha087345d__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h471f319e__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x1bU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_ha087345d__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h471f319e__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder27__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder27__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h471f319e__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h28f0c39d__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x1cU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h471f319e__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h28f0c39d__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder28__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder28__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h28f0c39d__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_ha098cd25__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x1dU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h28f0c39d__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_ha098cd25__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder29__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder29__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_ha098cd25__0) 
                     >> 1U));
    }
    vlSelf->__VdfgTmp_h5d3e0dae__0 = (3U & ((IData)(1U) 
                                            + ((1U 
                                                & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                                   >> 0x1eU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_ha098cd25__0) 
                                                  >> 1U))));
    if ((IData)((((IData)(vlSelf->__VdfgTmp_h5d3e0dae__0) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder30__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[3223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder30__DOT____Vtogcov__cout 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h5d3e0dae__0) 
                     >> 1U));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vcellout__ripple_carry_adder31__cout 
        = (1U & (((IData)(1U) + ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                  >> 0x1fU) + ((IData)(vlSelf->__VdfgTmp_h5d3e0dae__0) 
                                               >> 1U))) 
                 >> 1U));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vcellout__ripple_carry_adder31__cout) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder31__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__ripple_carry_adder31__DOT____Vtogcov__cout 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vcellout__ripple_carry_adder31__cout;
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
        = (((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vcellout__ripple_carry_adder31__cout) 
            << 0x1fU) | ((0x40000000U & ((IData)(vlSelf->__VdfgTmp_h5d3e0dae__0) 
                                         << 0x1dU)) 
                         | ((0x20000000U & ((IData)(vlSelf->__VdfgTmp_ha098cd25__0) 
                                            << 0x1cU)) 
                            | ((0x10000000U & ((IData)(vlSelf->__VdfgTmp_h28f0c39d__0) 
                                               << 0x1bU)) 
                               | ((0x8000000U & ((IData)(vlSelf->__VdfgTmp_h471f319e__0) 
                                                 << 0x1aU)) 
                                  | ((0x4000000U & 
                                      ((IData)(vlSelf->__VdfgTmp_ha087345d__0) 
                                       << 0x19U)) | 
                                     ((0x2000000U & 
                                       ((IData)(vlSelf->__VdfgTmp_h5f983465__0) 
                                        << 0x18U)) 
                                      | ((0x1000000U 
                                          & ((IData)(vlSelf->__VdfgTmp_hb19f1736__0) 
                                             << 0x17U)) 
                                         | ((0x800000U 
                                             & ((IData)(vlSelf->__VdfgTmp_h9a51c0ca__0) 
                                                << 0x16U)) 
                                            | ((0x400000U 
                                                & ((IData)(vlSelf->__VdfgTmp_h8953702b__0) 
                                                   << 0x15U)) 
                                               | ((0x200000U 
                                                   & ((IData)(vlSelf->__VdfgTmp_h14b60fc5__0) 
                                                      << 0x14U)) 
                                                  | ((0x100000U 
                                                      & ((IData)(vlSelf->__VdfgTmp_hf5149ce1__0) 
                                                         << 0x13U)) 
                                                     | ((0x80000U 
                                                         & ((IData)(vlSelf->__VdfgTmp_h8b92d417__0) 
                                                            << 0x12U)) 
                                                        | ((0x40000U 
                                                            & ((IData)(vlSelf->__VdfgTmp_h136edbd2__0) 
                                                               << 0x11U)) 
                                                           | ((0x20000U 
                                                               & ((IData)(vlSelf->__VdfgTmp_h3e0e4264__0) 
                                                                  << 0x10U)) 
                                                              | ((0x10000U 
                                                                  & ((IData)(vlSelf->__VdfgTmp_h172c05cb__0) 
                                                                     << 0xfU)) 
                                                                 | ((0x8000U 
                                                                     & ((IData)(vlSelf->__VdfgTmp_h8bf02f2a__0) 
                                                                        << 0xeU)) 
                                                                    | ((0x4000U 
                                                                        & ((IData)(vlSelf->__VdfgTmp_hbf1cd620__0) 
                                                                           << 0xdU)) 
                                                                       | ((0x2000U 
                                                                           & ((IData)(vlSelf->__VdfgTmp_h146abd17__0) 
                                                                              << 0xcU)) 
                                                                          | ((0x1000U 
                                                                              & ((IData)(vlSelf->__VdfgTmp_hb4877cc9__0) 
                                                                                << 0xbU)) 
                                                                             | ((0x800U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h05cdcf9e__0) 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h27002de6__0) 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h6cbfed38__0) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h91a101b1__0) 
                                                                                << 7U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h70292768__0) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h1436be50__0) 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_hcdd18853__0) 
                                                                                << 4U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h5f7bc1f5__0) 
                                                                                << 3U)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h22d3d55e__0) 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_hd0ae7ccf__0) 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h8e4ae4ed__0)) 
                                                                                | (1U 
                                                                                & (((IData)(1U) 
                                                                                + 
                                                                                (1U 
                                                                                & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out)) 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
    if ((1U & (~ ((((((((0xffffffffU == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout) 
                        | (0xfffffffeU == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                       | (0xfffffffcU == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                      | (0xfffffff8U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                     | (0xfffffff0U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                    | (0xffffffe0U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                   | (0xffffffc0U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                  | (0xffffff80U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout))))) {
        if ((1U & (~ ((((((((0xffffff00U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout) 
                            | (0xfffffe00U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                           | (0xfffffc00U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                          | (0xfffff800U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                         | (0xfffff000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                        | (0xffffe000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                       | (0xffffc000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                      | (0xffff8000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout))))) {
            if ((1U & (~ ((((((((0xffff0000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout) 
                                | (0xfffe0000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                               | (0xfffc0000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                              | (0xfff80000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                             | (0xfff00000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                            | (0xffe00000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                           | (0xffc00000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                          | (0xff800000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout))))) {
                if (((((((((0xff000000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout) 
                           | (0xfe000000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                          | (0xfc000000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                         | (0xf8000000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                        | (0xf0000000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                       | (0xe0000000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                      | (0xc0000000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                     | (0x80000000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout))) {
                    if ((0xff000000U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                        if ((0xfe000000U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                            if ((0xfc000000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                                vlSymsp->__Vcoverage[3163].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((0xfc000000U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                                if ((0xf8000000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                                    vlSymsp->__Vcoverage[3164].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0xf8000000U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                                    if ((0xf0000000U 
                                         == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                                        vlSymsp->__Vcoverage[3165].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((0xf0000000U 
                                         != vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                                        if ((0xe0000000U 
                                             == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                                            vlSymsp->__Vcoverage[3166].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((0xe0000000U 
                                             != vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                                            if ((0xc0000000U 
                                                 == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                                                vlSymsp->__Vcoverage[3167].fetch_add(1, std::memory_order_relaxed);
                                            }
                                            if ((0xc0000000U 
                                                 != vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                                                vlSymsp->__Vcoverage[3168].fetch_add(1, std::memory_order_relaxed);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((0xfe000000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                            vlSymsp->__Vcoverage[3162].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0xff000000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                        vlSymsp->__Vcoverage[3161].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((1U & (~ ((((((((0xff000000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout) 
                                    | (0xfe000000U 
                                       == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                                   | (0xfc000000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                                  | (0xf8000000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                                 | (0xf0000000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                                | (0xe0000000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                               | (0xc0000000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                              | (0x80000000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout))))) {
                    if ((0U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                        vlSymsp->__Vcoverage[3169].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
            if (((((((((0xffff0000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout) 
                       | (0xfffe0000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                      | (0xfffc0000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                     | (0xfff80000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                    | (0xfff00000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                   | (0xffe00000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                  | (0xffc00000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                 | (0xff800000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout))) {
                if ((0xffff0000U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                    if ((0xfffe0000U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                        if ((0xfffc0000U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                            if ((0xfff80000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                                vlSymsp->__Vcoverage[3156].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((0xfff80000U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                                if ((0xfff00000U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                                    if ((0xffe00000U 
                                         != vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                                        if ((0xffc00000U 
                                             != vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                                            vlSymsp->__Vcoverage[3160].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((0xffc00000U 
                                             == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                                            vlSymsp->__Vcoverage[3159].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((0xffe00000U 
                                         == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                                        vlSymsp->__Vcoverage[3158].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0xfff00000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                                    vlSymsp->__Vcoverage[3157].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                        if ((0xfffc0000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                            vlSymsp->__Vcoverage[3155].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0xfffe0000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                        vlSymsp->__Vcoverage[3154].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0xffff0000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                    vlSymsp->__Vcoverage[3153].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if (((((((((0xffffff00U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout) 
                   | (0xfffffe00U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                  | (0xfffffc00U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                 | (0xfffff800U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                | (0xfffff000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
               | (0xffffe000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
              | (0xffffc000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
             | (0xffff8000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout))) {
            if ((0xffffff00U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                if ((0xfffffe00U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                    if ((0xfffffc00U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                        if ((0xfffff800U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                            if ((0xfffff000U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                                if ((0xffffe000U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                                    if ((0xffffc000U 
                                         != vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                                        vlSymsp->__Vcoverage[3152].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((0xffffc000U 
                                         == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                                        vlSymsp->__Vcoverage[3151].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0xffffe000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                                    vlSymsp->__Vcoverage[3150].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0xfffff000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                                vlSymsp->__Vcoverage[3149].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0xfffff800U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                            vlSymsp->__Vcoverage[3148].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0xfffffc00U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                        vlSymsp->__Vcoverage[3147].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0xfffffe00U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                    vlSymsp->__Vcoverage[3146].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((0xffffff00U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                vlSymsp->__Vcoverage[3145].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout))) {
        vlSymsp->__Vcoverage[3129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__cout) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout));
    }
    if (((((((((0xffffffffU == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout) 
               | (0xfffffffeU == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
              | (0xfffffffcU == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
             | (0xfffffff8U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
            | (0xfffffff0U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
           | (0xffffffe0U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
          | (0xffffffc0U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
         | (0xffffff80U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout))) {
        if ((0xffffffffU != vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
            if ((0xfffffffeU != vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                if ((0xfffffffcU != vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                    if ((0xfffffff8U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                        if ((0xfffffff0U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                            if ((0xffffffe0U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                                vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((0xffffffe0U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                                if ((0xffffffc0U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                                    vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0xffffffc0U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                                    vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                        if ((0xfffffff0U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                            vlSymsp->__Vcoverage[3141].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0xfffffff8U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                        vlSymsp->__Vcoverage[3140].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0xfffffffcU == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                    vlSymsp->__Vcoverage[3139].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((0xfffffffeU == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
                vlSymsp->__Vcoverage[3138].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((0xffffffffU == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) {
            vlSymsp->__Vcoverage[3137].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((((((((0xffffffffU == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout) 
               | (0xfffffffeU == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
              | (0xfffffffcU == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
             | (0xfffffff8U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
            | (0xfffffff0U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
           | (0xffffffe0U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
          | (0xffffffc0U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
         | (0xffffff80U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout))) {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt 
            = ((0xffffffffU == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)
                ? 1U : ((0xfffffffeU == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)
                         ? 1U : ((0xfffffffcU == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)
                                  ? 2U : ((0xfffffff8U 
                                           == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)
                                           ? 3U : (
                                                   (0xfffffff0U 
                                                    == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)
                                                    ? 4U
                                                    : 
                                                   ((0xffffffe0U 
                                                     == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)
                                                     ? 5U
                                                     : 
                                                    ((0xffffffc0U 
                                                      == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)
                                                      ? 6U
                                                      : 7U)))))));
    } else if (((((((((0xffffff00U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout) 
                      | (0xfffffe00U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                     | (0xfffffc00U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                    | (0xfffff800U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                   | (0xfffff000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                  | (0xffffe000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                 | (0xffffc000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                | (0xffff8000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout))) {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt 
            = ((0xffffff00U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)
                ? 8U : ((0xfffffe00U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)
                         ? 9U : ((0xfffffc00U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)
                                  ? 0xaU : ((0xfffff800U 
                                             == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)
                                             ? 0xbU
                                             : ((0xfffff000U 
                                                 == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)
                                                 ? 0xcU
                                                 : 
                                                ((0xffffe000U 
                                                  == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)
                                                  ? 0xdU
                                                  : 
                                                 ((0xffffc000U 
                                                   == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)
                                                   ? 0xeU
                                                   : 0xfU)))))));
    } else if (((((((((0xffff0000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout) 
                      | (0xfffe0000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                     | (0xfffc0000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                    | (0xfff80000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                   | (0xfff00000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                  | (0xffe00000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                 | (0xffc00000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                | (0xff800000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout))) {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt 
            = ((0xffff0000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)
                ? 0x10U : ((0xfffe0000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)
                            ? 0x11U : ((0xfffc0000U 
                                        == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)
                                        ? 0x12U : (
                                                   (0xfff80000U 
                                                    == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)
                                                    ? 0x13U
                                                    : 
                                                   ((0xfff00000U 
                                                     == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)
                                                     ? 0x14U
                                                     : 
                                                    ((0xffe00000U 
                                                      == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)
                                                      ? 0x15U
                                                      : 
                                                     ((0xffc00000U 
                                                       == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)
                                                       ? 0x16U
                                                       : 0x17U)))))));
    } else if (((((((((0xff000000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout) 
                      | (0xfe000000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                     | (0xfc000000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                    | (0xf8000000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                   | (0xf0000000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                  | (0xe0000000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                 | (0xc0000000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)) 
                | (0x80000000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout))) {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt 
            = ((0xff000000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)
                ? 0x18U : ((0xfe000000U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)
                            ? 0x19U : ((0xfc000000U 
                                        == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)
                                        ? 0x1aU : (
                                                   (0xf8000000U 
                                                    == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)
                                                    ? 0x1bU
                                                    : 
                                                   ((0xf0000000U 
                                                     == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)
                                                     ? 0x1cU
                                                     : 
                                                    ((0xe0000000U 
                                                      == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)
                                                      ? 0x1dU
                                                      : 
                                                     ((0xc0000000U 
                                                       == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout)
                                                       ? 0x1eU
                                                       : 0x1fU)))))));
    } else if (VL_LIKELY((0U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout))) {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt = 0x20U;
    } else {
        VL_STOP_MT("../lab1_imul/../lab1_imul/IntMulAlt.v", 231, "");
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__shift_mnt)))) {
        vlSymsp->__Vcoverage[2805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__shift_mnt 
            = ((0x3eU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__shift_mnt)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__shift_mnt)))) {
        vlSymsp->__Vcoverage[2806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__shift_mnt 
            = ((0x3dU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__shift_mnt)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__shift_mnt)))) {
        vlSymsp->__Vcoverage[2807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__shift_mnt 
            = ((0x3bU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__shift_mnt)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__shift_mnt)))) {
        vlSymsp->__Vcoverage[2808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__shift_mnt 
            = ((0x37U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__shift_mnt)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__shift_mnt)))) {
        vlSymsp->__Vcoverage[2809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__shift_mnt 
            = ((0x2fU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__shift_mnt)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__shift_mnt)))) {
        vlSymsp->__Vcoverage[2810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__shift_mnt 
            = ((0x1fU & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__shift_mnt)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt)));
    }
}
