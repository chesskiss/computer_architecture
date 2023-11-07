// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VADDER__SYMS_H_
#define VERILATED_VADDER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VAdder.h"

// INCLUDE MODULE CLASSES
#include "VAdder___024root.h"
#include "VAdder___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VAdder__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VAdder* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VAdder___024root               TOP;
    VAdder___024unit               TOP____024unit;

    // CONSTRUCTORS
    VAdder__Syms(VerilatedContext* contextp, const char* namep, VAdder* modelp);
    ~VAdder__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
