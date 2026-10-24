// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSA_tb.h for the primary calling header

#ifndef VERILATED_VSA_TB___024ROOT_H_
#define VERILATED_VSA_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VSA_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VSA_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ SA_tb__DOT__clk;
        CData/*0:0*/ SA_tb__DOT__rst_n;
        CData/*0:0*/ SA_tb__DOT__en;
        CData/*0:0*/ SA_tb__DOT__in_valid;
        CData/*0:0*/ SA_tb__DOT__load_slot;
        CData/*3:0*/ SA_tb__DOT__expected_temp;
        CData/*3:0*/ SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__a_out;
        CData/*0:0*/ SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out;
        CData/*3:0*/ SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__a_out;
        CData/*0:0*/ SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out;
        CData/*3:0*/ SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__a_out;
        CData/*0:0*/ SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out;
        CData/*3:0*/ SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__a_out;
        CData/*0:0*/ SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out;
        CData/*3:0*/ SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__a_out;
        CData/*0:0*/ SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out;
        CData/*3:0*/ SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__a_out;
        CData/*0:0*/ SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out;
        CData/*3:0*/ SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__a_out;
        CData/*0:0*/ SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out;
        CData/*3:0*/ SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__a_out;
        CData/*0:0*/ SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out;
        CData/*3:0*/ SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__a_out;
        CData/*0:0*/ SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out;
        CData/*3:0*/ SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1;
        CData/*3:0*/ SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2;
        CData/*3:0*/ SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w;
        CData/*3:0*/ SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1;
        CData/*3:0*/ SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2;
        CData/*3:0*/ SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w;
        CData/*3:0*/ SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1;
        CData/*3:0*/ SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2;
        CData/*3:0*/ SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w;
        CData/*3:0*/ SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1;
        CData/*3:0*/ SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2;
        CData/*3:0*/ SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w;
        CData/*3:0*/ SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1;
        CData/*3:0*/ SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2;
        CData/*3:0*/ SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w;
        CData/*3:0*/ SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1;
        CData/*3:0*/ SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2;
        CData/*3:0*/ SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w;
        CData/*3:0*/ SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1;
        CData/*3:0*/ SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2;
        CData/*3:0*/ SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w;
        CData/*3:0*/ SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1;
        CData/*3:0*/ SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2;
        CData/*3:0*/ SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w;
        CData/*3:0*/ SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1;
        CData/*3:0*/ SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2;
        CData/*3:0*/ SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w;
        CData/*0:0*/ __Vtrigprevexpr___TOP__SA_tb__DOT__clk__0;
        SData/*9:0*/ SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__result;
        SData/*9:0*/ SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__result;
        SData/*9:0*/ SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__result;
        SData/*9:0*/ SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__result;
        SData/*9:0*/ SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__result;
        SData/*9:0*/ SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__result;
        SData/*9:0*/ SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__result;
        SData/*9:0*/ SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__result;
        SData/*9:0*/ SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__result;
        IData/*31:0*/ SA_tb__DOT__errors;
        IData/*31:0*/ SA_tb__DOT__checks;
        IData/*31:0*/ SA_tb__DOT__test_errors;
    };
    struct {
        IData/*31:0*/ SA_tb__DOT__m;
        IData/*31:0*/ SA_tb__DOT__test_num;
        IData/*31:0*/ __Vi;
        VlUnpacked<CData/*0:0*/, 3> SA_tb__DOT__slot_in;
        VlUnpacked<CData/*3:0*/, 3> SA_tb__DOT__a_in;
        VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3> SA_tb__DOT__b_in;
        VlUnpacked<SData/*9:0*/, 3> SA_tb__DOT__result_matrix;
        VlUnpacked<SData/*9:0*/, 3> SA_tb__DOT____Vcellout__dut__result_matrix;
        VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3> SA_tb__DOT____Vcellinp__dut__b_in;
        VlUnpacked<CData/*3:0*/, 3> SA_tb__DOT____Vcellinp__dut__a_in;
        VlUnpacked<CData/*0:0*/, 3> SA_tb__DOT____Vcellinp__dut__slot_in;
        VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3> SA_tb__DOT__hist;
        VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3> SA_tb__DOT__A;
        VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3> SA_tb__DOT__W;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 3>, 3> SA_tb__DOT__C_exp;
        VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3> SA_tb__DOT__pe_a;
        VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3> SA_tb__DOT__pe_b1;
        VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3> SA_tb__DOT__pe_b2;
        VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3> SA_tb__DOT__A2;
        VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3> SA_tb__DOT__W2;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 3>, 3> SA_tb__DOT__C_exp2;
        VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3> SA_tb__DOT__dut__DOT__a_wire;
        VlUnpacked<VlUnpacked<SData/*9:0*/, 3>, 3> SA_tb__DOT__dut__DOT__p_wire;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 3>, 3> SA_tb__DOT__dut__DOT__slot_wire;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h81bc4b78__0;
    VlTriggerScheduler __VtrigSched_h81bc4bb7__0;

    // INTERNAL VARIABLES
    VSA_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VSA_tb___024root(VSA_tb__Syms* symsp, const char* namep);
    ~VSA_tb___024root();
    VL_UNCOPYABLE(VSA_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
