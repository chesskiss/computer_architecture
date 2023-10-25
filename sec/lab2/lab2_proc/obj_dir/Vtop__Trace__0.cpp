// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__idx),32);
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__is_mul_D));
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__is_mul_X));
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgQData(oldp+5,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input),64);
        bufp->chgIData(oldp+7,((IData)((vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input 
                                        >> 0x20U))),32);
        bufp->chgIData(oldp+8,((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imul_input)),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__cycles_next),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__sink__DOT__sink__DOT__t),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgWData(oldp+23,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+151,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+152,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+280,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+281,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+409,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+410,(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+538,(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+539,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+667,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgCData(oldp+668,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+669,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+797,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+798,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+926,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+927,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1055,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+1056,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1184,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+1185,(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1313,(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+1314,(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1442,(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+1443,(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1571,(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+1572,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1700,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+1701,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1829,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__level),4);
        bufp->chgWData(oldp+1830,(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__storage),4096);
        bufp->chgCData(oldp+1958,(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__level),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+1959,(vlSelf->top__DOT__reset));
        bufp->chgBit(oldp+1960,(vlSelf->top__DOT__mem_clear));
        bufp->chgIData(oldp+1961,(vlSelf->top__DOT__mem__DOT__mem__DOT__data_address),32);
        bufp->chgSData(oldp+1962,(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr),12);
        bufp->chgCData(oldp+1963,(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset),2);
        bufp->chgCData(oldp+1964,(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max),6);
        bufp->chgIData(oldp+1965,(vlSelf->top__DOT__sink__DOT__sink__DOT__data_data),32);
        bufp->chgIData(oldp+1966,(vlSelf->top__DOT__sink__DOT__sink__DOT__load__Vstatic__unnamedblk1__DOT__count),32);
        bufp->chgCData(oldp+1967,(vlSelf->top__DOT__src__DOT__src__DOT__index_max),6);
        bufp->chgIData(oldp+1968,(vlSelf->top__DOT__src__DOT__src__DOT__data_data),32);
        bufp->chgIData(oldp+1969,(vlSelf->top__DOT__src__DOT__src__DOT__load__Vstatic__unnamedblk1__DOT__count),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgWData(oldp+1970,(vlSelf->top__DOT__DUT__DOT__temp),4096);
        bufp->chgWData(oldp+2098,(vlSelf->top__DOT__DUT__DOT__str),4096);
        bufp->chgIData(oldp+2226,(vlSelf->top__DOT__DUT__DOT__idx0),32);
        bufp->chgIData(oldp+2227,(vlSelf->top__DOT__DUT__DOT__idx1),32);
        bufp->chgIData(oldp+2228,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1_str),24);
        bufp->chgIData(oldp+2229,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2_str),24);
        bufp->chgIData(oldp+2230,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd_str),24);
        bufp->chgWData(oldp+2231,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr_str),72);
        bufp->chgSData(oldp+2234,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct_str),16);
        bufp->chgCData(oldp+2235,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs1),5);
        bufp->chgCData(oldp+2236,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rs2),5);
        bufp->chgCData(oldp+2237,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__rd),5);
        bufp->chgSData(oldp+2238,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__csr),12);
        bufp->chgCData(oldp+2239,(vlSelf->top__DOT__DUT__DOT__tinyrv2__DOT__funct),7);
        bufp->chgIData(oldp+2240,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len0),32);
        bufp->chgIData(oldp+2241,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__len1),32);
        bufp->chgIData(oldp+2242,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx0),32);
        bufp->chgIData(oldp+2243,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__idx1),32);
        bufp->chgWData(oldp+2244,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__storage),4096);
        bufp->chgIData(oldp+2372,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__cycles_next),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0xaU]))) {
        bufp->chgBit(oldp+2373,(vlSelf->top__DOT__proc2mngr_rdy));
        bufp->chgBit(oldp+2374,(vlSelf->top__DOT__snk_done));
        bufp->chgIData(oldp+2375,(vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i),32);
        bufp->chgIData(oldp+2376,(vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i),32);
        bufp->chgBit(oldp+2377,(vlSelf->top__DOT__sink__DOT__sink_rdy));
        bufp->chgBit(oldp+2378,(vlSelf->top__DOT__src__DOT__src__DOT__done_next));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[0xbU]))) {
        bufp->chgBit(oldp+2379,(vlSelf->top__DOT__dmem_reqstream_val));
        bufp->chgBit(oldp+2380,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F));
        bufp->chgBit(oldp+2381,(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val));
        bufp->chgBit(oldp+2382,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val));
        bufp->chgBit(oldp+2383,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X)))));
        bufp->chgBit(oldp+2384,(vlSelf->top__DOT__DUT__DOT__imul_resp_rdy_X));
        bufp->chgBit(oldp+2385,(vlSelf->top__DOT__DUT__DOT__imul_req_rdy_D));
        bufp->chgBit(oldp+2386,(vlSelf->top__DOT__DUT__DOT__imul_resp_val_X));
        bufp->chgBit(oldp+2387,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F));
        bufp->chgBit(oldp+2388,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X));
        bufp->chgBit(oldp+2389,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X));
        bufp->chgBit(oldp+2390,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D));
        bufp->chgBit(oldp+2391,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X));
        bufp->chgBit(oldp+2392,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+2393,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+2394,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+2395,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+2396,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
        bufp->chgBit(oldp+2397,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__a_mux_sel));
        bufp->chgBit(oldp+2398,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__b_mux_sel));
        bufp->chgBit(oldp+2399,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__result_mux_sel));
        bufp->chgBit(oldp+2400,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__add_mux_sel));
        bufp->chgBit(oldp+2401,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__result_reg_en));
        bufp->chgCData(oldp+2402,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt),6);
        bufp->chgBit(oldp+2403,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__resp_rdy));
        bufp->chgIData(oldp+2404,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_mux_out),32);
        bufp->chgIData(oldp+2405,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out),32);
        bufp->chgIData(oldp+2406,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_mux_out),32);
        bufp->chgIData(oldp+2407,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__add_mux_out),32);
        bufp->chgBit(oldp+2408,((1U & ((IData)(1U) 
                                       + vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out))));
        bufp->chgIData(oldp+2409,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__cout),32);
        bufp->chgBit(oldp+2410,((1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out)));
        bufp->chgBit(oldp+2411,((1U & (((IData)(1U) 
                                        + (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out)) 
                                       >> 1U))));
        bufp->chgBit(oldp+2412,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 1U))));
        bufp->chgBit(oldp+2413,((1U & ((IData)(vlSelf->__VdfgTmp_h8e4ae4ed__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2414,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 0xaU))));
        bufp->chgBit(oldp+2415,((1U & ((IData)(vlSelf->__VdfgTmp_h6cbfed38__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2416,((1U & ((IData)(vlSelf->__VdfgTmp_h27002de6__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2417,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 0xbU))));
        bufp->chgBit(oldp+2418,((1U & ((IData)(vlSelf->__VdfgTmp_h05cdcf9e__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2419,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 0xcU))));
        bufp->chgBit(oldp+2420,((1U & ((IData)(vlSelf->__VdfgTmp_hb4877cc9__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2421,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 0xdU))));
        bufp->chgBit(oldp+2422,((1U & ((IData)(vlSelf->__VdfgTmp_h146abd17__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2423,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 0xeU))));
        bufp->chgBit(oldp+2424,((1U & ((IData)(vlSelf->__VdfgTmp_hbf1cd620__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2425,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 0xfU))));
        bufp->chgBit(oldp+2426,((1U & ((IData)(vlSelf->__VdfgTmp_h8bf02f2a__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2427,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 0x10U))));
        bufp->chgBit(oldp+2428,((1U & ((IData)(vlSelf->__VdfgTmp_h172c05cb__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2429,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 0x11U))));
        bufp->chgBit(oldp+2430,((1U & ((IData)(vlSelf->__VdfgTmp_h3e0e4264__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2431,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 0x12U))));
        bufp->chgBit(oldp+2432,((1U & ((IData)(vlSelf->__VdfgTmp_h136edbd2__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2433,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 0x13U))));
        bufp->chgBit(oldp+2434,((1U & ((IData)(vlSelf->__VdfgTmp_h8b92d417__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2435,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 2U))));
        bufp->chgBit(oldp+2436,((1U & ((IData)(vlSelf->__VdfgTmp_hd0ae7ccf__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2437,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 0x14U))));
        bufp->chgBit(oldp+2438,((1U & ((IData)(vlSelf->__VdfgTmp_hf5149ce1__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2439,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 0x15U))));
        bufp->chgBit(oldp+2440,((1U & ((IData)(vlSelf->__VdfgTmp_h14b60fc5__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2441,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 0x16U))));
        bufp->chgBit(oldp+2442,((1U & ((IData)(vlSelf->__VdfgTmp_h8953702b__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2443,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 0x17U))));
        bufp->chgBit(oldp+2444,((1U & ((IData)(vlSelf->__VdfgTmp_h9a51c0ca__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2445,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 0x18U))));
        bufp->chgBit(oldp+2446,((1U & ((IData)(vlSelf->__VdfgTmp_hb19f1736__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2447,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 0x19U))));
        bufp->chgBit(oldp+2448,((1U & ((IData)(vlSelf->__VdfgTmp_h5f983465__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2449,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+2450,((1U & ((IData)(vlSelf->__VdfgTmp_ha087345d__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2451,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+2452,((1U & ((IData)(vlSelf->__VdfgTmp_h471f319e__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2453,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+2454,((1U & ((IData)(vlSelf->__VdfgTmp_h28f0c39d__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2455,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+2456,((1U & ((IData)(vlSelf->__VdfgTmp_ha098cd25__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2457,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 3U))));
        bufp->chgBit(oldp+2458,((1U & ((IData)(vlSelf->__VdfgTmp_h22d3d55e__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2459,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+2460,((1U & ((IData)(vlSelf->__VdfgTmp_h5d3e0dae__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2461,((vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+2462,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT____Vcellout__ripple_carry_adder31__cout));
        bufp->chgBit(oldp+2463,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 4U))));
        bufp->chgBit(oldp+2464,((1U & ((IData)(vlSelf->__VdfgTmp_h5f7bc1f5__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2465,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 5U))));
        bufp->chgBit(oldp+2466,((1U & ((IData)(vlSelf->__VdfgTmp_hcdd18853__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2467,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 6U))));
        bufp->chgBit(oldp+2468,((1U & ((IData)(vlSelf->__VdfgTmp_h1436be50__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2469,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 7U))));
        bufp->chgBit(oldp+2470,((1U & ((IData)(vlSelf->__VdfgTmp_h70292768__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2471,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 8U))));
        bufp->chgBit(oldp+2472,((1U & ((IData)(vlSelf->__VdfgTmp_h91a101b1__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+2473,((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_mux_out 
                                       >> 9U))));
        bufp->chgBit(oldp+2474,(vlSelf->top__DOT__mem__DOT__mem_memreq1_val));
        bufp->chgWData(oldp+2475,(vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg),77);
        bufp->chgBit(oldp+2478,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+2479,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+2480,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe));
        bufp->chgCData(oldp+2481,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_),3);
        bufp->chgCData(oldp+2482,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque),8);
        bufp->chgIData(oldp+2483,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr),32);
        bufp->chgCData(oldp+2484,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len),2);
        bufp->chgIData(oldp+2485,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data),32);
        bufp->chgBit(oldp+2486,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en));
        bufp->chgBit(oldp+2487,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+2488,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[6U] 
                     | vlSelf->__Vm_traceActivity[0xaU]))) {
        bufp->chgBit(oldp+2489,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+2490,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+2491,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+2492,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
        bufp->chgBit(oldp+2493,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en));
        bufp->chgBit(oldp+2494,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+2495,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next));
        bufp->chgBit(oldp+2496,(vlSelf->top__DOT__sink__DOT__sink__DOT__index_en));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[7U] 
                     | vlSelf->__Vm_traceActivity[0xcU]))) {
        bufp->chgBit(oldp+2497,(vlSelf->top__DOT__mngr2proc_rdy));
        bufp->chgBit(oldp+2498,(vlSelf->top__DOT__imem_respstream_rdy));
        bufp->chgBit(oldp+2499,(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy));
        bufp->chgBit(oldp+2500,(vlSelf->top__DOT__DUT__DOT__reg_en_D));
        bufp->chgBit(oldp+2501,(vlSelf->top__DOT__DUT__DOT__imul_req_val_D));
        bufp->chgBit(oldp+2502,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F));
        bufp->chgBit(oldp+2503,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D));
        bufp->chgBit(oldp+2504,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_F));
        bufp->chgBit(oldp+2505,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_D));
        bufp->chgCData(oldp+2506,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__next_state),2);
        bufp->chgBit(oldp+2507,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__req_val));
        bufp->chgBit(oldp+2508,(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__next_state));
        bufp->chgBit(oldp+2509,(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go));
        bufp->chgBit(oldp+2510,(vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy));
        bufp->chgBit(oldp+2511,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+2512,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+2513,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+2514,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
        bufp->chgBit(oldp+2515,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en));
        bufp->chgBit(oldp+2516,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+2517,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next));
        bufp->chgBit(oldp+2518,(vlSelf->top__DOT__src__DOT__src_rdy));
        bufp->chgBit(oldp+2519,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en));
        bufp->chgBit(oldp+2520,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+2521,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next));
        bufp->chgBit(oldp+2522,(vlSelf->top__DOT__src__DOT__src__DOT__index_en));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[8U] 
                     | vlSelf->__Vm_traceActivity[0xdU]))) {
        bufp->chgBit(oldp+2523,(vlSelf->top__DOT__imem_reqstream_val));
        bufp->chgBit(oldp+2524,(vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val));
        bufp->chgBit(oldp+2525,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+2526,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        bufp->chgBit(oldp+2527,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        bufp->chgBit(oldp+2528,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+2529,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+2530,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+2531,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
        bufp->chgBit(oldp+2532,(vlSelf->top__DOT__mem__DOT__mem_memreq0_val));
        bufp->chgWData(oldp+2533,(vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg),77);
        bufp->chgBit(oldp+2536,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+2537,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+2538,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe));
        bufp->chgCData(oldp+2539,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_),3);
        bufp->chgCData(oldp+2540,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque),8);
        bufp->chgIData(oldp+2541,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr),32);
        bufp->chgCData(oldp+2542,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len),2);
        bufp->chgIData(oldp+2543,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data),32);
        bufp->chgBit(oldp+2544,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en));
        bufp->chgBit(oldp+2545,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+2546,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgIData(oldp+2547,(vlSelf->top__DOT__proc2mngr_msg),32);
        bufp->chgBit(oldp+2548,(vlSelf->top__DOT__proc2mngr_val));
        bufp->chgWData(oldp+2549,(vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg),77);
        bufp->chgBit(oldp+2552,(vlSelf->top__DOT__imem_reqstream_rdy));
        bufp->chgQData(oldp+2553,(vlSelf->top__DOT__imem_respstream_msg),47);
        bufp->chgBit(oldp+2555,(vlSelf->top__DOT__imem_respstream_val));
        bufp->chgWData(oldp+2556,(vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg),77);
        bufp->chgBit(oldp+2559,(vlSelf->top__DOT__dmem_reqstream_rdy));
        bufp->chgQData(oldp+2560,(vlSelf->top__DOT__dmem_respstream_msg),47);
        bufp->chgBit(oldp+2562,(vlSelf->top__DOT__dmem_respstream_val));
        bufp->chgBit(oldp+2563,(vlSelf->top__DOT__dmem_respstream_rdy));
        bufp->chgBit(oldp+2564,(vlSelf->top__DOT__commit_inst));
        bufp->chgBit(oldp+2565,((0U != vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W)));
        bufp->chgBit(oldp+2566,(vlSelf->top__DOT__src_done));
        bufp->chgCData(oldp+2567,(vlSelf->top__DOT__DUT__DOT__imem_queue_num_free_entries),2);
        __Vtemp_2[0U] = 0U;
        __Vtemp_2[1U] = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                         << 2U);
        __Vtemp_2[2U] = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                         >> 0x1eU);
        bufp->chgWData(oldp+2568,(__Vtemp_2),77);
        bufp->chgBit(oldp+2571,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgIData(oldp+2572,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F),32);
        bufp->chgBit(oldp+2573,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        __Vtemp_4[0U] = 0U;
        __Vtemp_4[1U] = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                         << 2U);
        __Vtemp_4[2U] = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                         >> 0x1eU);
        bufp->chgWData(oldp+2574,(__Vtemp_4),77);
        bufp->chgIData(oldp+2577,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X),32);
        bufp->chgBit(oldp+2578,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgIData(oldp+2579,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W),32);
        bufp->chgBit(oldp+2580,(vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_val));
        bufp->chgCData(oldp+2581,(vlSelf->top__DOT__DUT__DOT__pc_sel_F),2);
        bufp->chgBit(oldp+2582,(vlSelf->top__DOT__DUT__DOT__op1_sel_D));
        bufp->chgCData(oldp+2583,(vlSelf->top__DOT__DUT__DOT__op2_sel_D),2);
        bufp->chgCData(oldp+2584,(vlSelf->top__DOT__DUT__DOT__csrr_sel_D),2);
        bufp->chgCData(oldp+2585,(vlSelf->top__DOT__DUT__DOT__imm_type_D),3);
        bufp->chgCData(oldp+2586,(vlSelf->top__DOT__DUT__DOT__ex_result_sel_D),2);
        bufp->chgCData(oldp+2587,(vlSelf->top__DOT__DUT__DOT__alu_fn_X),4);
        bufp->chgCData(oldp+2588,(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X),2);
        bufp->chgBit(oldp+2589,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M)))));
        bufp->chgBit(oldp+2590,(vlSelf->top__DOT__DUT__DOT__wb_result_sel_M));
        bufp->chgBit(oldp+2591,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W)))));
        bufp->chgCData(oldp+2592,(vlSelf->top__DOT__DUT__DOT__rf_waddr_W),5);
        bufp->chgBit(oldp+2593,(vlSelf->top__DOT__DUT__DOT__rf_wen_W));
        bufp->chgBit(oldp+2594,(vlSelf->top__DOT__DUT__DOT__stats_en_wen_W));
        bufp->chgIData(oldp+2595,(vlSelf->top__DOT__DUT__DOT__inst_D),32);
        bufp->chgBit(oldp+2596,(vlSelf->top__DOT__DUT__DOT__br_cond_eq_X));
        bufp->chgBit(oldp+2597,(vlSelf->top__DOT__DUT__DOT__br_cond_lt_X));
        bufp->chgBit(oldp+2598,(vlSelf->top__DOT__DUT__DOT__br_cond_ltu_X));
        bufp->chgBit(oldp+2599,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F));
        bufp->chgBit(oldp+2600,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D));
        bufp->chgBit(oldp+2601,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X));
        bufp->chgBit(oldp+2602,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M));
        bufp->chgBit(oldp+2603,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W));
        bufp->chgBit(oldp+2604,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_X));
        bufp->chgBit(oldp+2605,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_M));
        bufp->chgBit(oldp+2606,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_W));
        bufp->chgBit(oldp+2607,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M));
        bufp->chgBit(oldp+2608,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W));
        bufp->chgBit(oldp+2609,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_X));
        bufp->chgCData(oldp+2610,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_X),2);
        bufp->chgCData(oldp+2611,((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                            >> 7U))),5);
        bufp->chgCData(oldp+2612,((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+2613,((0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                            >> 0x14U))),5);
        bufp->chgSData(oldp+2614,((vlSelf->top__DOT__DUT__DOT__inst_D 
                                   >> 0x14U)),12);
        bufp->chgBit(oldp+2615,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_val_D));
        bufp->chgCData(oldp+2616,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D),3);
        bufp->chgBit(oldp+2617,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs1_en_D));
        bufp->chgBit(oldp+2618,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rs2_en_D));
        bufp->chgCData(oldp+2619,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__alu_fn_D),4);
        bufp->chgCData(oldp+2620,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_D),2);
        bufp->chgBit(oldp+2621,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_D));
        bufp->chgBit(oldp+2622,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_D));
        bufp->chgBit(oldp+2623,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrr_D));
        bufp->chgBit(oldp+2624,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__csrw_D));
        bufp->chgBit(oldp+2625,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_D));
        bufp->chgBit(oldp+2626,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D));
        bufp->chgBit(oldp+2627,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_D));
        bufp->chgBit(oldp+2628,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs1_D));
        bufp->chgBit(oldp+2629,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs1_D));
        bufp->chgBit(oldp+2630,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs1_D));
        bufp->chgBit(oldp+2631,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_X_rs2_D));
        bufp->chgBit(oldp+2632,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_M_rs2_D));
        bufp->chgBit(oldp+2633,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_waddr_W_rs2_D));
        bufp->chgBit(oldp+2634,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_hazard_D));
        bufp->chgIData(oldp+2635,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X),32);
        bufp->chgCData(oldp+2636,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X),2);
        bufp->chgBit(oldp+2637,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_X));
        bufp->chgBit(oldp+2638,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X));
        bufp->chgCData(oldp+2639,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X),5);
        bufp->chgBit(oldp+2640,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_X));
        bufp->chgBit(oldp+2641,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_X));
        bufp->chgCData(oldp+2642,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X),3);
        bufp->chgIData(oldp+2643,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M),32);
        bufp->chgCData(oldp+2644,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M),2);
        bufp->chgBit(oldp+2645,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M));
        bufp->chgCData(oldp+2646,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M),5);
        bufp->chgBit(oldp+2647,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_M));
        bufp->chgBit(oldp+2648,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_M));
        bufp->chgBit(oldp+2649,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_M));
        bufp->chgIData(oldp+2650,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_W),32);
        bufp->chgBit(oldp+2651,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_W));
        bufp->chgBit(oldp+2652,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_pending_W));
        bufp->chgBit(oldp+2653,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_pending_W));
        bufp->chgCData(oldp+2654,((0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D)),7);
        bufp->chgCData(oldp+2655,((7U & (vlSelf->top__DOT__DUT__DOT__inst_D 
                                         >> 0xcU))),3);
        bufp->chgBit(oldp+2656,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgWData(oldp+2657,(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore),77);
        bufp->chgCData(oldp+2660,((7U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+2661,((0xffU & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                            >> 2U))),8);
        bufp->chgIData(oldp+2662,(((vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                                                 >> 2U))),32);
        bufp->chgCData(oldp+2663,((3U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U])),2);
        bufp->chgIData(oldp+2664,(vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]),32);
        bufp->chgIData(oldp+2665,(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgCData(oldp+2666,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_),3);
        bufp->chgCData(oldp+2667,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque),8);
        bufp->chgCData(oldp+2668,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__test),2);
        bufp->chgCData(oldp+2669,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__len),2);
        bufp->chgIData(oldp+2670,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data),32);
        bufp->chgIData(oldp+2671,(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+2672,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F),32);
        bufp->chgIData(oldp+2673,(((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)),32);
        bufp->chgIData(oldp+2674,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__br_target_X),32);
        bufp->chgIData(oldp+2675,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__jal_target_D),32);
        bufp->chgIData(oldp+2676,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D),32);
        bufp->chgIData(oldp+2677,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D),32);
        bufp->chgIData(oldp+2678,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D),32);
        bufp->chgIData(oldp+2679,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D),32);
        bufp->chgIData(oldp+2680,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D),32);
        bufp->chgIData(oldp+2681,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X),32);
        bufp->chgIData(oldp+2682,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_X),32);
        bufp->chgIData(oldp+2683,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_X),32);
        bufp->chgIData(oldp+2684,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X),32);
        bufp->chgIData(oldp+2685,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__result_reg_out),32);
        bufp->chgIData(oldp+2686,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M),32);
        bufp->chgIData(oldp+2687,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M),32);
        bufp->chgIData(oldp+2688,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__stats_en_W),32);
        bufp->chgIData(oldp+2689,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data),32);
        bufp->chgBit(oldp+2690,((1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out)));
        bufp->chgCData(oldp+2691,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__current_state),2);
        bufp->chgCData(oldp+2692,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__control_unit__DOT__counter),6);
        bufp->chgIData(oldp+2693,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_reg_out),32);
        bufp->chgIData(oldp+2694,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__a_shift_out),32);
        bufp->chgIData(oldp+2695,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_reg_out),32);
        bufp->chgIData(oldp+2696,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__b_shift_out),32);
        bufp->chgIData(oldp+2697,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__adder_out),32);
        bufp->chgCData(oldp+2698,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__datapath__DOT__shamt_reg_out),6);
        bufp->chgIData(oldp+2699,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__mul__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+2700,((1U & (IData)((1ULL 
                                               & (((QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D)) 
                                                   + (QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D))) 
                                                  >> 0x20U))))));
        bufp->chgIData(oldp+2701,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data0),32);
        bufp->chgIData(oldp+2702,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rf_read_data1),32);
        bufp->chgIData(oldp+2703,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[0]),32);
        bufp->chgIData(oldp+2704,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[1]),32);
        bufp->chgIData(oldp+2705,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[2]),32);
        bufp->chgIData(oldp+2706,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[3]),32);
        bufp->chgIData(oldp+2707,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[4]),32);
        bufp->chgIData(oldp+2708,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[5]),32);
        bufp->chgIData(oldp+2709,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[6]),32);
        bufp->chgIData(oldp+2710,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[7]),32);
        bufp->chgIData(oldp+2711,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[8]),32);
        bufp->chgIData(oldp+2712,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[9]),32);
        bufp->chgIData(oldp+2713,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[10]),32);
        bufp->chgIData(oldp+2714,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[11]),32);
        bufp->chgIData(oldp+2715,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[12]),32);
        bufp->chgIData(oldp+2716,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[13]),32);
        bufp->chgIData(oldp+2717,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[14]),32);
        bufp->chgIData(oldp+2718,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[15]),32);
        bufp->chgIData(oldp+2719,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[16]),32);
        bufp->chgIData(oldp+2720,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[17]),32);
        bufp->chgIData(oldp+2721,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[18]),32);
        bufp->chgIData(oldp+2722,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[19]),32);
        bufp->chgIData(oldp+2723,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[20]),32);
        bufp->chgIData(oldp+2724,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[21]),32);
        bufp->chgIData(oldp+2725,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[22]),32);
        bufp->chgIData(oldp+2726,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[23]),32);
        bufp->chgIData(oldp+2727,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[24]),32);
        bufp->chgIData(oldp+2728,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[25]),32);
        bufp->chgIData(oldp+2729,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[26]),32);
        bufp->chgIData(oldp+2730,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[27]),32);
        bufp->chgIData(oldp+2731,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[28]),32);
        bufp->chgIData(oldp+2732,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[29]),32);
        bufp->chgIData(oldp+2733,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[30]),32);
        bufp->chgIData(oldp+2734,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[31]),32);
        bufp->chgBit(oldp+2735,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty));
        bufp->chgBit(oldp+2736,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr));
        bufp->chgBit(oldp+2737,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr));
        bufp->chgBit(oldp+2738,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+2739,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))));
        bufp->chgBit(oldp+2740,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)))));
        bufp->chgWData(oldp+2741,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data),77);
        bufp->chgWData(oldp+2744,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[0]),77);
        bufp->chgWData(oldp+2747,(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[1]),77);
        bufp->chgCData(oldp+2750,((7U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+2751,((0xffU & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                            >> 2U))),8);
        bufp->chgIData(oldp+2752,(((vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                                                 >> 2U))),32);
        bufp->chgCData(oldp+2753,((3U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U])),2);
        bufp->chgIData(oldp+2754,(vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]),32);
        bufp->chgIData(oldp+2755,(vlSelf->top__DOT__DUT__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+2756,(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state));
        bufp->chgCData(oldp+2757,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_),3);
        bufp->chgCData(oldp+2758,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque),8);
        bufp->chgCData(oldp+2759,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__test),2);
        bufp->chgCData(oldp+2760,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__len),2);
        bufp->chgIData(oldp+2761,(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+2762,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+2763,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgIData(oldp+2764,(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore),32);
        bufp->chgIData(oldp+2765,(vlSelf->top__DOT__DUT__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+2766,(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy));
        bufp->chgBit(oldp+2767,(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy));
        bufp->chgBit(oldp+2768,(vlSelf->top__DOT__mem__DOT__mem_memresp0_val));
        bufp->chgQData(oldp+2769,(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg),47);
        bufp->chgBit(oldp+2771,(vlSelf->top__DOT__mem__DOT__mem_memresp1_val));
        bufp->chgBit(oldp+2772,(vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy));
        bufp->chgQData(oldp+2773,(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg),47);
        bufp->chgBit(oldp+2775,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+2776,((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgWData(oldp+2777,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore),77);
        bufp->chgBit(oldp+2780,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+2781,((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgWData(oldp+2782,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore),77);
        bufp->chgCData(oldp+2785,((7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+2786,((0xffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                            >> 2U))),8);
        bufp->chgIData(oldp+2787,(((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                 >> 2U))),32);
        bufp->chgCData(oldp+2788,((3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U])),2);
        bufp->chgIData(oldp+2789,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]),32);
        bufp->chgCData(oldp+2790,((7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+2791,((0xffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                            >> 2U))),8);
        bufp->chgIData(oldp+2792,(((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                    << 0x1eU) | (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                 >> 2U))),32);
        bufp->chgCData(oldp+2793,((3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U])),2);
        bufp->chgIData(oldp+2794,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U]),32);
        bufp->chgCData(oldp+2795,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_msg_len_modified_M),3);
        bufp->chgCData(oldp+2796,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_msg_len_modified_M),3);
        bufp->chgSData(oldp+2797,((0x3fffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                              >> 2U))),14);
        bufp->chgSData(oldp+2798,((0x3fffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                              >> 2U))),14);
        bufp->chgSData(oldp+2799,((0xfffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                             >> 4U))),12);
        bufp->chgCData(oldp+2800,((3U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                         >> 2U))),2);
        bufp->chgSData(oldp+2801,((0xfffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                             >> 4U))),12);
        bufp->chgCData(oldp+2802,((3U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                         >> 2U))),2);
        bufp->chgIData(oldp+2803,(vlSelf->top__DOT__mem__DOT__mem__DOT__read_block0_M),32);
        bufp->chgIData(oldp+2804,(vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M),32);
        bufp->chgIData(oldp+2805,(vlSelf->top__DOT__mem__DOT__mem__DOT__read_block1_M),32);
        bufp->chgIData(oldp+2806,(vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M),32);
        bufp->chgBit(oldp+2807,(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M));
        bufp->chgBit(oldp+2808,(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M));
        bufp->chgBit(oldp+2809,(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M));
        bufp->chgBit(oldp+2810,(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M));
        bufp->chgBit(oldp+2811,(vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared));
        bufp->chgQData(oldp+2812,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp),47);
        bufp->chgQData(oldp+2814,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp),47);
        bufp->chgBit(oldp+2816,((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgBit(oldp+2817,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgIData(oldp+2818,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+2819,((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgBit(oldp+2820,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgIData(oldp+2821,(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+2822,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgQData(oldp+2823,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore),47);
        bufp->chgCData(oldp+2825,((7U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2cU)))),3);
        bufp->chgCData(oldp+2826,((0xffU & (IData)(
                                                   (vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                    >> 0x24U)))),8);
        bufp->chgCData(oldp+2827,((3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+2828,((3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x20U)))),2);
        bufp->chgIData(oldp+2829,((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg)),32);
        bufp->chgIData(oldp+2830,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+2831,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+2832,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+2833,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
        bufp->chgBit(oldp+2834,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+2835,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
        bufp->chgQData(oldp+2836,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore),47);
        bufp->chgCData(oldp+2838,((7U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2cU)))),3);
        bufp->chgCData(oldp+2839,((0xffU & (IData)(
                                                   (vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                    >> 0x24U)))),8);
        bufp->chgCData(oldp+2840,((3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+2841,((3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x20U)))),2);
        bufp->chgIData(oldp+2842,((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg)),32);
        bufp->chgIData(oldp+2843,(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+2844,(vlSelf->top__DOT__mem__DOT__mem__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+2845,(vlSelf->top__DOT__mem__DOT__memreq0_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+2846,(vlSelf->top__DOT__mem__DOT__memreq1_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+2847,(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+2848,(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+2849,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num),32);
        bufp->chgIData(oldp+2850,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+2851,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay),32);
        bufp->chgBit(oldp+2852,(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state));
        bufp->chgIData(oldp+2853,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num),32);
        bufp->chgIData(oldp+2854,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+2855,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay),32);
        bufp->chgBit(oldp+2856,(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state));
        bufp->chgIData(oldp+2857,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num),32);
        bufp->chgIData(oldp+2858,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+2859,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay),32);
        bufp->chgBit(oldp+2860,(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state));
        bufp->chgIData(oldp+2861,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num),32);
        bufp->chgBit(oldp+2862,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en));
        bufp->chgIData(oldp+2863,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+2864,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay),32);
        bufp->chgBit(oldp+2865,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay));
        bufp->chgBit(oldp+2866,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next));
        bufp->chgBit(oldp+2867,(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state));
        bufp->chgIData(oldp+2868,(vlSelf->top__DOT__mem__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+2869,(vlSelf->top__DOT__sink__DOT__sink_val));
        bufp->chgIData(oldp+2870,(vlSelf->top__DOT__sink__DOT__sink_msg),32);
        bufp->chgIData(oldp+2871,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num),32);
        bufp->chgIData(oldp+2872,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+2873,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay),32);
        bufp->chgBit(oldp+2874,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state));
        bufp->chgCData(oldp+2875,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)))),6);
        bufp->chgCData(oldp+2876,(vlSelf->top__DOT__sink__DOT__sink__DOT__index),6);
        bufp->chgBit(oldp+2877,(vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg));
        bufp->chgBit(oldp+2878,(vlSelf->top__DOT__sink__DOT__sink__DOT__failed));
        bufp->chgIData(oldp+2879,(vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr),32);
        bufp->chgBit(oldp+2880,(vlSelf->top__DOT__src__DOT__src_val));
        bufp->chgIData(oldp+2881,(vlSelf->top__DOT__src__DOT__src_msg),32);
        bufp->chgIData(oldp+2882,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num),32);
        bufp->chgIData(oldp+2883,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next),32);
        bufp->chgIData(oldp+2884,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay),32);
        bufp->chgBit(oldp+2885,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state));
        bufp->chgCData(oldp+2886,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)))),6);
        bufp->chgCData(oldp+2887,(vlSelf->top__DOT__src__DOT__src__DOT__index),6);
        bufp->chgBit(oldp+2888,(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg));
    }
    bufp->chgBit(oldp+2889,(vlSelf->clk));
    bufp->chgBit(oldp+2890,(vlSelf->linetrace));
    bufp->chgIData(oldp+2891,(vlSelf->top__DOT__mngr2proc_msg),32);
    bufp->chgBit(oldp+2892,(vlSelf->top__DOT__mngr2proc_val));
    bufp->chgIData(oldp+2893,(vlSelf->top__DOT__fp),32);
    bufp->chgBit(oldp+2894,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D));
    bufp->chgBit(oldp+2895,(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_mngr2proc_D));
    bufp->chgIData(oldp+2896,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D),32);
    bufp->chgIData(oldp+2897,(vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D),32);
    bufp->chgIData(oldp+2898,(vlSelf->top__DOT__mem__DOT__mem__DOT__data_data),32);
    bufp->chgIData(oldp+2899,(vlSelf->top__DOT__mem__DOT__mem__DOT__wr_i),32);
    bufp->chgIData(oldp+2900,(vlSelf->top__DOT__unnamedblk1__DOT__i),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
}
