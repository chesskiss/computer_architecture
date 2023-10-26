// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAdder.h for the primary calling header

#ifndef VERILATED_VADDER___024ROOT_H_
#define VERILATED_VADDER___024ROOT_H_  // guard

#include "verilated.h"
class VAdder___024unit;


class VAdder__Syms;

class alignas(VL_CACHE_LINE_BYTES) VAdder___024root final : public VerilatedModule {
  public:
    // CELLS
    VAdder___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(istream_val,0,0);
    VL_OUT8(istream_rdy,0,0);
    VL_OUT8(ostream_val,0,0);
    VL_IN8(ostream_rdy,0,0);
    CData/*0:0*/ sec02_Adder__DOT__istream_send;
    CData/*0:0*/ sec02_Adder__DOT__ostream_send;
    CData/*0:0*/ sec02_Adder__DOT__val_reg;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT(ostream_msg,31,0);
    IData/*31:0*/ sec02_Adder__DOT__a_reg;
    IData/*31:0*/ sec02_Adder__DOT__b_reg;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VL_IN64(istream_msg,63,0);
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VAdder__Syms* const vlSymsp;

    // CONSTRUCTORS
    VAdder___024root(VAdder__Syms* symsp, const char* v__name);
    ~VAdder___024root();
    VL_UNCOPYABLE(VAdder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
