// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPE_tb.h for the primary calling header

#include "VPE_tb__pch.h"

void VPE_tb___024root___ctor_var_reset(VPE_tb___024root* vlSelf);

VPE_tb___024root::VPE_tb___024root(VPE_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VPE_tb___024root___ctor_var_reset(this);
}

void VPE_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VPE_tb___024root::~VPE_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
