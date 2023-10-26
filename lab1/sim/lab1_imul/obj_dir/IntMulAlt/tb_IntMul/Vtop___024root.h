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
        CData/*5:0*/ top__DOT__imul__DOT____Vtogcov__shift_mnt;
        CData/*5:0*/ top__DOT__imul__DOT__datapath__DOT__my_mux_out;
        CData/*5:0*/ top__DOT__imul__DOT__datapath__DOT__my_module_out;
        CData/*5:0*/ top__DOT__imul__DOT__datapath__DOT__shamt_reg_out;
        CData/*5:0*/ top__DOT__imul__DOT__datapath__DOT____Vtogcov__my_module_out;
        CData/*5:0*/ top__DOT__imul__DOT__datapath__DOT____Vtogcov__shamt_reg_out;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__out;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vcellout__genblk1__BRA__31__KET____DOT__ripple_carry_adder__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__ripple_carry_adder__DOT____Vtogcov__in1;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__1__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__2__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__3__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__4__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__5__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__6__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__7__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__8__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__9__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__10__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__11__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__12__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__13__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__14__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__15__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__16__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__17__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__18__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__19__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__20__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__21__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__22__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__23__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__24__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__25__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
    };
    struct {
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__26__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__27__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__28__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__29__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__30__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*0:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__genblk1__BRA__31__KET____DOT__ripple_carry_adder__DOT____Vtogcov__cout;
        CData/*5:0*/ top__DOT__imul__DOT__datapath__DOT__my_mux__DOT____Vtogcov__in1;
        CData/*1:0*/ top__DOT__imul__DOT__control_unit__DOT__current_state;
        CData/*1:0*/ top__DOT__imul__DOT__control_unit__DOT__next_state;
        CData/*5:0*/ top__DOT__imul__DOT__control_unit__DOT__counter;
        CData/*0:0*/ top__DOT__imul__DOT__control_unit__DOT__req_val;
        CData/*0:0*/ top__DOT__imul__DOT__control_unit__DOT__resp_rdy;
        CData/*1:0*/ top__DOT__imul__DOT__control_unit__DOT____Vtogcov__current_state;
        CData/*1:0*/ top__DOT__imul__DOT__control_unit__DOT____Vtogcov__next_state;
        CData/*5:0*/ top__DOT__imul__DOT__control_unit__DOT____Vtogcov__counter;
        CData/*0:0*/ top__DOT__imul__DOT__control_unit__DOT____Vtogcov__req_val;
        CData/*0:0*/ top__DOT__imul__DOT__control_unit__DOT____Vtogcov__resp_rdy;
        CData/*3:0*/ top__DOT__imul__DOT__vc_trace__DOT__level;
        CData/*3:0*/ top__DOT__imul__DOT__vc_trace__DOT____Vtogcov__level;
        CData/*1:0*/ __VdfgTmp_hc1b69633__0;
        CData/*1:0*/ __VdfgTmp_h36205fdd__0;
        CData/*1:0*/ __VdfgTmp_h7fca9df6__0;
        CData/*1:0*/ __VdfgTmp_hb397dc1b__0;
        CData/*1:0*/ __VdfgTmp_h93dd3d91__0;
        CData/*1:0*/ __VdfgTmp_h29677c5c__0;
        CData/*1:0*/ __VdfgTmp_h5adc78a4__0;
        CData/*1:0*/ __VdfgTmp_h9dab9844__0;
        CData/*1:0*/ __VdfgTmp_hb6b8a3ab__0;
        CData/*1:0*/ __VdfgTmp_hc45a9942__0;
        CData/*1:0*/ __VdfgTmp_h3e237ee5__0;
        CData/*1:0*/ __VdfgTmp_h5448fa28__0;
        CData/*1:0*/ __VdfgTmp_hc63b2d7e__0;
        CData/*1:0*/ __VdfgTmp_ha4a84782__0;
        CData/*1:0*/ __VdfgTmp_h2d0962be__0;
        CData/*1:0*/ __VdfgTmp_hd910701e__0;
        CData/*1:0*/ __VdfgTmp_h5f761249__0;
        CData/*1:0*/ __VdfgTmp_h8b63129a__0;
        CData/*1:0*/ __VdfgTmp_h4ca2b416__0;
        CData/*1:0*/ __VdfgTmp_hd46e90b3__0;
        CData/*1:0*/ __VdfgTmp_h67b1c022__0;
        CData/*1:0*/ __VdfgTmp_hbff958a0__0;
        CData/*1:0*/ __VdfgTmp_h1d34c83b__0;
        CData/*1:0*/ __VdfgTmp_h8b089081__0;
        CData/*1:0*/ __VdfgTmp_h81d8b85c__0;
        CData/*1:0*/ __VdfgTmp_h5258ea2d__0;
        CData/*1:0*/ __VdfgTmp_h5851b27f__0;
        CData/*1:0*/ __VdfgTmp_hc5359ce2__0;
        CData/*1:0*/ __VdfgTmp_h4a05e2ad__0;
        CData/*1:0*/ __VdfgTmp_h02dcba2b__0;
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
    };
    struct {
        IData/*31:0*/ top__DOT__imul__DOT__idx1;
        IData/*31:0*/ top__DOT__imul__DOT__idx0;
        IData/*31:0*/ top__DOT__imul__DOT__datapath__DOT__a_reg_out;
        IData/*31:0*/ top__DOT__imul__DOT__datapath__DOT__a_mux_out;
        IData/*31:0*/ top__DOT__imul__DOT__datapath__DOT__a_shift_out;
        IData/*31:0*/ top__DOT__imul__DOT__datapath__DOT__b_reg_out;
        IData/*31:0*/ top__DOT__imul__DOT__datapath__DOT__b_mux_out;
        IData/*31:0*/ top__DOT__imul__DOT__datapath__DOT__b_shift_out;
        IData/*31:0*/ top__DOT__imul__DOT__datapath__DOT__result_reg_out;
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
        IData/*31:0*/ top__DOT__imul__DOT__datapath__DOT__result_mux__DOT____Vtogcov__in1;
        IData/*31:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT__cout;
        IData/*31:0*/ top__DOT__imul__DOT__datapath__DOT__my_module__DOT____Vtogcov__cout;
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
