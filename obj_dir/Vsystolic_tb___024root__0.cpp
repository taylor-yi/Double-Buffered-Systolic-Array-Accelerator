// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_tb.h for the primary calling header

#include "Vsystolic_tb__pch.h"

VlCoroutine Vsystolic_tb___024root___eval_initial__TOP__Vtiming__0(Vsystolic_tb___024root* vlSelf);
VlCoroutine Vsystolic_tb___024root___eval_initial__TOP__Vtiming__1(Vsystolic_tb___024root* vlSelf);

void Vsystolic_tb___024root___eval_initial(Vsystolic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval_initial\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSymsp->_vm_contextp__->dumpfile("dump.vcd"s);
        vlSymsp->_traceDumpOpen();
    }
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vsystolic_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vsystolic_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

extern const VlUnpacked<CData/*0:0*/, 128> Vsystolic_tb__ConstPool__TABLE_h08a72cc3_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsystolic_tb__ConstPool__TABLE_h028f018c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsystolic_tb__ConstPool__TABLE_h82a00311_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsystolic_tb__ConstPool__TABLE_h757529b2_0;

void Vsystolic_tb___024root___eval_sample(Vsystolic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval_sample\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__TABLE_h08a72cc3_0 = Vsystolic_tb__ConstPool__TABLE_h08a72cc3_0;
    vlSelfRef.__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0 
        = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
    vlSelfRef.__Vsampled_TOP__TABLE_h028f018c_0 = Vsystolic_tb__ConstPool__TABLE_h028f018c_0;
    vlSelfRef.__Vsampled_TOP__TABLE_h82a00311_0 = Vsystolic_tb__ConstPool__TABLE_h82a00311_0;
    vlSelfRef.__Vsampled_TOP__systolic_tb__DOT__dut__DOT__array__DOT__slot_wire 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire;
    vlSelfRef.__Vsampled_TOP__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly;
    vlSelfRef.__Vsampled_TOP__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly;
    vlSelfRef.__Vsampled_TOP__TABLE_h757529b2_0 = Vsystolic_tb__ConstPool__TABLE_h757529b2_0;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vsystolic_tb___024root___eval_ico(Vsystolic_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval_ico\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsystolic_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vsystolic_tb___024root___timing_ready(Vsystolic_tb___024root* vlSelf);
void Vsystolic_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vsystolic_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vsystolic_tb___024root___timing_resume(Vsystolic_tb___024root* vlSelf);
void Vsystolic_tb___024root___act_sequent__TOP__0(Vsystolic_tb___024root* vlSelf);

bool Vsystolic_tb___024root___eval_act(Vsystolic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval_act\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((IData)(vlSelfRef.systolic_tb__DOT__clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__systolic_tb__DOT__clk__0))) 
                                                             << 1U) 
                                                            | ((~ (IData)(vlSelfRef.systolic_tb__DOT__clk)) 
                                                               & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__systolic_tb__DOT__clk__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__systolic_tb__DOT__clk__0 
            = vlSelfRef.systolic_tb__DOT__clk;
    }
    Vsystolic_tb___024root___timing_ready(vlSelf);
    Vsystolic_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsystolic_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vsystolic_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vsystolic_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vsystolic_tb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
                Vsystolic_tb___024root___act_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
            }
        }
    }
    return (__VactExecute);
}

bool Vsystolic_tb___024root___eval_inact(Vsystolic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval_inact\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("systolic_tb.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vsystolic_tb___024root___nba_sequent__TOP__0(Vsystolic_tb___024root* vlSelf);
void Vsystolic_tb___024root___nba_sequent__TOP__1(Vsystolic_tb___024root* vlSelf);
void Vsystolic_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vsystolic_tb___024root___eval_nba(Vsystolic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval_nba\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vsystolic_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vsystolic_tb___024root___nba_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[4U] = 1U;
            }
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vsystolic_tb___024root___nba_sequent__TOP__1(vlSelf);
                vlSelfRef.__Vm_traceActivity[5U] = 1U;
            }
        }
        Vsystolic_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vsystolic_tb___024root___eval_obs(Vsystolic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval_obs\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vsystolic_tb___024root___eval_react(Vsystolic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval_react\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vsystolic_tb___024root___eval_postponed(Vsystolic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval_postponed\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VlCoroutine Vsystolic_tb___024root___eval_initial__TOP__Vtiming__0(Vsystolic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.systolic_tb__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "systolic_tb.sv", 
                                             14);
        vlSelfRef.systolic_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.systolic_tb__DOT__clk)));
    }
    co_return;
}

void Vsystolic_tb___024root____VbeforeTrig_h174e5de0__0(Vsystolic_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vsystolic_tb___024root___eval_initial__TOP__Vtiming__1(Vsystolic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ systolic_tb__DOT____VlemExpr_0;
    IData/*31:0*/ systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__t;
    systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__t = 0;
    IData/*31:0*/ systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_1__DOT____Vrepeat0;
    systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_2__DOT____Vrepeat1;
    systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_3__DOT____Vrepeat2;
    systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_systolic_tb__DOT__set_pins__1__k;
    __Vtask_systolic_tb__DOT__set_pins__1__k = 0;
    IData/*31:0*/ __Vtask_systolic_tb__DOT__set_pins__2__k;
    __Vtask_systolic_tb__DOT__set_pins__2__k = 0;
    // Body
    systolic_tb__DOT____VlemExpr_0 = VL_VALUEPLUSARGS_INN(64, "TESTS=%s"s, 
                                                          vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__path);
    if ((! systolic_tb__DOT____VlemExpr_0)) {
        vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__path = "tests.txt"s;
    }
    vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd 
        = VL_FOPEN_NN(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__path
                      , "r"s);
    ;
    if (VL_UNLIKELY(((0U == vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd)))) {
        VL_WRITEF_NX("Could not open %s. Run python3 gen_tests.py first.\n",1
                     , 'S',&(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__path));
        VL_FINISH_MT("systolic_tb.sv", 73, "");
    }
    vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n 
        = VL_FSCANF_INX(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd,"%d",1
                        , '#',32,&(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__num_tests)) ;
    vlSelfRef.systolic_tb__DOT__rst_n = 0U;
    vlSelfRef.systolic_tb__DOT__in_valid = 0U;
    vlSelfRef.systolic_tb__DOT__jobs = 0U;
    vlSelfRef.systolic_tb__DOT__outs_seen = 0U;
    vlSelfRef.systolic_tb__DOT__A[0U][0U][0U] = 0U;
    vlSelfRef.systolic_tb__DOT__A[0U][0U][1U] = 0U;
    vlSelfRef.systolic_tb__DOT__A[0U][0U][2U] = 0U;
    vlSelfRef.systolic_tb__DOT__A[0U][1U][0U] = 0U;
    vlSelfRef.systolic_tb__DOT__A[0U][1U][1U] = 0U;
    vlSelfRef.systolic_tb__DOT__A[0U][1U][2U] = 0U;
    vlSelfRef.systolic_tb__DOT__A[0U][2U][0U] = 0U;
    vlSelfRef.systolic_tb__DOT__A[0U][2U][1U] = 0U;
    vlSelfRef.systolic_tb__DOT__A[0U][2U][2U] = 0U;
    vlSelfRef.systolic_tb__DOT__A[1U][0U][0U] = 0U;
    vlSelfRef.systolic_tb__DOT__A[1U][0U][1U] = 0U;
    vlSelfRef.systolic_tb__DOT__A[1U][0U][2U] = 0U;
    vlSelfRef.systolic_tb__DOT__A[1U][1U][0U] = 0U;
    vlSelfRef.systolic_tb__DOT__A[1U][1U][1U] = 0U;
    vlSelfRef.systolic_tb__DOT__A[1U][1U][2U] = 0U;
    vlSelfRef.systolic_tb__DOT__A[1U][2U][0U] = 0U;
    vlSelfRef.systolic_tb__DOT__A[1U][2U][1U] = 0U;
    vlSelfRef.systolic_tb__DOT__A[1U][2U][2U] = 0U;
    vlSelfRef.systolic_tb__DOT__B[0U][0U][0U] = 0U;
    vlSelfRef.systolic_tb__DOT__B[0U][0U][1U] = 0U;
    vlSelfRef.systolic_tb__DOT__B[0U][0U][2U] = 0U;
    vlSelfRef.systolic_tb__DOT__B[0U][1U][0U] = 0U;
    vlSelfRef.systolic_tb__DOT__B[0U][1U][1U] = 0U;
    vlSelfRef.systolic_tb__DOT__B[0U][1U][2U] = 0U;
    vlSelfRef.systolic_tb__DOT__B[0U][2U][0U] = 0U;
    vlSelfRef.systolic_tb__DOT__B[0U][2U][1U] = 0U;
    vlSelfRef.systolic_tb__DOT__B[0U][2U][2U] = 0U;
    vlSelfRef.systolic_tb__DOT__B[1U][0U][0U] = 0U;
    vlSelfRef.systolic_tb__DOT__B[1U][0U][1U] = 0U;
    vlSelfRef.systolic_tb__DOT__B[1U][0U][2U] = 0U;
    vlSelfRef.systolic_tb__DOT__B[1U][1U][0U] = 0U;
    vlSelfRef.systolic_tb__DOT__B[1U][1U][1U] = 0U;
    vlSelfRef.systolic_tb__DOT__B[1U][1U][2U] = 0U;
    vlSelfRef.systolic_tb__DOT__B[1U][2U][0U] = 0U;
    vlSelfRef.systolic_tb__DOT__B[1U][2U][1U] = 0U;
    vlSelfRef.systolic_tb__DOT__B[1U][2U][2U] = 0U;
    vlSelfRef.systolic_tb__DOT__a11 = vlSelfRef.systolic_tb__DOT__A[0U][0U][0U];
    vlSelfRef.systolic_tb__DOT__a12 = vlSelfRef.systolic_tb__DOT__A[0U][0U][1U];
    vlSelfRef.systolic_tb__DOT__a13 = vlSelfRef.systolic_tb__DOT__A[0U][0U][2U];
    vlSelfRef.systolic_tb__DOT__a21 = vlSelfRef.systolic_tb__DOT__A[0U][1U][0U];
    vlSelfRef.systolic_tb__DOT__a22 = vlSelfRef.systolic_tb__DOT__A[0U][1U][1U];
    vlSelfRef.systolic_tb__DOT__a23 = vlSelfRef.systolic_tb__DOT__A[0U][1U][2U];
    vlSelfRef.systolic_tb__DOT__a31 = vlSelfRef.systolic_tb__DOT__A[0U][2U][0U];
    vlSelfRef.systolic_tb__DOT__a32 = vlSelfRef.systolic_tb__DOT__A[0U][2U][1U];
    vlSelfRef.systolic_tb__DOT__a33 = vlSelfRef.systolic_tb__DOT__A[0U][2U][2U];
    vlSelfRef.systolic_tb__DOT__b11 = vlSelfRef.systolic_tb__DOT__B[0U][0U][0U];
    vlSelfRef.systolic_tb__DOT__b12 = vlSelfRef.systolic_tb__DOT__B[0U][0U][1U];
    vlSelfRef.systolic_tb__DOT__b13 = vlSelfRef.systolic_tb__DOT__B[0U][0U][2U];
    vlSelfRef.systolic_tb__DOT__b21 = vlSelfRef.systolic_tb__DOT__B[0U][1U][0U];
    vlSelfRef.systolic_tb__DOT__b22 = vlSelfRef.systolic_tb__DOT__B[0U][1U][1U];
    vlSelfRef.systolic_tb__DOT__b23 = vlSelfRef.systolic_tb__DOT__B[0U][1U][2U];
    vlSelfRef.systolic_tb__DOT__b31 = vlSelfRef.systolic_tb__DOT__B[0U][2U][0U];
    vlSelfRef.systolic_tb__DOT__b32 = vlSelfRef.systolic_tb__DOT__B[0U][2U][1U];
    vlSelfRef.systolic_tb__DOT__b33 = vlSelfRef.systolic_tb__DOT__B[0U][2U][2U];
    systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__t = 0U;
    while (VL_LTS_III(32, systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__t, vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__num_tests)) {
        vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n 
            = VL_FSCANF_INX(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd,"%d %d",2
                            , '#',32,&(vlSelfRef.systolic_tb__DOT__jobs)
                            , '#',32,&(vlSelfRef.systolic_tb__DOT__gap)) ;
        vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k = 0U;
        while (VL_LTS_III(32, vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k, vlSelfRef.systolic_tb__DOT__jobs)) {
            vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n 
                = VL_FSCANF_INX(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd,"%d",1
                                , '#',4,&(vlSelfRef.systolic_tb__DOT__A
                                          [(1U & vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k)][0U][0U])) ;
            vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n 
                = VL_FSCANF_INX(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd,"%d",1
                                , '#',4,&(vlSelfRef.systolic_tb__DOT__A
                                          [(1U & vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k)][0U][1U])) ;
            vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n 
                = VL_FSCANF_INX(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd,"%d",1
                                , '#',4,&(vlSelfRef.systolic_tb__DOT__A
                                          [(1U & vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k)][0U][2U])) ;
            vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n 
                = VL_FSCANF_INX(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd,"%d",1
                                , '#',4,&(vlSelfRef.systolic_tb__DOT__A
                                          [(1U & vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k)][1U][0U])) ;
            vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n 
                = VL_FSCANF_INX(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd,"%d",1
                                , '#',4,&(vlSelfRef.systolic_tb__DOT__A
                                          [(1U & vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k)][1U][1U])) ;
            vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n 
                = VL_FSCANF_INX(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd,"%d",1
                                , '#',4,&(vlSelfRef.systolic_tb__DOT__A
                                          [(1U & vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k)][1U][2U])) ;
            vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n 
                = VL_FSCANF_INX(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd,"%d",1
                                , '#',4,&(vlSelfRef.systolic_tb__DOT__A
                                          [(1U & vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k)][2U][0U])) ;
            vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n 
                = VL_FSCANF_INX(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd,"%d",1
                                , '#',4,&(vlSelfRef.systolic_tb__DOT__A
                                          [(1U & vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k)][2U][1U])) ;
            vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n 
                = VL_FSCANF_INX(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd,"%d",1
                                , '#',4,&(vlSelfRef.systolic_tb__DOT__A
                                          [(1U & vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k)][2U][2U])) ;
            vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n 
                = VL_FSCANF_INX(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd,"%d",1
                                , '#',4,&(vlSelfRef.systolic_tb__DOT__B
                                          [(1U & vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k)][0U][0U])) ;
            vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n 
                = VL_FSCANF_INX(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd,"%d",1
                                , '#',4,&(vlSelfRef.systolic_tb__DOT__B
                                          [(1U & vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k)][0U][1U])) ;
            vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n 
                = VL_FSCANF_INX(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd,"%d",1
                                , '#',4,&(vlSelfRef.systolic_tb__DOT__B
                                          [(1U & vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k)][0U][2U])) ;
            vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n 
                = VL_FSCANF_INX(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd,"%d",1
                                , '#',4,&(vlSelfRef.systolic_tb__DOT__B
                                          [(1U & vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k)][1U][0U])) ;
            vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n 
                = VL_FSCANF_INX(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd,"%d",1
                                , '#',4,&(vlSelfRef.systolic_tb__DOT__B
                                          [(1U & vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k)][1U][1U])) ;
            vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n 
                = VL_FSCANF_INX(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd,"%d",1
                                , '#',4,&(vlSelfRef.systolic_tb__DOT__B
                                          [(1U & vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k)][1U][2U])) ;
            vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n 
                = VL_FSCANF_INX(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd,"%d",1
                                , '#',4,&(vlSelfRef.systolic_tb__DOT__B
                                          [(1U & vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k)][2U][0U])) ;
            vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n 
                = VL_FSCANF_INX(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd,"%d",1
                                , '#',4,&(vlSelfRef.systolic_tb__DOT__B
                                          [(1U & vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k)][2U][1U])) ;
            vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n 
                = VL_FSCANF_INX(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd,"%d",1
                                , '#',4,&(vlSelfRef.systolic_tb__DOT__B
                                          [(1U & vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k)][2U][2U])) ;
            vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n 
                = VL_FSCANF_INX(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd,"%d",1
                                , '#',32,&(vlSelfRef.systolic_tb__DOT__C_exp
                                           [(1U & vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k)][0U][0U])) ;
            vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n 
                = VL_FSCANF_INX(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd,"%d",1
                                , '#',32,&(vlSelfRef.systolic_tb__DOT__C_exp
                                           [(1U & vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k)][0U][1U])) ;
            vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n 
                = VL_FSCANF_INX(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd,"%d",1
                                , '#',32,&(vlSelfRef.systolic_tb__DOT__C_exp
                                           [(1U & vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k)][0U][2U])) ;
            vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n 
                = VL_FSCANF_INX(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd,"%d",1
                                , '#',32,&(vlSelfRef.systolic_tb__DOT__C_exp
                                           [(1U & vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k)][1U][0U])) ;
            vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n 
                = VL_FSCANF_INX(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd,"%d",1
                                , '#',32,&(vlSelfRef.systolic_tb__DOT__C_exp
                                           [(1U & vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k)][1U][1U])) ;
            vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n 
                = VL_FSCANF_INX(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd,"%d",1
                                , '#',32,&(vlSelfRef.systolic_tb__DOT__C_exp
                                           [(1U & vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k)][1U][2U])) ;
            vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n 
                = VL_FSCANF_INX(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd,"%d",1
                                , '#',32,&(vlSelfRef.systolic_tb__DOT__C_exp
                                           [(1U & vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k)][2U][0U])) ;
            vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n 
                = VL_FSCANF_INX(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd,"%d",1
                                , '#',32,&(vlSelfRef.systolic_tb__DOT__C_exp
                                           [(1U & vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k)][2U][1U])) ;
            vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n 
                = VL_FSCANF_INX(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd,"%d",1
                                , '#',32,&(vlSelfRef.systolic_tb__DOT__C_exp
                                           [(1U & vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k)][2U][2U])) ;
            vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k 
                = ((IData)(1U) + vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k);
        }
        vlSelfRef.systolic_tb__DOT__rst_n = 0U;
        vlSelfRef.systolic_tb__DOT__outs_seen = 0U;
        systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
        while (VL_LTS_III(32, 0U, systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
            Vsystolic_tb___024root____VbeforeTrig_h174e5de0__0(vlSelf, 
                                                               "@(negedge systolic_tb.clk)");
            co_await vlSelfRef.__VtrigSched_h174e5de0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge systolic_tb.clk)", 
                                                                 "systolic_tb.sv", 
                                                                 97);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = (systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_1__DOT____Vrepeat0 
                   - (IData)(1U));
        }
        vlSelfRef.systolic_tb__DOT__rst_n = 1U;
        vlSelfRef.systolic_tb__DOT__test_errors = vlSelfRef.systolic_tb__DOT__errors;
        Vsystolic_tb___024root____VbeforeTrig_h174e5de0__0(vlSelf, 
                                                           "@(negedge systolic_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h174e5de0__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge systolic_tb.clk)", 
                                                             "systolic_tb.sv", 
                                                             102);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_systolic_tb__DOT__set_pins__1__k = 0U;
        vlSelfRef.systolic_tb__DOT__a11 = vlSelfRef.systolic_tb__DOT__A
            [(1U & __Vtask_systolic_tb__DOT__set_pins__1__k)][0U][0U];
        vlSelfRef.systolic_tb__DOT__a12 = vlSelfRef.systolic_tb__DOT__A
            [(1U & __Vtask_systolic_tb__DOT__set_pins__1__k)][0U][1U];
        vlSelfRef.systolic_tb__DOT__a13 = vlSelfRef.systolic_tb__DOT__A
            [(1U & __Vtask_systolic_tb__DOT__set_pins__1__k)][0U][2U];
        vlSelfRef.systolic_tb__DOT__a21 = vlSelfRef.systolic_tb__DOT__A
            [(1U & __Vtask_systolic_tb__DOT__set_pins__1__k)][1U][0U];
        vlSelfRef.systolic_tb__DOT__a22 = vlSelfRef.systolic_tb__DOT__A
            [(1U & __Vtask_systolic_tb__DOT__set_pins__1__k)][1U][1U];
        vlSelfRef.systolic_tb__DOT__a23 = vlSelfRef.systolic_tb__DOT__A
            [(1U & __Vtask_systolic_tb__DOT__set_pins__1__k)][1U][2U];
        vlSelfRef.systolic_tb__DOT__a31 = vlSelfRef.systolic_tb__DOT__A
            [(1U & __Vtask_systolic_tb__DOT__set_pins__1__k)][2U][0U];
        vlSelfRef.systolic_tb__DOT__a32 = vlSelfRef.systolic_tb__DOT__A
            [(1U & __Vtask_systolic_tb__DOT__set_pins__1__k)][2U][1U];
        vlSelfRef.systolic_tb__DOT__a33 = vlSelfRef.systolic_tb__DOT__A
            [(1U & __Vtask_systolic_tb__DOT__set_pins__1__k)][2U][2U];
        vlSelfRef.systolic_tb__DOT__b11 = vlSelfRef.systolic_tb__DOT__B
            [(1U & __Vtask_systolic_tb__DOT__set_pins__1__k)][0U][0U];
        vlSelfRef.systolic_tb__DOT__b12 = vlSelfRef.systolic_tb__DOT__B
            [(1U & __Vtask_systolic_tb__DOT__set_pins__1__k)][0U][1U];
        vlSelfRef.systolic_tb__DOT__b13 = vlSelfRef.systolic_tb__DOT__B
            [(1U & __Vtask_systolic_tb__DOT__set_pins__1__k)][0U][2U];
        vlSelfRef.systolic_tb__DOT__b21 = vlSelfRef.systolic_tb__DOT__B
            [(1U & __Vtask_systolic_tb__DOT__set_pins__1__k)][1U][0U];
        vlSelfRef.systolic_tb__DOT__b22 = vlSelfRef.systolic_tb__DOT__B
            [(1U & __Vtask_systolic_tb__DOT__set_pins__1__k)][1U][1U];
        vlSelfRef.systolic_tb__DOT__b23 = vlSelfRef.systolic_tb__DOT__B
            [(1U & __Vtask_systolic_tb__DOT__set_pins__1__k)][1U][2U];
        vlSelfRef.systolic_tb__DOT__b31 = vlSelfRef.systolic_tb__DOT__B
            [(1U & __Vtask_systolic_tb__DOT__set_pins__1__k)][2U][0U];
        vlSelfRef.systolic_tb__DOT__b32 = vlSelfRef.systolic_tb__DOT__B
            [(1U & __Vtask_systolic_tb__DOT__set_pins__1__k)][2U][1U];
        vlSelfRef.systolic_tb__DOT__b33 = vlSelfRef.systolic_tb__DOT__B
            [(1U & __Vtask_systolic_tb__DOT__set_pins__1__k)][2U][2U];
        vlSelfRef.systolic_tb__DOT__in_valid = 1U;
        Vsystolic_tb___024root____VbeforeTrig_h174e5de0__0(vlSelf, 
                                                           "@(negedge systolic_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h174e5de0__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge systolic_tb.clk)", 
                                                             "systolic_tb.sv", 
                                                             105);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.systolic_tb__DOT__in_valid = 0U;
        if ((2U == vlSelfRef.systolic_tb__DOT__jobs)) {
            systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_2__DOT____Vrepeat1 
                = (vlSelfRef.systolic_tb__DOT__gap 
                   - (IData)(1U));
            while (VL_LTS_III(32, 0U, systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
                Vsystolic_tb___024root____VbeforeTrig_h174e5de0__0(vlSelf, 
                                                                   "@(negedge systolic_tb.clk)");
                co_await vlSelfRef.__VtrigSched_h174e5de0__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge systolic_tb.clk)", 
                                                                     "systolic_tb.sv", 
                                                                     110);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_2__DOT____Vrepeat1 
                    = (systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_2__DOT____Vrepeat1 
                       - (IData)(1U));
            }
            __Vtask_systolic_tb__DOT__set_pins__2__k = 1U;
            vlSelfRef.systolic_tb__DOT__a11 = vlSelfRef.systolic_tb__DOT__A
                [(1U & __Vtask_systolic_tb__DOT__set_pins__2__k)][0U][0U];
            vlSelfRef.systolic_tb__DOT__a12 = vlSelfRef.systolic_tb__DOT__A
                [(1U & __Vtask_systolic_tb__DOT__set_pins__2__k)][0U][1U];
            vlSelfRef.systolic_tb__DOT__a13 = vlSelfRef.systolic_tb__DOT__A
                [(1U & __Vtask_systolic_tb__DOT__set_pins__2__k)][0U][2U];
            vlSelfRef.systolic_tb__DOT__a21 = vlSelfRef.systolic_tb__DOT__A
                [(1U & __Vtask_systolic_tb__DOT__set_pins__2__k)][1U][0U];
            vlSelfRef.systolic_tb__DOT__a22 = vlSelfRef.systolic_tb__DOT__A
                [(1U & __Vtask_systolic_tb__DOT__set_pins__2__k)][1U][1U];
            vlSelfRef.systolic_tb__DOT__a23 = vlSelfRef.systolic_tb__DOT__A
                [(1U & __Vtask_systolic_tb__DOT__set_pins__2__k)][1U][2U];
            vlSelfRef.systolic_tb__DOT__a31 = vlSelfRef.systolic_tb__DOT__A
                [(1U & __Vtask_systolic_tb__DOT__set_pins__2__k)][2U][0U];
            vlSelfRef.systolic_tb__DOT__a32 = vlSelfRef.systolic_tb__DOT__A
                [(1U & __Vtask_systolic_tb__DOT__set_pins__2__k)][2U][1U];
            vlSelfRef.systolic_tb__DOT__a33 = vlSelfRef.systolic_tb__DOT__A
                [(1U & __Vtask_systolic_tb__DOT__set_pins__2__k)][2U][2U];
            vlSelfRef.systolic_tb__DOT__b11 = vlSelfRef.systolic_tb__DOT__B
                [(1U & __Vtask_systolic_tb__DOT__set_pins__2__k)][0U][0U];
            vlSelfRef.systolic_tb__DOT__b12 = vlSelfRef.systolic_tb__DOT__B
                [(1U & __Vtask_systolic_tb__DOT__set_pins__2__k)][0U][1U];
            vlSelfRef.systolic_tb__DOT__b13 = vlSelfRef.systolic_tb__DOT__B
                [(1U & __Vtask_systolic_tb__DOT__set_pins__2__k)][0U][2U];
            vlSelfRef.systolic_tb__DOT__b21 = vlSelfRef.systolic_tb__DOT__B
                [(1U & __Vtask_systolic_tb__DOT__set_pins__2__k)][1U][0U];
            vlSelfRef.systolic_tb__DOT__b22 = vlSelfRef.systolic_tb__DOT__B
                [(1U & __Vtask_systolic_tb__DOT__set_pins__2__k)][1U][1U];
            vlSelfRef.systolic_tb__DOT__b23 = vlSelfRef.systolic_tb__DOT__B
                [(1U & __Vtask_systolic_tb__DOT__set_pins__2__k)][1U][2U];
            vlSelfRef.systolic_tb__DOT__b31 = vlSelfRef.systolic_tb__DOT__B
                [(1U & __Vtask_systolic_tb__DOT__set_pins__2__k)][2U][0U];
            vlSelfRef.systolic_tb__DOT__b32 = vlSelfRef.systolic_tb__DOT__B
                [(1U & __Vtask_systolic_tb__DOT__set_pins__2__k)][2U][1U];
            vlSelfRef.systolic_tb__DOT__b33 = vlSelfRef.systolic_tb__DOT__B
                [(1U & __Vtask_systolic_tb__DOT__set_pins__2__k)][2U][2U];
            vlSelfRef.systolic_tb__DOT__in_valid = 1U;
            Vsystolic_tb___024root____VbeforeTrig_h174e5de0__0(vlSelf, 
                                                               "@(negedge systolic_tb.clk)");
            co_await vlSelfRef.__VtrigSched_h174e5de0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge systolic_tb.clk)", 
                                                                 "systolic_tb.sv", 
                                                                 113);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.systolic_tb__DOT__in_valid = 0U;
        }
        vlSelfRef.systolic_tb__DOT__a11 = 0x0fU;
        vlSelfRef.systolic_tb__DOT__a12 = 0x0fU;
        vlSelfRef.systolic_tb__DOT__a13 = 0x0fU;
        vlSelfRef.systolic_tb__DOT__a21 = 0x0fU;
        vlSelfRef.systolic_tb__DOT__a22 = 0x0fU;
        vlSelfRef.systolic_tb__DOT__a23 = 0x0fU;
        vlSelfRef.systolic_tb__DOT__a31 = 0x0fU;
        vlSelfRef.systolic_tb__DOT__a32 = 0x0fU;
        vlSelfRef.systolic_tb__DOT__a33 = 0x0fU;
        vlSelfRef.systolic_tb__DOT__b11 = 0x0fU;
        vlSelfRef.systolic_tb__DOT__b12 = 0x0fU;
        vlSelfRef.systolic_tb__DOT__b13 = 0x0fU;
        vlSelfRef.systolic_tb__DOT__b21 = 0x0fU;
        vlSelfRef.systolic_tb__DOT__b22 = 0x0fU;
        vlSelfRef.systolic_tb__DOT__b23 = 0x0fU;
        vlSelfRef.systolic_tb__DOT__b31 = 0x0fU;
        vlSelfRef.systolic_tb__DOT__b32 = 0x0fU;
        vlSelfRef.systolic_tb__DOT__b33 = 0x0fU;
        vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__w = 0U;
        while ((VL_GTS_III(32, 0x00000028U, vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__w) 
                & VL_LTS_III(32, vlSelfRef.systolic_tb__DOT__outs_seen, vlSelfRef.systolic_tb__DOT__jobs))) {
            Vsystolic_tb___024root____VbeforeTrig_h174e5de0__0(vlSelf, 
                                                               "@(negedge systolic_tb.clk)");
            co_await vlSelfRef.__VtrigSched_h174e5de0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge systolic_tb.clk)", 
                                                                 "systolic_tb.sv", 
                                                                 122);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__w 
                = ((IData)(1U) + vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__w);
        }
        systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_3__DOT____Vrepeat2 = 5U;
        while (VL_LTS_III(32, 0U, systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
            Vsystolic_tb___024root____VbeforeTrig_h174e5de0__0(vlSelf, 
                                                               "@(negedge systolic_tb.clk)");
            co_await vlSelfRef.__VtrigSched_h174e5de0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge systolic_tb.clk)", 
                                                                 "systolic_tb.sv", 
                                                                 125);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = (systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_3__DOT____Vrepeat2 
                   - (IData)(1U));
        }
        vlSelfRef.systolic_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelfRef.systolic_tb__DOT__checks);
        if (VL_UNLIKELY(((vlSelfRef.systolic_tb__DOT__outs_seen 
                          != vlSelfRef.systolic_tb__DOT__jobs)))) {
            vlSelfRef.systolic_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelfRef.systolic_tb__DOT__errors);
            VL_WRITEF_NX("[%0t] %%Error: systolic_tb.sv:130: Assertion failed in %m: test %0d: got %0d out_valid pulses, expected %0d\n",6, 'M',vlSymsp->name(),"systolic_tb.unnamedblk3.unnamedblk4", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__t
                         , '~',32,vlSelfRef.systolic_tb__DOT__outs_seen
                         , '~',32,vlSelfRef.systolic_tb__DOT__jobs);
            VL_STOP_MT("systolic_tb.sv", 130, "");
        }
        if ((vlSelfRef.systolic_tb__DOT__errors == vlSelfRef.systolic_tb__DOT__test_errors)) {
            VL_WRITEF_NX("Test %0d passed: %0d job(s), gap %0d\n",3
                         , '~',32,systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__t
                         , '~',32,vlSelfRef.systolic_tb__DOT__jobs
                         , '~',32,vlSelfRef.systolic_tb__DOT__gap);
        } else {
            VL_WRITEF_NX("Test %0d FAILED: %0d job(s), gap %0d\n",3
                         , '~',32,systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__t
                         , '~',32,vlSelfRef.systolic_tb__DOT__jobs
                         , '~',32,vlSelfRef.systolic_tb__DOT__gap);
        }
        systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__t 
            = ((IData)(1U) + systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__t);
    }
    VL_FCLOSE_I(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd); if (
                                                                       (0U 
                                                                        == vlSelfRef.systolic_tb__DOT__errors)) {
        VL_WRITEF_NX("PASS: %0d tests, %0d checks\n",2
                     , '~',32,vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__num_tests
                     , '~',32,vlSelfRef.systolic_tb__DOT__checks);
    } else {
        VL_WRITEF_NX("FAIL: %0d errors in %0d checks\n",2
                     , '~',32,vlSelfRef.systolic_tb__DOT__errors
                     , '~',32,vlSelfRef.systolic_tb__DOT__checks);
    }
    VL_FINISH_MT("systolic_tb.sv", 142, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

bool Vsystolic_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

bool Vsystolic_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vsystolic_tb___024root___act_sequent__TOP__0(Vsystolic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___act_sequent__TOP__0\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed 
        = (((QData)((IData)(vlSelfRef.systolic_tb__DOT__a33)) 
            << 0x00000020U) | (QData)((IData)(((((((IData)(vlSelfRef.systolic_tb__DOT__a32) 
                                                   << 0x0000000cU) 
                                                  | ((IData)(vlSelfRef.systolic_tb__DOT__a31) 
                                                     << 8U)) 
                                                 | (((IData)(vlSelfRef.systolic_tb__DOT__a23) 
                                                     << 4U) 
                                                    | (IData)(vlSelfRef.systolic_tb__DOT__a22))) 
                                                << 0x00000010U) 
                                               | ((((IData)(vlSelfRef.systolic_tb__DOT__a21) 
                                                    << 0x0000000cU) 
                                                   | ((IData)(vlSelfRef.systolic_tb__DOT__a13) 
                                                      << 8U)) 
                                                  | (((IData)(vlSelfRef.systolic_tb__DOT__a12) 
                                                      << 4U) 
                                                     | (IData)(vlSelfRef.systolic_tb__DOT__a11)))))));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed 
        = (((QData)((IData)(vlSelfRef.systolic_tb__DOT__b33)) 
            << 0x00000020U) | (QData)((IData)(((((((IData)(vlSelfRef.systolic_tb__DOT__b32) 
                                                   << 0x0000000cU) 
                                                  | ((IData)(vlSelfRef.systolic_tb__DOT__b31) 
                                                     << 8U)) 
                                                 | (((IData)(vlSelfRef.systolic_tb__DOT__b23) 
                                                     << 4U) 
                                                    | (IData)(vlSelfRef.systolic_tb__DOT__b22))) 
                                                << 0x00000010U) 
                                               | ((((IData)(vlSelfRef.systolic_tb__DOT__b21) 
                                                    << 0x0000000cU) 
                                                   | ((IData)(vlSelfRef.systolic_tb__DOT__b13) 
                                                      << 8U)) 
                                                  | (((IData)(vlSelfRef.systolic_tb__DOT__b12) 
                                                      << 4U) 
                                                     | (IData)(vlSelfRef.systolic_tb__DOT__b11)))))));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[0U][0U] 
        = (0x0000000fU & (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[0U][1U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed 
                                  >> 4U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[0U][2U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed 
                                  >> 8U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[1U][0U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed 
                                  >> 0x0cU)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[1U][1U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed 
                                  >> 0x10U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[1U][2U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed 
                                  >> 0x14U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[2U][0U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed 
                                  >> 0x18U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[2U][1U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed 
                                  >> 0x1cU)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[2U][2U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed 
                                  >> 0x20U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[0U][0U] 
        = (0x0000000fU & (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[0U][1U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed 
                                  >> 4U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[0U][2U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed 
                                  >> 8U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[1U][0U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed 
                                  >> 0x0cU)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[1U][1U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed 
                                  >> 0x10U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[1U][2U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed 
                                  >> 0x14U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[2U][0U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed 
                                  >> 0x18U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[2U][1U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed 
                                  >> 0x1cU)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[2U][2U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed 
                                  >> 0x20U)));
}

extern const VlUnpacked<CData/*0:0*/, 128> Vsystolic_tb__ConstPool__TABLE_hbabea407_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vsystolic_tb__ConstPool__TABLE_h35b5d552_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vsystolic_tb__ConstPool__TABLE_hf261e1ac_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsystolic_tb__ConstPool__TABLE_h0c797d14_0;

void Vsystolic_tb___024root___nba_sequent__TOP__0(Vsystolic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___nba_sequent__TOP__0\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__systolic_tb__DOT__dut__DOT__entry_valid;
    __Vdly__systolic_tb__DOT__dut__DOT__entry_valid = 0;
    CData/*0:0*/ __Vdly__systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr;
    __Vdly__systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr = 0;
    CData/*0:0*/ __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v0;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v0 = 0;
    CData/*3:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v18;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v18 = 0;
    CData/*0:0*/ __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v18;
    __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v18 = 0;
    CData/*0:0*/ __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v18;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v18 = 0;
    CData/*3:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v19;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v19 = 0;
    CData/*0:0*/ __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v19;
    __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v19 = 0;
    CData/*3:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v20;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v20 = 0;
    CData/*0:0*/ __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v20;
    __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v20 = 0;
    CData/*3:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v21;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v21 = 0;
    CData/*0:0*/ __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v21;
    __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v21 = 0;
    CData/*3:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v22;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v22 = 0;
    CData/*0:0*/ __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v22;
    __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v22 = 0;
    CData/*3:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v23;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v23 = 0;
    CData/*0:0*/ __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v23;
    __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v23 = 0;
    CData/*3:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v24;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v24 = 0;
    CData/*0:0*/ __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v24;
    __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v24 = 0;
    CData/*3:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v25;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v25 = 0;
    CData/*0:0*/ __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v25;
    __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v25 = 0;
    CData/*3:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v26;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v26 = 0;
    CData/*0:0*/ __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v26;
    __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v26 = 0;
    CData/*3:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v18;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v18 = 0;
    CData/*0:0*/ __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v18;
    __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v18 = 0;
    CData/*3:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v19;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v19 = 0;
    CData/*0:0*/ __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v19;
    __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v19 = 0;
    CData/*3:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v20;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v20 = 0;
    CData/*0:0*/ __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v20;
    __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v20 = 0;
    CData/*3:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v21;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v21 = 0;
    CData/*0:0*/ __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v21;
    __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v21 = 0;
    CData/*3:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v22;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v22 = 0;
    CData/*0:0*/ __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v22;
    __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v22 = 0;
    CData/*3:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v23;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v23 = 0;
    CData/*0:0*/ __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v23;
    __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v23 = 0;
    CData/*3:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v24;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v24 = 0;
    CData/*0:0*/ __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v24;
    __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v24 = 0;
    CData/*3:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v25;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v25 = 0;
    CData/*0:0*/ __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v25;
    __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v25 = 0;
    CData/*3:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v26;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v26 = 0;
    CData/*0:0*/ __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v26;
    __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v26 = 0;
    CData/*3:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly__v0;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly__v0 = 0;
    CData/*0:0*/ __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly__v0;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly__v0 = 0;
    CData/*0:0*/ __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly__v1;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly__v1 = 0;
    CData/*0:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly__v0;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly__v0 = 0;
    CData/*0:0*/ __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly__v0;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly__v0 = 0;
    CData/*0:0*/ __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly__v1;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly__v1 = 0;
    CData/*3:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly__v0;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly__v0 = 0;
    CData/*0:0*/ __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly__v0;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly__v0 = 0;
    CData/*3:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly__v1;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly__v1 = 0;
    CData/*0:0*/ __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly__v2;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly__v2 = 0;
    CData/*0:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly__v0;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly__v0 = 0;
    CData/*0:0*/ __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly__v0;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly__v0 = 0;
    CData/*0:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly__v1;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly__v1 = 0;
    CData/*0:0*/ __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly__v2;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly__v2 = 0;
    SData/*9:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly__v0;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly__v0 = 0;
    CData/*0:0*/ __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly__v0;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly__v0 = 0;
    SData/*9:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly__v1;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly__v1 = 0;
    CData/*0:0*/ __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly__v2;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly__v2 = 0;
    SData/*9:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__1__KET____DOT__genblk1__DOT__dly__v0;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__1__KET____DOT__genblk1__DOT__dly__v0 = 0;
    CData/*0:0*/ __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__1__KET____DOT__genblk1__DOT__dly__v0;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__1__KET____DOT__genblk1__DOT__dly__v0 = 0;
    CData/*0:0*/ __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__1__KET____DOT__genblk1__DOT__dly__v1;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__1__KET____DOT__genblk1__DOT__dly__v1 = 0;
    SData/*9:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v0;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v0 = 0;
    CData/*0:0*/ __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v0;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v0 = 0;
    SData/*9:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v1;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v1 = 0;
    SData/*9:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v2;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v2 = 0;
    SData/*9:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v3;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v3 = 0;
    SData/*9:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v4;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v4 = 0;
    SData/*9:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v5;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v5 = 0;
    SData/*9:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v6;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v6 = 0;
    SData/*9:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v7;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v7 = 0;
    SData/*9:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v8;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v8 = 0;
    CData/*0:0*/ __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v9;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v9 = 0;
    CData/*0:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v0;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v0 = 0;
    CData/*0:0*/ __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v0;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v0 = 0;
    CData/*0:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v1;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v1 = 0;
    CData/*0:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v2;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v2 = 0;
    CData/*0:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v3;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v3 = 0;
    CData/*0:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v4;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v4 = 0;
    CData/*0:0*/ __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v5;
    __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v5 = 0;
    CData/*0:0*/ __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v6;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v6 = 0;
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (vlSelfRef.systolic_tb__DOT__rst_n) {
                if (VL_UNLIKELY((((vlSelfRef.__Vsampled_TOP__TABLE_h08a72cc3_0
                                   [vlSelfRef.__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0] 
                                   & vlSelfRef.__Vsampled_TOP__TABLE_h028f018c_0
                                   [vlSelfRef.__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0]) 
                                  & (vlSelfRef.__Vsampled_TOP__TABLE_h82a00311_0
                                     [vlSelfRef.__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0] 
                                     == vlSelfRef.__Vsampled_TOP__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly[1U]))))) {
                    VL_WRITEF_NX("[%0t] %%Error: processing_element.sv:53: Assertion failed in %m: Loading into the compute slot\n",3, 'M',vlSymsp->name(),"systolic_tb.dut.array.row[2].col[0].PE", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("processing_element.sv", 53, "");
                }
                if (VL_UNLIKELY((((vlSelfRef.__Vsampled_TOP__TABLE_h08a72cc3_0
                                   [vlSelfRef.__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0] 
                                   & vlSelfRef.__Vsampled_TOP__TABLE_h028f018c_0
                                   [vlSelfRef.__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0]) 
                                  & (vlSelfRef.__Vsampled_TOP__TABLE_h82a00311_0
                                     [vlSelfRef.__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0] 
                                     == vlSelfRef.__Vsampled_TOP__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly[0U]))))) {
                    VL_WRITEF_NX("[%0t] %%Error: processing_element.sv:53: Assertion failed in %m: Loading into the compute slot\n",3, 'M',vlSymsp->name(),"systolic_tb.dut.array.row[1].col[0].PE", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("processing_element.sv", 53, "");
                }
                if (VL_UNLIKELY((((vlSelfRef.__Vsampled_TOP__TABLE_h08a72cc3_0
                                   [vlSelfRef.__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0] 
                                   & vlSelfRef.__Vsampled_TOP__TABLE_h028f018c_0
                                   [vlSelfRef.__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0]) 
                                  & (vlSelfRef.__Vsampled_TOP__TABLE_h82a00311_0
                                     [vlSelfRef.__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0] 
                                     == vlSelfRef.__Vsampled_TOP__TABLE_h757529b2_0
                                     [vlSelfRef.__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0]))))) {
                    VL_WRITEF_NX("[%0t] %%Error: processing_element.sv:53: Assertion failed in %m: Loading into the compute slot\n",3, 'M',vlSymsp->name(),"systolic_tb.dut.array.row[0].col[0].PE", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("processing_element.sv", 53, "");
                }
                if (VL_UNLIKELY((((vlSelfRef.__Vsampled_TOP__TABLE_h08a72cc3_0
                                   [vlSelfRef.__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0] 
                                   & vlSelfRef.__Vsampled_TOP__TABLE_h028f018c_0
                                   [vlSelfRef.__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0]) 
                                  & (vlSelfRef.__Vsampled_TOP__TABLE_h82a00311_0
                                     [vlSelfRef.__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0] 
                                     == vlSelfRef.__Vsampled_TOP__systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[2U][1U]))))) {
                    VL_WRITEF_NX("[%0t] %%Error: processing_element.sv:53: Assertion failed in %m: Loading into the compute slot\n",3, 'M',vlSymsp->name(),"systolic_tb.dut.array.row[2].col[2].PE", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("processing_element.sv", 53, "");
                }
                if (VL_UNLIKELY((((vlSelfRef.__Vsampled_TOP__TABLE_h08a72cc3_0
                                   [vlSelfRef.__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0] 
                                   & vlSelfRef.__Vsampled_TOP__TABLE_h028f018c_0
                                   [vlSelfRef.__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0]) 
                                  & (vlSelfRef.__Vsampled_TOP__TABLE_h82a00311_0
                                     [vlSelfRef.__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0] 
                                     == vlSelfRef.__Vsampled_TOP__systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[2U][0U]))))) {
                    VL_WRITEF_NX("[%0t] %%Error: processing_element.sv:53: Assertion failed in %m: Loading into the compute slot\n",3, 'M',vlSymsp->name(),"systolic_tb.dut.array.row[2].col[1].PE", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("processing_element.sv", 53, "");
                }
                if (VL_UNLIKELY((((vlSelfRef.__Vsampled_TOP__TABLE_h08a72cc3_0
                                   [vlSelfRef.__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0] 
                                   & vlSelfRef.__Vsampled_TOP__TABLE_h028f018c_0
                                   [vlSelfRef.__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0]) 
                                  & (vlSelfRef.__Vsampled_TOP__TABLE_h82a00311_0
                                     [vlSelfRef.__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0] 
                                     == vlSelfRef.__Vsampled_TOP__systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[1U][1U]))))) {
                    VL_WRITEF_NX("[%0t] %%Error: processing_element.sv:53: Assertion failed in %m: Loading into the compute slot\n",3, 'M',vlSymsp->name(),"systolic_tb.dut.array.row[1].col[2].PE", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("processing_element.sv", 53, "");
                }
                if (VL_UNLIKELY((((vlSelfRef.__Vsampled_TOP__TABLE_h08a72cc3_0
                                   [vlSelfRef.__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0] 
                                   & vlSelfRef.__Vsampled_TOP__TABLE_h028f018c_0
                                   [vlSelfRef.__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0]) 
                                  & (vlSelfRef.__Vsampled_TOP__TABLE_h82a00311_0
                                     [vlSelfRef.__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0] 
                                     == vlSelfRef.__Vsampled_TOP__systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[1U][0U]))))) {
                    VL_WRITEF_NX("[%0t] %%Error: processing_element.sv:53: Assertion failed in %m: Loading into the compute slot\n",3, 'M',vlSymsp->name(),"systolic_tb.dut.array.row[1].col[1].PE", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("processing_element.sv", 53, "");
                }
                if (VL_UNLIKELY((((vlSelfRef.__Vsampled_TOP__TABLE_h08a72cc3_0
                                   [vlSelfRef.__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0] 
                                   & vlSelfRef.__Vsampled_TOP__TABLE_h028f018c_0
                                   [vlSelfRef.__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0]) 
                                  & (vlSelfRef.__Vsampled_TOP__TABLE_h82a00311_0
                                     [vlSelfRef.__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0] 
                                     == vlSelfRef.__Vsampled_TOP__systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[0U][1U]))))) {
                    VL_WRITEF_NX("[%0t] %%Error: processing_element.sv:53: Assertion failed in %m: Loading into the compute slot\n",3, 'M',vlSymsp->name(),"systolic_tb.dut.array.row[0].col[2].PE", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("processing_element.sv", 53, "");
                }
                if (VL_UNLIKELY((((vlSelfRef.__Vsampled_TOP__TABLE_h08a72cc3_0
                                   [vlSelfRef.__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0] 
                                   & vlSelfRef.__Vsampled_TOP__TABLE_h028f018c_0
                                   [vlSelfRef.__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0]) 
                                  & (vlSelfRef.__Vsampled_TOP__TABLE_h82a00311_0
                                     [vlSelfRef.__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0] 
                                     == vlSelfRef.__Vsampled_TOP__systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[0U][0U]))))) {
                    VL_WRITEF_NX("[%0t] %%Error: processing_element.sv:53: Assertion failed in %m: Loading into the compute slot\n",3, 'M',vlSymsp->name(),"systolic_tb.dut.array.row[0].col[1].PE", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("processing_element.sv", 53, "");
                }
            }
        }
    }
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__1__KET____DOT__genblk1__DOT__dly__v0 = 0U;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__1__KET____DOT__genblk1__DOT__dly__v1 = 0U;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly__v0 = 0U;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly__v2 = 0U;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v0 = 0U;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v6 = 0U;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly__v0 = 0U;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly__v1 = 0U;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly__v0 = 0U;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly__v1 = 0U;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly__v0 = 0U;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly__v2 = 0U;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly__v0 = 0U;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly__v2 = 0U;
    __Vdly__systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr;
    __Vdly__systolic_tb__DOT__dut__DOT__entry_valid 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__entry_valid;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v0 = 0U;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v18 = 0U;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v0 = 0U;
    __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v9 = 0U;
    if (vlSelfRef.systolic_tb__DOT__rst_n) {
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__1__KET____DOT__genblk1__DOT__dly__v0 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__result_matrix[1U];
        __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__1__KET____DOT__genblk1__DOT__dly__v0 = 1U;
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly__v0 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__result_matrix[0U];
        __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly__v0 = 1U;
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly__v1 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly[0U];
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v0 
            = (Vsystolic_tb__ConstPool__TABLE_hbabea407_0
               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
               & (2U == Vsystolic_tb__ConstPool__TABLE_h35b5d552_0
                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
        __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v0 = 1U;
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v1 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__mark[0U];
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v2 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__mark[1U];
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v3 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__mark[2U];
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v4 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__mark[3U];
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v5 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__mark[4U];
        if (Vsystolic_tb__ConstPool__TABLE_h028f018c_0
            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) {
            __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly__v0 
                = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_row[1U];
            __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly__v0 = 1U;
            __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly__v0 
                = Vsystolic_tb__ConstPool__TABLE_h757529b2_0
                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0];
            __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly__v0 = 1U;
            __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly__v0 
                = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_row[2U];
            __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly__v0 = 1U;
            __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly__v1 
                = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly[0U];
            __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly__v0 
                = Vsystolic_tb__ConstPool__TABLE_h757529b2_0
                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0];
            __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly__v0 = 1U;
            __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly__v1 
                = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly[0U];
            vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__a_out 
                = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly[0U];
            vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__a_out 
                = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly[1U];
            vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__a_out 
                = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_row[0U];
            vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out 
                = Vsystolic_tb__ConstPool__TABLE_h757529b2_0
                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0];
            vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out 
                = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly[0U];
            vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out 
                = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly[1U];
            vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__result 
                = (((0U == vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_row[0U]) 
                    | (0U == (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))
                    ? 0U : (0x000003ffU & (vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_row[0U] 
                                           * (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w))));
            vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__a_out 
                = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[2U][1U];
            vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__a_out 
                = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[2U][0U];
            vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__a_out 
                = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[1U][1U];
            vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__a_out 
                = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[1U][0U];
            vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__a_out 
                = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[0U][1U];
            vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__a_out 
                = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[0U][0U];
            vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__result 
                = (((0U == vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[0U][1U]) 
                    | (0U == (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))
                    ? 0U : (0x000003ffU & (vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[0U][1U] 
                                           * (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w))));
            vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__result 
                = (((0U == vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[0U][0U]) 
                    | (0U == (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))
                    ? 0U : (0x000003ffU & (vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[0U][0U] 
                                           * (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w))));
            vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out 
                = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[2U][1U];
            vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out 
                = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[2U][0U];
            vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out 
                = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[1U][1U];
            vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out 
                = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[1U][0U];
            vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out 
                = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[0U][1U];
            vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out 
                = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[0U][0U];
            vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__result 
                = (0x000003ffU & (((0U == vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly[0U]) 
                                   | (0U == (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))
                                   ? vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[0U][0U]
                                   : ((IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[0U][0U]) 
                                      + (vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly[0U] 
                                         * (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))));
            vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__result 
                = (0x000003ffU & (((0U == vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly[1U]) 
                                   | (0U == (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))
                                   ? vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[1U][0U]
                                   : ((IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[1U][0U]) 
                                      + (vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly[1U] 
                                         * (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))));
            vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__result 
                = (0x000003ffU & (((0U == vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[2U][1U]) 
                                   | (0U == (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))
                                   ? vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[1U][2U]
                                   : ((IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[1U][2U]) 
                                      + (vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[2U][1U] 
                                         * (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))));
            vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__result 
                = (0x000003ffU & (((0U == vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[2U][0U]) 
                                   | (0U == (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))
                                   ? vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[1U][1U]
                                   : ((IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[1U][1U]) 
                                      + (vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[2U][0U] 
                                         * (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))));
            vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__result 
                = (0x000003ffU & (((0U == vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[1U][1U]) 
                                   | (0U == (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))
                                   ? vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[0U][2U]
                                   : ((IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[0U][2U]) 
                                      + (vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[1U][1U] 
                                         * (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))));
            vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__result 
                = (0x000003ffU & (((0U == vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[1U][0U]) 
                                   | (0U == (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))
                                   ? vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[0U][1U]
                                   : ((IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[0U][1U]) 
                                      + (vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[1U][0U] 
                                         * (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))));
        }
        vlSelfRef.systolic_tb__DOT__dut__DOT__controlla__DOT__cycle_count 
            = ((Vsystolic_tb__ConstPool__TABLE_hf261e1ac_0
                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                != (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__controlla__DOT__state))
                ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__controlla__DOT__cycle_count))));
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v0 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__deskewed[0U];
        __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v0 = 1U;
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v1 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__deskewed[1U];
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v2 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__deskewed[2U];
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v3 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[0U][0U];
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v4 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[0U][1U];
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v5 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[0U][2U];
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v6 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[1U][0U];
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v7 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[1U][1U];
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v8 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[1U][2U];
        if (Vsystolic_tb__ConstPool__TABLE_h08a72cc3_0
            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) {
            if ((1U & (~ (IData)(Vsystolic_tb__ConstPool__TABLE_h82a00311_0
                                 [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])))) {
                vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1 
                    = vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[2U][2U];
                vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1 
                    = vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[2U][1U];
                vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1 
                    = vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[2U][0U];
                vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1 
                    = vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[1U][2U];
                vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1 
                    = vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[1U][1U];
                vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1 
                    = vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[1U][0U];
                vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1 
                    = vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[0U][2U];
                vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1 
                    = vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[0U][1U];
                vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1 
                    = vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[0U][0U];
            }
            if (Vsystolic_tb__ConstPool__TABLE_h82a00311_0
                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) {
                vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2 
                    = vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[2U][2U];
                vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2 
                    = vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[2U][1U];
                vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2 
                    = vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[2U][0U];
                vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2 
                    = vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[1U][2U];
                vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2 
                    = vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[1U][1U];
                vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2 
                    = vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[1U][0U];
                vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2 
                    = vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[0U][2U];
                vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2 
                    = vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[0U][1U];
                vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2 
                    = vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[0U][0U];
            }
        }
        vlSelfRef.systolic_tb__DOT__dut__DOT__controlla__DOT__state 
            = Vsystolic_tb__ConstPool__TABLE_hf261e1ac_0
            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0];
    } else {
        __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__1__KET____DOT__genblk1__DOT__dly__v1 = 1U;
        __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly__v2 = 1U;
        __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v6 = 1U;
        __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly__v1 = 1U;
        __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly__v1 = 1U;
        __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly__v2 = 1U;
        __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly__v2 = 1U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__controlla__DOT__cycle_count = 0U;
        __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v9 = 1U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__a_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__a_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__a_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1 = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2 = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1 = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2 = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1 = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2 = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1 = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2 = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1 = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2 = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1 = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2 = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1 = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2 = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1 = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2 = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1 = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2 = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__result = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__a_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__a_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__a_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__a_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__a_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__a_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__result = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__result = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__result = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__result = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__result = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__result = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__result = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__result = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__controlla__DOT__state = 0U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.systolic_tb__DOT__rst_n)) 
               | Vsystolic_tb__ConstPool__TABLE_h0c797d14_0
               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]))) {
        __Vdly__systolic_tb__DOT__dut__DOT__entry_valid = 0U;
        __Vdly__systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr = 0U;
        __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v0 = 1U;
    } else if (((IData)(vlSelfRef.systolic_tb__DOT__in_valid) 
                & (~ ((IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__entry_valid) 
                      >> (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr))))) {
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v18 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[0U][0U];
        __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v18 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr;
        __VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v18 = 1U;
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v19 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[0U][1U];
        __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v19 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr;
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v20 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[0U][2U];
        __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v20 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr;
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v21 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[1U][0U];
        __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v21 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr;
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v22 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[1U][1U];
        __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v22 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr;
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v23 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[1U][2U];
        __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v23 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr;
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v24 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[2U][0U];
        __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v24 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr;
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v25 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[2U][1U];
        __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v25 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr;
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v26 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[2U][2U];
        __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v26 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr;
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v18 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[0U][0U];
        __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v18 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr;
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v19 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[0U][1U];
        __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v19 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr;
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v20 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[0U][2U];
        __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v20 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr;
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v21 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[1U][0U];
        __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v21 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr;
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v22 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[1U][1U];
        __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v22 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr;
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v23 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[1U][2U];
        __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v23 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr;
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v24 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[2U][0U];
        __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v24 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr;
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v25 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[2U][1U];
        __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v25 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr;
        __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v26 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[2U][2U];
        __VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v26 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr;
        __Vdly__systolic_tb__DOT__dut__DOT__entry_valid 
            = ((IData)(__Vdly__systolic_tb__DOT__dut__DOT__entry_valid) 
               | (3U & ((IData)(1U) << (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr))));
        __Vdly__systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr 
            = (1U & (~ (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr)));
    }
    if (__VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__1__KET____DOT__genblk1__DOT__dly__v0) {
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__1__KET____DOT__genblk1__DOT__dly[0U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__1__KET____DOT__genblk1__DOT__dly__v0;
    }
    if (__VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__1__KET____DOT__genblk1__DOT__dly__v1) {
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__1__KET____DOT__genblk1__DOT__dly[0U] = 0U;
    }
    if (__VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly__v0) {
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly[0U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly__v0;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly[1U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly__v1;
    }
    if (__VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly__v2) {
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly[0U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly[1U] = 0U;
    }
    if (__VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v0) {
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__mark[0U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v0;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__mark[1U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v1;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__mark[2U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v2;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__mark[3U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v3;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__mark[4U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v4;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__mark[5U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v5;
    }
    if (__VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__mark__v6) {
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__mark[0U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__mark[1U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__mark[2U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__mark[3U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__mark[4U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__mark[5U] = 0U;
    }
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr 
        = __Vdly__systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr;
    vlSelfRef.systolic_tb__DOT__dut__DOT__entry_valid 
        = __Vdly__systolic_tb__DOT__dut__DOT__entry_valid;
    if (__VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v0) {
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf[0U][0U][0U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf[0U][0U][1U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf[0U][0U][2U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf[0U][1U][0U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf[0U][1U][1U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf[0U][1U][2U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf[0U][2U][0U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf[0U][2U][1U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf[0U][2U][2U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf[1U][0U][0U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf[1U][0U][1U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf[1U][0U][2U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf[1U][1U][0U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf[1U][1U][1U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf[1U][1U][2U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf[1U][2U][0U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf[1U][2U][1U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf[1U][2U][2U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf[0U][0U][0U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf[0U][0U][1U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf[0U][0U][2U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf[0U][1U][0U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf[0U][1U][1U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf[0U][1U][2U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf[0U][2U][0U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf[0U][2U][1U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf[0U][2U][2U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf[1U][0U][0U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf[1U][0U][1U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf[1U][0U][2U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf[1U][1U][0U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf[1U][1U][1U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf[1U][1U][2U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf[1U][2U][0U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf[1U][2U][1U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf[1U][2U][2U] = 0U;
    }
    if (__VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v18) {
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf[__VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v18][0U][0U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v18;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf[__VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v19][0U][1U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v19;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf[__VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v20][0U][2U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v20;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf[__VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v21][1U][0U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v21;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf[__VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v22][1U][1U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v22;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf[__VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v23][1U][2U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v23;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf[__VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v24][2U][0U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v24;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf[__VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v25][2U][1U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v25;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf[__VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v26][2U][2U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__B_buf__v26;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf[__VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v18][0U][0U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v18;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf[__VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v19][0U][1U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v19;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf[__VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v20][0U][2U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v20;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf[__VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v21][1U][0U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v21;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf[__VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v22][1U][1U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v22;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf[__VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v23][1U][2U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v23;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf[__VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v24][2U][0U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v24;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf[__VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v25][2U][1U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v25;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf[__VdlyDim2__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v26][2U][2U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__A_buf__v26;
    }
    if (__VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v0) {
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[0U][0U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v0;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[0U][1U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v1;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[0U][2U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v2;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[1U][0U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v3;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[1U][1U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v4;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[1U][2U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v5;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[2U][0U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v6;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[2U][1U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v7;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[2U][2U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v8;
    }
    if (__VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__results_internal__v9) {
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[0U][0U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[0U][1U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[0U][2U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[1U][0U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[1U][1U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[1U][2U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[2U][0U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[2U][1U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[2U][2U] = 0U;
    }
    if (__VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly__v0) {
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly[0U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly__v0;
    }
    if (__VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly__v1) {
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly[0U] = 0U;
    }
    if (__VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly__v0) {
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly[0U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly__v0;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly[1U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly__v1;
    }
    if (__VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly__v2) {
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly[0U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly[1U] = 0U;
    }
    if (__VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly__v0) {
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly[0U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly__v0;
    }
    if (__VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly__v1) {
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly[0U] = 0U;
    }
    if (__VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly__v0) {
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly[0U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly__v0;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly[1U] 
            = __VdlyVal__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly__v1;
    }
    if (__VdlySet__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly__v2) {
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly[0U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly[1U] = 0U;
    }
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__deskewed[1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__1__KET____DOT__genblk1__DOT__dly[0U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__deskewed[0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly[1U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[0U] 
        = ((0xfff00000U & vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[0U]) 
           | (((IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[2U][1U]) 
               << 0x0000000aU) | vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[2U][0U]));
    vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[0U] 
        = ((0x000fffffU & vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[0U]) 
           | ((((IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[1U][0U]) 
                << 0x0000000aU) | vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[2U][2U]) 
              << 0x00000014U));
    vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[1U] 
        = ((0xffffff00U & vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[1U]) 
           | ((((IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[1U][0U]) 
                << 0x0000000aU) | vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[2U][2U]) 
              >> 0x0000000cU));
    vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[1U] 
        = ((0xf00000ffU & vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[1U]) 
           | ((((IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[1U][2U]) 
                << 0x0000000aU) | vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[1U][1U]) 
              << 8U));
    vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[1U] 
        = ((0x0fffffffU & vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[1U]) 
           | ((((IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[0U][1U]) 
                << 0x0000000aU) | vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[0U][0U]) 
              << 0x0000001cU));
    vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[2U] 
        = ((0x03ff0000U & vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[2U]) 
           | (0x03ffffffU & ((((IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[0U][1U]) 
                               << 0x0000000aU) | vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[0U][0U]) 
                             >> 4U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[2U] 
        = ((0x0000ffffU & vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[2U]) 
           | (0x03ffffffU & ((IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[0U][2U]) 
                             << 0x00000010U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[1U][0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__a_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[2U][0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__a_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[0U][0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__a_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[0U][0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out;
    if (vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly[0U]) {
        vlSelfRef.systolic_tb__DOT__dut__DOT__slot_data[1U] = 1U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2;
    } else {
        vlSelfRef.systolic_tb__DOT__dut__DOT__slot_data[1U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1;
    }
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[1U][0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out;
    if (vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly[1U]) {
        vlSelfRef.systolic_tb__DOT__dut__DOT__slot_data[2U] = 1U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2;
    } else {
        vlSelfRef.systolic_tb__DOT__dut__DOT__slot_data[2U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1;
    }
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[2U][0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[0U][0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__result;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[2U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__a_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[2U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__a_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[1U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__a_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[1U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__a_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[0U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__a_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[0U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__a_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[0U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__result;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[0U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__result;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[2U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[2U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[1U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[1U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[0U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[0U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__a_skewed[1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly[0U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[1U][0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__result;
    vlSelfRef.systolic_tb__DOT__dut__DOT__a_skewed[2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly[1U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[2U][0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__result;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[2U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__result;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[2U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__result;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[1U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__result;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[1U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__result;
    vlSelfRef.systolic_tb__DOT__C_got[0U][0U] = (0x000003ffU 
                                                 & vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[0U]);
    vlSelfRef.systolic_tb__DOT__C_got[0U][1U] = (0x000003ffU 
                                                 & (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[0U] 
                                                    >> 0x0000000aU));
    vlSelfRef.systolic_tb__DOT__C_got[0U][2U] = (0x000003ffU 
                                                 & (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[0U] 
                                                    >> 0x00000014U));
    vlSelfRef.systolic_tb__DOT__C_got[1U][0U] = (0x000003ffU 
                                                 & ((vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[1U] 
                                                     << 2U) 
                                                    | (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[0U] 
                                                       >> 0x0000001eU)));
    vlSelfRef.systolic_tb__DOT__C_got[1U][1U] = (0x000003ffU 
                                                 & (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[1U] 
                                                    >> 8U));
    vlSelfRef.systolic_tb__DOT__C_got[1U][2U] = (0x000003ffU 
                                                 & (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[1U] 
                                                    >> 0x00000012U));
    vlSelfRef.systolic_tb__DOT__C_got[2U][0U] = (0x000003ffU 
                                                 & ((vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[2U] 
                                                     << 4U) 
                                                    | (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[1U] 
                                                       >> 0x0000001cU)));
    vlSelfRef.systolic_tb__DOT__C_got[2U][1U] = (0x000003ffU 
                                                 & (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[2U] 
                                                    >> 6U));
    vlSelfRef.systolic_tb__DOT__C_got[2U][2U] = (0x000003ffU 
                                                 & (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[2U] 
                                                    >> 0x00000010U));
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w 
        = (vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[2U][1U]
            ? (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1));
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w 
        = (vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[2U][0U]
            ? (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1));
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w 
        = (vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[1U][1U]
            ? (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1));
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w 
        = (vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[1U][0U]
            ? (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1));
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w 
        = (vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[0U][1U]
            ? (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1));
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w 
        = (vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[0U][0U]
            ? (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1));
    vlSelfRef.systolic_tb__DOT__dut__DOT__result_matrix[0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[2U][0U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__result_matrix[1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[2U][1U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__result_matrix[2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[2U][2U];
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (((IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__entry_valid) 
                                                 << 5U) 
                                                | (((IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__controlla__DOT__cycle_count) 
                                                    << 3U) 
                                                   | (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__controlla__DOT__state)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__deskewed[2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__result_matrix[2U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[0U][0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf
        [Vsystolic_tb__ConstPool__TABLE_h82a00311_0
        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]][0U][0U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[0U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf
        [Vsystolic_tb__ConstPool__TABLE_h82a00311_0
        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]][0U][1U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[0U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf
        [Vsystolic_tb__ConstPool__TABLE_h82a00311_0
        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]][0U][2U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[1U][0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf
        [Vsystolic_tb__ConstPool__TABLE_h82a00311_0
        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]][1U][0U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[1U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf
        [Vsystolic_tb__ConstPool__TABLE_h82a00311_0
        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]][1U][1U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[1U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf
        [Vsystolic_tb__ConstPool__TABLE_h82a00311_0
        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]][1U][2U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[2U][0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf
        [Vsystolic_tb__ConstPool__TABLE_h82a00311_0
        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]][2U][0U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[2U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf
        [Vsystolic_tb__ConstPool__TABLE_h82a00311_0
        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]][2U][1U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[2U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf
        [Vsystolic_tb__ConstPool__TABLE_h82a00311_0
        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]][2U][2U];
    if (Vsystolic_tb__ConstPool__TABLE_h757529b2_0[vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) {
        vlSelfRef.systolic_tb__DOT__dut__DOT__slot_data[0U] = 1U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2;
    } else {
        vlSelfRef.systolic_tb__DOT__dut__DOT__slot_data[0U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1;
    }
    if (Vsystolic_tb__ConstPool__TABLE_hbabea407_0[vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) {
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_row[0U] 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf
            [Vsystolic_tb__ConstPool__TABLE_h757529b2_0
            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]]
            [((2U >= Vsystolic_tb__ConstPool__TABLE_h35b5d552_0
               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])
               ? Vsystolic_tb__ConstPool__TABLE_h35b5d552_0
              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
               : 0U)][0U];
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_row[1U] 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf
            [Vsystolic_tb__ConstPool__TABLE_h757529b2_0
            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]]
            [((2U >= Vsystolic_tb__ConstPool__TABLE_h35b5d552_0
               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])
               ? Vsystolic_tb__ConstPool__TABLE_h35b5d552_0
              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
               : 0U)][1U];
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_row[2U] 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf
            [Vsystolic_tb__ConstPool__TABLE_h757529b2_0
            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]]
            [((2U >= Vsystolic_tb__ConstPool__TABLE_h35b5d552_0
               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])
               ? Vsystolic_tb__ConstPool__TABLE_h35b5d552_0
              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
               : 0U)][2U];
    } else {
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_row[0U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_row[1U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_row[2U] = 0U;
    }
    vlSelfRef.systolic_tb__DOT__dut__DOT__a_skewed[0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_row[0U];
}

void Vsystolic_tb___024root___nba_sequent__TOP__1(Vsystolic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___nba_sequent__TOP__1\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed 
        = (((QData)((IData)(vlSelfRef.systolic_tb__DOT__a33)) 
            << 0x00000020U) | (QData)((IData)(((((((IData)(vlSelfRef.systolic_tb__DOT__a32) 
                                                   << 0x0000000cU) 
                                                  | ((IData)(vlSelfRef.systolic_tb__DOT__a31) 
                                                     << 8U)) 
                                                 | (((IData)(vlSelfRef.systolic_tb__DOT__a23) 
                                                     << 4U) 
                                                    | (IData)(vlSelfRef.systolic_tb__DOT__a22))) 
                                                << 0x00000010U) 
                                               | ((((IData)(vlSelfRef.systolic_tb__DOT__a21) 
                                                    << 0x0000000cU) 
                                                   | ((IData)(vlSelfRef.systolic_tb__DOT__a13) 
                                                      << 8U)) 
                                                  | (((IData)(vlSelfRef.systolic_tb__DOT__a12) 
                                                      << 4U) 
                                                     | (IData)(vlSelfRef.systolic_tb__DOT__a11)))))));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed 
        = (((QData)((IData)(vlSelfRef.systolic_tb__DOT__b33)) 
            << 0x00000020U) | (QData)((IData)(((((((IData)(vlSelfRef.systolic_tb__DOT__b32) 
                                                   << 0x0000000cU) 
                                                  | ((IData)(vlSelfRef.systolic_tb__DOT__b31) 
                                                     << 8U)) 
                                                 | (((IData)(vlSelfRef.systolic_tb__DOT__b23) 
                                                     << 4U) 
                                                    | (IData)(vlSelfRef.systolic_tb__DOT__b22))) 
                                                << 0x00000010U) 
                                               | ((((IData)(vlSelfRef.systolic_tb__DOT__b21) 
                                                    << 0x0000000cU) 
                                                   | ((IData)(vlSelfRef.systolic_tb__DOT__b13) 
                                                      << 8U)) 
                                                  | (((IData)(vlSelfRef.systolic_tb__DOT__b12) 
                                                      << 4U) 
                                                     | (IData)(vlSelfRef.systolic_tb__DOT__b11)))))));
    if (((IData)(vlSelfRef.systolic_tb__DOT__rst_n) 
         & vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__mark[5U])) {
        vlSelfRef.systolic_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelfRef.systolic_tb__DOT__checks);
        if (VL_UNLIKELY(((vlSelfRef.systolic_tb__DOT__C_got[0U][0U] 
                          != (0x000003ffU & vlSelfRef.systolic_tb__DOT__C_exp
                              [(1U & vlSelfRef.systolic_tb__DOT__outs_seen)][0U][0U]))))) {
            vlSelfRef.systolic_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelfRef.systolic_tb__DOT__errors);
            VL_WRITEF_NX("[%0t] %%Error: systolic_tb.sv:56: Assertion failed in %m: [%0t] job %0d C11: got %0d, expected %0d\n",7, 'M',vlSymsp->name(),"systolic_tb.unnamedblk1.unnamedblk2", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,((IData)(1U) + vlSelfRef.systolic_tb__DOT__outs_seen)
                         , '#',10,vlSelfRef.systolic_tb__DOT__C_got[0U][0U]
                         , '~',32,vlSelfRef.systolic_tb__DOT__C_exp
                         [(1U & vlSelfRef.systolic_tb__DOT__outs_seen)][0U][0U]);
            VL_STOP_MT("systolic_tb.sv", 56, "");
        }
        vlSelfRef.systolic_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelfRef.systolic_tb__DOT__checks);
        if (VL_UNLIKELY(((vlSelfRef.systolic_tb__DOT__C_got[0U][1U] 
                          != (0x000003ffU & vlSelfRef.systolic_tb__DOT__C_exp
                              [(1U & vlSelfRef.systolic_tb__DOT__outs_seen)][0U][1U]))))) {
            vlSelfRef.systolic_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelfRef.systolic_tb__DOT__errors);
            VL_WRITEF_NX("[%0t] %%Error: systolic_tb.sv:56: Assertion failed in %m: [%0t] job %0d C12: got %0d, expected %0d\n",7, 'M',vlSymsp->name(),"systolic_tb.unnamedblk1.unnamedblk2", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,((IData)(1U) + vlSelfRef.systolic_tb__DOT__outs_seen)
                         , '#',10,vlSelfRef.systolic_tb__DOT__C_got[0U][1U]
                         , '~',32,vlSelfRef.systolic_tb__DOT__C_exp
                         [(1U & vlSelfRef.systolic_tb__DOT__outs_seen)][0U][1U]);
            VL_STOP_MT("systolic_tb.sv", 56, "");
        }
        vlSelfRef.systolic_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelfRef.systolic_tb__DOT__checks);
        if (VL_UNLIKELY(((vlSelfRef.systolic_tb__DOT__C_got[0U][2U] 
                          != (0x000003ffU & vlSelfRef.systolic_tb__DOT__C_exp
                              [(1U & vlSelfRef.systolic_tb__DOT__outs_seen)][0U][2U]))))) {
            vlSelfRef.systolic_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelfRef.systolic_tb__DOT__errors);
            VL_WRITEF_NX("[%0t] %%Error: systolic_tb.sv:56: Assertion failed in %m: [%0t] job %0d C13: got %0d, expected %0d\n",7, 'M',vlSymsp->name(),"systolic_tb.unnamedblk1.unnamedblk2", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,((IData)(1U) + vlSelfRef.systolic_tb__DOT__outs_seen)
                         , '#',10,vlSelfRef.systolic_tb__DOT__C_got[0U][2U]
                         , '~',32,vlSelfRef.systolic_tb__DOT__C_exp
                         [(1U & vlSelfRef.systolic_tb__DOT__outs_seen)][0U][2U]);
            VL_STOP_MT("systolic_tb.sv", 56, "");
        }
        vlSelfRef.systolic_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelfRef.systolic_tb__DOT__checks);
        if (VL_UNLIKELY(((vlSelfRef.systolic_tb__DOT__C_got[1U][0U] 
                          != (0x000003ffU & vlSelfRef.systolic_tb__DOT__C_exp
                              [(1U & vlSelfRef.systolic_tb__DOT__outs_seen)][1U][0U]))))) {
            vlSelfRef.systolic_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelfRef.systolic_tb__DOT__errors);
            VL_WRITEF_NX("[%0t] %%Error: systolic_tb.sv:56: Assertion failed in %m: [%0t] job %0d C21: got %0d, expected %0d\n",7, 'M',vlSymsp->name(),"systolic_tb.unnamedblk1.unnamedblk2", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,((IData)(1U) + vlSelfRef.systolic_tb__DOT__outs_seen)
                         , '#',10,vlSelfRef.systolic_tb__DOT__C_got[1U][0U]
                         , '~',32,vlSelfRef.systolic_tb__DOT__C_exp
                         [(1U & vlSelfRef.systolic_tb__DOT__outs_seen)][1U][0U]);
            VL_STOP_MT("systolic_tb.sv", 56, "");
        }
        vlSelfRef.systolic_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelfRef.systolic_tb__DOT__checks);
        if (VL_UNLIKELY(((vlSelfRef.systolic_tb__DOT__C_got[1U][1U] 
                          != (0x000003ffU & vlSelfRef.systolic_tb__DOT__C_exp
                              [(1U & vlSelfRef.systolic_tb__DOT__outs_seen)][1U][1U]))))) {
            vlSelfRef.systolic_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelfRef.systolic_tb__DOT__errors);
            VL_WRITEF_NX("[%0t] %%Error: systolic_tb.sv:56: Assertion failed in %m: [%0t] job %0d C22: got %0d, expected %0d\n",7, 'M',vlSymsp->name(),"systolic_tb.unnamedblk1.unnamedblk2", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,((IData)(1U) + vlSelfRef.systolic_tb__DOT__outs_seen)
                         , '#',10,vlSelfRef.systolic_tb__DOT__C_got[1U][1U]
                         , '~',32,vlSelfRef.systolic_tb__DOT__C_exp
                         [(1U & vlSelfRef.systolic_tb__DOT__outs_seen)][1U][1U]);
            VL_STOP_MT("systolic_tb.sv", 56, "");
        }
        vlSelfRef.systolic_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelfRef.systolic_tb__DOT__checks);
        if (VL_UNLIKELY(((vlSelfRef.systolic_tb__DOT__C_got[1U][2U] 
                          != (0x000003ffU & vlSelfRef.systolic_tb__DOT__C_exp
                              [(1U & vlSelfRef.systolic_tb__DOT__outs_seen)][1U][2U]))))) {
            vlSelfRef.systolic_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelfRef.systolic_tb__DOT__errors);
            VL_WRITEF_NX("[%0t] %%Error: systolic_tb.sv:56: Assertion failed in %m: [%0t] job %0d C23: got %0d, expected %0d\n",7, 'M',vlSymsp->name(),"systolic_tb.unnamedblk1.unnamedblk2", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,((IData)(1U) + vlSelfRef.systolic_tb__DOT__outs_seen)
                         , '#',10,vlSelfRef.systolic_tb__DOT__C_got[1U][2U]
                         , '~',32,vlSelfRef.systolic_tb__DOT__C_exp
                         [(1U & vlSelfRef.systolic_tb__DOT__outs_seen)][1U][2U]);
            VL_STOP_MT("systolic_tb.sv", 56, "");
        }
        vlSelfRef.systolic_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelfRef.systolic_tb__DOT__checks);
        if (VL_UNLIKELY(((vlSelfRef.systolic_tb__DOT__C_got[2U][0U] 
                          != (0x000003ffU & vlSelfRef.systolic_tb__DOT__C_exp
                              [(1U & vlSelfRef.systolic_tb__DOT__outs_seen)][2U][0U]))))) {
            vlSelfRef.systolic_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelfRef.systolic_tb__DOT__errors);
            VL_WRITEF_NX("[%0t] %%Error: systolic_tb.sv:56: Assertion failed in %m: [%0t] job %0d C31: got %0d, expected %0d\n",7, 'M',vlSymsp->name(),"systolic_tb.unnamedblk1.unnamedblk2", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,((IData)(1U) + vlSelfRef.systolic_tb__DOT__outs_seen)
                         , '#',10,vlSelfRef.systolic_tb__DOT__C_got[2U][0U]
                         , '~',32,vlSelfRef.systolic_tb__DOT__C_exp
                         [(1U & vlSelfRef.systolic_tb__DOT__outs_seen)][2U][0U]);
            VL_STOP_MT("systolic_tb.sv", 56, "");
        }
        vlSelfRef.systolic_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelfRef.systolic_tb__DOT__checks);
        if (VL_UNLIKELY(((vlSelfRef.systolic_tb__DOT__C_got[2U][1U] 
                          != (0x000003ffU & vlSelfRef.systolic_tb__DOT__C_exp
                              [(1U & vlSelfRef.systolic_tb__DOT__outs_seen)][2U][1U]))))) {
            vlSelfRef.systolic_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelfRef.systolic_tb__DOT__errors);
            VL_WRITEF_NX("[%0t] %%Error: systolic_tb.sv:56: Assertion failed in %m: [%0t] job %0d C32: got %0d, expected %0d\n",7, 'M',vlSymsp->name(),"systolic_tb.unnamedblk1.unnamedblk2", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,((IData)(1U) + vlSelfRef.systolic_tb__DOT__outs_seen)
                         , '#',10,vlSelfRef.systolic_tb__DOT__C_got[2U][1U]
                         , '~',32,vlSelfRef.systolic_tb__DOT__C_exp
                         [(1U & vlSelfRef.systolic_tb__DOT__outs_seen)][2U][1U]);
            VL_STOP_MT("systolic_tb.sv", 56, "");
        }
        vlSelfRef.systolic_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelfRef.systolic_tb__DOT__checks);
        if (VL_UNLIKELY(((vlSelfRef.systolic_tb__DOT__C_got[2U][2U] 
                          != (0x000003ffU & vlSelfRef.systolic_tb__DOT__C_exp
                              [(1U & vlSelfRef.systolic_tb__DOT__outs_seen)][2U][2U]))))) {
            vlSelfRef.systolic_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelfRef.systolic_tb__DOT__errors);
            VL_WRITEF_NX("[%0t] %%Error: systolic_tb.sv:56: Assertion failed in %m: [%0t] job %0d C33: got %0d, expected %0d\n",7, 'M',vlSymsp->name(),"systolic_tb.unnamedblk1.unnamedblk2", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,((IData)(1U) + vlSelfRef.systolic_tb__DOT__outs_seen)
                         , '#',10,vlSelfRef.systolic_tb__DOT__C_got[2U][2U]
                         , '~',32,vlSelfRef.systolic_tb__DOT__C_exp
                         [(1U & vlSelfRef.systolic_tb__DOT__outs_seen)][2U][2U]);
            VL_STOP_MT("systolic_tb.sv", 56, "");
        }
        vlSelfRef.systolic_tb__DOT__outs_seen = ((IData)(1U) 
                                                 + vlSelfRef.systolic_tb__DOT__outs_seen);
    }
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[0U][0U] 
        = (0x0000000fU & (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[0U][1U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed 
                                  >> 4U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[0U][2U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed 
                                  >> 8U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[1U][0U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed 
                                  >> 0x0cU)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[1U][1U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed 
                                  >> 0x10U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[1U][2U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed 
                                  >> 0x14U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[2U][0U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed 
                                  >> 0x18U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[2U][1U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed 
                                  >> 0x1cU)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[2U][2U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed 
                                  >> 0x20U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[0U][0U] 
        = (0x0000000fU & (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[0U][1U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed 
                                  >> 4U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[0U][2U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed 
                                  >> 8U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[1U][0U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed 
                                  >> 0x0cU)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[1U][1U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed 
                                  >> 0x10U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[1U][2U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed 
                                  >> 0x14U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[2U][0U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed 
                                  >> 0x18U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[2U][1U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed 
                                  >> 0x1cU)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[2U][2U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed 
                                  >> 0x20U)));
}

void Vsystolic_tb___024root___timing_ready(Vsystolic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___timing_ready\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h174e5de0__0.ready("@(negedge systolic_tb.clk)");
    }
}

void Vsystolic_tb___024root___timing_resume(Vsystolic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___timing_resume\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h174e5de0__0.moveToResumeQueue(
                                                          "@(negedge systolic_tb.clk)");
    vlSelfRef.__VtrigSched_h174e5de0__0.resume("@(negedge systolic_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vsystolic_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vsystolic_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vsystolic_tb___024root____VbeforeTrig_h174e5de0__0(Vsystolic_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root____VbeforeTrig_h174e5de0__0\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((~ (IData)(vlSelfRef.systolic_tb__DOT__clk)) 
                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__systolic_tb__DOT__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__systolic_tb__DOT__clk__0 
        = vlSelfRef.systolic_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h174e5de0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h174e5de0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h174e5de0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h174e5de0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h174e5de0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h174e5de0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h174e5de0__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vsystolic_tb___024root___eval_debug_assertions(Vsystolic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval_debug_assertions\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
