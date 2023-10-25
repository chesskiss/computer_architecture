// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAdder.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VAdder__Syms.h"
#include "VAdder__Syms.h"
#include "VAdder___024unit.h"

void VAdder___024unit___ctor_var_reset(VAdder___024unit* vlSelf);

VAdder___024unit::VAdder___024unit(VAdder__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VAdder___024unit___ctor_var_reset(this);
}

void VAdder___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VAdder___024unit::~VAdder___024unit() {
}
