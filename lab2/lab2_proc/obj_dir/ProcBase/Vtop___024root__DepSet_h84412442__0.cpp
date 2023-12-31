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
    IData/*31:0*/ __Vtask_top__DOT__mem__DOT__load__0__filein;
    __Vtask_top__DOT__mem__DOT__load__0__filein = 0;
    IData/*31:0*/ __Vtask_top__DOT__mem__DOT__mem__DOT__load__1__file_load;
    __Vtask_top__DOT__mem__DOT__mem__DOT__load__1__file_load = 0;
    IData/*31:0*/ __Vtask_top__DOT__src__DOT__load__2__file_load;
    __Vtask_top__DOT__src__DOT__load__2__file_load = 0;
    IData/*31:0*/ __Vtask_top__DOT__src__DOT__src__DOT__load__3__file_load;
    __Vtask_top__DOT__src__DOT__src__DOT__load__3__file_load = 0;
    IData/*31:0*/ __Vtask_top__DOT__sink__DOT__load__4__file_load;
    __Vtask_top__DOT__sink__DOT__load__4__file_load = 0;
    IData/*31:0*/ __Vtask_top__DOT__sink__DOT__sink__DOT__load__5__file_load;
    __Vtask_top__DOT__sink__DOT__sink__DOT__load__5__file_load = 0;
    // Body
    vlSelf->top__DOT__reset = 1U;
    vlSelf->top__DOT__mem_clear = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_Proc.v", 
                                       214);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("Loading data\n");
    (void)VL_VALUEPLUSARGS_INN(64, std::string{"mem=%s"}, 
                               vlSelf->top__DOT__temp);
    vlSelf->top__DOT__fp = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelf->top__DOT__temp)
                                       , std::string{"r"});
    ;
    __Vtask_top__DOT__mem__DOT__load__0__filein = vlSelf->top__DOT__fp;
    __Vtask_top__DOT__mem__DOT__mem__DOT__load__1__file_load 
        = __Vtask_top__DOT__mem__DOT__load__0__filein;
    VL_WRITEF("c_physical_addr_nbits is          14\n");
    while ((! (__Vtask_top__DOT__mem__DOT__mem__DOT__load__1__file_load ? feof(VL_CVT_I_FP(__Vtask_top__DOT__mem__DOT__mem__DOT__load__1__file_load)) : true))) {
        (void)VL_FSCANF_IX(__Vtask_top__DOT__mem__DOT__mem__DOT__load__1__file_load,"%x:%x\n",
                           32,&(vlSelf->top__DOT__mem__DOT__mem__DOT__data_address),
                           32,&(vlSelf->top__DOT__mem__DOT__mem__DOT__data_data)) ;
        vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
            = ((vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                << 0x18U) | ((0xff0000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                                           << 8U)) 
                             | ((0xff00U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                                            >> 8U)) 
                                | (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                                   >> 0x18U))));
        vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr 
            = (0xfffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_address 
                         >> 2U));
        vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset 
            = (3U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_address);
        vlSelf->top__DOT__mem__DOT__mem__DOT__m_load[vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr] 
            = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
                                                << 3U)))) 
                & vlSelf->top__DOT__mem__DOT__mem__DOT__m_load
                [vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr]) 
               | (0xffffffffULL & ((0xffU & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data) 
                                   << (0x1fU & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
                                                << 3U)))));
        vlSymsp->__Vcoverage[4667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__wr_i = 1U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__m_load[vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr] 
            = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(8U) 
                                                + ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
                                                   << 3U))))) 
                & vlSelf->top__DOT__mem__DOT__mem__DOT__m_load
                [vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr]) 
               | (0xffffffffULL & ((0xffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                                             >> 8U)) 
                                   << (0x1fU & ((IData)(8U) 
                                                + ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
                                                   << 3U))))));
        vlSymsp->__Vcoverage[4667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__wr_i = 2U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__m_load[vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr] 
            = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(0x10U) 
                                                + ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
                                                   << 3U))))) 
                & vlSelf->top__DOT__mem__DOT__mem__DOT__m_load
                [vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr]) 
               | (0xffffffffULL & ((0xffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                                             >> 0x10U)) 
                                   << (0x1fU & ((IData)(0x10U) 
                                                + ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
                                                   << 3U))))));
        vlSymsp->__Vcoverage[4667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__wr_i = 3U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__m_load[vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr] 
            = (((~ ((IData)(0xffU) << (0x1fU & ((IData)(0x18U) 
                                                + ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
                                                   << 3U))))) 
                & vlSelf->top__DOT__mem__DOT__mem__DOT__m_load
                [vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr]) 
               | (0xffffffffULL & ((vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                                    >> 0x18U) << (0x1fU 
                                                  & ((IData)(0x18U) 
                                                     + 
                                                     ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
                                                      << 3U))))));
        vlSymsp->__Vcoverage[4667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__wr_i = 4U;
        vlSymsp->__Vcoverage[4668].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[4669].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4097].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("Data loaded\n");
    if (VL_LIKELY(VL_VALUEPLUSARGS_INN(64, std::string{"men=%s"}, 
                                       vlSelf->top__DOT__temp))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->top__DOT__fp = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(
                                                              VL_CONCATN_NNN(vlSelf->top__DOT__temp, 
                                                                             std::string{".in"}))
                                           , std::string{"r"});
        ;
        __Vtask_top__DOT__src__DOT__load__2__file_load 
            = vlSelf->top__DOT__fp;
        __Vtask_top__DOT__src__DOT__src__DOT__load__3__file_load 
            = __Vtask_top__DOT__src__DOT__load__2__file_load;
        vlSelf->top__DOT__src__DOT__src__DOT__index_max = 0U;
        {
            while ((! (__Vtask_top__DOT__src__DOT__src__DOT__load__3__file_load ? feof(VL_CVT_I_FP(__Vtask_top__DOT__src__DOT__src__DOT__load__3__file_load)) : true))) {
                vlSelf->top__DOT__src__DOT__src__DOT__load__Vstatic__unnamedblk1__DOT__count 
                    = VL_FSCANF_IX(__Vtask_top__DOT__src__DOT__src__DOT__load__3__file_load,"%x\n",
                                   32,&(vlSelf->top__DOT__src__DOT__src__DOT__data_data)) ;
                if ((0U == vlSelf->top__DOT__src__DOT__src__DOT__load__Vstatic__unnamedblk1__DOT__count)) {
                    goto __Vlabel1;
                } else {
                    vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
                }
                VL_WRITEF("Loading %x\n",32,vlSelf->top__DOT__src__DOT__src__DOT__data_data);
                vlSelf->top__DOT__src__DOT__src__DOT____Vlvbound_h841106f2__0 
                    = vlSelf->top__DOT__src__DOT__src__DOT__data_data;
                if (VL_LIKELY((0x31U >= (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)))) {
                    vlSelf->top__DOT__src__DOT__src__DOT__m[vlSelf->top__DOT__src__DOT__src__DOT__index_max] 
                        = vlSelf->top__DOT__src__DOT__src__DOT____Vlvbound_h841106f2__0;
                }
                vlSelf->top__DOT__src__DOT__src__DOT__index_max 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)));
                vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
            }
            __Vlabel1: ;
        }
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__fp = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(
                                                              VL_CONCATN_NNN(vlSelf->top__DOT__temp, 
                                                                             std::string{".out"}))
                                           , std::string{"r"});
        ;
        __Vtask_top__DOT__sink__DOT__load__4__file_load 
            = vlSelf->top__DOT__fp;
        __Vtask_top__DOT__sink__DOT__sink__DOT__load__5__file_load 
            = __Vtask_top__DOT__sink__DOT__load__4__file_load;
        vlSelf->top__DOT__sink__DOT__sink__DOT__index_max = 0U;
        {
            while ((! (__Vtask_top__DOT__sink__DOT__sink__DOT__load__5__file_load ? feof(VL_CVT_I_FP(__Vtask_top__DOT__sink__DOT__sink__DOT__load__5__file_load)) : true))) {
                vlSelf->top__DOT__sink__DOT__sink__DOT__load__Vstatic__unnamedblk1__DOT__count 
                    = VL_FSCANF_IX(__Vtask_top__DOT__sink__DOT__sink__DOT__load__5__file_load,"%x\n",
                                   32,&(vlSelf->top__DOT__sink__DOT__sink__DOT__data_data)) ;
                if ((0U == vlSelf->top__DOT__sink__DOT__sink__DOT__load__Vstatic__unnamedblk1__DOT__count)) {
                    goto __Vlabel2;
                } else {
                    vlSymsp->__Vcoverage[867].fetch_add(1, std::memory_order_relaxed);
                }
                VL_WRITEF("Loading %x\n",32,vlSelf->top__DOT__sink__DOT__sink__DOT__data_data);
                vlSelf->top__DOT__sink__DOT__sink__DOT____Vlvbound_h841106f2__0 
                    = vlSelf->top__DOT__sink__DOT__sink__DOT__data_data;
                if (VL_LIKELY((0x31U >= (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)))) {
                    vlSelf->top__DOT__sink__DOT__sink__DOT__m[vlSelf->top__DOT__sink__DOT__sink__DOT__index_max] 
                        = vlSelf->top__DOT__sink__DOT__sink__DOT____Vlvbound_h841106f2__0;
                }
                vlSelf->top__DOT__sink__DOT__sink__DOT__index_max 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
                vlSymsp->__Vcoverage[868].fetch_add(1, std::memory_order_relaxed);
            }
            __Vlabel2: ;
        }
        vlSymsp->__Vcoverage[869].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[669].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_Proc.v", 
                                       229);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reset = 1U;
    vlSelf->top__DOT__mem_clear = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_Proc.v", 
                                       232);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reset = 0U;
    vlSelf->top__DOT__mem_clear = 0U;
    vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vtask_top__DOT__mem__DOT__dump__6__filein;
    __Vtask_top__DOT__mem__DOT__dump__6__filein = 0;
    IData/*31:0*/ __Vtask_top__DOT__mem__DOT__mem__DOT__dump__7__file_out;
    __Vtask_top__DOT__mem__DOT__mem__DOT__dump__7__file_out = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    // Body
    vlSelf->top__DOT__mngr2proc_msg = 0U;
    vlSelf->top__DOT__mngr2proc_val = 1U;
    while ((1U & ((~ (IData)(vlSelf->top__DOT__src_done)) 
                  | (~ (IData)(vlSelf->top__DOT__snk_done))))) {
        co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_Proc.v", 
                                                           253);
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_Proc.v", 
                                                       254);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_Proc.v", 
                                                       255);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_Proc.v", 
                                                       256);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_Proc.v", 
                                                       257);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_Proc.v", 
                                                       258);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_Proc.v", 
                                                       259);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_Proc.v", 
                                                       260);
    VL_WRITEF("Testbench finished.  Dumping memory\n");
    __Vtemp_1[0U] = 0x703d2573U;
    __Vtemp_1[1U] = 0x6d64756dU;
    __Vtemp_1[2U] = 0x6d65U;
    (void)VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NW(3, __Vtemp_1), 
                               vlSelf->top__DOT__temp);
    vlSelf->top__DOT__fp = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelf->top__DOT__temp)
                                       , std::string{"w"});
    ;
    __Vtask_top__DOT__mem__DOT__dump__6__filein = vlSelf->top__DOT__fp;
    __Vtask_top__DOT__mem__DOT__mem__DOT__dump__7__file_out 
        = __Vtask_top__DOT__mem__DOT__dump__6__filein;
    vlSelf->top__DOT__mem__DOT__mem__DOT__wr_i = 0U;
    while (VL_GTS_III(32, 0x1000U, vlSelf->top__DOT__mem__DOT__mem__DOT__wr_i)) {
        if (VL_UNLIKELY((0U != vlSelf->top__DOT__mem__DOT__mem__DOT__m
                         [(0xfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__wr_i)]))) {
            vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                = vlSelf->top__DOT__mem__DOT__mem__DOT__m
                [(0xfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__wr_i)];
            vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                = ((vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    << 0x18U) | ((0xff0000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                                               << 8U)) 
                                 | ((0xff00U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                                                >> 8U)) 
                                    | (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                                       >> 0x18U))));
            vlSelf->top__DOT__mem__DOT__mem__DOT__dump__Vstatic__unnamedblk1__DOT__ihex 
                = VL_SFORMATF_NX("%x:%x",32,(vlSelf->top__DOT__mem__DOT__mem__DOT__wr_i 
                                             << 2U),
                                 32,vlSelf->top__DOT__mem__DOT__mem__DOT__data_data) ;
            __Vtemp_3 = VL_TOUPPER_NN(vlSelf->top__DOT__mem__DOT__mem__DOT__dump__Vstatic__unnamedblk1__DOT__ihex);
            VL_WRITEF("%@\n",-1,&(__Vtemp_3));
            __Vtemp_4 = VL_TOUPPER_NN(vlSelf->top__DOT__mem__DOT__mem__DOT__dump__Vstatic__unnamedblk1__DOT__ihex);
            VL_FWRITEF(__Vtask_top__DOT__mem__DOT__mem__DOT__dump__7__file_out,"%@\n",
                       -1,&(__Vtemp_4));
            vlSymsp->__Vcoverage[4670].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[4671].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[4672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__wr_i 
            = ((IData)(1U) + vlSelf->top__DOT__mem__DOT__mem__DOT__wr_i);
    }
    vlSymsp->__Vcoverage[4673].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[4098].fetch_add(1, std::memory_order_relaxed);
    VL_FINISH_MT("tb_Proc.v", 266, "");
    vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x2710U, vlSelf->top__DOT__unnamedblk1__DOT__i)) {
        co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_Proc.v", 
                                                           271);
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__i = ((IData)(1U) 
                                                 + vlSelf->top__DOT__unnamedblk1__DOT__i);
    }
    VL_WRITEF("TIMEOUT: Testbench didn't finish in time\n");
    VL_FINISH_MT("tb_Proc.v", 274, "");
    vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__3\n"); );
    // Init
    CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__val;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__val = 0;
    CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__rdy;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__13__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__13__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__14__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__14__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__14__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__14__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__15__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__15__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__16__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__16__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__16__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__16__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__17__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__17__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__18__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__18__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__18__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__18__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__19__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__19__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__20__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__20__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__20__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__20__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__21__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__21__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__22__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__22__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__23__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__23__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__23__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__23__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__24__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__24__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__25__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__25__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__25__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__25__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__26__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__26__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__27__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__27__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__27__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__27__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__28__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__28__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__29__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__29__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__30__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__30__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__30__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__30__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__31__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__31__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__32__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__32__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__32__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__32__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__33__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__33__str);
    VlWide<7>/*199:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout;
    VL_ZERO_W(200, __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout);
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst = 0;
    SData/*11:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__35__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__35__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__35__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__35__inst = 0;
    SData/*11:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__36__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__36__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__36__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__36__inst = 0;
    SData/*11:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__37__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__37__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__37__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__37__inst = 0;
    SData/*11:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__38__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__38__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__38__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__38__inst = 0;
    SData/*11:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__39__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__39__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__39__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__39__inst = 0;
    SData/*11:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__40__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__40__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__40__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__40__inst = 0;
    CData/*4:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__41__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__41__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__41__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__41__inst = 0;
    CData/*4:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__42__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__42__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__42__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__42__inst = 0;
    CData/*4:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__43__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__43__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__43__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__43__inst = 0;
    CData/*4:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__44__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__44__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__44__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__44__inst = 0;
    CData/*4:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__45__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__45__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__45__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__45__inst = 0;
    CData/*4:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__46__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__46__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__46__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__46__inst = 0;
    IData/*19:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__47__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__47__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__47__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__47__inst = 0;
    IData/*19:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__48__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__48__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__48__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__48__inst = 0;
    SData/*11:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__49__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__49__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__49__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__49__inst = 0;
    SData/*11:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_s__50__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_s__50__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_s__50__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_s__50__inst = 0;
    IData/*20:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_j__51__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_j__51__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_j__51__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_j__51__inst = 0;
    SData/*11:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__52__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__52__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__52__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__52__inst = 0;
    SData/*12:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__53__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__53__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__53__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__53__inst = 0;
    SData/*12:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__54__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__54__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__54__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__54__inst = 0;
    SData/*12:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__55__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__55__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__55__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__55__inst = 0;
    SData/*12:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__56__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__56__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__56__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__56__inst = 0;
    SData/*12:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__57__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__57__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__57__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__57__inst = 0;
    SData/*12:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__58__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__58__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__58__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__58__inst = 0;
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__59__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__59__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__59__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__59__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__60__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__60__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__61__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__61__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__62__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__62__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__62__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__62__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__63__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__63__str);
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst = 0;
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__65__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__65__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__65__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__65__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__66__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__66__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__67__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__67__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__68__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__68__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__68__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__68__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__69__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__69__str);
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst = 0;
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__71__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__71__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__71__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__71__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__72__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__72__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__73__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__73__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__74__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__74__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__74__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__74__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__75__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__75__str);
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst;
    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst = 0;
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__77__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__77__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__77__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__77__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__78__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__78__str);
    CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__val;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__val = 0;
    CData/*0:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__rdy;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__80__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__80__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__81__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__81__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__81__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__81__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__82__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__82__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__83__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__83__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__83__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__83__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__84__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__84__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__85__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__85__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__85__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__85__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__86__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__86__str);
    CData/*7:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__87__char;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__87__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__87__num;
    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__87__num = 0;
    VlWide<128>/*4095:0*/ __Vtemp_53;
    VlWide<128>/*4095:0*/ __Vtemp_67;
    VlWide<128>/*4095:0*/ __Vtemp_81;
    VlWide<128>/*4095:0*/ __Vtemp_95;
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_Proc.v", 
                                                           290);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        if (vlSelf->linetrace) {
            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
            if (VL_UNLIKELY((0U < (IData)(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level)))) {
                VL_WRITEF("%4d: ",32,vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__cycles);
                VL_SFORMAT_X(4096,vlSelf->top__DOT__DUT__DOT__temp
                             ,"%x",32,vlSelf->top__DOT__mngr2proc_msg);
                VL_ASSIGN_W(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__str, vlSelf->top__DOT__DUT__DOT__temp);
                __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__rdy 
                    = vlSelf->top__DOT__mngr2proc_rdy;
                __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__val 
                    = vlSelf->top__DOT__mngr2proc_val;
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1 = 0U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1)))
                                          ? 0U : (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1))))) 
                                        | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1))))))) {
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1 
                        = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1);
                    vlSymsp->__Vcoverage[3632].fetch_add(1, std::memory_order_relaxed);
                }
                if (VL_UNLIKELY(((IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__rdy) 
                                 & (IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__val)))) {
                    VL_ASSIGN_W(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__13__str, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__str);
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__13__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__13__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__13__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__13__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__13__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__13__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[3637].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__rdy) 
                                        & (~ (IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__val))))) {
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__14__num 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1;
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__14__char = 0x20U;
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__14__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__14__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__14__char);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3625].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3626].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[3636].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((~ (IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__rdy)) 
                                        & (IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__val)))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__15__str,0x00000023);
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__15__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__15__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__15__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__15__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__15__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__15__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__16__num 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__16__char = 0x20U;
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__16__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__16__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__16__char);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3625].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3626].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[3635].fetch_add(1, std::memory_order_relaxed);
                } else if ((1U & ((~ (IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__rdy)) 
                                  & (~ (IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__12__val))))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__17__str,0x0000002e);
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__17__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__17__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__17__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__17__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__17__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__17__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__18__num 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__18__char = 0x20U;
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__18__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__18__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__18__char);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3625].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3626].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[3633].fetch_add(1, std::memory_order_relaxed);
                } else {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__19__str,0x00000078);
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__19__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__19__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__19__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__19__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__19__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__19__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__20__num 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__20__char = 0x20U;
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__20__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__20__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__20__char);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3625].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3626].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[3634].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[3638].fetch_add(1, std::memory_order_relaxed);
                VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__21__str,0x0000003e);
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__21__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__21__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                    vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
                }
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                    = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__21__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__21__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                    VL_WRITEF("%c",8,(0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                 ? 0U
                                                 : 
                                                (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__21__str[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xfffU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                               | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__21__str[
                                                  (0x7fU 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
                if (VL_LIKELY(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F)) {
                    if (VL_UNLIKELY(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F)) {
                        VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__22__str,0x0000007e);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__22__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__22__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                            vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                            (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__22__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__22__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            VL_WRITEF("%c",8,(0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                   ? 0U
                                                   : 
                                                  (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__22__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                 | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__22__str[
                                                    (0x7fU 
                                                     & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
                        __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__23__num = 7U;
                        __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__23__char = 0x20U;
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                        while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__23__num)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__23__char);
                            VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__23__char);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3625].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3626].fetch_add(1, std::memory_order_relaxed);
                    } else if (VL_UNLIKELY(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F)) {
                        VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__24__str,0x00000023);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__24__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__24__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                            vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                            (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__24__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__24__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            VL_WRITEF("%c",8,(0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                   ? 0U
                                                   : 
                                                  (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__24__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                 | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__24__str[
                                                    (0x7fU 
                                                     & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
                        __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__25__num = 7U;
                        __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__25__char = 0x20U;
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                        while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__25__num)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__25__char);
                            VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__25__char);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3625].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3626].fetch_add(1, std::memory_order_relaxed);
                    } else {
                        VL_SFORMAT_X(4096,vlSelf->top__DOT__DUT__DOT__str
                                     ,"%x",32,vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F);
                        VL_ASSIGN_W(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__26__str, vlSelf->top__DOT__DUT__DOT__str);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__26__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__26__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                            vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                            (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__26__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__26__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            VL_WRITEF("%c",8,(0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                   ? 0U
                                                   : 
                                                  (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__26__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                 | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__26__str[
                                                    (0x7fU 
                                                     & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
                    }
                } else {
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__27__num = 8U;
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__27__char = 0x20U;
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__27__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__27__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__27__char);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3625].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3626].fetch_add(1, std::memory_order_relaxed);
                }
                VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__28__str,0x0000007c);
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__28__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__28__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                    vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
                }
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                    = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__28__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__28__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                    VL_WRITEF("%c",8,(0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                 ? 0U
                                                 : 
                                                (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__28__str[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xfffU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                               | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__28__str[
                                                  (0x7fU 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
                if (VL_LIKELY(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D)) {
                    if (VL_UNLIKELY(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D)) {
                        VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__29__str,0x0000007e);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__29__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__29__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                            vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                            (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__29__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__29__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            VL_WRITEF("%c",8,(0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                   ? 0U
                                                   : 
                                                  (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__29__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                 | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__29__str[
                                                    (0x7fU 
                                                     & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
                        __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__30__num = 0x16U;
                        __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__30__char = 0x20U;
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                        while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__30__num)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__30__char);
                            VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__30__char);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3625].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3626].fetch_add(1, std::memory_order_relaxed);
                    } else if (VL_UNLIKELY(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D)) {
                        VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__31__str,0x00000023);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__31__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__31__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                            vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                            (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__31__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__31__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            VL_WRITEF("%c",8,(0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                   ? 0U
                                                   : 
                                                  (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__31__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                 | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__31__str[
                                                    (0x7fU 
                                                     & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
                        __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__32__num = 0x16U;
                        __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__32__char = 0x20U;
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                        while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__32__num)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__32__char);
                            VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__32__char);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3625].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3626].fetch_add(1, std::memory_order_relaxed);
                    } else {
                        VL_EXTEND_WW(4096,200, __Vtemp_53, 
                                     ([&]() {
                                    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst 
                                        = vlSelf->top__DOT__DUT__DOT__inst_D;
                                    vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1 
                                        = (0x1fU & 
                                           (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst 
                                            >> 0xfU));
                                    vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2 
                                        = (0x1fU & 
                                           (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst 
                                            >> 0x14U));
                                    vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd 
                                        = (0x1fU & 
                                           (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst 
                                            >> 7U));
                                    vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr 
                                        = (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst 
                                           >> 0x14U);
                                    vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct 
                                        = (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst 
                                           >> 0x19U);
                                    if ((9U >= (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1))) {
                                        VL_SFORMAT_X(24
                                                     ,vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str
                                                     ,"x0%0#",
                                                     5,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1);
                                        vlSymsp->__Vcoverage[3523].fetch_add(1, std::memory_order_relaxed);
                                    } else {
                                        VL_SFORMAT_X(24
                                                     ,vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str
                                                     ,"x%2#",
                                                     5,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1);
                                        vlSymsp->__Vcoverage[3524].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((9U >= (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2))) {
                                        VL_SFORMAT_X(24
                                                     ,vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str
                                                     ,"x0%0#",
                                                     5,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2);
                                        vlSymsp->__Vcoverage[3525].fetch_add(1, std::memory_order_relaxed);
                                    } else {
                                        VL_SFORMAT_X(24
                                                     ,vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str
                                                     ,"x%2#",
                                                     5,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2);
                                        vlSymsp->__Vcoverage[3526].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((9U >= (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd))) {
                                        VL_SFORMAT_X(24
                                                     ,vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str
                                                     ,"x0%0#",
                                                     5,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd);
                                        vlSymsp->__Vcoverage[3527].fetch_add(1, std::memory_order_relaxed);
                                    } else {
                                        VL_SFORMAT_X(24
                                                     ,vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str
                                                     ,"x%2#",
                                                     5,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd);
                                        vlSymsp->__Vcoverage[3528].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((0x7c0U == (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr))) {
                                        VL_SFORMAT_X(72
                                                     ,vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str
                                                     ,"proc2mngr");
                                        vlSymsp->__Vcoverage[3534].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0xfc0U 
                                                == (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr))) {
                                        VL_SFORMAT_X(72
                                                     ,vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str
                                                     ,"mngr2proc");
                                        vlSymsp->__Vcoverage[3533].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0xf14U 
                                                == (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr))) {
                                        VL_SFORMAT_X(72
                                                     ,vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str
                                                     ,"coreid   ");
                                        vlSymsp->__Vcoverage[3532].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0xfc1U 
                                                == (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr))) {
                                        VL_SFORMAT_X(72
                                                     ,vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str
                                                     ,"numcores ");
                                        vlSymsp->__Vcoverage[3531].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x7c1U 
                                                == (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr))) {
                                        VL_SFORMAT_X(72
                                                     ,vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str
                                                     ,"stats_en ");
                                        vlSymsp->__Vcoverage[3529].fetch_add(1, std::memory_order_relaxed);
                                    } else {
                                        VL_SFORMAT_X(72
                                                     ,vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str
                                                     ,"    0x%x",
                                                     12,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr);
                                        vlSymsp->__Vcoverage[3530].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    VL_SFORMAT_X(16
                                                 ,vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str
                                                 ,"%x",
                                                 2,
                                                 (3U 
                                                  & (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct)));
                                    if (((((((((0x2073U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst)) 
                                               | (0x1073U 
                                                  == 
                                                  (0x707fU 
                                                   & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                              | (0x13U 
                                                 == __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst)) 
                                             | (0U 
                                                == __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst)) 
                                            | (0x33U 
                                               == (0xfe00707fU 
                                                   & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                           | (0x40000033U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                          | (0x7033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                         | (0x6033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst)))) {
                                        if ((0x2073U 
                                             == (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"csrr   %s, %s  ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         72,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str.data());
                                            vlSymsp->__Vcoverage[3535].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x1073U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"csrw   %s, %s  ",
                                                         72,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str.data(),
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str);
                                            vlSymsp->__Vcoverage[3536].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x13U 
                                                    == __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst)) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"nop                    ");
                                            vlSymsp->__Vcoverage[3537].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0U 
                                                    == __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst)) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"                       ");
                                            vlSymsp->__Vcoverage[3538].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x33U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"add    %s, %s, %s   ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str);
                                            vlSymsp->__Vcoverage[3539].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"sub    %s, %s, %s   ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str);
                                            vlSymsp->__Vcoverage[3540].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"and    %s, %s, %s   ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str);
                                            vlSymsp->__Vcoverage[3541].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"or     %s, %s, %s   ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str);
                                            vlSymsp->__Vcoverage[3542].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if (((((
                                                   ((((0x4033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst)) 
                                                      | (0x2033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                     | (0x3033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                    | (0x2000033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                   | (0x13U 
                                                      == 
                                                      (0x707fU 
                                                       & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                  | (0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                 | (0x6013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                | (0x4013U 
                                                   == 
                                                   (0x707fU 
                                                    & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst)))) {
                                        if ((0x4033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"xor    %s, %s, %s   ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str);
                                            vlSymsp->__Vcoverage[3543].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x2033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"slt    %s, %s, %s   ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str);
                                            vlSymsp->__Vcoverage[3544].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x3033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"sltu   %s, %s, %s   ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str);
                                            vlSymsp->__Vcoverage[3545].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x2000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"mul    %s, %s, %s   ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str);
                                            vlSymsp->__Vcoverage[3546].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"addi   %s, %s, 0x%x ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         12,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__35__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__35__Vfuncout 
                                                                = 
                                                                (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__35__inst 
                                                                 >> 0x14U);
                                                            vlSymsp->__Vcoverage[3323].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__35__Vfuncout)));
                                            vlSymsp->__Vcoverage[3547].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"andi   %s, %s, 0x%x ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         12,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__36__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__36__Vfuncout 
                                                                = 
                                                                (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__36__inst 
                                                                 >> 0x14U);
                                                            vlSymsp->__Vcoverage[3323].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__36__Vfuncout)));
                                            vlSymsp->__Vcoverage[3548].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x6013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"ori    %s, %s, 0x%x ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         12,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__37__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__37__Vfuncout 
                                                                = 
                                                                (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__37__inst 
                                                                 >> 0x14U);
                                                            vlSymsp->__Vcoverage[3323].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__37__Vfuncout)));
                                            vlSymsp->__Vcoverage[3549].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"xori   %s, %s, 0x%x ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         12,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__38__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__38__Vfuncout 
                                                                = 
                                                                (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__38__inst 
                                                                 >> 0x14U);
                                                            vlSymsp->__Vcoverage[3323].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__38__Vfuncout)));
                                            vlSymsp->__Vcoverage[3550].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if (((((
                                                   ((((0x2013U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst)) 
                                                      | (0x3013U 
                                                         == 
                                                         (0x707fU 
                                                          & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                     | (0x40005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                    | (0x5033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                   | (0x1033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                  | (0x40005013U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                 | (0x5013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                | (0x1013U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst)))) {
                                        if ((0x2013U 
                                             == (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"slti   %s, %s, 0x%x ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         12,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__39__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__39__Vfuncout 
                                                                = 
                                                                (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__39__inst 
                                                                 >> 0x14U);
                                                            vlSymsp->__Vcoverage[3323].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__39__Vfuncout)));
                                            vlSymsp->__Vcoverage[3551].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x3013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"sltiu  %s, %s, 0x%x ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         12,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__40__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__40__Vfuncout 
                                                                = 
                                                                (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__40__inst 
                                                                 >> 0x14U);
                                                            vlSymsp->__Vcoverage[3323].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__40__Vfuncout)));
                                            vlSymsp->__Vcoverage[3552].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"sra    %s, %s, 0x%x  ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         5,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__41__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__41__Vfuncout 
                                                                = 
                                                                (0x1fU 
                                                                 & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__41__inst 
                                                                    >> 0x14U));
                                                            vlSymsp->__Vcoverage[3324].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__41__Vfuncout)));
                                            vlSymsp->__Vcoverage[3553].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"srl    %s, %s, 0x%x  ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         5,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__42__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__42__Vfuncout 
                                                                = 
                                                                (0x1fU 
                                                                 & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__42__inst 
                                                                    >> 0x14U));
                                                            vlSymsp->__Vcoverage[3324].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__42__Vfuncout)));
                                            vlSymsp->__Vcoverage[3554].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x1033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"sll    %s, %s, 0x%x  ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         5,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__43__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__43__Vfuncout 
                                                                = 
                                                                (0x1fU 
                                                                 & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__43__inst 
                                                                    >> 0x14U));
                                                            vlSymsp->__Vcoverage[3324].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__43__Vfuncout)));
                                            vlSymsp->__Vcoverage[3555].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x40005013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"srai   %s, %s, 0x%x  ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         5,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__44__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__44__Vfuncout 
                                                                = 
                                                                (0x1fU 
                                                                 & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__44__inst 
                                                                    >> 0x14U));
                                                            vlSymsp->__Vcoverage[3324].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__44__Vfuncout)));
                                            vlSymsp->__Vcoverage[3556].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x5013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"srli   %s, %s, 0x%x  ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         5,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__45__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__45__Vfuncout 
                                                                = 
                                                                (0x1fU 
                                                                 & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__45__inst 
                                                                    >> 0x14U));
                                                            vlSymsp->__Vcoverage[3324].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__45__Vfuncout)));
                                            vlSymsp->__Vcoverage[3557].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"slli   %s, %s, 0x%x  ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         5,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__46__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__46__Vfuncout 
                                                                = 
                                                                (0x1fU 
                                                                 & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__46__inst 
                                                                    >> 0x14U));
                                                            vlSymsp->__Vcoverage[3324].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_shamt__46__Vfuncout)));
                                            vlSymsp->__Vcoverage[3558].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if (((((
                                                   ((((0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst)) 
                                                      | (0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                     | (0x2003U 
                                                        == 
                                                        (0x707fU 
                                                         & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                    | (0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                   | (0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                  | (0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                 | (0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) 
                                                | (0x1063U 
                                                   == 
                                                   (0x707fU 
                                                    & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst)))) {
                                        if ((0x37U 
                                             == (0x7fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"lui    %s, 0x%x    ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         20,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__47__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__47__Vfuncout 
                                                                = 
                                                                (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__47__inst 
                                                                 >> 0xcU);
                                                            vlSymsp->__Vcoverage[3327].fetch_add(1, std::memory_order_relaxed);
                                                        }(), __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__47__Vfuncout));
                                            vlSymsp->__Vcoverage[3559].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"auipc  %s, 0x%x    ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         20,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__48__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__48__Vfuncout 
                                                                = 
                                                                (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__48__inst 
                                                                 >> 0xcU);
                                                            vlSymsp->__Vcoverage[3327].fetch_add(1, std::memory_order_relaxed);
                                                        }(), __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_u_sh12__48__Vfuncout));
                                            vlSymsp->__Vcoverage[3560].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"lw     %s, 0x%x(%s) ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         12,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__49__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__49__Vfuncout 
                                                                = 
                                                                (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__49__inst 
                                                                 >> 0x14U);
                                                            vlSymsp->__Vcoverage[3323].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__49__Vfuncout)),
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str);
                                            vlSymsp->__Vcoverage[3561].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"sw     %s, 0x%x(%s) ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str,
                                                         12,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_s__50__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_s__50__Vfuncout 
                                                                = 
                                                                ((0xfe0U 
                                                                  & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_s__50__inst 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_s__50__inst 
                                                                       >> 7U)));
                                                            vlSymsp->__Vcoverage[3325].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_s__50__Vfuncout)),
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str);
                                            vlSymsp->__Vcoverage[3562].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"jal    %s, 0x%x   ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         21,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_j__51__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_j__51__Vfuncout 
                                                                = 
                                                                ((0x100000U 
                                                                  & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_j__51__inst 
                                                                     >> 0xbU)) 
                                                                 | ((0xff000U 
                                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_j__51__inst) 
                                                                    | ((0x800U 
                                                                        & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_j__51__inst 
                                                                           >> 9U)) 
                                                                       | ((0x7e0U 
                                                                           & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_j__51__inst 
                                                                              >> 0x14U)) 
                                                                          | (0x1eU 
                                                                             & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_j__51__inst 
                                                                                >> 0x14U))))));
                                                            vlSymsp->__Vcoverage[3328].fetch_add(1, std::memory_order_relaxed);
                                                        }(), __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_j__51__Vfuncout));
                                            vlSymsp->__Vcoverage[3563].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"jalr   %s, %s, 0x%x ",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         12,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__52__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__52__Vfuncout 
                                                                = 
                                                                (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__52__inst 
                                                                 >> 0x14U);
                                                            vlSymsp->__Vcoverage[3323].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_i__52__Vfuncout)));
                                            vlSymsp->__Vcoverage[3564].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"beq    %s, %s, 0x%x",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str,
                                                         13,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__53__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__53__Vfuncout 
                                                                = 
                                                                ((0x1000U 
                                                                  & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__53__inst 
                                                                     >> 0x13U)) 
                                                                 | ((0x800U 
                                                                     & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__53__inst 
                                                                        << 4U)) 
                                                                    | ((0x7e0U 
                                                                        & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__53__inst 
                                                                           >> 0x14U)) 
                                                                       | (0x1eU 
                                                                          & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__53__inst 
                                                                             >> 7U)))));
                                                            vlSymsp->__Vcoverage[3326].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__53__Vfuncout)));
                                            vlSymsp->__Vcoverage[3565].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            VL_SFORMAT_X(200
                                                         ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                         ,"bne    %s, %s, 0x%x",
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                         24,
                                                         vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str,
                                                         13,
                                                         ([&]() {
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__54__inst 
                                                                = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__54__Vfuncout 
                                                                = 
                                                                ((0x1000U 
                                                                  & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__54__inst 
                                                                     >> 0x13U)) 
                                                                 | ((0x800U 
                                                                     & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__54__inst 
                                                                        << 4U)) 
                                                                    | ((0x7e0U 
                                                                        & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__54__inst 
                                                                           >> 0x14U)) 
                                                                       | (0x1eU 
                                                                          & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__54__inst 
                                                                             >> 7U)))));
                                                            vlSymsp->__Vcoverage[3326].fetch_add(1, std::memory_order_relaxed);
                                                        }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__54__Vfuncout)));
                                            vlSymsp->__Vcoverage[3566].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if ((0x4063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                     ,"blt    %s, %s, 0x%x",
                                                     24,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                     24,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str,
                                                     13,
                                                     ([&]() {
                                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__55__inst 
                                                            = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__55__Vfuncout 
                                                            = 
                                                            ((0x1000U 
                                                              & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__55__inst 
                                                                 >> 0x13U)) 
                                                             | ((0x800U 
                                                                 & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__55__inst 
                                                                    << 4U)) 
                                                                | ((0x7e0U 
                                                                    & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__55__inst 
                                                                       >> 0x14U)) 
                                                                   | (0x1eU 
                                                                      & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__55__inst 
                                                                         >> 7U)))));
                                                        vlSymsp->__Vcoverage[3326].fetch_add(1, std::memory_order_relaxed);
                                                    }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__55__Vfuncout)));
                                        vlSymsp->__Vcoverage[3567].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x5063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                     ,"bge    %s, %s, 0x%x",
                                                     24,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                     24,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str,
                                                     13,
                                                     ([&]() {
                                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__56__inst 
                                                            = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__56__Vfuncout 
                                                            = 
                                                            ((0x1000U 
                                                              & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__56__inst 
                                                                 >> 0x13U)) 
                                                             | ((0x800U 
                                                                 & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__56__inst 
                                                                    << 4U)) 
                                                                | ((0x7e0U 
                                                                    & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__56__inst 
                                                                       >> 0x14U)) 
                                                                   | (0x1eU 
                                                                      & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__56__inst 
                                                                         >> 7U)))));
                                                        vlSymsp->__Vcoverage[3326].fetch_add(1, std::memory_order_relaxed);
                                                    }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__56__Vfuncout)));
                                        vlSymsp->__Vcoverage[3568].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x6063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                     ,"bltu   %s, %s, 0x%x",
                                                     24,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                     24,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str,
                                                     13,
                                                     ([&]() {
                                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__57__inst 
                                                            = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__57__Vfuncout 
                                                            = 
                                                            ((0x1000U 
                                                              & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__57__inst 
                                                                 >> 0x13U)) 
                                                             | ((0x800U 
                                                                 & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__57__inst 
                                                                    << 4U)) 
                                                                | ((0x7e0U 
                                                                    & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__57__inst 
                                                                       >> 0x14U)) 
                                                                   | (0x1eU 
                                                                      & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__57__inst 
                                                                         >> 7U)))));
                                                        vlSymsp->__Vcoverage[3326].fetch_add(1, std::memory_order_relaxed);
                                                    }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__57__Vfuncout)));
                                        vlSymsp->__Vcoverage[3569].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x7063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                     ,"bgeu   %s, %s, 0x%x",
                                                     24,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                     24,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str,
                                                     13,
                                                     ([&]() {
                                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__58__inst 
                                                            = __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst;
                                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__58__Vfuncout 
                                                            = 
                                                            ((0x1000U 
                                                              & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__58__inst 
                                                                 >> 0x13U)) 
                                                             | ((0x800U 
                                                                 & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__58__inst 
                                                                    << 4U)) 
                                                                | ((0x7e0U 
                                                                    & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__58__inst 
                                                                       >> 0x14U)) 
                                                                   | (0x1eU 
                                                                      & (__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__58__inst 
                                                                         >> 7U)))));
                                                        vlSymsp->__Vcoverage[3326].fetch_add(1, std::memory_order_relaxed);
                                                    }(), (IData)(__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__imm_b__58__Vfuncout)));
                                        vlSymsp->__Vcoverage[3570].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0xbU 
                                                == 
                                                (0x7fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__inst))) {
                                        VL_SFORMAT_X(200
                                                     ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                     ,"cust0 %s, %s, %s, %s",
                                                     24,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str,
                                                     24,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str,
                                                     24,
                                                     vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str,
                                                     16,
                                                     (IData)(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str));
                                        vlSymsp->__Vcoverage[3571].fetch_add(1, std::memory_order_relaxed);
                                    } else {
                                        VL_SFORMAT_X(200
                                                     ,__Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout
                                                     ,"illegal inst           ");
                                        vlSymsp->__Vcoverage[3572].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    vlSymsp->__Vcoverage[3573].fetch_add(1, std::memory_order_relaxed);
                                }(), __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm__34__Vfuncout));
                        VL_ASSIGN_W(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__33__str, __Vtemp_53);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__33__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__33__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                            vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                            (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__33__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__33__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            VL_WRITEF("%c",8,(0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                   ? 0U
                                                   : 
                                                  (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__33__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                 | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__33__str[
                                                    (0x7fU 
                                                     & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
                    }
                } else {
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__59__num = 0x17U;
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__59__char = 0x20U;
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__59__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__59__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__59__char);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3625].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3626].fetch_add(1, std::memory_order_relaxed);
                }
                VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__60__str,0x0000007c);
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__60__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__60__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                    vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
                }
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                    = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__60__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__60__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                    VL_WRITEF("%c",8,(0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                 ? 0U
                                                 : 
                                                (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__60__str[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xfffU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                               | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__60__str[
                                                  (0x7fU 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
                if (VL_LIKELY(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X)) {
                    if (VL_UNLIKELY(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X)) {
                        VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__61__str,0x00000023);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__61__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__61__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                            vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                            (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__61__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__61__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            VL_WRITEF("%c",8,(0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                   ? 0U
                                                   : 
                                                  (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__61__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                 | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__61__str[
                                                    (0x7fU 
                                                     & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
                        __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__62__num = 3U;
                        __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__62__char = 0x20U;
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                        while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__62__num)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__62__char);
                            VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__62__char);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3625].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3626].fetch_add(1, std::memory_order_relaxed);
                    } else {
                        VL_EXTEND_WI(4096,32, __Vtemp_67, 
                                     ([&]() {
                                    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst 
                                        = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X;
                                    if (((((((((0x2073U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst)) 
                                               | (0x1073U 
                                                  == 
                                                  (0x707fU 
                                                   & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                              | (0x13U 
                                                 == __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst)) 
                                             | (0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                            | (0x40000033U 
                                               == (0xfe00707fU 
                                                   & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                           | (0x7033U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                          | (0x6033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                         | (0x4033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst)))) {
                                        if ((0x2073U 
                                             == (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x63737272U;
                                            vlSymsp->__Vcoverage[3574].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x1073U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x63737277U;
                                            vlSymsp->__Vcoverage[3575].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x13U 
                                                    == __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst)) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x6e6f7020U;
                                            vlSymsp->__Vcoverage[3576].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x33U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x61646420U;
                                            vlSymsp->__Vcoverage[3577].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x73756220U;
                                            vlSymsp->__Vcoverage[3578].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x616e6420U;
                                            vlSymsp->__Vcoverage[3579].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x6033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x6f722020U;
                                            vlSymsp->__Vcoverage[3580].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x786f7220U;
                                            vlSymsp->__Vcoverage[3581].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if (((((
                                                   ((((0x2033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst)) 
                                                      | (0x3033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                     | (0x2000033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                    | (0x13U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                   | (0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                  | (0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                 | (0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                | (0x2013U 
                                                   == 
                                                   (0x707fU 
                                                    & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst)))) {
                                        if ((0x2033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x736c7420U;
                                            vlSymsp->__Vcoverage[3582].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x3033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x736c7475U;
                                            vlSymsp->__Vcoverage[3583].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x2000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x6d756c20U;
                                            vlSymsp->__Vcoverage[3584].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x61646469U;
                                            vlSymsp->__Vcoverage[3585].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x616e6469U;
                                            vlSymsp->__Vcoverage[3586].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x6013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x6f726920U;
                                            vlSymsp->__Vcoverage[3587].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x786f7269U;
                                            vlSymsp->__Vcoverage[3588].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x736c7469U;
                                            vlSymsp->__Vcoverage[3589].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if (((((
                                                   ((((0x3013U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst)) 
                                                      | (0x40005033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                     | (0x5033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                    | (0x1033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                   | (0x40005013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                  | (0x5013U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                 | (0x1013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                | (0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst)))) {
                                        if ((0x3013U 
                                             == (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x736c7449U;
                                            vlSymsp->__Vcoverage[3590].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x73726120U;
                                            vlSymsp->__Vcoverage[3591].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x73726c20U;
                                            vlSymsp->__Vcoverage[3592].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x1033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x736c6c20U;
                                            vlSymsp->__Vcoverage[3593].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x40005013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x73726169U;
                                            vlSymsp->__Vcoverage[3594].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x5013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x73726c69U;
                                            vlSymsp->__Vcoverage[3595].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x1013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x736c6c69U;
                                            vlSymsp->__Vcoverage[3596].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x6c756920U;
                                            vlSymsp->__Vcoverage[3597].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if (((((
                                                   ((((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst)) 
                                                      | (0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                     | (0x2023U 
                                                        == 
                                                        (0x707fU 
                                                         & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                    | (0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                   | (0x67U 
                                                      == 
                                                      (0x707fU 
                                                       & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                  | (0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                 | (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) 
                                                | (0x4063U 
                                                   == 
                                                   (0x707fU 
                                                    & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst)))) {
                                        if ((0x17U 
                                             == (0x7fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x61756950U;
                                            vlSymsp->__Vcoverage[3598].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x6c772020U;
                                            vlSymsp->__Vcoverage[3599].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x73772020U;
                                            vlSymsp->__Vcoverage[3600].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x6a616c20U;
                                            vlSymsp->__Vcoverage[3601].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x6a616c72U;
                                            vlSymsp->__Vcoverage[3602].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x62657120U;
                                            vlSymsp->__Vcoverage[3603].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x626e6520U;
                                            vlSymsp->__Vcoverage[3604].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x626c7420U;
                                            vlSymsp->__Vcoverage[3605].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if ((0x5063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x62676520U;
                                        vlSymsp->__Vcoverage[3606].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x6063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x626c7475U;
                                        vlSymsp->__Vcoverage[3607].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x7063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x62676575U;
                                        vlSymsp->__Vcoverage[3608].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0xbU 
                                                == 
                                                (0x7fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__inst))) {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x63757330U;
                                        vlSymsp->__Vcoverage[3609].fetch_add(1, std::memory_order_relaxed);
                                    } else {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout = 0x3f3f3f3fU;
                                        vlSymsp->__Vcoverage[3610].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    vlSymsp->__Vcoverage[3611].fetch_add(1, std::memory_order_relaxed);
                                }(), __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__64__Vfuncout));
                        VL_ASSIGN_W(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__63__str, __Vtemp_67);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__63__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__63__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                            vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                            (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__63__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__63__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            VL_WRITEF("%c",8,(0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                   ? 0U
                                                   : 
                                                  (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__63__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                 | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__63__str[
                                                    (0x7fU 
                                                     & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
                    }
                } else {
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__65__num = 4U;
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__65__char = 0x20U;
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__65__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__65__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__65__char);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3625].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3626].fetch_add(1, std::memory_order_relaxed);
                }
                VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__66__str,0x0000007c);
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__66__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__66__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                    vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
                }
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                    = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__66__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__66__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                    VL_WRITEF("%c",8,(0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                 ? 0U
                                                 : 
                                                (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__66__str[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xfffU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                               | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__66__str[
                                                  (0x7fU 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
                if (VL_LIKELY(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M)) {
                    if (VL_UNLIKELY(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M)) {
                        VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__67__str,0x00000023);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__67__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__67__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                            vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                            (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__67__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__67__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            VL_WRITEF("%c",8,(0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                   ? 0U
                                                   : 
                                                  (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__67__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                 | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__67__str[
                                                    (0x7fU 
                                                     & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
                        __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__68__num = 3U;
                        __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__68__char = 0x20U;
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                        while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__68__num)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__68__char);
                            VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__68__char);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3625].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3626].fetch_add(1, std::memory_order_relaxed);
                    } else {
                        VL_EXTEND_WI(4096,32, __Vtemp_81, 
                                     ([&]() {
                                    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst 
                                        = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M;
                                    if (((((((((0x2073U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst)) 
                                               | (0x1073U 
                                                  == 
                                                  (0x707fU 
                                                   & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                              | (0x13U 
                                                 == __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst)) 
                                             | (0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                            | (0x40000033U 
                                               == (0xfe00707fU 
                                                   & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                           | (0x7033U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                          | (0x6033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                         | (0x4033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst)))) {
                                        if ((0x2073U 
                                             == (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x63737272U;
                                            vlSymsp->__Vcoverage[3574].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x1073U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x63737277U;
                                            vlSymsp->__Vcoverage[3575].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x13U 
                                                    == __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst)) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x6e6f7020U;
                                            vlSymsp->__Vcoverage[3576].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x33U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x61646420U;
                                            vlSymsp->__Vcoverage[3577].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x73756220U;
                                            vlSymsp->__Vcoverage[3578].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x616e6420U;
                                            vlSymsp->__Vcoverage[3579].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x6033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x6f722020U;
                                            vlSymsp->__Vcoverage[3580].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x786f7220U;
                                            vlSymsp->__Vcoverage[3581].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if (((((
                                                   ((((0x2033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst)) 
                                                      | (0x3033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                     | (0x2000033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                    | (0x13U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                   | (0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                  | (0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                 | (0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                | (0x2013U 
                                                   == 
                                                   (0x707fU 
                                                    & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst)))) {
                                        if ((0x2033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x736c7420U;
                                            vlSymsp->__Vcoverage[3582].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x3033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x736c7475U;
                                            vlSymsp->__Vcoverage[3583].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x2000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x6d756c20U;
                                            vlSymsp->__Vcoverage[3584].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x61646469U;
                                            vlSymsp->__Vcoverage[3585].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x616e6469U;
                                            vlSymsp->__Vcoverage[3586].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x6013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x6f726920U;
                                            vlSymsp->__Vcoverage[3587].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x786f7269U;
                                            vlSymsp->__Vcoverage[3588].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x736c7469U;
                                            vlSymsp->__Vcoverage[3589].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if (((((
                                                   ((((0x3013U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst)) 
                                                      | (0x40005033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                     | (0x5033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                    | (0x1033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                   | (0x40005013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                  | (0x5013U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                 | (0x1013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                | (0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst)))) {
                                        if ((0x3013U 
                                             == (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x736c7449U;
                                            vlSymsp->__Vcoverage[3590].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x73726120U;
                                            vlSymsp->__Vcoverage[3591].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x73726c20U;
                                            vlSymsp->__Vcoverage[3592].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x1033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x736c6c20U;
                                            vlSymsp->__Vcoverage[3593].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x40005013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x73726169U;
                                            vlSymsp->__Vcoverage[3594].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x5013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x73726c69U;
                                            vlSymsp->__Vcoverage[3595].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x1013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x736c6c69U;
                                            vlSymsp->__Vcoverage[3596].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x6c756920U;
                                            vlSymsp->__Vcoverage[3597].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if (((((
                                                   ((((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst)) 
                                                      | (0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                     | (0x2023U 
                                                        == 
                                                        (0x707fU 
                                                         & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                    | (0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                   | (0x67U 
                                                      == 
                                                      (0x707fU 
                                                       & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                  | (0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                 | (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) 
                                                | (0x4063U 
                                                   == 
                                                   (0x707fU 
                                                    & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst)))) {
                                        if ((0x17U 
                                             == (0x7fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x61756950U;
                                            vlSymsp->__Vcoverage[3598].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x6c772020U;
                                            vlSymsp->__Vcoverage[3599].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x73772020U;
                                            vlSymsp->__Vcoverage[3600].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x6a616c20U;
                                            vlSymsp->__Vcoverage[3601].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x6a616c72U;
                                            vlSymsp->__Vcoverage[3602].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x62657120U;
                                            vlSymsp->__Vcoverage[3603].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x626e6520U;
                                            vlSymsp->__Vcoverage[3604].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x626c7420U;
                                            vlSymsp->__Vcoverage[3605].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if ((0x5063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x62676520U;
                                        vlSymsp->__Vcoverage[3606].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x6063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x626c7475U;
                                        vlSymsp->__Vcoverage[3607].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x7063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x62676575U;
                                        vlSymsp->__Vcoverage[3608].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0xbU 
                                                == 
                                                (0x7fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__inst))) {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x63757330U;
                                        vlSymsp->__Vcoverage[3609].fetch_add(1, std::memory_order_relaxed);
                                    } else {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout = 0x3f3f3f3fU;
                                        vlSymsp->__Vcoverage[3610].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    vlSymsp->__Vcoverage[3611].fetch_add(1, std::memory_order_relaxed);
                                }(), __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__70__Vfuncout));
                        VL_ASSIGN_W(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__69__str, __Vtemp_81);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__69__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__69__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                            vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                            (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__69__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__69__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            VL_WRITEF("%c",8,(0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                   ? 0U
                                                   : 
                                                  (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__69__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                 | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__69__str[
                                                    (0x7fU 
                                                     & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
                    }
                } else {
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__71__num = 4U;
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__71__char = 0x20U;
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__71__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__71__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__71__char);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3625].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3626].fetch_add(1, std::memory_order_relaxed);
                }
                VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__72__str,0x0000007c);
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__72__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__72__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                    vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
                }
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                    = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__72__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__72__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                    VL_WRITEF("%c",8,(0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                 ? 0U
                                                 : 
                                                (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__72__str[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xfffU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                               | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__72__str[
                                                  (0x7fU 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
                if (VL_LIKELY(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W)) {
                    if (VL_UNLIKELY(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W)) {
                        VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__73__str,0x00000023);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__73__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__73__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                            vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                            (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__73__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__73__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            VL_WRITEF("%c",8,(0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                   ? 0U
                                                   : 
                                                  (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__73__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                 | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__73__str[
                                                    (0x7fU 
                                                     & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
                        __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__74__num = 3U;
                        __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__74__char = 0x20U;
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                        while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__74__num)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__74__char);
                            VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__74__char);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3625].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3626].fetch_add(1, std::memory_order_relaxed);
                    } else {
                        VL_EXTEND_WI(4096,32, __Vtemp_95, 
                                     ([&]() {
                                    __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst 
                                        = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W;
                                    if (((((((((0x2073U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst)) 
                                               | (0x1073U 
                                                  == 
                                                  (0x707fU 
                                                   & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                              | (0x13U 
                                                 == __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst)) 
                                             | (0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                            | (0x40000033U 
                                               == (0xfe00707fU 
                                                   & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                           | (0x7033U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                          | (0x6033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                         | (0x4033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst)))) {
                                        if ((0x2073U 
                                             == (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x63737272U;
                                            vlSymsp->__Vcoverage[3574].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x1073U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x63737277U;
                                            vlSymsp->__Vcoverage[3575].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x13U 
                                                    == __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst)) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x6e6f7020U;
                                            vlSymsp->__Vcoverage[3576].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x33U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x61646420U;
                                            vlSymsp->__Vcoverage[3577].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x73756220U;
                                            vlSymsp->__Vcoverage[3578].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x616e6420U;
                                            vlSymsp->__Vcoverage[3579].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x6033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x6f722020U;
                                            vlSymsp->__Vcoverage[3580].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x786f7220U;
                                            vlSymsp->__Vcoverage[3581].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if (((((
                                                   ((((0x2033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst)) 
                                                      | (0x3033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                     | (0x2000033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                    | (0x13U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                   | (0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                  | (0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                 | (0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                | (0x2013U 
                                                   == 
                                                   (0x707fU 
                                                    & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst)))) {
                                        if ((0x2033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x736c7420U;
                                            vlSymsp->__Vcoverage[3582].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x3033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x736c7475U;
                                            vlSymsp->__Vcoverage[3583].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x2000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x6d756c20U;
                                            vlSymsp->__Vcoverage[3584].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x61646469U;
                                            vlSymsp->__Vcoverage[3585].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x616e6469U;
                                            vlSymsp->__Vcoverage[3586].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x6013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x6f726920U;
                                            vlSymsp->__Vcoverage[3587].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x786f7269U;
                                            vlSymsp->__Vcoverage[3588].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x736c7469U;
                                            vlSymsp->__Vcoverage[3589].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if (((((
                                                   ((((0x3013U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst)) 
                                                      | (0x40005033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                     | (0x5033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                    | (0x1033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                   | (0x40005013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                  | (0x5013U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                 | (0x1013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                | (0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst)))) {
                                        if ((0x3013U 
                                             == (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x736c7449U;
                                            vlSymsp->__Vcoverage[3590].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x73726120U;
                                            vlSymsp->__Vcoverage[3591].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x73726c20U;
                                            vlSymsp->__Vcoverage[3592].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x1033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x736c6c20U;
                                            vlSymsp->__Vcoverage[3593].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x40005013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x73726169U;
                                            vlSymsp->__Vcoverage[3594].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x5013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x73726c69U;
                                            vlSymsp->__Vcoverage[3595].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x1013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x736c6c69U;
                                            vlSymsp->__Vcoverage[3596].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x6c756920U;
                                            vlSymsp->__Vcoverage[3597].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if (((((
                                                   ((((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst)) 
                                                      | (0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                     | (0x2023U 
                                                        == 
                                                        (0x707fU 
                                                         & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                    | (0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                   | (0x67U 
                                                      == 
                                                      (0x707fU 
                                                       & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                  | (0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                 | (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) 
                                                | (0x4063U 
                                                   == 
                                                   (0x707fU 
                                                    & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst)))) {
                                        if ((0x17U 
                                             == (0x7fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x61756950U;
                                            vlSymsp->__Vcoverage[3598].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x6c772020U;
                                            vlSymsp->__Vcoverage[3599].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x73772020U;
                                            vlSymsp->__Vcoverage[3600].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x6a616c20U;
                                            vlSymsp->__Vcoverage[3601].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x6a616c72U;
                                            vlSymsp->__Vcoverage[3602].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x62657120U;
                                            vlSymsp->__Vcoverage[3603].fetch_add(1, std::memory_order_relaxed);
                                        } else if (
                                                   (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x626e6520U;
                                            vlSymsp->__Vcoverage[3604].fetch_add(1, std::memory_order_relaxed);
                                        } else {
                                            __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x626c7420U;
                                            vlSymsp->__Vcoverage[3605].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    } else if ((0x5063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x62676520U;
                                        vlSymsp->__Vcoverage[3606].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x6063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x626c7475U;
                                        vlSymsp->__Vcoverage[3607].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0x7063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x62676575U;
                                        vlSymsp->__Vcoverage[3608].fetch_add(1, std::memory_order_relaxed);
                                    } else if ((0xbU 
                                                == 
                                                (0x7fU 
                                                 & __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__inst))) {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x63757330U;
                                        vlSymsp->__Vcoverage[3609].fetch_add(1, std::memory_order_relaxed);
                                    } else {
                                        __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout = 0x3f3f3f3fU;
                                        vlSymsp->__Vcoverage[3610].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    vlSymsp->__Vcoverage[3611].fetch_add(1, std::memory_order_relaxed);
                                }(), __Vfunc_top__DOT__DUT__DOT__tinyrv2__DOT__disasm_tiny__76__Vfuncout));
                        VL_ASSIGN_W(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__75__str, __Vtemp_95);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__75__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__75__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                            vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                            (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__75__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__75__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            VL_WRITEF("%c",8,(0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                   ? 0U
                                                   : 
                                                  (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__75__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                 | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__75__str[
                                                    (0x7fU 
                                                     & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
                    }
                } else {
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__77__num = 4U;
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__77__char = 0x20U;
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__77__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__77__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__77__char);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3625].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3626].fetch_add(1, std::memory_order_relaxed);
                }
                VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__78__str,0x0000003e);
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__78__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__78__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                    vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
                }
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                    = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__78__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__78__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                    VL_WRITEF("%c",8,(0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                 ? 0U
                                                 : 
                                                (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__78__str[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xfffU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                               | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__78__str[
                                                  (0x7fU 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
                VL_SFORMAT_X(4096,vlSelf->top__DOT__DUT__DOT__temp
                             ,"%x",32,vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W);
                VL_ASSIGN_W(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__str, vlSelf->top__DOT__DUT__DOT__temp);
                __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__rdy 
                    = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
                __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__val 
                    = vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_val;
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1 = 0U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1)))
                                          ? 0U : (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1))))) 
                                        | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1))))))) {
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1 
                        = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1);
                    vlSymsp->__Vcoverage[3632].fetch_add(1, std::memory_order_relaxed);
                }
                if (VL_UNLIKELY(((IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__rdy) 
                                 & (IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__val)))) {
                    VL_ASSIGN_W(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__80__str, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__str);
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__80__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__80__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__80__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__80__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__80__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__80__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[3637].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__rdy) 
                                        & (~ (IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__val))))) {
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__81__num 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1;
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__81__char = 0x20U;
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__81__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__81__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__81__char);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3625].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3626].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[3636].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((~ (IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__rdy)) 
                                        & (IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__val)))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__82__str,0x00000023);
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__82__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__82__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__82__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__82__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__82__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__82__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__83__num 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__83__char = 0x20U;
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__83__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__83__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__83__char);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3625].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3626].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[3635].fetch_add(1, std::memory_order_relaxed);
                } else if ((1U & ((~ (IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__rdy)) 
                                  & (~ (IData)(__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_val_rdy_str__79__val))))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__84__str,0x0000002e);
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__84__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__84__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__84__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__84__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__84__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__84__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__85__num 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__85__char = 0x20U;
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__85__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__85__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__85__char);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3625].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3626].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[3633].fetch_add(1, std::memory_order_relaxed);
                } else {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__86__str,0x00000078);
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__86__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__86__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__86__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__86__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__86__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_str__86__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__87__num 
                        = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__87__char = 0x20U;
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__87__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__87__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__DUT__DOT__vc_trace__DOT__append_chars__87__char);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[3625].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[3626].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[3634].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[3638].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__DUT__DOT__idx0 = vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0;
                vlSelf->top__DOT__DUT__DOT__idx1 = 0x1ffU;
                while (VL_GTS_III(32, vlSelf->top__DOT__DUT__DOT__idx1, vlSelf->top__DOT__DUT__DOT__idx0)) {
                    vlSelf->top__DOT__DUT__DOT__idx1 
                        = (vlSelf->top__DOT__DUT__DOT__idx1 
                           - (IData)(1U));
                }
                VL_WRITEF("\n");
            }
            vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__cycles_next 
                = ((IData)(1U) + vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__cycles);
            vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
    }
    VL_STOP_MT("tb_Proc.v", 296, "");
    vlSelf->__Vm_traceActivity[3U] = 1U;
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
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSelf->clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    if (vlSelf->top__DOT__mem_clear) {
        vlSymsp->__Vcoverage[4838].fetch_add(1, std::memory_order_relaxed);
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared) {
            vlSymsp->__Vcoverage[4816].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared)))) {
            vlSymsp->__Vcoverage[4815].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem_clear)))) {
        if (vlSelf->top__DOT__reset) {
            vlSymsp->__Vcoverage[4837].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
            if (vlSelf->top__DOT__reset) {
                vlSymsp->__Vcoverage[4836].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
                vlSymsp->__Vcoverage[4835].fetch_add(1, std::memory_order_relaxed);
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M)))) {
                    vlSymsp->__Vcoverage[4828].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M)))) {
                    vlSymsp->__Vcoverage[4822].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M) {
                    vlSymsp->__Vcoverage[4821].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M) {
                    vlSymsp->__Vcoverage[4827].fetch_add(1, std::memory_order_relaxed);
                    if ((3U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        if ((4U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            if ((5U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[4826].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((5U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[4825].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            vlSymsp->__Vcoverage[4824].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((3U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        vlSymsp->__Vcoverage[4823].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M)))) {
                    vlSymsp->__Vcoverage[4819].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M) {
                    vlSymsp->__Vcoverage[4818].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M) {
                    vlSymsp->__Vcoverage[4833].fetch_add(1, std::memory_order_relaxed);
                    if ((3U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        vlSymsp->__Vcoverage[4829].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((3U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        if ((4U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            if ((5U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[4832].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((5U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[4831].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            vlSymsp->__Vcoverage[4830].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M)))) {
                    vlSymsp->__Vcoverage[4834].fetch_add(1, std::memory_order_relaxed);
                }
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
        vlSymsp->__Vcoverage[4665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)))) {
        vlSymsp->__Vcoverage[4666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset)));
    }
    vlSelf->top__DOT__src__DOT__src__DOT__done_next 
        = ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
           == (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max));
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
        vlSymsp->__Vcoverage[4639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xffeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xffdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xffbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xff7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xfefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xfdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xfbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xf7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xeffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xdffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xbffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[4650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0x7ffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    __Vilp = 0x531U;
    while ((__Vilp <= 0xfffU)) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[__Vilp] 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__m
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x530U)) {
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
                vlSymsp->__Vcoverage[4814].fetch_add(1, std::memory_order_relaxed);
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
                vlSymsp->__Vcoverage[4817].fetch_add(1, std::memory_order_relaxed);
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
                vlSymsp->__Vcoverage[4820].fetch_add(1, std::memory_order_relaxed);
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

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__snk_done = ((~ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg)) 
                                  & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index) 
                                     == (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
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
    vlSelf->top__DOT__sink__DOT__sink__DOT__index_en 
        = ((IData)(vlSelf->top__DOT__sink__DOT__sink_val) 
           & (IData)(vlSelf->top__DOT__sink__DOT__sink_rdy));
    vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__proc2mngr_val) 
           & ((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
              & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_en) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_en))) {
        vlSymsp->__Vcoverage[813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_en 
            = vlSelf->top__DOT__sink__DOT__sink__DOT__index_en;
    }
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
            vlSelf->top__DOT__proc2mngr_rdy = ((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
                                               & (0U 
                                                  == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay);
        } else {
            vlSelf->top__DOT__proc2mngr_rdy = 0U;
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 0U;
        vlSelf->top__DOT__proc2mngr_rdy = ((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
                                           & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
        if (((IData)(vlSelf->top__DOT__proc2mngr_val) 
             & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__proc2mngr_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__proc2mngr_rdy))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_rdy 
            = vlSelf->top__DOT__proc2mngr_rdy;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__proc2mngr_rdy) 
           & (IData)(vlSelf->top__DOT__proc2mngr_val));
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[1667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[1668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[1662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[1664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
}

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__3\n"); );
    // Init
    CData/*0:0*/ top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h375be874__0;
    top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h375be874__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hcc710e63__0;
    top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hcc710e63__0 = 0;
    // Body
    if (((IData)(vlSelf->top__DOT__mngr2proc_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__mngr2proc_val))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_val 
            = vlSelf->top__DOT__mngr2proc_val;
    }
    vlSelf->top__DOT__mngr2proc_msg = ((IData)(vlSelf->top__DOT__mngr2proc_val)
                                        ? vlSelf->top__DOT__src__DOT__src_msg
                                        : 0U);
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_mngr2proc_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
           & ((~ (IData)(vlSelf->top__DOT__mngr2proc_val)) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D)));
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
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
        = ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))
            ? vlSelf->top__DOT__mngr2proc_msg : ((1U 
                                                  == (IData)(vlSelf->top__DOT__DUT__DOT__csrr_sel_D))
                                                  ? 1U
                                                  : 0U));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_mngr2proc_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_mngr2proc_D))) {
        vlSymsp->__Vcoverage[1817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_mngr2proc_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_mngr2proc_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_mngr2proc_D) 
              | ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_hazard_D) 
                 | ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imul_req_rdy_D)) 
                    & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__is_mul_D)))));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D))) {
        vlSymsp->__Vcoverage[2361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__csrr_data_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D = 
        ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))
          ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D
          : ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))
              ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D
              : ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))
                  ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D
                  : 0U)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_D))) {
        vlSymsp->__Vcoverage[1714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D;
    }
    top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hcc710e63__0 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D) 
           | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_habd323b4__0));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D))) {
        vlSymsp->__Vcoverage[2329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__b_mux_sel)
            ? ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__b_mux_sel)
                ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D
                : 0U) : vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__rshifter_out);
    vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
        = (((QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D)) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D)));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
           & (IData)(top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hcc710e63__0));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F) 
              | (IData)(top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hcc710e63__0)));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg)))) {
        vlSymsp->__Vcoverage[2823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[2824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[2825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[2826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[2827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[2828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[2829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[2830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[2831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[2832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[2833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[2834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[2835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[2836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[2837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[2838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[2839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[2840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[2841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[2842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[2843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[2844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[2845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[2846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[2847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[2848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[2849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[2850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[2851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[2852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[2853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[2854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[2855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[2856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[2857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[2858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[2859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[2860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[2861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[2862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[2863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[2864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[2865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[2866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[2867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[2868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[2869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[2873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[2874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[2875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[2876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[2877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[2878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[2879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[2880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[2881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[2882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[2883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[2884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[2885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[2886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT____Vtogcov__istream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vcellinp__mul__istream_msg 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_D))) {
        vlSymsp->__Vcoverage[1719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D;
    }
    vlSelf->top__DOT__DUT__DOT__reg_en_D = (1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D)) 
                                                  | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D)));
    top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h375be874__0 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_F))) {
        vlSymsp->__Vcoverage[1718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_F 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_F 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F) 
           & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F)) 
              & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F))));
    vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy 
        = (1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F)) 
                 | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__reg_en_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_D))) {
        vlSymsp->__Vcoverage[1230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_D 
            = vlSelf->top__DOT__DUT__DOT__reg_en_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_D 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D)) 
           & (IData)(top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h375be874__0));
    vlSelf->top__DOT__mngr2proc_rdy = ((IData)(top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h375be874__0) 
                                       & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D)) 
                                          & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_F))) {
        vlSymsp->__Vcoverage[1739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_F 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_F;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop_rdy))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop_rdy 
            = vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy;
    }
    vlSelf->top__DOT__imem_respstream_rdy = ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state) 
                                             | (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_D))) {
        vlSymsp->__Vcoverage[1825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_D;
    }
    vlSelf->top__DOT__DUT__DOT__imul_req_val_D = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__is_mul_D) 
                                                  & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_D));
    if (((IData)(vlSelf->top__DOT__mngr2proc_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__mngr2proc_rdy))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_rdy 
            = vlSelf->top__DOT__mngr2proc_rdy;
    }
    vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
           & ((IData)(vlSelf->top__DOT__mngr2proc_rdy) 
              & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__imem_respstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_rdy))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_rdy 
            = vlSelf->top__DOT__imem_respstream_rdy;
    }
    vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go 
        = ((IData)(vlSelf->top__DOT__imem_respstream_rdy) 
           & (IData)(vlSelf->top__DOT__imem_respstream_val));
    vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
           & ((IData)(vlSelf->top__DOT__imem_respstream_rdy) 
              & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imul_req_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imul_req_val_D))) {
        vlSymsp->__Vcoverage[1239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imul_req_val_D 
            = vlSelf->top__DOT__DUT__DOT__imul_req_val_D;
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__ctrl__DOT__istream_go 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__imul_req_rdy_D) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__imul_req_val_D));
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
    if (vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state) {
        if (vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go) {
            vlSymsp->__Vcoverage[1560].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go)))) {
            vlSymsp->__Vcoverage[1561].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__next_state = 1U;
        } else {
            vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__next_state = 0U;
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__next_state 
            = (1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F) 
                     & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go))));
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F) 
             & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go)))) {
            vlSymsp->__Vcoverage[1558].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F) 
                      & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go)))))) {
            vlSymsp->__Vcoverage[1559].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__istream_go))) {
        vlSymsp->__Vcoverage[1557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__istream_go 
            = vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[5564].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[5565].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[5558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                  & (IData)(vlSelf->top__DOT__imem_respstream_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[5567].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next = 0U;
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                           & (IData)(vlSelf->top__DOT__imem_respstream_rdy)) 
                          & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[5568].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[4000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_rdy 
            = vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__ctrl__DOT__istream_go) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__ctrl__DOT____Vtogcov__istream_go))) {
        vlSymsp->__Vcoverage[3255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__ctrl__DOT____Vtogcov__istream_go 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__ctrl__DOT__istream_go;
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__ctrl__DOT__state_next 
        = vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__ctrl__DOT__state_reg;
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__ctrl__DOT__state_reg))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__ctrl__DOT__istream_go)))) {
            vlSymsp->__Vcoverage[3258].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__ctrl__DOT__istream_go) {
            vlSymsp->__Vcoverage[3257].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__ctrl__DOT__state_next = 1U;
        }
    } else if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__ctrl__DOT__state_reg))) {
        if ((0U == vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__dpath__DOT__b_reg_out)) {
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__ctrl__DOT__state_next = 2U;
        }
    } else if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__ctrl__DOT__state_reg))) {
        if (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__ctrl__DOT__ostream_go) {
            vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__ctrl__DOT__state_next = 0U;
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__ctrl__DOT__state_next = 0U;
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__next_state) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__next_state))) {
        vlSymsp->__Vcoverage[1556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__next_state 
            = vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__next_state;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[5493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[5559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[4989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__ctrl__DOT__state_next) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__ctrl__DOT____Vtogcov__state_next)))) {
        vlSymsp->__Vcoverage[3250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__ctrl__DOT____Vtogcov__state_next 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__ctrl__DOT____Vtogcov__state_next)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__ctrl__DOT__state_next)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__ctrl__DOT__state_next) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__ctrl__DOT____Vtogcov__state_next)))) {
        vlSymsp->__Vcoverage[3251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__ctrl__DOT____Vtogcov__state_next 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__ctrl__DOT____Vtogcov__state_next)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__ctrl__DOT__state_next)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[4990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[4985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[4987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__0\n"); );
    // Body
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[4573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val 
        = ((~ (IData)(vlSelf->top__DOT__reset)) & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_val))) {
        vlSymsp->__Vcoverage[1012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_val 
            = vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val;
    }
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val));
    vlSelf->top__DOT__imem_reqstream_val = (1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty)) 
                                                  | ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) 
                                                     & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val))));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq))) {
        vlSymsp->__Vcoverage[1307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
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
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__imem_reqstream_rdy) 
           & (IData)(vlSelf->top__DOT__imem_reqstream_val));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__imem_reqstream_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[4205].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[4206].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[4199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                  & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[4208].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 0U;
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                           & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy)) 
                          & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[4209].fetch_add(1, std::memory_order_relaxed);
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[1308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
            & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_val) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_val))) {
        vlSymsp->__Vcoverage[3841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_val 
            = vlSelf->top__DOT__mem__DOT__mem_memreq0_val;
    }
    if (vlSelf->top__DOT__mem__DOT__mem_memreq0_val) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len 
            = (3U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_ 
            = (7U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                     >> 0xaU));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque 
            = (0xffU & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                        >> 2U));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
            = ((vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                << 0x1eU) | (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                             >> 2U));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U];
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
            = vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy;
    } else {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_ = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = 0U;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[4134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[4200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[1306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[1309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (1U & (((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
                  & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq))
                  ? ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                  : (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)));
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[5148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[5149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[5105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[5106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[5107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[4968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xfeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xfdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xfbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xf7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[5115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0x7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[5146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[5180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr_next))) {
        vlSymsp->__Vcoverage[1304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr_next 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[1314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_reg__DOT____Vtogcov__d 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[1297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en)
                  ? ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                  : (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe))) {
        vlSymsp->__Vcoverage[4972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe)) 
               & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq))) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr_next))) {
        vlSymsp->__Vcoverage[1302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr_next 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[1312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_reg__DOT____Vtogcov__d 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[4969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
}
