// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VController_tb.h for the primary calling header

#include "VController_tb__pch.h"
VlUnpacked<std::string, 8> VController_tb___024unit::__Venumtab_enum_name15;

void VController_tb___024unit___ctor_var_reset(VController_tb___024unit* vlSelf);

VController_tb___024unit::VController_tb___024unit() = default;
VController_tb___024unit::~VController_tb___024unit() = default;

void VController_tb___024unit::ctor(VController_tb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    VController_tb___024unit___ctor_var_reset(this);
}

void VController_tb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VController_tb___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
