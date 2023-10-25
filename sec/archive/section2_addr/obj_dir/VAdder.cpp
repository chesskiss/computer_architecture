// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VAdder.h"
#include "VAdder__Syms.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VAdder::VAdder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VAdder__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , istream_val{vlSymsp->TOP.istream_val}
    , istream_rdy{vlSymsp->TOP.istream_rdy}
    , ostream_val{vlSymsp->TOP.ostream_val}
    , ostream_rdy{vlSymsp->TOP.ostream_rdy}
    , ostream_msg{vlSymsp->TOP.ostream_msg}
    , istream_msg{vlSymsp->TOP.istream_msg}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VAdder::VAdder(const char* _vcname__)
    : VAdder(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VAdder::~VAdder() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VAdder___024root___eval_debug_assertions(VAdder___024root* vlSelf);
#endif  // VL_DEBUG
void VAdder___024root___eval_static(VAdder___024root* vlSelf);
void VAdder___024root___eval_initial(VAdder___024root* vlSelf);
void VAdder___024root___eval_settle(VAdder___024root* vlSelf);
void VAdder___024root___eval(VAdder___024root* vlSelf);

void VAdder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAdder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VAdder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VAdder___024root___eval_static(&(vlSymsp->TOP));
        VAdder___024root___eval_initial(&(vlSymsp->TOP));
        VAdder___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VAdder___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VAdder::eventsPending() { return false; }

uint64_t VAdder::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VAdder::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VAdder___024root___eval_final(VAdder___024root* vlSelf);

VL_ATTR_COLD void VAdder::final() {
    VAdder___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VAdder::hierName() const { return vlSymsp->name(); }
const char* VAdder::modelName() const { return "VAdder"; }
unsigned VAdder::threads() const { return 1; }
