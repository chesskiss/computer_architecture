// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAdder.h for the primary calling header

#ifndef VERILATED_VADDER___024UNIT_H_
#define VERILATED_VADDER___024UNIT_H_  // guard

#include "verilated.h"


class VAdder__Syms;

class alignas(VL_CACHE_LINE_BYTES) VAdder___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VAdder__Syms* const vlSymsp;

    // CONSTRUCTORS
    VAdder___024unit(VAdder__Syms* symsp, const char* v__name);
    ~VAdder___024unit();
    VL_UNCOPYABLE(VAdder___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
