// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPE.h for the primary calling header

#include "VPE__pch.h"

void VPE___024root___ctor_var_reset(VPE___024root* vlSelf);

VPE___024root::VPE___024root(VPE__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VPE___024root___ctor_var_reset(this);
}

void VPE___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VPE___024root::~VPE___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
