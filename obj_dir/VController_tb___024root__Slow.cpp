// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VController_tb.h for the primary calling header

#include "VController_tb__pch.h"

void VController_tb___024root___ctor_var_reset(VController_tb___024root* vlSelf);

VController_tb___024root::VController_tb___024root(VController_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VController_tb___024root___ctor_var_reset(this);
}

void VController_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VController_tb___024root::~VController_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
