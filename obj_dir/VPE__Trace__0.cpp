// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VPE__Syms.h"


void VPE___024root__trace_chg_0_sub_0(VPE___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VPE___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root__trace_chg_0\n"); );
    // Body
    VPE___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPE___024root*>(voidSelf);
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    VPE___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VPE___024root__trace_chg_0_sub_0(VPE___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root__trace_chg_0_sub_0\n"); );
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+2,(vlSelfRef.w_load));
    bufp->chgBit(oldp+3,(vlSelfRef.load_slot));
    bufp->chgBit(oldp+4,(vlSelfRef.compute_slot));
    bufp->chgBit(oldp+5,(vlSelfRef.en));
    bufp->chgCData(oldp+6,(vlSelfRef.a),4);
    bufp->chgCData(oldp+7,(vlSelfRef.b),4);
    bufp->chgSData(oldp+8,(vlSelfRef.above_result),10);
    bufp->chgCData(oldp+9,(vlSelfRef.a_out),4);
    bufp->chgCData(oldp+10,(vlSelfRef.b_out),4);
    bufp->chgSData(oldp+11,(vlSelfRef.result),10);
    bufp->chgCData(oldp+12,(vlSelfRef.PE__DOT__b1),4);
    bufp->chgCData(oldp+13,(vlSelfRef.PE__DOT__b2),4);
    bufp->chgCData(oldp+14,(vlSelfRef.PE__DOT__w),4);
    bufp->chgBit(oldp+15,(((0U == (IData)(vlSelfRef.a)) 
                           | (0U == (IData)(vlSelfRef.PE__DOT__w)))));
}

void VPE___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    VPE___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPE___024root*>(voidSelf);
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
