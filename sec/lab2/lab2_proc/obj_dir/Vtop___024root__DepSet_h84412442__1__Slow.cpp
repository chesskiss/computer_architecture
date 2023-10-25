// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address))) {
        vlSymsp->__Vcoverage[4595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_address) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M))) {
        vlSymsp->__Vcoverage[4627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__addr_M) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__addr_M));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
          ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_num) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
          ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num))) {
        vlSymsp->__Vcoverage[5621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
          ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_num) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay))) {
        vlSymsp->__Vcoverage[5689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
          ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           & ((1U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                            >> 0xaU))) | (2U == (7U 
                                                 & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                                    >> 0xaU)))));
    vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           & ((1U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                            >> 0xaU))) | (2U == (7U 
                                                 & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                                    >> 0xaU)))));
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_msg_len_modified_M 
        = ((0U == (3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]))
            ? 4U : (3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_msg_len_modified_M 
        = ((0U == (3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]))
            ? 4U : (3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore)))) {
        vlSymsp->__Vcoverage[4981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[4982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[4983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[4984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[4985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[4986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[4987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[4988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[4989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[4990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[4991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[4992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[4993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[4994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[4995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[4996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[4997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[4998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[4999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[5000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[5001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[5002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[5003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[5004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[5005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[5006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[5007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[5008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[5009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[5010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[5011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[5012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[5013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[5014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[5015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[5016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[5017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[5018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[5019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[5020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[5021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[5022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[5023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[5024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[5025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[5026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[5027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x3fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore)))) {
        vlSymsp->__Vcoverage[5041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[5042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[5043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[5044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[5045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[5046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[5047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[5048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[5049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[5050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[5051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[5052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[5053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[5054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[5055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[5056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[5057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[5058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[5059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[5060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[5061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[5062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[5063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[5064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[5065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[5066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[5067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[5068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[5069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[5070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[5071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[5072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[5073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[5074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[5075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[5076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[5077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[5078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[5079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[5080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[5081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[5082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[5083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[5084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[5085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[5086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[5087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore 
            = ((0x3fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           & ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
              & ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                               >> 0xaU))) | ((3U == 
                                              (7U & 
                                               (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                                >> 0xaU))) 
                                             | (5U 
                                                == 
                                                (7U 
                                                 & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                                    >> 0xaU)))))));
    vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           & ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
              & ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                               >> 0xaU))) | ((3U == 
                                              (7U & 
                                               (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                                >> 0xaU))) 
                                             | (5U 
                                                == 
                                                (7U 
                                                 & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                                    >> 0xaU)))))));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input)))) {
        vlSymsp->__Vcoverage[2437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[2438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[2439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[2440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[2441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[2442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[2443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[2444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[2445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[2446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[2447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[2448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[2449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[2450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[2451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[2452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[2453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[2454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[2455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[2456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[2457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[2458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[2459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[2460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[2461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[2462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[2463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[2464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[2465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[2466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[2467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[2468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[2469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[2470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[2471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[2472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[2473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[2474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[2475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[2476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[2477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[2478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[2479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[2480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[2481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[2482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[2483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[2484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[2485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[2486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[2487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[2488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[2489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[2490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[2491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[2492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[2493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[2494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[2495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[2496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[2497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[2498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[2499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[2500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_input) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]))) {
        vlSymsp->__Vcoverage[3421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U] 
          ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[0U]) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[0U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
                        ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
                        ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
                        ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]))) {
        vlSymsp->__Vcoverage[3453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U] 
          ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[1U]) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[2U] 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[2U]))) {
        vlSymsp->__Vcoverage[3455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[2U] 
            = ((0xfeU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[2U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[2U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[2U] 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[2U]))) {
        vlSymsp->__Vcoverage[3456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[2U] 
            = ((0xfdU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[2U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[2U] 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[2U]))) {
        vlSymsp->__Vcoverage[3457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[2U] 
            = ((0xfbU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[2U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[2U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[2U] 
               ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[2U]))) {
        vlSymsp->__Vcoverage[3458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[2U] 
            = ((0xf7U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[2U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[2U]))) {
        vlSymsp->__Vcoverage[3459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[2U] 
            = ((0xefU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[2U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[2U]))) {
        vlSymsp->__Vcoverage[3460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[2U] 
            = ((0xdfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[2U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[2U]))) {
        vlSymsp->__Vcoverage[3461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[2U] 
            = ((0xbfU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[2U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[2U]))) {
        vlSymsp->__Vcoverage[3462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[2U] 
            = ((0x7fU & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT____Vtogcov__csr_str[2U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str[2U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
               ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
               ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
               ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
               ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]))) {
        vlSymsp->__Vcoverage[1574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
          ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[0U]) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
               ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
               ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
               ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
               ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                        ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                        ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                        ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]))) {
        vlSymsp->__Vcoverage[1606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
          ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[1U]) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
               ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]))) {
        vlSymsp->__Vcoverage[1608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
               ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]))) {
        vlSymsp->__Vcoverage[1609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
               ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]))) {
        vlSymsp->__Vcoverage[1610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
               ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]))) {
        vlSymsp->__Vcoverage[1611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]))) {
        vlSymsp->__Vcoverage[1612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U] 
            = ((0x1fefU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]))) {
        vlSymsp->__Vcoverage[1613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]))) {
        vlSymsp->__Vcoverage[1614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]))) {
        vlSymsp->__Vcoverage[1615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]))) {
        vlSymsp->__Vcoverage[1616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U] 
            = ((0x1effU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]))) {
        vlSymsp->__Vcoverage[1617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U] 
            = ((0x1dffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]))) {
        vlSymsp->__Vcoverage[1618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U] 
            = ((0x1bffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]))) {
        vlSymsp->__Vcoverage[1619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U] 
            = ((0x17ffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                    ^ vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]))) {
        vlSymsp->__Vcoverage[1620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U] 
            = ((0xfffU & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__qstore[2U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[0U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[1U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]))) {
        vlSymsp->__Vcoverage[4441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]))) {
        vlSymsp->__Vcoverage[4442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]))) {
        vlSymsp->__Vcoverage[4443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]))) {
        vlSymsp->__Vcoverage[4444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]))) {
        vlSymsp->__Vcoverage[4445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U] 
            = ((0x1fefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]))) {
        vlSymsp->__Vcoverage[4446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]))) {
        vlSymsp->__Vcoverage[4447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]))) {
        vlSymsp->__Vcoverage[4448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]))) {
        vlSymsp->__Vcoverage[4449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U] 
            = ((0x1effU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]))) {
        vlSymsp->__Vcoverage[4450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U] 
            = ((0x1dffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]))) {
        vlSymsp->__Vcoverage[4451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U] 
            = ((0x1bffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]))) {
        vlSymsp->__Vcoverage[4452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U] 
            = ((0x17ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]))) {
        vlSymsp->__Vcoverage[4453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U] 
            = ((0xfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_M[2U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]))) {
        vlSymsp->__Vcoverage[4486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[0U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]))) {
        vlSymsp->__Vcoverage[4518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[1U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]))) {
        vlSymsp->__Vcoverage[4520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]))) {
        vlSymsp->__Vcoverage[4521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]))) {
        vlSymsp->__Vcoverage[4522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]))) {
        vlSymsp->__Vcoverage[4523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]))) {
        vlSymsp->__Vcoverage[4524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U] 
            = ((0x1fefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]))) {
        vlSymsp->__Vcoverage[4525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]))) {
        vlSymsp->__Vcoverage[4526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]))) {
        vlSymsp->__Vcoverage[4527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]))) {
        vlSymsp->__Vcoverage[4528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U] 
            = ((0x1effU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]))) {
        vlSymsp->__Vcoverage[4529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U] 
            = ((0x1dffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]))) {
        vlSymsp->__Vcoverage[4530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U] 
            = ((0x1bffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]))) {
        vlSymsp->__Vcoverage[4531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U] 
            = ((0x17ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]))) {
        vlSymsp->__Vcoverage[4532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U] 
            = ((0xfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_M[2U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U]));
    }
    vlSelf->top__DOT__snk_done = ((~ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg)) 
                                  & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index) 
                                     == (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [0U][0U]))) {
        vlSymsp->__Vcoverage[1360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (1U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [0U][0U]))) {
        vlSymsp->__Vcoverage[1361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (2U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [0U][0U]))) {
        vlSymsp->__Vcoverage[1362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (4U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [0U][0U]))) {
        vlSymsp->__Vcoverage[1363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (8U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [0U][0U]))) {
        vlSymsp->__Vcoverage[1364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x10U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [0U][0U]))) {
        vlSymsp->__Vcoverage[1365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x20U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [0U][0U]))) {
        vlSymsp->__Vcoverage[1366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x40U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [0U][0U]))) {
        vlSymsp->__Vcoverage[1367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x80U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [0U][0U]))) {
        vlSymsp->__Vcoverage[1368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x100U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [0U][0U]))) {
        vlSymsp->__Vcoverage[1369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x200U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [0U][0U]))) {
        vlSymsp->__Vcoverage[1370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x400U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [0U][0U]))) {
        vlSymsp->__Vcoverage[1371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x800U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [0U][0U]))) {
        vlSymsp->__Vcoverage[1372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x1000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [0U][0U]))) {
        vlSymsp->__Vcoverage[1373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x2000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [0U][0U]))) {
        vlSymsp->__Vcoverage[1374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x4000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [0U][0U]))) {
        vlSymsp->__Vcoverage[1375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x8000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [0U][0U]))) {
        vlSymsp->__Vcoverage[1376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x10000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [0U][0U]))) {
        vlSymsp->__Vcoverage[1377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x20000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [0U][0U]))) {
        vlSymsp->__Vcoverage[1378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x40000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [0U][0U]))) {
        vlSymsp->__Vcoverage[1379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x80000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [0U][0U]))) {
        vlSymsp->__Vcoverage[1380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x100000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [0U][0U]))) {
        vlSymsp->__Vcoverage[1381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x200000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [0U][0U]))) {
        vlSymsp->__Vcoverage[1382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x400000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [0U][0U]))) {
        vlSymsp->__Vcoverage[1383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x800000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [0U][0U]))) {
        vlSymsp->__Vcoverage[1384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [0U][0U]))) {
        vlSymsp->__Vcoverage[1385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [0U][0U]))) {
        vlSymsp->__Vcoverage[1386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [0U][0U]))) {
        vlSymsp->__Vcoverage[1387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                        [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                        [0U][0U]))) {
        vlSymsp->__Vcoverage[1388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                        [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                        [0U][0U]))) {
        vlSymsp->__Vcoverage[1389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                        [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                        [0U][0U]))) {
        vlSymsp->__Vcoverage[1390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
          [0U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
          [0U][0U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][0U]) | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][0U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [0U][1U]))) {
        vlSymsp->__Vcoverage[1392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (1U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [0U][1U]))) {
        vlSymsp->__Vcoverage[1393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (2U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [0U][1U]))) {
        vlSymsp->__Vcoverage[1394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (4U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [0U][1U]))) {
        vlSymsp->__Vcoverage[1395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (8U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [0U][1U]))) {
        vlSymsp->__Vcoverage[1396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x10U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [0U][1U]))) {
        vlSymsp->__Vcoverage[1397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x20U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [0U][1U]))) {
        vlSymsp->__Vcoverage[1398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x40U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [0U][1U]))) {
        vlSymsp->__Vcoverage[1399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x80U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [0U][1U]))) {
        vlSymsp->__Vcoverage[1400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x100U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [0U][1U]))) {
        vlSymsp->__Vcoverage[1401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x200U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [0U][1U]))) {
        vlSymsp->__Vcoverage[1402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x400U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [0U][1U]))) {
        vlSymsp->__Vcoverage[1403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x800U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [0U][1U]))) {
        vlSymsp->__Vcoverage[1404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x1000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [0U][1U]))) {
        vlSymsp->__Vcoverage[1405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x2000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [0U][1U]))) {
        vlSymsp->__Vcoverage[1406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x4000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [0U][1U]))) {
        vlSymsp->__Vcoverage[1407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x8000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [0U][1U]))) {
        vlSymsp->__Vcoverage[1408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x10000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [0U][1U]))) {
        vlSymsp->__Vcoverage[1409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x20000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [0U][1U]))) {
        vlSymsp->__Vcoverage[1410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x40000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [0U][1U]))) {
        vlSymsp->__Vcoverage[1411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x80000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [0U][1U]))) {
        vlSymsp->__Vcoverage[1412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x100000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [0U][1U]))) {
        vlSymsp->__Vcoverage[1413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x200000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [0U][1U]))) {
        vlSymsp->__Vcoverage[1414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x400000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [0U][1U]))) {
        vlSymsp->__Vcoverage[1415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x800000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [0U][1U]))) {
        vlSymsp->__Vcoverage[1416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [0U][1U]))) {
        vlSymsp->__Vcoverage[1417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [0U][1U]))) {
        vlSymsp->__Vcoverage[1418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [0U][1U]))) {
        vlSymsp->__Vcoverage[1419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                        [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                        [0U][1U]))) {
        vlSymsp->__Vcoverage[1420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                        [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                        [0U][1U]))) {
        vlSymsp->__Vcoverage[1421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                        [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                        [0U][1U]))) {
        vlSymsp->__Vcoverage[1422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
          [0U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
          [0U][1U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][1U]) | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [0U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [0U][2U]))) {
        vlSymsp->__Vcoverage[1424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][2U] 
            = ((0x1ffeU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][2U]) | (1U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][2U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [0U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [0U][2U]))) {
        vlSymsp->__Vcoverage[1425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][2U] 
            = ((0x1ffdU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][2U]) | (2U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [0U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [0U][2U]))) {
        vlSymsp->__Vcoverage[1426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][2U] 
            = ((0x1ffbU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][2U]) | (4U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][2U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [0U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [0U][2U]))) {
        vlSymsp->__Vcoverage[1427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][2U] 
            = ((0x1ff7U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][2U]) | (8U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [0U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [0U][2U]))) {
        vlSymsp->__Vcoverage[1428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][2U] 
            = ((0x1fefU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][2U]) | (0x10U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [0U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [0U][2U]))) {
        vlSymsp->__Vcoverage[1429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][2U] 
            = ((0x1fdfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][2U]) | (0x20U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [0U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [0U][2U]))) {
        vlSymsp->__Vcoverage[1430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][2U] 
            = ((0x1fbfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][2U]) | (0x40U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [0U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [0U][2U]))) {
        vlSymsp->__Vcoverage[1431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][2U] 
            = ((0x1f7fU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][2U]) | (0x80U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [0U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [0U][2U]))) {
        vlSymsp->__Vcoverage[1432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][2U] 
            = ((0x1effU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][2U]) | (0x100U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [0U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [0U][2U]))) {
        vlSymsp->__Vcoverage[1433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][2U] 
            = ((0x1dffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][2U]) | (0x200U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [0U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [0U][2U]))) {
        vlSymsp->__Vcoverage[1434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][2U] 
            = ((0x1bffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][2U]) | (0x400U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [0U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [0U][2U]))) {
        vlSymsp->__Vcoverage[1435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][2U] 
            = ((0x17ffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][2U]) | (0x800U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [0U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [0U][2U]))) {
        vlSymsp->__Vcoverage[1436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[0U][2U] 
            = ((0xfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [0U][2U]) | (0x1000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [0U][2U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [1U][0U]))) {
        vlSymsp->__Vcoverage[1437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (1U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [1U][0U]))) {
        vlSymsp->__Vcoverage[1438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (2U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [1U][0U]))) {
        vlSymsp->__Vcoverage[1439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (4U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [1U][0U]))) {
        vlSymsp->__Vcoverage[1440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (8U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [1U][0U]))) {
        vlSymsp->__Vcoverage[1441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x10U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [1U][0U]))) {
        vlSymsp->__Vcoverage[1442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x20U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [1U][0U]))) {
        vlSymsp->__Vcoverage[1443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x40U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [1U][0U]))) {
        vlSymsp->__Vcoverage[1444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x80U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [1U][0U]))) {
        vlSymsp->__Vcoverage[1445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x100U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [1U][0U]))) {
        vlSymsp->__Vcoverage[1446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x200U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [1U][0U]))) {
        vlSymsp->__Vcoverage[1447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x400U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [1U][0U]))) {
        vlSymsp->__Vcoverage[1448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x800U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [1U][0U]))) {
        vlSymsp->__Vcoverage[1449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x1000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [1U][0U]))) {
        vlSymsp->__Vcoverage[1450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x2000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [1U][0U]))) {
        vlSymsp->__Vcoverage[1451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x4000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [1U][0U]))) {
        vlSymsp->__Vcoverage[1452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x8000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [1U][0U]))) {
        vlSymsp->__Vcoverage[1453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x10000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [1U][0U]))) {
        vlSymsp->__Vcoverage[1454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x20000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [1U][0U]))) {
        vlSymsp->__Vcoverage[1455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x40000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [1U][0U]))) {
        vlSymsp->__Vcoverage[1456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x80000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [1U][0U]))) {
        vlSymsp->__Vcoverage[1457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x100000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [1U][0U]))) {
        vlSymsp->__Vcoverage[1458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x200000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [1U][0U]))) {
        vlSymsp->__Vcoverage[1459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x400000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [1U][0U]))) {
        vlSymsp->__Vcoverage[1460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x800000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [1U][0U]))) {
        vlSymsp->__Vcoverage[1461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [1U][0U]))) {
        vlSymsp->__Vcoverage[1462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [1U][0U]))) {
        vlSymsp->__Vcoverage[1463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [1U][0U]))) {
        vlSymsp->__Vcoverage[1464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                        [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                        [1U][0U]))) {
        vlSymsp->__Vcoverage[1465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                        [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                        [1U][0U]))) {
        vlSymsp->__Vcoverage[1466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                        [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                        [1U][0U]))) {
        vlSymsp->__Vcoverage[1467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
          [1U][0U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
          [1U][0U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][0U]) | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][0U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [1U][1U]))) {
        vlSymsp->__Vcoverage[1469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (1U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [1U][1U]))) {
        vlSymsp->__Vcoverage[1470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (2U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [1U][1U]))) {
        vlSymsp->__Vcoverage[1471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (4U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [1U][1U]))) {
        vlSymsp->__Vcoverage[1472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (8U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [1U][1U]))) {
        vlSymsp->__Vcoverage[1473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x10U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [1U][1U]))) {
        vlSymsp->__Vcoverage[1474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x20U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [1U][1U]))) {
        vlSymsp->__Vcoverage[1475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x40U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [1U][1U]))) {
        vlSymsp->__Vcoverage[1476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x80U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [1U][1U]))) {
        vlSymsp->__Vcoverage[1477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x100U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [1U][1U]))) {
        vlSymsp->__Vcoverage[1478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x200U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [1U][1U]))) {
        vlSymsp->__Vcoverage[1479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x400U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [1U][1U]))) {
        vlSymsp->__Vcoverage[1480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x800U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [1U][1U]))) {
        vlSymsp->__Vcoverage[1481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x1000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [1U][1U]))) {
        vlSymsp->__Vcoverage[1482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x2000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [1U][1U]))) {
        vlSymsp->__Vcoverage[1483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x4000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [1U][1U]))) {
        vlSymsp->__Vcoverage[1484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x8000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [1U][1U]))) {
        vlSymsp->__Vcoverage[1485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x10000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [1U][1U]))) {
        vlSymsp->__Vcoverage[1486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x20000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [1U][1U]))) {
        vlSymsp->__Vcoverage[1487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x40000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                     [1U][1U]))) {
        vlSymsp->__Vcoverage[1488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x80000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [1U][1U]))) {
        vlSymsp->__Vcoverage[1489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x100000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [1U][1U]))) {
        vlSymsp->__Vcoverage[1490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x200000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [1U][1U]))) {
        vlSymsp->__Vcoverage[1491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x400000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                      [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                      [1U][1U]))) {
        vlSymsp->__Vcoverage[1492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x800000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [1U][1U]))) {
        vlSymsp->__Vcoverage[1493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [1U][1U]))) {
        vlSymsp->__Vcoverage[1494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [1U][1U]))) {
        vlSymsp->__Vcoverage[1495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                       [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                       [1U][1U]))) {
        vlSymsp->__Vcoverage[1496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                        [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                        [1U][1U]))) {
        vlSymsp->__Vcoverage[1497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                        [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                        [1U][1U]))) {
        vlSymsp->__Vcoverage[1498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                        [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                        [1U][1U]))) {
        vlSymsp->__Vcoverage[1499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
          [1U][1U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
          [1U][1U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][1U]) | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [1U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [1U][2U]))) {
        vlSymsp->__Vcoverage[1501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][2U] 
            = ((0x1ffeU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][2U]) | (1U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][2U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [1U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [1U][2U]))) {
        vlSymsp->__Vcoverage[1502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][2U] 
            = ((0x1ffdU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][2U]) | (2U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [1U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [1U][2U]))) {
        vlSymsp->__Vcoverage[1503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][2U] 
            = ((0x1ffbU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][2U]) | (4U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][2U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
               [1U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
               [1U][2U]))) {
        vlSymsp->__Vcoverage[1504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][2U] 
            = ((0x1ff7U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][2U]) | (8U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [1U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [1U][2U]))) {
        vlSymsp->__Vcoverage[1505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][2U] 
            = ((0x1fefU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][2U]) | (0x10U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [1U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [1U][2U]))) {
        vlSymsp->__Vcoverage[1506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][2U] 
            = ((0x1fdfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][2U]) | (0x20U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [1U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [1U][2U]))) {
        vlSymsp->__Vcoverage[1507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][2U] 
            = ((0x1fbfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][2U]) | (0x40U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                  [1U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                  [1U][2U]))) {
        vlSymsp->__Vcoverage[1508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][2U] 
            = ((0x1f7fU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][2U]) | (0x80U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [1U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [1U][2U]))) {
        vlSymsp->__Vcoverage[1509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][2U] 
            = ((0x1effU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][2U]) | (0x100U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [1U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [1U][2U]))) {
        vlSymsp->__Vcoverage[1510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][2U] 
            = ((0x1dffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][2U]) | (0x200U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [1U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [1U][2U]))) {
        vlSymsp->__Vcoverage[1511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][2U] 
            = ((0x1bffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][2U]) | (0x400U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                   [1U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                   [1U][2U]))) {
        vlSymsp->__Vcoverage[1512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][2U] 
            = ((0x17ffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][2U]) | (0x800U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                    [1U][2U] ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                    [1U][2U]))) {
        vlSymsp->__Vcoverage[1513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile[1U][2U] 
            = ((0xfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT____Vtogcov__rfile
                [1U][2U]) | (0x1000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [1U][2U]));
    }
    vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
        = ((0x31U >= (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index))
            ? vlSelf->top__DOT__sink__DOT__sink__DOT__m
           [vlSelf->top__DOT__sink__DOT__sink__DOT__index]
            : 0U);
    vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
        = ((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state)
            ? ((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state)
                ? (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay 
                   - (IData)(1U)) : 0U) : ((0U < vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num)
                                            ? (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num 
                                               - (IData)(1U))
                                            : vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
    vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
        = ((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state)
            ? ((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state)
                ? (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay 
                   - (IData)(1U)) : 0U) : ((0U < vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num)
                                            ? (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num 
                                               - (IData)(1U))
                                            : vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
    vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
        = ((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state)
            ? ((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state)
                ? (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay 
                   - (IData)(1U)) : 0U) : ((0U < vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num)
                                            ? (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num 
                                               - (IData)(1U))
                                            : vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
    vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
        = ((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state)
            ? ((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state)
                ? (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay 
                   - (IData)(1U)) : 0U) : ((0U < vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num)
                                            ? (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num 
                                               - (IData)(1U))
                                            : vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
    vlSelf->top__DOT__DUT__DOT__op1_sel_D = (((((((
                                                   ((0x13U 
                                                     == vlSelf->top__DOT__DUT__DOT__inst_D) 
                                                    | (0x33U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                   | (0x2003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                  | (0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                 | (0x2073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                | (0x1073U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                               | (0x40000033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                              | (0x7033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                             | (((((((((0x6033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                                       | (0x4033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                      | (0x2033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                     | (0x3033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                    | (0x40005033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                   | (0x5033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                  | (0x1033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                 | (0x2000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                | (0x33U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__DUT__DOT__inst_D))));
    if (((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
               | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
            | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
           | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
          | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
         | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
        if ((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D)) {
            vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
            vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
        } else if ((0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
            vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
            vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
        } else if ((0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
            vlSelf->top__DOT__DUT__DOT__op2_sel_D = 1U;
            vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
        } else if ((0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
            vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
            vlSelf->top__DOT__DUT__DOT__imm_type_D = 2U;
        } else {
            vlSelf->top__DOT__DUT__DOT__op2_sel_D = 
                ((0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))
                  ? 2U : 0U);
            vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
        }
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D 
            = ((0x13U != vlSelf->top__DOT__DUT__DOT__inst_D) 
               & ((0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                  | ((0x2003U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                     & ((0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                        | ((0x2073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                           & (0x1073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))))));
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D 
            = ((0x13U != vlSelf->top__DOT__DUT__DOT__inst_D) 
               & ((0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                  | ((0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                     | ((0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                        | (0x2073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))))));
    } else {
        if (((((((((0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                   | (0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x40005033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
            vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
            vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D = 1U;
        } else {
            vlSelf->top__DOT__DUT__DOT__op2_sel_D = 
                ((0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))
                  ? 1U : 0U);
            vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D = 0U;
        }
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D 
            = (((((((((0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                      | (0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x40005033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)));
    }
    vlSelf->top__DOT__proc2mngr_msg = ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                                        ? vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore
                                        : ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                                            ? 0U : vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    if ((0x1fU >= (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt_reg_out))) {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
            = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
               << (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt_reg_out));
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
            = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out 
               >> (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt_reg_out));
    } else {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out = 0U;
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out = 0U;
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
        = vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile
        [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   >> 0xfU))];
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
        = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out 
           + vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out);
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
        = vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile
        [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   >> 0x14U))];
    vlSelf->top__DOT__src__DOT__src_msg = ((0x31U >= (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index))
                                            ? vlSelf->top__DOT__src__DOT__src__DOT__m
                                           [vlSelf->top__DOT__src__DOT__src__DOT__index]
                                            : 0U);
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
        = ((0xfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp) 
           | ((QData)((IData)((0x7ffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                         >> 2U)))) 
              << 0x24U));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_X 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
              & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X))));
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
        = ((0xfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp) 
           | ((QData)((IData)((0x7ffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                         >> 2U)))) 
              << 0x24U));
    vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
        = vlSelf->top__DOT__mem__DOT__mem__DOT__m[(0xfffU 
                                                   & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                      >> 4U))];
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_W 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_W) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D = 
        (((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
            | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
           | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
          | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
         & ((0x13U != vlSelf->top__DOT__DUT__DOT__inst_D) 
            & ((0x33U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
               & ((0x2003U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                  & ((0x1063U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                     & (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))))));
    vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
        = vlSelf->top__DOT__mem__DOT__mem__DOT__m[(0xfffU 
                                                   & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                      >> 4U))];
    vlSelf->top__DOT__src__DOT__src_val = (1U & ((~ (IData)(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg)) 
                                                 & (~ (IData)(vlSelf->top__DOT__src_done))));
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full));
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full));
    vlSelf->top__DOT__DUT__DOT__rf_wen_W = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_pending_W) 
                                            & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W));
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
        = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
        = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U] 
        = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_X 
        = (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
            & (6U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))
            ? 1U : 0U);
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->top__DOT__DUT__DOT__br_cond_eq_X = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                                                == vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X);
    vlSelf->top__DOT__DUT__DOT__br_cond_lt_X = VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X, vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X);
    vlSelf->top__DOT__DUT__DOT__br_cond_ltu_X = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                                                 < vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X);
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_val_D))) {
        vlSymsp->__Vcoverage[1708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_val_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_val_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__wb_result_sel_D))) {
        vlSymsp->__Vcoverage[1720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__wb_result_sel_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_D))) {
        vlSymsp->__Vcoverage[1721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_D;
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__src__DOT__done_next) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__done_next))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__done_next 
            = vlSelf->top__DOT__src__DOT__src__DOT__done_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__stats_en_wen_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_W))) {
        vlSymsp->__Vcoverage[1225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__stats_en_wen_W 
            = vlSelf->top__DOT__DUT__DOT__stats_en_wen_W;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_D)))) {
        vlSymsp->__Vcoverage[1718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_D)))) {
        vlSymsp->__Vcoverage[1719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D)))) {
        vlSymsp->__Vcoverage[1206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D)))) {
        vlSymsp->__Vcoverage[1207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[1709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[1710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[1711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D 
            = ((3U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[1714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[1715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[1716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[1717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D)));
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D) 
                  & (0x7c1U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[1752].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D) 
                  & (0x7c0U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[1748].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__csrw_D))) {
        vlSymsp->__Vcoverage[1723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__csrw_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D) 
         & (0x7c1U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                       >> 0x14U)))) {
        vlSymsp->__Vcoverage[1751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_D = 1U;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D) 
         & (0x7c0U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                       >> 0x14U)))) {
        vlSymsp->__Vcoverage[1747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_D = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem_clear)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M)))) {
                    vlSymsp->__Vcoverage[4809].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M) {
                    vlSymsp->__Vcoverage[4808].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M)))) {
                    vlSymsp->__Vcoverage[4812].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M) {
                    vlSymsp->__Vcoverage[4811].fetch_add(1, std::memory_order_relaxed);
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
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__write_en0_M))) {
        vlSymsp->__Vcoverage[4798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__write_en0_M 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__write_en1_M))) {
        vlSymsp->__Vcoverage[4799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__write_en1_M 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_msg_len_modified_M) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_len_modified_M)))) {
        vlSymsp->__Vcoverage[4664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_len_modified_M 
            = ((6U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_len_modified_M)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_msg_len_modified_M)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_msg_len_modified_M) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_len_modified_M)))) {
        vlSymsp->__Vcoverage[4665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_len_modified_M 
            = ((5U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_len_modified_M)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_msg_len_modified_M)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_msg_len_modified_M) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_len_modified_M)))) {
        vlSymsp->__Vcoverage[4666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_len_modified_M 
            = ((3U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq0_msg_len_modified_M)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_msg_len_modified_M)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_msg_len_modified_M) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_len_modified_M)))) {
        vlSymsp->__Vcoverage[4667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_len_modified_M 
            = ((6U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_len_modified_M)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_msg_len_modified_M)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_msg_len_modified_M) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_len_modified_M)))) {
        vlSymsp->__Vcoverage[4668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_len_modified_M 
            = ((5U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_len_modified_M)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_msg_len_modified_M)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_msg_len_modified_M) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_len_modified_M)))) {
        vlSymsp->__Vcoverage[4669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_len_modified_M 
            = ((3U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memreq1_msg_len_modified_M)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_msg_len_modified_M)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__amo_en0_M))) {
        vlSymsp->__Vcoverage[4800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__amo_en0_M 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__amo_en1_M))) {
        vlSymsp->__Vcoverage[4801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__amo_en1_M 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M;
    }
    if (((IData)(vlSelf->top__DOT__snk_done) ^ (IData)(vlSelf->top__DOT____Vtogcov__snk_done))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__snk_done = vlSelf->top__DOT__snk_done;
    }
    vlSelf->top__DOT__sink__DOT__sink_rdy = (1U & (
                                                   (~ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg)) 
                                                   & (~ (IData)(vlSelf->top__DOT__snk_done))));
    if ((1U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (1U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (2U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (4U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (8U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
        if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                = (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                   - (IData)(1U));
            vlSelf->top__DOT__mngr2proc_val = ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                                               & (0U 
                                                  == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
        } else {
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next = 0U;
            vlSelf->top__DOT__mngr2proc_val = 0U;
        }
    } else {
        vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
            = ((0U < vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num)
                ? (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                   - (IData)(1U)) : vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num);
        vlSelf->top__DOT__mngr2proc_val = ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                                           & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if (((vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
          ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((1U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffeU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (1U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((2U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffdU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (2U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((4U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffbU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (4U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((8U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffff7U & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (8U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x10U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffefU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x10U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x20U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffdfU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x20U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x40U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffbfU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x40U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x80U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffff7fU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x80U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x100U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffeffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x100U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x200U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffdffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x200U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x400U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffbffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x400U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x800U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffff7ffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x800U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x1000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffefffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x1000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x2000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffdfffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x2000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x4000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffbfffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x4000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x8000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffff7fffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x8000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x10000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffeffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x10000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x20000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffdffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x20000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x40000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffbffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x40000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x80000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfff7ffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x80000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x100000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffefffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x100000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x200000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffdfffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x200000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x400000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffbfffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x400000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x800000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xff7fffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x800000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x1000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfeffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x1000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x2000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfdffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x2000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x4000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfbffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x4000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x8000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xf7ffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x8000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x10000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xefffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x10000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x20000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xdfffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x20000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x40000000U & (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xbfffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x40000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    if (((vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
          ^ vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0x7fffffffU & vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x80000000U & vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next));
    }
    vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
        = ((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)
            ? ((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)
                ? (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                   - (IData)(1U)) : 0U) : ((0U < vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num)
                                            ? (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                                               - (IData)(1U))
                                            : vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    if ((1U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (1U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (2U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (4U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (8U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if (((vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
          ^ vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next 
          ^ vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[4298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next 
          ^ vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next));
    }
    vlSelf->top__DOT__proc2mngr_rdy = ((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)
                                        ? ((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) 
                                           & ((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
                                              & (0U 
                                                 == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay)))
                                        : ((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
                                           & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num)));
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next 
          ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_next) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (1U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (2U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (4U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
               ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (8U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                  ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                   ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                    ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                     ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                      ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                       ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
                        ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next))) {
        vlSymsp->__Vcoverage[5657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if (((vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next 
          ^ vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_next) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next));
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__op1_sel_D)))) {
        vlSymsp->__Vcoverage[2762].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__op1_sel_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_sel_D))) {
        vlSymsp->__Vcoverage[1197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_sel_D 
            = vlSelf->top__DOT__DUT__DOT__op1_sel_D;
    }
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))) {
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))) {
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))) {
                vlSymsp->__Vcoverage[2768].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U != (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))) {
                vlSymsp->__Vcoverage[2769].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))) {
            vlSymsp->__Vcoverage[2767].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))) {
        vlSymsp->__Vcoverage[2766].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_sel_D)))) {
        vlSymsp->__Vcoverage[1198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_sel_D)))) {
        vlSymsp->__Vcoverage[1199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D)));
    }
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
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out))) {
        vlSymsp->__Vcoverage[2905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__a_shift_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
        = ((0U == (0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                            >> 0xfU))) ? 0U : vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0);
    if (vlSelf->top__DOT__DUT__DOT__op1_sel_D) {
        if (vlSelf->top__DOT__DUT__DOT__op1_sel_D) {
            vlSymsp->__Vcoverage[2763].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                = vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D;
        } else {
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__op1_sel_D)))) {
            vlSymsp->__Vcoverage[2764].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D;
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out))) {
        vlSymsp->__Vcoverage[3064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__adder_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
        = ((0U == (0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                            >> 0x14U))) ? 0U : vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1);
    if ((1U & (vlSelf->top__DOT__src__DOT__src_msg 
               ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffffeU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (1U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((2U & (vlSelf->top__DOT__src__DOT__src_msg 
               ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffffdU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (2U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((4U & (vlSelf->top__DOT__src__DOT__src_msg 
               ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffffbU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (4U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((8U & (vlSelf->top__DOT__src__DOT__src_msg 
               ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffff7U & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (8U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x10U & (vlSelf->top__DOT__src__DOT__src_msg 
                  ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffffefU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x10U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x20U & (vlSelf->top__DOT__src__DOT__src_msg 
                  ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffffdfU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x20U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x40U & (vlSelf->top__DOT__src__DOT__src_msg 
                  ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffffbfU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x40U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x80U & (vlSelf->top__DOT__src__DOT__src_msg 
                  ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffff7fU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x80U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x100U & (vlSelf->top__DOT__src__DOT__src_msg 
                   ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffeffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x100U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x200U & (vlSelf->top__DOT__src__DOT__src_msg 
                   ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffdffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x200U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x400U & (vlSelf->top__DOT__src__DOT__src_msg 
                   ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffffbffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x400U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x800U & (vlSelf->top__DOT__src__DOT__src_msg 
                   ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffff7ffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x800U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x1000U & (vlSelf->top__DOT__src__DOT__src_msg 
                    ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffefffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x1000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x2000U & (vlSelf->top__DOT__src__DOT__src_msg 
                    ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffdfffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x2000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x4000U & (vlSelf->top__DOT__src__DOT__src_msg 
                    ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffffbfffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x4000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x8000U & (vlSelf->top__DOT__src__DOT__src_msg 
                    ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffff7fffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x8000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x10000U & (vlSelf->top__DOT__src__DOT__src_msg 
                     ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffeffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x10000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x20000U & (vlSelf->top__DOT__src__DOT__src_msg 
                     ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffdffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x20000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x40000U & (vlSelf->top__DOT__src__DOT__src_msg 
                     ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfffbffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x40000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x80000U & (vlSelf->top__DOT__src__DOT__src_msg 
                     ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfff7ffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x80000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x100000U & (vlSelf->top__DOT__src__DOT__src_msg 
                      ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffefffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x100000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x200000U & (vlSelf->top__DOT__src__DOT__src_msg 
                      ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffdfffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x200000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x400000U & (vlSelf->top__DOT__src__DOT__src_msg 
                      ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xffbfffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x400000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x800000U & (vlSelf->top__DOT__src__DOT__src_msg 
                      ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xff7fffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x800000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__src__DOT__src_msg 
                       ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfeffffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x1000000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__src__DOT__src_msg 
                       ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfdffffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x2000000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__src__DOT__src_msg 
                       ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xfbffffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x4000000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__src__DOT__src_msg 
                       ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xf7ffffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x8000000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__src__DOT__src_msg 
                        ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xefffffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x10000000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__src__DOT__src_msg 
                        ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xdfffffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x20000000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__src__DOT__src_msg 
                        ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg))) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0xbfffffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x40000000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if (((vlSelf->top__DOT__src__DOT__src_msg ^ vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_msg 
            = ((0x7fffffffU & vlSelf->top__DOT__src__DOT____Vtogcov__src_msg) 
               | (0x80000000U & vlSelf->top__DOT__src__DOT__src_msg));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_X))) {
        vlSymsp->__Vcoverage[1681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_X;
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M))) {
        vlSymsp->__Vcoverage[4700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block0_M) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M));
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
        = ((0x1fU >= (0x18U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                               << 1U))) ? (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M 
                                           >> (0x18U 
                                               & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                  << 1U)))
            : 0U);
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_W))) {
        vlSymsp->__Vcoverage[1683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_W;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_W));
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D) 
                  & (0xfc0U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[1750].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D) 
                  & (0xfc1U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[1754].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D) 
                  & (0xf14U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[1756].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__csrr_D))) {
        vlSymsp->__Vcoverage[1722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__csrr_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D;
    }
    vlSelf->top__DOT__DUT__DOT__csrr_sel_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D) 
         & (0xfc1U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                       >> 0x14U)))) {
        vlSymsp->__Vcoverage[1753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__csrr_sel_D = 1U;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D) 
         & (0xf14U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                       >> 0x14U)))) {
        vlSymsp->__Vcoverage[1755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__csrr_sel_D = 2U;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D) 
         & (0xfc0U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                       >> 0x14U)))) {
        vlSymsp->__Vcoverage[1749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D = 1U;
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M))) {
        vlSymsp->__Vcoverage[4764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_block1_M) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M));
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
        = ((0x1fU >= (0x18U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                               << 1U))) ? (vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M 
                                           >> (0x18U 
                                               & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                  << 1U)))
            : 0U);
    if (((IData)(vlSelf->top__DOT__src__DOT__src_val) 
         ^ (IData)(vlSelf->top__DOT__src__DOT____Vtogcov__src_val))) {
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_val 
            = vlSelf->top__DOT__src__DOT__src_val;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[4961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy = (1U 
                                                   & ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
                                                      | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)));
    vlSelf->top__DOT__mem__DOT__mem_memresp0_val = 
        ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[4970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy = (1U 
                                                   & ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
                                                      | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)));
    vlSelf->top__DOT__mem__DOT__mem_memresp1_val = 
        ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
         | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_W))) {
        vlSymsp->__Vcoverage[1224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__rf_wen_W 
            = vlSelf->top__DOT__DUT__DOT__rf_wen_W;
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
               ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
               ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
               ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
               ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]))) {
        vlSymsp->__Vcoverage[1313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U] 
          ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[0U]) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
               ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
               ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
               ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
               ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                        ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                        ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
                        ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]))) {
        vlSymsp->__Vcoverage[1345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U] 
          ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[1U]) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U] 
               ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]))) {
        vlSymsp->__Vcoverage[1347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U] 
               ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]))) {
        vlSymsp->__Vcoverage[1348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U] 
               ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]))) {
        vlSymsp->__Vcoverage[1349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U] 
               ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]))) {
        vlSymsp->__Vcoverage[1350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]))) {
        vlSymsp->__Vcoverage[1351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U] 
            = ((0x1fefU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]))) {
        vlSymsp->__Vcoverage[1352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]))) {
        vlSymsp->__Vcoverage[1353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]))) {
        vlSymsp->__Vcoverage[1354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]))) {
        vlSymsp->__Vcoverage[1355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U] 
            = ((0x1effU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]))) {
        vlSymsp->__Vcoverage[1356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U] 
            = ((0x1dffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]))) {
        vlSymsp->__Vcoverage[1357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U] 
            = ((0x1bffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]))) {
        vlSymsp->__Vcoverage[1358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U] 
            = ((0x17ffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U] 
                    ^ vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]))) {
        vlSymsp->__Vcoverage[1359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U] 
            = ((0xfffU & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT____Vtogcov__read_data[2U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U]));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_sel_X)))) {
        vlSymsp->__Vcoverage[1696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_sel_X 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_sel_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_sel_X)))) {
        vlSymsp->__Vcoverage[1697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_sel_X 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_sel_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_X)));
    }
    if (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) {
        if (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) {
            vlSymsp->__Vcoverage[1518].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty)))) {
            vlSymsp->__Vcoverage[1519].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty)))) {
        vlSymsp->__Vcoverage[1517].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__bypass_mux_sel))) {
        vlSymsp->__Vcoverage[1266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__bypass_mux_sel 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty;
    }
    vlSelf->top__DOT__DUT__DOT__imem_queue_num_free_entries 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty)
                     ? 2U : (3U & (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(2U) 
                                       - ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))) {
                vlSymsp->__Vcoverage[2685].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D)))) {
                vlSymsp->__Vcoverage[2683].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D)))) {
                vlSymsp->__Vcoverage[2684].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))) {
                vlSymsp->__Vcoverage[2686].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((4U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D)))) {
                vlSymsp->__Vcoverage[2687].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))) {
                vlSymsp->__Vcoverage[2688].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))) {
            vlSymsp->__Vcoverage[2688].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D = 0U;
        } else {
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))
                    ? 0U : (((- (IData)((vlSelf->top__DOT__DUT__DOT__inst_D 
                                         >> 0x1fU))) 
                             << 0x14U) | ((0xff000U 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D) 
                                          | ((0x800U 
                                              & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                                 >> 9U)) 
                                             | ((0x7e0U 
                                                 & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                                      >> 0x14U)))))));
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))
                ? ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))
                    ? (0xfffff000U & vlSelf->top__DOT__DUT__DOT__inst_D)
                    : (((- (IData)((vlSelf->top__DOT__DUT__DOT__inst_D 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0x800U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                     << 4U)) | ((0x7e0U 
                                                 & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                                      >> 7U))))))
                : ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))
                    ? (((- (IData)((vlSelf->top__DOT__DUT__DOT__inst_D 
                                    >> 0x1fU))) << 0xbU) 
                       | ((0x7e0U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                                      >> 7U))))
                    : (((- (IData)((vlSelf->top__DOT__DUT__DOT__inst_D 
                                    >> 0x1fU))) << 0xbU) 
                       | (0x7ffU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                    >> 0x14U)))));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D)))) {
        vlSymsp->__Vcoverage[1202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D)))) {
        vlSymsp->__Vcoverage[1203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D)))) {
        vlSymsp->__Vcoverage[1204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D 
            = ((3U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rs2_en_D))) {
        vlSymsp->__Vcoverage[1713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rs2_en_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs2_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X) 
                 & (((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                               >> 0x14U)) == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X))))));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs2_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M) 
                 & (((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                               >> 0x14U)) == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M))))));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs2_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_W) 
                 & (((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                               >> 0x14U)) == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W))))));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rs1_en_D))) {
        vlSymsp->__Vcoverage[1712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rs1_en_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs1_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X) 
                 & (((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                               >> 0xfU)) == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X))))));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs1_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M) 
                 & (((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                               >> 0xfU)) == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M))))));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs1_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W) 
              & ((IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_W) 
                 & (((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                               >> 0xfU)) == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W)) 
                    & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W))))));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__br_cond_eq_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_cond_eq_X))) {
        vlSymsp->__Vcoverage[1259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_cond_eq_X 
            = vlSelf->top__DOT__DUT__DOT__br_cond_eq_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__br_cond_lt_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_cond_lt_X))) {
        vlSymsp->__Vcoverage[1260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_cond_lt_X 
            = vlSelf->top__DOT__DUT__DOT__br_cond_lt_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__br_cond_ltu_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__br_cond_ltu_X))) {
        vlSymsp->__Vcoverage[1261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__br_cond_ltu_X 
            = vlSelf->top__DOT__DUT__DOT__br_cond_ltu_X;
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
        = ((8U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))
            ? ((4U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))
                ? ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))
                    ? 0U : ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))
                             ? 0U : vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X))
                : ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))
                        ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X
                        : (0xfffffffeU & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                                          + vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X)))
                    : ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))
                        ? (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                           << (0x1fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X))
                        : (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                           >> (0x1fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X)))))
            : ((4U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))
                ? ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))
                        ? (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                           >> (0x1fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X))
                        : ((IData)(vlSelf->top__DOT__DUT__DOT__br_cond_ltu_X)
                            ? 1U : 0U)) : ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))
                                            ? ((IData)(vlSelf->top__DOT__DUT__DOT__br_cond_lt_X)
                                                ? 1U
                                                : 0U)
                                            : (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                                               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X)))
                : ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))
                        ? (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                           | vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X)
                        : (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                           & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X))
                    : ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__alu_fn_X))
                        ? (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                           - vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X)
                        : (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X 
                           + vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X)))));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_X 
        = (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
            & (6U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X))) 
           & (~ (IData)(vlSelf->top__DOT__DUT__DOT__br_cond_ltu_X)));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[2999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out))) {
        vlSymsp->__Vcoverage[3000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vtogcov__b_shift_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_D))) {
        vlSymsp->__Vcoverage[1726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_D))) {
        vlSymsp->__Vcoverage[1724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_D;
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT____Vtogcov__sink_rdy))) {
        vlSymsp->__Vcoverage[636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_rdy 
            = vlSelf->top__DOT__sink__DOT__sink_rdy;
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M))) {
        vlSymsp->__Vcoverage[4732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data0_M) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M));
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
        = ((0x7ffc00000000ULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp) 
           | (((QData)((IData)((3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]))) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M))));
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_W)))) {
        vlSymsp->__Vcoverage[1218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_W 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_W))) {
        vlSymsp->__Vcoverage[1688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W;
    }
    vlSelf->top__DOT__commit_inst = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W)) 
                                     & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W));
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
            if ((2U != (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
                vlSymsp->__Vcoverage[2760].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
                vlSymsp->__Vcoverage[2759].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
            vlSymsp->__Vcoverage[2758].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
        vlSymsp->__Vcoverage[2757].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D)))) {
        vlSymsp->__Vcoverage[1200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D)))) {
        vlSymsp->__Vcoverage[1201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__mngr2proc_rdy_D))) {
        vlSymsp->__Vcoverage[1725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__mngr2proc_rdy_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D;
    }
    __Vilp = 0xf32U;
    while ((__Vilp <= 0xfffU)) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[__Vilp] 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__m
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}
