// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VProcessing_Element.h for the primary calling header

#ifndef VERILATED_VPROCESSING_ELEMENT___024ROOT_H_
#define VERILATED_VPROCESSING_ELEMENT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VProcessing_Element__Syms;

class alignas(VL_CACHE_LINE_BYTES) VProcessing_Element___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ PE_tb__DOT__clk;
    CData/*0:0*/ PE_tb__DOT__rst_n;
    CData/*0:0*/ PE_tb__DOT__in_valid;
    CData/*0:0*/ PE_tb__DOT__slot;
    CData/*0:0*/ PE_tb__DOT__en;
    CData/*0:0*/ PE_tb__DOT__drain_en;
    CData/*3:0*/ PE_tb__DOT__a;
    CData/*3:0*/ PE_tb__DOT__b;
    CData/*3:0*/ PE_tb__DOT__dut__DOT__b1;
    CData/*3:0*/ PE_tb__DOT__dut__DOT__b2;
    CData/*0:0*/ __Vtrigprevexpr___TOP__PE_tb__DOT__clk__0;
    SData/*9:0*/ PE_tb__DOT__above_result;
    SData/*9:0*/ PE_tb__DOT__result;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    VProcessing_Element__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VProcessing_Element___024root(VProcessing_Element__Syms* symsp, const char* namep);
    ~VProcessing_Element___024root();
    VL_UNCOPYABLE(VProcessing_Element___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
