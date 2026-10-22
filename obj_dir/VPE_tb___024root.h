// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPE_tb.h for the primary calling header

#ifndef VERILATED_VPE_TB___024ROOT_H_
#define VERILATED_VPE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VPE_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VPE_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ PE_tb__DOT__clk;
    CData/*0:0*/ PE_tb__DOT__rst_n;
    CData/*0:0*/ PE_tb__DOT__in_valid;
    CData/*0:0*/ PE_tb__DOT__load_slot;
    CData/*0:0*/ PE_tb__DOT__compute_slot;
    CData/*0:0*/ PE_tb__DOT__en;
    CData/*3:0*/ PE_tb__DOT__a;
    CData/*3:0*/ PE_tb__DOT__b;
    CData/*3:0*/ PE_tb__DOT__a_out;
    CData/*0:0*/ PE_tb__DOT__new_test;
    CData/*3:0*/ PE_tb__DOT__prev_a;
    CData/*3:0*/ PE_tb__DOT__dut__DOT__b1;
    CData/*3:0*/ PE_tb__DOT__dut__DOT__b2;
    CData/*3:0*/ PE_tb__DOT__dut__DOT__w;
    CData/*0:0*/ __Vtrigprevexpr___TOP__PE_tb__DOT__clk__0;
    SData/*9:0*/ PE_tb__DOT__above_result;
    SData/*9:0*/ PE_tb__DOT__result;
    SData/*9:0*/ PE_tb__DOT__expected;
    IData/*31:0*/ PE_tb__DOT____VlemExpr_0;
    IData/*31:0*/ PE_tb__DOT__errors;
    IData/*31:0*/ PE_tb__DOT__checks;
    IData/*31:0*/ PE_tb__DOT__test_errors;
    IData/*31:0*/ PE_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__w;
    IData/*31:0*/ PE_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__av;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h68bb2b13__0;

    // INTERNAL VARIABLES
    VPE_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VPE_tb___024root(VPE_tb__Syms* symsp, const char* namep);
    ~VPE_tb___024root();
    VL_UNCOPYABLE(VPE_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
