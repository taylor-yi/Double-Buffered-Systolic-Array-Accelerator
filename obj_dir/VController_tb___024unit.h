// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VController_tb.h for the primary calling header

#ifndef VERILATED_VCONTROLLER_TB___024UNIT_H_
#define VERILATED_VCONTROLLER_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VController_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VController_tb___024unit final {
  public:

    // DESIGN SPECIFIC STATE
    static VlUnpacked<std::string, 8> __Venumtab_enum_name15;

    // INTERNAL VARIABLES
    VController_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VController_tb___024unit();
    ~VController_tb___024unit();
    void ctor(VController_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VController_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
