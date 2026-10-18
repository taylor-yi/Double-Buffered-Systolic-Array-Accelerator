// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VProcessing_Element.h for the primary calling header

#include "VProcessing_Element__pch.h"

void VProcessing_Element___024root___ctor_var_reset(VProcessing_Element___024root* vlSelf);

VProcessing_Element___024root::VProcessing_Element___024root(VProcessing_Element__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VProcessing_Element___024root___ctor_var_reset(this);
}

void VProcessing_Element___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VProcessing_Element___024root::~VProcessing_Element___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
