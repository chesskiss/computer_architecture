// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop___024unit;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        CData/*0:0*/ top__DOT__ostream_val;
        VL_IN8(linetrace,0,0);
        CData/*0:0*/ top__DOT__reset;
        CData/*0:0*/ top__DOT__istream_val;
        CData/*0:0*/ top__DOT__istream_rdy;
        CData/*0:0*/ top__DOT__ostream_rdy;
        CData/*0:0*/ top__DOT__istream_val_f;
        CData/*0:0*/ top__DOT__ostream_rdy_f;
        CData/*0:0*/ top__DOT____Vtogcov__clk;
        CData/*0:0*/ top__DOT____Vtogcov__linetrace;
        CData/*0:0*/ top__DOT____Vtogcov__reset;
        CData/*0:0*/ top__DOT____Vtogcov__istream_val;
        CData/*0:0*/ top__DOT____Vtogcov__istream_rdy;
        CData/*0:0*/ top__DOT____Vtogcov__ostream_rdy;
        CData/*0:0*/ top__DOT____Vtogcov__ostream_val;
        CData/*0:0*/ top__DOT____Vtogcov__istream_val_f;
        CData/*0:0*/ top__DOT____Vtogcov__ostream_rdy_f;
        CData/*0:0*/ top__DOT__imul__DOT__a_mux_sel;
        CData/*0:0*/ top__DOT__imul__DOT__b_mux_sel;
        CData/*0:0*/ top__DOT__imul__DOT__result_mux_sel;
        CData/*0:0*/ top__DOT__imul__DOT__add_mux_sel;
        CData/*0:0*/ top__DOT__imul__DOT__result_reg_en;
        CData/*0:0*/ top__DOT__imul__DOT____Vtogcov__a_mux_sel;
        CData/*0:0*/ top__DOT__imul__DOT____Vtogcov__b_mux_sel;
        CData/*0:0*/ top__DOT__imul__DOT____Vtogcov__result_mux_sel;
        CData/*0:0*/ top__DOT__imul__DOT____Vtogcov__add_mux_sel;
        CData/*0:0*/ top__DOT__imul__DOT____Vtogcov__result_reg_en;
        CData/*0:0*/ top__DOT__imul__DOT____Vtogcov__b_lsb;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__shift_a__DOT____Vtogcov__shamt;
        CData/*1:0*/ top__DOT__imul__DOT__control_unit__DOT__current_state;
        CData/*1:0*/ top__DOT__imul__DOT__control_unit__DOT__next_state;
        CData/*6:0*/ top__DOT__imul__DOT__control_unit__DOT__counter;
        CData/*0:0*/ top__DOT__imul__DOT__control_unit__DOT__req_val;
        CData/*0:0*/ top__DOT__imul__DOT__control_unit__DOT__resp_rdy;
        CData/*1:0*/ top__DOT__imul__DOT__control_unit__DOT____Vtogcov__current_state;
        CData/*1:0*/ top__DOT__imul__DOT__control_unit__DOT____Vtogcov__next_state;
        CData/*6:0*/ top__DOT__imul__DOT__control_unit__DOT____Vtogcov__counter;
        CData/*0:0*/ top__DOT__imul__DOT__control_unit__DOT____Vtogcov__req_val;
        CData/*0:0*/ top__DOT__imul__DOT__control_unit__DOT____Vtogcov__resp_rdy;
        CData/*3:0*/ top__DOT__imul__DOT__vc_trace__DOT__level;
        CData/*3:0*/ top__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__ostream_val__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ top__DOT__istream_msg_a;
        IData/*31:0*/ top__DOT__istream_msg_b;
        IData/*31:0*/ top__DOT____Vtogcov__ostream_msg;
        IData/*31:0*/ top__DOT____Vtogcov__istream_msg_a;
        IData/*31:0*/ top__DOT____Vtogcov__istream_msg_b;
        IData/*31:0*/ top__DOT__unnamedblk1__DOT__x;
        IData/*31:0*/ top__DOT__unnamedblk1__DOT__unnamedblk2__DOT__y;
        IData/*31:0*/ top__DOT__unnamedblk3__DOT__x;
        IData/*31:0*/ top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__y;
        IData/*31:0*/ top__DOT__unnamedblk5__DOT__x;
        VlWide<128>/*4095:0*/ top__DOT__imul__DOT__str;
        IData/*31:0*/ top__DOT__imul__DOT__idx1;
        IData/*31:0*/ top__DOT__imul__DOT__idx0;
        IData/*31:0*/ top__DOT__imul__DOT__datapath__DOT__a_reg_out;
        IData/*31:0*/ top__DOT__imul__DOT__datapath__DOT__a_mux_out;
        IData/*31:0*/ top__DOT__imul__DOT__datapath__DOT__b_reg_out;
        IData/*31:0*/ top__DOT__imul__DOT__datapath__DOT__b_mux_out;
        IData/*31:0*/ top__DOT__imul__DOT__datapath__DOT__result_reg_out;
    };
    struct {
        IData/*31:0*/ top__DOT__imul__DOT__datapath__DOT__result_mux_out;
        IData/*31:0*/ top__DOT__imul__DOT__datapath__DOT__adder_out;
        IData/*31:0*/ top__DOT__imul__DOT__datapath__DOT__add_mux_out;
        IData/*31:0*/ top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_reg_out;
        IData/*31:0*/ top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_mux_out;
        IData/*31:0*/ top__DOT__imul__DOT__datapath__DOT____Vtogcov__a_shift_out;
        IData/*31:0*/ top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_reg_out;
        IData/*31:0*/ top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_mux_out;
        IData/*31:0*/ top__DOT__imul__DOT__datapath__DOT____Vtogcov__b_shift_out;
        IData/*31:0*/ top__DOT__imul__DOT__datapath__DOT____Vtogcov__result_mux_out;
        IData/*31:0*/ top__DOT__imul__DOT__datapath__DOT____Vtogcov__adder_out;
        IData/*31:0*/ top__DOT__imul__DOT__datapath__DOT____Vtogcov__add_mux_out;
        IData/*31:0*/ top__DOT__imul__DOT__datapath__DOT__shift_b__DOT____Vtogcov__shamt;
        IData/*31:0*/ top__DOT__imul__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ top__DOT__imul__DOT__vc_trace__DOT__len1;
        IData/*31:0*/ top__DOT__imul__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ top__DOT__imul__DOT__vc_trace__DOT__idx1;
        VlWide<128>/*4095:0*/ top__DOT__imul__DOT__vc_trace__DOT__storage;
        IData/*31:0*/ top__DOT__imul__DOT__vc_trace__DOT__cycles_next;
        IData/*31:0*/ top__DOT__imul__DOT__vc_trace__DOT__cycles;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ top__DOT__istream_msg;
        QData/*63:0*/ top__DOT____Vtogcov__istream_msg;
        VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    };
    VlTriggerScheduler __VtrigSched_h3cadd47d__0;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hb9476d33__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
