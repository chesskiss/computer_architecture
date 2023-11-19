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
    if (((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
               | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
            | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
           | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
          | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
         | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
        if ((0x13U != vlSelf->top__DOT__DUT__DOT__inst_D)) {
            if ((0x1063U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                if ((0x2073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    if ((0x1073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        if ((0x33U == (0xfe00707fU 
                                       & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[1769].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((0x33U != (0xfe00707fU 
                                       & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            if ((0x40000033U != (0xfe00707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                if ((0x2000033U != 
                                     (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[1772].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0x2000033U == 
                                     (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[1771].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x40000033U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[1770].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D)) {
            vlSymsp->__Vcoverage[1765].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
            vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
            vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
        } else if ((0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 1U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
            vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
            vlSelf->top__DOT__DUT__DOT__imm_type_D = 2U;
        } else {
            if ((0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0xcU;
                vlSelf->top__DOT__DUT__DOT__op2_sel_D = 2U;
            } else {
                if ((0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0xbU;
                } else if ((0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
                } else if ((0x40000033U == (0xfe00707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 1U;
                } else if ((0x2000033U == (0xfe00707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
                } else {
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 6U;
                }
                vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
            }
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
        }
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_D 
            = ((0x13U != vlSelf->top__DOT__DUT__DOT__inst_D) 
               & ((0x1063U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                  & ((0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                     | (0x1073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))));
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D 
            = ((0x13U != vlSelf->top__DOT__DUT__DOT__inst_D) 
               & ((0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                  | (0x2073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))));
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D 
            = ((0x13U != vlSelf->top__DOT__DUT__DOT__inst_D) 
               & ((0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                  | ((0x2073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                     & (0x1073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))));
    } else {
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_D 
            = (((((((((0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                      | (0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x40005033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (((((((((0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                         | (0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x2013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x3013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x40005013U == (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x5013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (((((((((0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                            | (0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                           | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x2023U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x6063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))
                      ? ((0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                         | ((0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                            | (0x2003U == (0x707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))))
                      : ((0x5063U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                         & ((0x7063U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                            & ((0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                               | (0x67U == (0x707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D))))))));
        if (((((((((0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                   | (0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x40005033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
            if ((0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 3U;
                vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
            } else if ((0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 7U;
                vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
            } else if ((0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 4U;
                vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
            } else if ((0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 5U;
                vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0xaU;
                vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
            } else if ((0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 9U;
                vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
            } else if ((0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 2U;
                vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
            } else {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
                vlSelf->top__DOT__DUT__DOT__op2_sel_D = 1U;
            }
            vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D 
                = ((0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                   | ((0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                      | ((0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                         | ((0x3033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                            | ((0x40005033U == (0xfe00707fU 
                                                & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                               | ((0x5033U == (0xfe00707fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                  | (0x1033U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))))))));
        } else {
            if (((((((((0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                       | (0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x2013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x3013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x40005013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x5013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D 
                    = ((0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))
                        ? 6U : ((0x6013U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))
                                 ? 3U : ((0x4013U == 
                                          (0x707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))
                                          ? 7U : ((0x2013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__DUT__DOT__inst_D))
                                                   ? 4U
                                                   : 
                                                  ((0x3013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__DUT__DOT__inst_D))
                                                    ? 5U
                                                    : 
                                                   ((0x40005013U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__DUT__DOT__inst_D))
                                                     ? 0xaU
                                                     : 
                                                    ((0x5013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__DUT__DOT__inst_D))
                                                      ? 9U
                                                      : 2U)))))));
                vlSelf->top__DOT__DUT__DOT__op2_sel_D = 1U;
                vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
            } else if (((((((((0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                              | (0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                             | (0x2003U == (0x707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                            | (0x2023U == (0x707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                           | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x6063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                if ((0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0xcU;
                    vlSelf->top__DOT__DUT__DOT__op2_sel_D = 1U;
                    vlSelf->top__DOT__DUT__DOT__imm_type_D = 3U;
                } else {
                    if ((0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__op2_sel_D = 1U;
                        vlSelf->top__DOT__DUT__DOT__imm_type_D = 3U;
                    } else if ((0x2003U == (0x707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 1U;
                        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__op2_sel_D = 1U;
                        vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
                    } else if ((0x2023U == (0x707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 2U;
                        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__op2_sel_D = 1U;
                        vlSelf->top__DOT__DUT__DOT__imm_type_D = 1U;
                    } else {
                        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D 
                            = ((0x1063U == (0x707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D))
                                ? 1U : ((0x63U == (0x707fU 
                                                   & vlSelf->top__DOT__DUT__DOT__inst_D))
                                         ? 4U : ((0x4063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__DUT__DOT__inst_D))
                                                  ? 2U
                                                  : 3U)));
                        vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__imm_type_D = 2U;
                    }
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
                }
            } else {
                if ((0x5063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 5U;
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__imm_type_D = 2U;
                } else if ((0x7063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 6U;
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__imm_type_D = 2U;
                } else if ((0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 2U;
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
                    vlSelf->top__DOT__DUT__DOT__imm_type_D = 4U;
                } else {
                    if ((0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 2U;
                        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 7U;
                        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0xdU;
                        vlSelf->top__DOT__DUT__DOT__op2_sel_D = 1U;
                    } else {
                        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D = 0U;
                        vlSelf->top__DOT__DUT__DOT__op2_sel_D = 0U;
                    }
                    vlSelf->top__DOT__DUT__DOT__imm_type_D = 0U;
                }
                vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
            }
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D 
                = ((~ ((((((((0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                             | (0x6013U == (0x707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                            | (0x4013U == (0x707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                           | (0x2013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x3013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x40005013U == (0xfe00707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x5013U == (0xfe00707fU 
                                       & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) 
                   & (((((((((0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                             | (0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                            | (0x2003U == (0x707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                           | (0x2023U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x6063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))
                       ? ((0x37U != (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                          & ((0x17U != (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                             & (0x2003U != (0x707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D))))
                       : ((0x5063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                          | (0x7063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))));
        }
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D 
            = (((((((((0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                      | (0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x40005033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (((((((((0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                         | (0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x2013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x3013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x40005013U == (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x5013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (((((((((0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                            | (0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                           | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x2023U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x6063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))
                      ? ((0x37U != (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                         & (0x17U != (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)))
                      : ((0x5063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                         | ((0x7063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                            | ((0x6fU != (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                               & (0x67U == (0x707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D))))))));
    }
    if ((1U & (~ ((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                        | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x40000033U == (0xfe00707fU 
                                       & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))))) {
        if ((1U & (~ ((((((((0x6033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                            | (0x4033U == (0xfe00707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                           | (0x2033U == (0xfe00707fU 
                                          & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x3033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x40005033U == (0xfe00707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x5033U == (0xfe00707fU 
                                       & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))))) {
            if ((1U & (~ ((((((((0x7013U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                | (0x6013U == (0x707fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                               | (0x4013U == (0x707fU 
                                              & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                              | (0x2013U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                             | (0x3013U == (0x707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                            | (0x40005013U == (0xfe00707fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                           | (0x5013U == (0xfe00707fU 
                                          & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x1013U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D)))))) {
                if ((1U & (~ ((((((((0x37U == (0x7fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                    | (0x17U == (0x7fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                   | (0x2003U == (0x707fU 
                                                  & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                  | (0x2023U == (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                 | (0x1063U == (0x707fU 
                                                & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                | (0x63U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                               | (0x4063U == (0x707fU 
                                              & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                              | (0x6063U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D)))))) {
                    if ((0x5063U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        if ((0x7063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[1798].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((0x7063U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            if ((0x6fU != (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                if ((0x67U != (0x707fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[1801].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0x67U == (0x707fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[1800].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[1799].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((0x5063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if (((((((((0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                           | (0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x2023U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x6063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
                    if ((0x37U != (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        if ((0x17U != (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            if ((0x2003U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[1791].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((0x2003U != (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                if ((0x2023U == (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[1792].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0x2023U != (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    if ((0x1063U == 
                                         (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[1793].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((0x1063U != 
                                         (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        if ((0x63U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                            vlSymsp->__Vcoverage[1794].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((0x63U 
                                             != (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                            if ((0x4063U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                                vlSymsp->__Vcoverage[1795].fetch_add(1, std::memory_order_relaxed);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (((((((((0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                       | (0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x2013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x3013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x40005013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x5013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
                if ((0x7013U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    if ((0x6013U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        if ((0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[1783].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((0x4013U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            if ((0x2013U != (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                if ((0x3013U != (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    if ((0x40005013U 
                                         != (0xfe00707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        if ((0x5013U 
                                             == (0xfe00707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                            vlSymsp->__Vcoverage[1787].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((0x40005013U 
                                         == (0xfe00707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[1786].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (((((((((0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                   | (0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x40005033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
            if ((0x6033U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                if ((0x4033U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    if ((0x2033U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        if ((0x3033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((0x3033U != (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            if ((0x40005033U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
                if ((0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[1774].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSymsp->__Vcoverage[1773].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_D 
        = ((~ ((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                     | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) 
           & ((~ ((((((((0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                        | (0x4033U == (0xfe00707fU 
                                       & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x40005033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) 
              & ((~ ((((((((0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                           | (0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x2013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x3013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x40005013U == (0xfe00707fU 
                                          & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x5013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) 
                 & (((((((((0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                           | (0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x2023U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x6063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    & ((0x37U != (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                       & ((0x17U != (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                          & (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))))))));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_val_D 
        = (((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                  | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
            | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
           | (((((((((0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                     | (0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x40005033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (((((((((0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                        | (0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x2013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x3013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x40005013U == (0xfe00707fU 
                                       & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x5013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (((((((((0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                           | (0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x2023U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x6063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | ((0x5063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                       | ((0x7063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                          | ((0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                             | (0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))))))));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D = 
        (((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
            | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
           | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
          | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
         & ((0x13U != vlSelf->top__DOT__DUT__DOT__inst_D) 
            & ((0x1063U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
               & ((0x2073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                  & (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))))));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D))) {
        vlSymsp->__Vcoverage[1285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__inst_D ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__inst_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__inst_D));
    }
    vlSelf->top__DOT__DUT__DOT__op1_sel_D = ((~ (((
                                                   (((((0x13U 
                                                        == vlSelf->top__DOT__DUT__DOT__inst_D) 
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
                                                    | (0x33U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                   | (0x40000033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                  | (0x2000033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                 | (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__DUT__DOT__inst_D)))) 
                                             & ((~ 
                                                 ((((((((0x6033U 
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
                                                  | (0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__DUT__DOT__inst_D)))) 
                                                & ((~ 
                                                    ((((((((0x7013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                                           | (0x6013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                          | (0x4013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                         | (0x2013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                        | (0x3013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                       | (0x40005013U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                      | (0x5013U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                     | (0x1013U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__DUT__DOT__inst_D)))) 
                                                   & (((((((((0x37U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                                             | (0x17U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                            | (0x2003U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                           | (0x2023U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                          | (0x1063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                         | (0x63U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                        | (0x4063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                       | (0x6063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                                      & ((0x37U 
                                                          != 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                                         & (0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->top__DOT__DUT__DOT__inst_D)))))));
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
        = vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile
        [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   >> 0xfU))];
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
        = vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile
        [(0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                   >> 0x14U))];
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mul_D = 
        (((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
            | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
           | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
          | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
         & ((0x13U != vlSelf->top__DOT__DUT__DOT__inst_D) 
            & ((0x1063U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
               & ((0x2073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                  & ((0x1073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                     & ((0x33U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                        & ((0x40000033U != (0xfe00707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                           & (0x2000033U == (0xfe00707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D)))))))));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D = 
        (((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
            | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
           | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
          | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
         & ((0x13U != vlSelf->top__DOT__DUT__DOT__inst_D) 
            & ((0x1063U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
               & (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__jal_D = 
        ((~ ((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                   | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) 
         & ((~ ((((((((0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                      | (0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x40005033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) 
            & ((~ ((((((((0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                         | (0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x2013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x3013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x40005013U == (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x5013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x1013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) 
               & ((~ ((((((((0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                            | (0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                           | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x2023U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x6063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) 
                  & ((0x5063U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                     & ((0x7063U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                        & (0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))))))));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    vlSelf->top__DOT__proc2mngr_msg = ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                                        ? vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore
                                        : ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                                            ? 0U : vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_W)))) {
        vlSymsp->__Vcoverage[1247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_W 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_W))) {
        vlSymsp->__Vcoverage[1717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W;
    }
    vlSelf->top__DOT__commit_inst = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W)) 
                                     & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[3211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__result_mux_sel)
            ? 0U : vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__add_mux_out);
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[2986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[2987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[2988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[2989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[2990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[2991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[2992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[2993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[2994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[2995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[2996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[2997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[2998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[2999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[3000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[3001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[3002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[3003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[3004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[3005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[3006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[3007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[3008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[3009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[3010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[3011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[3012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[3013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[3014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[3015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[3016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[3115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X))) {
        vlSymsp->__Vcoverage[2602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imul_ostream_msg_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
        = ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))
            ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X
            : ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))
                ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_ostream_msg_X
                : ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))
                    ? ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)
                    : 0U)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_imul_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_imul_X))) {
        vlSymsp->__Vcoverage[1901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_imul_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_imul_X;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_X 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_dmem_X) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_imul_X)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_redirect_X))) {
        vlSymsp->__Vcoverage[1726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_redirect_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_X;
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1117].fetch_add(1, std::memory_order_relaxed);
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
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty)))) {
        vlSymsp->__Vcoverage[1546].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__bypass_mux_sel))) {
        vlSymsp->__Vcoverage[1295].fetch_add(1, std::memory_order_relaxed);
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_D))) {
        vlSymsp->__Vcoverage[1757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__wb_result_sel_D))) {
        vlSymsp->__Vcoverage[1756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__wb_result_sel_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_val_D))) {
        vlSymsp->__Vcoverage[1740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_val_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_val_D;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ex_result_sel_D)))) {
        vlSymsp->__Vcoverage[1754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ex_result_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ex_result_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ex_result_sel_D)))) {
        vlSymsp->__Vcoverage[1755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ex_result_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ex_result_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_D)))) {
        vlSymsp->__Vcoverage[1751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_D 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_D)))) {
        vlSymsp->__Vcoverage[1752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_D 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_D)))) {
        vlSymsp->__Vcoverage[1753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_D 
            = ((3U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__dmem_reqstream_type_D)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[1741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[1742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D)))) {
        vlSymsp->__Vcoverage[1743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D 
            = ((3U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__br_type_D)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[1747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D 
            = ((0xeU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[1748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D 
            = ((0xdU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[1749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D 
            = ((0xbU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)))) {
        vlSymsp->__Vcoverage[1750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D 
            = ((7U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__alu_fn_D)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D)));
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D) 
                  & (0x7c1U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[1808].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D) 
                  & (0x7c0U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[1804].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__csrw_D))) {
        vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__csrw_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D) 
         & (0x7c1U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                       >> 0x14U)))) {
        vlSymsp->__Vcoverage[1807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_D = 1U;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D) 
         & (0x7c0U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                       >> 0x14U)))) {
        vlSymsp->__Vcoverage[1803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_D = 1U;
    }
    if (vlSelf->top__DOT__DUT__DOT__op1_sel_D) {
        if (vlSelf->top__DOT__DUT__DOT__op1_sel_D) {
            vlSymsp->__Vcoverage[2927].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__op1_sel_D)))) {
            vlSymsp->__Vcoverage[2928].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__op1_sel_D)))) {
        vlSymsp->__Vcoverage[2926].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__op1_sel_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_sel_D))) {
        vlSymsp->__Vcoverage[1228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_sel_D 
            = vlSelf->top__DOT__DUT__DOT__op1_sel_D;
    }
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))) {
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))) {
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))) {
                vlSymsp->__Vcoverage[2943].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U != (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))) {
                vlSymsp->__Vcoverage[2944].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))) {
            vlSymsp->__Vcoverage[2942].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))) {
        vlSymsp->__Vcoverage[2941].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_sel_D)))) {
        vlSymsp->__Vcoverage[1229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_sel_D)))) {
        vlSymsp->__Vcoverage[1230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D)));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0))) {
        vlSymsp->__Vcoverage[2883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data0) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
        = ((0U == (0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                            >> 0xfU))) ? 0U : vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0);
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1))) {
        vlSymsp->__Vcoverage[2915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT____Vtogcov__rf_read_data1) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
        = ((0U == (0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                            >> 0x14U))) ? 0U : vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1);
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mul_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__mul_D))) {
        vlSymsp->__Vcoverage[1758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__mul_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mul_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_imul_D 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imul_istream_rdy_D)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mul_D));
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))) {
                vlSymsp->__Vcoverage[2848].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D)))) {
                vlSymsp->__Vcoverage[2846].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D)))) {
                vlSymsp->__Vcoverage[2847].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))) {
                vlSymsp->__Vcoverage[2849].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((4U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D)))) {
                vlSymsp->__Vcoverage[2850].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))) {
                vlSymsp->__Vcoverage[2851].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D))) {
            vlSymsp->__Vcoverage[2851].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D)))) {
        vlSymsp->__Vcoverage[1234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D)))) {
        vlSymsp->__Vcoverage[1235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D 
            = ((3U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imm_type_D)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imm_type_D)));
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D) 
                  & (0xfc0U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[1806].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D) 
                  & (0xfc1U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[1810].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D) 
                  & (0xf14U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                                >> 0x14U)))))) {
        vlSymsp->__Vcoverage[1812].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__csrr_D))) {
        vlSymsp->__Vcoverage[1759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__csrr_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D;
    }
    vlSelf->top__DOT__DUT__DOT__csrr_sel_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D) 
         & (0xfc1U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                       >> 0x14U)))) {
        vlSymsp->__Vcoverage[1809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__csrr_sel_D = 1U;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D) 
         & (0xf14U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                       >> 0x14U)))) {
        vlSymsp->__Vcoverage[1811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__csrr_sel_D = 2U;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D = 0U;
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D) 
         & (0xfc0U == (vlSelf->top__DOT__DUT__DOT__inst_D 
                       >> 0x14U)))) {
        vlSymsp->__Vcoverage[1805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D)))) {
        vlSymsp->__Vcoverage[1820].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rs1_en_D))) {
        vlSymsp->__Vcoverage[1745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rs1_en_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D;
    }
    vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D = 0U;
    if (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D) {
        vlSymsp->__Vcoverage[1819].fetch_add(1, std::memory_order_relaxed);
        if (((((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
               & ((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                            >> 0xfU)) == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X))) 
              & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X))) 
             & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X))) {
            vlSymsp->__Vcoverage[1818].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D = 1U;
        } else if (((((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M) 
                      & ((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                   >> 0xfU)) == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M))) 
                     & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M))) 
                    & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M))) {
            vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D = 2U;
        } else if (((((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W) 
                      & ((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                   >> 0xfU)) == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W))) 
                     & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W))) 
                    & (IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_W))) {
            vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D = 3U;
        }
        if ((1U & (~ ((((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                        & ((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                     >> 0xfU)) == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X))) 
                       & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X))) 
                      & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X))))) {
            if (((((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M) 
                   & ((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                >> 0xfU)) == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M))) 
                  & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M))) 
                 & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M))) {
                vlSymsp->__Vcoverage[1817].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M) 
                            & ((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                         >> 0xfU)) 
                               == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M))) 
                           & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M))) 
                          & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M))))) {
                if (((((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W) 
                       & ((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                    >> 0xfU)) == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W))) 
                      & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W))) 
                     & (IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_W))) {
                    vlSymsp->__Vcoverage[1815].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ ((((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W) 
                                & ((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                             >> 0xfU)) 
                                   == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W))) 
                               & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W))) 
                              & (IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_W))))) {
                    vlSymsp->__Vcoverage[1816].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_ld_X_rs1_D 
            = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
               & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X) 
                  & (((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                >> 0xfU)) == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)) 
                     & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hf1e2f6b3__0))));
    } else {
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_ld_X_rs1_D = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D)))) {
        vlSymsp->__Vcoverage[1826].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rs2_en_D))) {
        vlSymsp->__Vcoverage[1746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rs2_en_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D;
    }
    vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D = 0U;
    if (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D) {
        vlSymsp->__Vcoverage[1825].fetch_add(1, std::memory_order_relaxed);
        if (((((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
               & ((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                            >> 0x14U)) == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X))) 
              & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X))) 
             & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X))) {
            vlSymsp->__Vcoverage[1824].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D = 1U;
        } else if (((((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M) 
                      & ((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                   >> 0x14U)) == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M))) 
                     & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M))) 
                    & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M))) {
            vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D = 2U;
        } else if (((((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W) 
                      & ((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                   >> 0x14U)) == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W))) 
                     & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W))) 
                    & (IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_W))) {
            vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D = 3U;
        }
        if ((1U & (~ ((((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                        & ((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                     >> 0x14U)) == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X))) 
                       & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X))) 
                      & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X))))) {
            if (((((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M) 
                   & ((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                >> 0x14U)) == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M))) 
                  & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M))) 
                 & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M))) {
                vlSymsp->__Vcoverage[1823].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M) 
                            & ((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                         >> 0x14U)) 
                               == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M))) 
                           & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M))) 
                          & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M))))) {
                if ((1U & (~ ((((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W) 
                                & ((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                             >> 0x14U)) 
                                   == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W))) 
                               & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W))) 
                              & (IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_W))))) {
                    vlSymsp->__Vcoverage[1822].fetch_add(1, std::memory_order_relaxed);
                }
                if (((((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W) 
                       & ((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                    >> 0x14U)) == (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W))) 
                      & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__rf_waddr_W))) 
                     & (IData)(vlSelf->top__DOT__DUT__DOT__rf_wen_W))) {
                    vlSymsp->__Vcoverage[1821].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_ld_X_rs2_D 
            = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
               & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X) 
                  & (((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                >> 0x14U)) == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)) 
                     & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hf1e2f6b3__0))));
    } else {
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_ld_X_rs2_D = 0U;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__jal_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__jal_D))) {
        vlSymsp->__Vcoverage[1744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__jal_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__jal_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__jal_D) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D));
    if (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_X) {
        vlSymsp->__Vcoverage[1731].fetch_add(1, std::memory_order_relaxed);
        if ((7U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X))) {
            vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__pc_sel_F = 3U;
        } else {
            vlSelf->top__DOT__DUT__DOT__pc_sel_F = 1U;
        }
        if ((7U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X))) {
            vlSymsp->__Vcoverage[1728].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__pc_sel_F = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_D)
                                                 ? 2U
                                                 : 0U);
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
    if (((IData)(vlSelf->top__DOT__commit_inst) ^ (IData)(vlSelf->top__DOT____Vtogcov__commit_inst))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__commit_inst = vlSelf->top__DOT__commit_inst;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_val = 
        ((IData)(vlSelf->top__DOT__commit_inst) & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_W));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[3243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X))) {
        vlSymsp->__Vcoverage[2314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__byp_data_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_X))) {
        vlSymsp->__Vcoverage[1710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_X;
    }
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
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue_num_free_entries) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_queue_num_free_entries)))) {
        vlSymsp->__Vcoverage[924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_queue_num_free_entries 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_queue_num_free_entries)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue_num_free_entries)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue_num_free_entries) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_queue_num_free_entries)))) {
        vlSymsp->__Vcoverage[925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_queue_num_free_entries 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_queue_num_free_entries)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue_num_free_entries)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_D))) {
        vlSymsp->__Vcoverage[1763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_D))) {
        vlSymsp->__Vcoverage[1761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_D;
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D))) {
        vlSymsp->__Vcoverage[2250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata0_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D))) {
        vlSymsp->__Vcoverage[2282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__rf_rdata1_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_imul_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_imul_D))) {
        vlSymsp->__Vcoverage[1831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_imul_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_imul_D;
    }
    if ((1U & ((IData)((1ULL & (((QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D)) 
                                 + (QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D))) 
                                >> 0x20U))) ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_plus_imm_D__DOT____Vtogcov__cout)))) {
        vlSymsp->__Vcoverage[2946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_plus_imm_D__DOT____Vtogcov__cout 
            = (1U & (IData)((1ULL & (((QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D)) 
                                      + (QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D))) 
                                     >> 0x20U))));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D))) {
        vlSymsp->__Vcoverage[2218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__imm_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
        = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
           + vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D);
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
            if ((2U != (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
                vlSymsp->__Vcoverage[2939].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
                vlSymsp->__Vcoverage[2938].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
            vlSymsp->__Vcoverage[2937].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))) {
        vlSymsp->__Vcoverage[2936].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D)))) {
        vlSymsp->__Vcoverage[1231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D)))) {
        vlSymsp->__Vcoverage[1232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__csrr_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__mngr2proc_rdy_D))) {
        vlSymsp->__Vcoverage[1762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__mngr2proc_rdy_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D))) {
            vlSymsp->__Vcoverage[2921].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D)))) {
            vlSymsp->__Vcoverage[2920].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D))) {
        if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D))) {
            vlSymsp->__Vcoverage[2923].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D)))) {
            vlSymsp->__Vcoverage[2922].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_sel_D)))) {
        vlSymsp->__Vcoverage[1224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_sel_D)))) {
        vlSymsp->__Vcoverage[1225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op1_byp_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_ld_X_rs1_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_ld_X_rs1_D))) {
        vlSymsp->__Vcoverage[1828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_ld_X_rs1_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_ld_X_rs1_D;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D))) {
            vlSymsp->__Vcoverage[2931].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D)))) {
            vlSymsp->__Vcoverage[2930].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D))) {
        if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D))) {
            vlSymsp->__Vcoverage[2933].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D)))) {
            vlSymsp->__Vcoverage[2932].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_sel_D)))) {
        vlSymsp->__Vcoverage[1226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_sel_D 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_sel_D)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_sel_D)))) {
        vlSymsp->__Vcoverage[1227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_sel_D 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__op2_byp_sel_D)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_ld_X_rs2_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_ld_X_rs2_D))) {
        vlSymsp->__Vcoverage[1829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_ld_X_rs2_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_ld_X_rs2_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_hazard_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_ld_X_rs1_D) 
           | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_ld_X_rs2_D));
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_X)))) {
        if (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_D) {
            vlSymsp->__Vcoverage[1729].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_D)))) {
            vlSymsp->__Vcoverage[1730].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_redirect_D))) {
        vlSymsp->__Vcoverage[1725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_redirect_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_val) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_val))) {
        vlSymsp->__Vcoverage[1219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_val 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_val;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_val));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D))) {
        vlSymsp->__Vcoverage[2154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__jal_target_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_hazard_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_hazard_D))) {
        vlSymsp->__Vcoverage[1830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_hazard_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_hazard_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D_mngr2proc 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_hazard_D) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_imul_D)));
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F))) {
            vlSymsp->__Vcoverage[2796].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F)))) {
            vlSymsp->__Vcoverage[2795].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F))) {
        if ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F))) {
            vlSymsp->__Vcoverage[2798].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                = vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X;
        } else {
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                = vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F)))) {
            vlSymsp->__Vcoverage[2797].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F))
                ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X
                : ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty)))) {
            vlSymsp->__Vcoverage[1548].fetch_add(1, std::memory_order_relaxed);
        }
        vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] = 0U;
        if (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) {
            vlSymsp->__Vcoverage[1547].fetch_add(1, std::memory_order_relaxed);
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
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_F)))) {
        vlSymsp->__Vcoverage[1221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_F 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_F)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_F)))) {
        vlSymsp->__Vcoverage[1222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_F 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pc_sel_F)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__pc_sel_F)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq))) {
        vlSymsp->__Vcoverage[1661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__proc2mngr_val = ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                                       | (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D_mngr2proc) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_D_mngr2proc))) {
        vlSymsp->__Vcoverage[1833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_D_mngr2proc 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D_mngr2proc;
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x400U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            >> 0x1eU)));
    }
    if ((0x800U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            >> 0x1eU)));
    }
    if ((0x1000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             >> 0x1eU)));
    }
    if ((4U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        >> 0x1eU)));
    }
    if ((8U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        >> 0x1eU)));
    }
    if ((0x10U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           >> 0x1eU)));
    }
    if ((0x20U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           >> 0x1eU)));
    }
    if ((0x40U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           >> 0x1eU)));
    }
    if ((0x80U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           >> 0x1eU)));
    }
    if ((0x100U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            >> 0x1eU)));
    }
    if ((0x200U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            >> 0x1eU)));
    }
    if ((4U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U)));
    }
    if ((8U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U)));
    }
    if ((0x10U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           << 2U)));
    }
    if ((0x20U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           << 2U)));
    }
    if ((0x40U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           << 2U)));
    }
    if ((0x80U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           << 2U)));
    }
    if ((0x100U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            << 2U)));
    }
    if ((0x200U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            << 2U)));
    }
    if ((0x400U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            << 2U)));
    }
    if ((0x800U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            << 2U)));
    }
    if ((0x1000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             << 2U)));
    }
    if ((0x2000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             << 2U)));
    }
    if ((0x4000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             << 2U)));
    }
    if ((0x8000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             << 2U)));
    }
    if ((0x10000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                              << 2U)));
    }
    if ((0x20000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                              << 2U)));
    }
    if ((0x40000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                              << 2U)));
    }
    if ((0x80000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                              << 2U)));
    }
    if ((0x100000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                               << 2U)));
    }
    if ((0x200000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                               << 2U)));
    }
    if ((0x400000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                               << 2U)));
    }
    if ((0x800000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                               << 2U)));
    }
    if ((0x1000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                << 2U)));
    }
    if ((0x2000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                << 2U)));
    }
    if ((0x4000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                << 2U)));
    }
    if ((0x8000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                << 2U)));
    }
    if ((0x10000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                         << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                 << 2U)));
    }
    if ((0x20000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                         << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                 << 2U)));
    }
    if ((0x40000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                         << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                 << 2U)));
    }
    if (((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1dU)) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
                              >> 0x1fU))) {
        vlSymsp->__Vcoverage[966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x80000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                 << 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        >> 0x1eU)));
    }
    if ((2U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        >> 0x1eU)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U)));
    }
    if ((2U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U)));
    }
    if ((1U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((2U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((4U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((8U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x10U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x20U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x40U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x80U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x100U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x200U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x400U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x800U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x1000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x2000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x4000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x8000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x10000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x20000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x40000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x80000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x100000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x200000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x400000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x800000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x1000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x2000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x4000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x8000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x10000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x20000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[1000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x40000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[1001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if (((IData)(vlSelf->top__DOT__proc2mngr_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__proc2mngr_val))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_val 
            = vlSelf->top__DOT__proc2mngr_val;
    }
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
}
