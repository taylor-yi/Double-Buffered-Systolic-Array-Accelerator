// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPE.h for the primary calling header

#ifndef VERILATED_VPE___024ROOT_H_
#define VERILATED_VPE___024ROOT_H_  // guard

#include "verilated.h"


class VPE__Syms;

class alignas(VL_CACHE_LINE_BYTES) VPE___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(in_valid,0,0);
    VL_IN8(load_slot,0,0);
    VL_IN8(compute_slot,0,0);
    VL_IN8(en,0,0);
    VL_IN8(a,3,0);
    VL_IN8(b,3,0);
    VL_OUT8(a_out,3,0);
    VL_OUT8(b_out,3,0);
    CData/*3:0*/ PE__DOT__b1;
    CData/*3:0*/ PE__DOT__b2;
    CData/*3:0*/ PE__DOT__w;
    CData/*0:0*/ __Vsampled_TOP__in_valid;
    CData/*0:0*/ __Vsampled_TOP__en;
    CData/*0:0*/ __Vsampled_TOP__load_slot;
    CData/*0:0*/ __Vsampled_TOP__compute_slot;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__in_valid__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__load_slot__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__compute_slot__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__en__0;
    CData/*3:0*/ __Vtrigprevexpr___TOP__a__0;
    CData/*3:0*/ __Vtrigprevexpr___TOP__b__0;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__1;
    VL_IN16(above_result,9,0);
    VL_OUT16(result,9,0);
    SData/*9:0*/ PE__DOT__mult_result;
    SData/*9:0*/ __Vtrigprevexpr___TOP__above_result__0;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VPE__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VPE___024root(VPE__Syms* symsp, const char* namep);
    ~VPE___024root();
    VL_UNCOPYABLE(VPE___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
