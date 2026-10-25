// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VSA_tb__Syms.h"


void VSA_tb___024root__trace_chg_0_sub_0(VSA_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSA_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root__trace_chg_0\n"); );
    // Body
    VSA_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSA_tb___024root*>(voidSelf);
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    VSA_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VSA_tb___024root__trace_chg_0_sub_0(VSA_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root__trace_chg_0_sub_0\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.SA_tb__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.SA_tb__DOT__en));
        bufp->chgBit(oldp+2,(vlSelfRef.SA_tb__DOT__w_load));
        bufp->chgBit(oldp+3,(vlSelfRef.SA_tb__DOT__load_slot));
        bufp->chgBit(oldp+4,(vlSelfRef.SA_tb__DOT__slot_in[0]));
        bufp->chgBit(oldp+5,(vlSelfRef.SA_tb__DOT__slot_in[1]));
        bufp->chgBit(oldp+6,(vlSelfRef.SA_tb__DOT__slot_in[2]));
        bufp->chgCData(oldp+7,(vlSelfRef.SA_tb__DOT__a_in[0]),4);
        bufp->chgCData(oldp+8,(vlSelfRef.SA_tb__DOT__a_in[1]),4);
        bufp->chgCData(oldp+9,(vlSelfRef.SA_tb__DOT__a_in[2]),4);
        bufp->chgCData(oldp+10,(vlSelfRef.SA_tb__DOT__b_in[0U][0U]),4);
        bufp->chgCData(oldp+11,(vlSelfRef.SA_tb__DOT__b_in[0U][1U]),4);
        bufp->chgCData(oldp+12,(vlSelfRef.SA_tb__DOT__b_in[0U][2U]),4);
        bufp->chgCData(oldp+13,(vlSelfRef.SA_tb__DOT__b_in[1U][0U]),4);
        bufp->chgCData(oldp+14,(vlSelfRef.SA_tb__DOT__b_in[1U][1U]),4);
        bufp->chgCData(oldp+15,(vlSelfRef.SA_tb__DOT__b_in[1U][2U]),4);
        bufp->chgCData(oldp+16,(vlSelfRef.SA_tb__DOT__b_in[2U][0U]),4);
        bufp->chgCData(oldp+17,(vlSelfRef.SA_tb__DOT__b_in[2U][1U]),4);
        bufp->chgCData(oldp+18,(vlSelfRef.SA_tb__DOT__b_in[2U][2U]),4);
        bufp->chgIData(oldp+19,(vlSelfRef.SA_tb__DOT__test_errors),32);
        bufp->chgCData(oldp+20,(vlSelfRef.SA_tb__DOT__hist[0U][0U]),4);
        bufp->chgCData(oldp+21,(vlSelfRef.SA_tb__DOT__hist[0U][1U]),4);
        bufp->chgCData(oldp+22,(vlSelfRef.SA_tb__DOT__hist[0U][2U]),4);
        bufp->chgCData(oldp+23,(vlSelfRef.SA_tb__DOT__hist[1U][0U]),4);
        bufp->chgCData(oldp+24,(vlSelfRef.SA_tb__DOT__hist[1U][1U]),4);
        bufp->chgCData(oldp+25,(vlSelfRef.SA_tb__DOT__hist[1U][2U]),4);
        bufp->chgCData(oldp+26,(vlSelfRef.SA_tb__DOT__hist[2U][0U]),4);
        bufp->chgCData(oldp+27,(vlSelfRef.SA_tb__DOT__hist[2U][1U]),4);
        bufp->chgCData(oldp+28,(vlSelfRef.SA_tb__DOT__hist[2U][2U]),4);
        bufp->chgCData(oldp+29,(vlSelfRef.SA_tb__DOT__A[0U][0U]),4);
        bufp->chgCData(oldp+30,(vlSelfRef.SA_tb__DOT__A[0U][1U]),4);
        bufp->chgCData(oldp+31,(vlSelfRef.SA_tb__DOT__A[0U][2U]),4);
        bufp->chgCData(oldp+32,(vlSelfRef.SA_tb__DOT__A[1U][0U]),4);
        bufp->chgCData(oldp+33,(vlSelfRef.SA_tb__DOT__A[1U][1U]),4);
        bufp->chgCData(oldp+34,(vlSelfRef.SA_tb__DOT__A[1U][2U]),4);
        bufp->chgCData(oldp+35,(vlSelfRef.SA_tb__DOT__A[2U][0U]),4);
        bufp->chgCData(oldp+36,(vlSelfRef.SA_tb__DOT__A[2U][1U]),4);
        bufp->chgCData(oldp+37,(vlSelfRef.SA_tb__DOT__A[2U][2U]),4);
        bufp->chgCData(oldp+38,(vlSelfRef.SA_tb__DOT__W[0U][0U]),4);
        bufp->chgCData(oldp+39,(vlSelfRef.SA_tb__DOT__W[0U][1U]),4);
        bufp->chgCData(oldp+40,(vlSelfRef.SA_tb__DOT__W[0U][2U]),4);
        bufp->chgCData(oldp+41,(vlSelfRef.SA_tb__DOT__W[1U][0U]),4);
        bufp->chgCData(oldp+42,(vlSelfRef.SA_tb__DOT__W[1U][1U]),4);
        bufp->chgCData(oldp+43,(vlSelfRef.SA_tb__DOT__W[1U][2U]),4);
        bufp->chgCData(oldp+44,(vlSelfRef.SA_tb__DOT__W[2U][0U]),4);
        bufp->chgCData(oldp+45,(vlSelfRef.SA_tb__DOT__W[2U][1U]),4);
        bufp->chgCData(oldp+46,(vlSelfRef.SA_tb__DOT__W[2U][2U]),4);
        bufp->chgIData(oldp+47,(vlSelfRef.SA_tb__DOT__C_exp[0U][0U]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.SA_tb__DOT__C_exp[0U][1U]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.SA_tb__DOT__C_exp[0U][2U]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.SA_tb__DOT__C_exp[1U][0U]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.SA_tb__DOT__C_exp[1U][1U]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.SA_tb__DOT__C_exp[1U][2U]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.SA_tb__DOT__C_exp[2U][0U]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.SA_tb__DOT__C_exp[2U][1U]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.SA_tb__DOT__C_exp[2U][2U]),32);
        bufp->chgCData(oldp+56,(vlSelfRef.SA_tb__DOT__expected_temp),4);
        bufp->chgCData(oldp+57,(vlSelfRef.SA_tb__DOT__A2[0U][0U]),4);
        bufp->chgCData(oldp+58,(vlSelfRef.SA_tb__DOT__A2[0U][1U]),4);
        bufp->chgCData(oldp+59,(vlSelfRef.SA_tb__DOT__A2[0U][2U]),4);
        bufp->chgCData(oldp+60,(vlSelfRef.SA_tb__DOT__A2[1U][0U]),4);
        bufp->chgCData(oldp+61,(vlSelfRef.SA_tb__DOT__A2[1U][1U]),4);
        bufp->chgCData(oldp+62,(vlSelfRef.SA_tb__DOT__A2[1U][2U]),4);
        bufp->chgCData(oldp+63,(vlSelfRef.SA_tb__DOT__A2[2U][0U]),4);
        bufp->chgCData(oldp+64,(vlSelfRef.SA_tb__DOT__A2[2U][1U]),4);
        bufp->chgCData(oldp+65,(vlSelfRef.SA_tb__DOT__A2[2U][2U]),4);
        bufp->chgCData(oldp+66,(vlSelfRef.SA_tb__DOT__W2[0U][0U]),4);
        bufp->chgCData(oldp+67,(vlSelfRef.SA_tb__DOT__W2[0U][1U]),4);
        bufp->chgCData(oldp+68,(vlSelfRef.SA_tb__DOT__W2[0U][2U]),4);
        bufp->chgCData(oldp+69,(vlSelfRef.SA_tb__DOT__W2[1U][0U]),4);
        bufp->chgCData(oldp+70,(vlSelfRef.SA_tb__DOT__W2[1U][1U]),4);
        bufp->chgCData(oldp+71,(vlSelfRef.SA_tb__DOT__W2[1U][2U]),4);
        bufp->chgCData(oldp+72,(vlSelfRef.SA_tb__DOT__W2[2U][0U]),4);
        bufp->chgCData(oldp+73,(vlSelfRef.SA_tb__DOT__W2[2U][1U]),4);
        bufp->chgCData(oldp+74,(vlSelfRef.SA_tb__DOT__W2[2U][2U]),4);
        bufp->chgIData(oldp+75,(vlSelfRef.SA_tb__DOT__C_exp2[0U][0U]),32);
        bufp->chgIData(oldp+76,(vlSelfRef.SA_tb__DOT__C_exp2[0U][1U]),32);
        bufp->chgIData(oldp+77,(vlSelfRef.SA_tb__DOT__C_exp2[0U][2U]),32);
        bufp->chgIData(oldp+78,(vlSelfRef.SA_tb__DOT__C_exp2[1U][0U]),32);
        bufp->chgIData(oldp+79,(vlSelfRef.SA_tb__DOT__C_exp2[1U][1U]),32);
        bufp->chgIData(oldp+80,(vlSelfRef.SA_tb__DOT__C_exp2[1U][2U]),32);
        bufp->chgIData(oldp+81,(vlSelfRef.SA_tb__DOT__C_exp2[2U][0U]),32);
        bufp->chgIData(oldp+82,(vlSelfRef.SA_tb__DOT__C_exp2[2U][1U]),32);
        bufp->chgIData(oldp+83,(vlSelfRef.SA_tb__DOT__C_exp2[2U][2U]),32);
        bufp->chgIData(oldp+84,(vlSelfRef.SA_tb__DOT__m),32);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[3U] 
                       | vlSelfRef.__Vm_traceActivity[4U]) 
                      | vlSelfRef.__Vm_traceActivity[5U])))) {
        bufp->chgCData(oldp+85,(vlSelfRef.SA_tb__DOT__pe_a[0U][0U]),4);
        bufp->chgCData(oldp+86,(vlSelfRef.SA_tb__DOT__pe_a[0U][1U]),4);
        bufp->chgCData(oldp+87,(vlSelfRef.SA_tb__DOT__pe_a[0U][2U]),4);
        bufp->chgCData(oldp+88,(vlSelfRef.SA_tb__DOT__pe_a[1U][0U]),4);
        bufp->chgCData(oldp+89,(vlSelfRef.SA_tb__DOT__pe_a[1U][1U]),4);
        bufp->chgCData(oldp+90,(vlSelfRef.SA_tb__DOT__pe_a[1U][2U]),4);
        bufp->chgCData(oldp+91,(vlSelfRef.SA_tb__DOT__pe_a[2U][0U]),4);
        bufp->chgCData(oldp+92,(vlSelfRef.SA_tb__DOT__pe_a[2U][1U]),4);
        bufp->chgCData(oldp+93,(vlSelfRef.SA_tb__DOT__pe_a[2U][2U]),4);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[5U])))) {
        bufp->chgBit(oldp+94,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__slot_in[0]));
        bufp->chgBit(oldp+95,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__slot_in[1]));
        bufp->chgBit(oldp+96,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__slot_in[2]));
        bufp->chgCData(oldp+97,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[0]),4);
        bufp->chgCData(oldp+98,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[1]),4);
        bufp->chgCData(oldp+99,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[2]),4);
        bufp->chgCData(oldp+100,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[0U][0U]),4);
        bufp->chgCData(oldp+101,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[0U][1U]),4);
        bufp->chgCData(oldp+102,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[0U][2U]),4);
        bufp->chgCData(oldp+103,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[1U][0U]),4);
        bufp->chgCData(oldp+104,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[1U][1U]),4);
        bufp->chgCData(oldp+105,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[1U][2U]),4);
        bufp->chgCData(oldp+106,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[2U][0U]),4);
        bufp->chgCData(oldp+107,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[2U][1U]),4);
        bufp->chgCData(oldp+108,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[2U][2U]),4);
        bufp->chgBit(oldp+109,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__slot_in[0U]));
        bufp->chgCData(oldp+110,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[0U]),4);
        bufp->chgCData(oldp+111,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[0U][0U]),4);
        bufp->chgCData(oldp+112,(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w),4);
        bufp->chgBit(oldp+113,(((0U == vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[0U]) 
                                | (0U == (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))));
        bufp->chgCData(oldp+114,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[0U][1U]),4);
        bufp->chgCData(oldp+115,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[0U][2U]),4);
        bufp->chgBit(oldp+116,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__slot_in[1U]));
        bufp->chgCData(oldp+117,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[1U]),4);
        bufp->chgCData(oldp+118,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[1U][0U]),4);
        bufp->chgCData(oldp+119,(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w),4);
        bufp->chgBit(oldp+120,(((0U == vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[1U]) 
                                | (0U == (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))));
        bufp->chgCData(oldp+121,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[1U][1U]),4);
        bufp->chgCData(oldp+122,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[1U][2U]),4);
        bufp->chgBit(oldp+123,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__slot_in[2U]));
        bufp->chgCData(oldp+124,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[2U]),4);
        bufp->chgCData(oldp+125,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[2U][0U]),4);
        bufp->chgCData(oldp+126,(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w),4);
        bufp->chgBit(oldp+127,(((0U == vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[2U]) 
                                | (0U == (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))));
        bufp->chgCData(oldp+128,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[2U][1U]),4);
        bufp->chgCData(oldp+129,(vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[2U][2U]),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgSData(oldp+130,(vlSelfRef.SA_tb__DOT__result_matrix[0]),10);
        bufp->chgSData(oldp+131,(vlSelfRef.SA_tb__DOT__result_matrix[1]),10);
        bufp->chgSData(oldp+132,(vlSelfRef.SA_tb__DOT__result_matrix[2]),10);
        bufp->chgCData(oldp+133,(vlSelfRef.SA_tb__DOT__pe_b1[0U][0U]),4);
        bufp->chgCData(oldp+134,(vlSelfRef.SA_tb__DOT__pe_b1[0U][1U]),4);
        bufp->chgCData(oldp+135,(vlSelfRef.SA_tb__DOT__pe_b1[0U][2U]),4);
        bufp->chgCData(oldp+136,(vlSelfRef.SA_tb__DOT__pe_b1[1U][0U]),4);
        bufp->chgCData(oldp+137,(vlSelfRef.SA_tb__DOT__pe_b1[1U][1U]),4);
        bufp->chgCData(oldp+138,(vlSelfRef.SA_tb__DOT__pe_b1[1U][2U]),4);
        bufp->chgCData(oldp+139,(vlSelfRef.SA_tb__DOT__pe_b1[2U][0U]),4);
        bufp->chgCData(oldp+140,(vlSelfRef.SA_tb__DOT__pe_b1[2U][1U]),4);
        bufp->chgCData(oldp+141,(vlSelfRef.SA_tb__DOT__pe_b1[2U][2U]),4);
        bufp->chgCData(oldp+142,(vlSelfRef.SA_tb__DOT__pe_b2[0U][0U]),4);
        bufp->chgCData(oldp+143,(vlSelfRef.SA_tb__DOT__pe_b2[0U][1U]),4);
        bufp->chgCData(oldp+144,(vlSelfRef.SA_tb__DOT__pe_b2[0U][2U]),4);
        bufp->chgCData(oldp+145,(vlSelfRef.SA_tb__DOT__pe_b2[1U][0U]),4);
        bufp->chgCData(oldp+146,(vlSelfRef.SA_tb__DOT__pe_b2[1U][1U]),4);
        bufp->chgCData(oldp+147,(vlSelfRef.SA_tb__DOT__pe_b2[1U][2U]),4);
        bufp->chgCData(oldp+148,(vlSelfRef.SA_tb__DOT__pe_b2[2U][0U]),4);
        bufp->chgCData(oldp+149,(vlSelfRef.SA_tb__DOT__pe_b2[2U][1U]),4);
        bufp->chgCData(oldp+150,(vlSelfRef.SA_tb__DOT__pe_b2[2U][2U]),4);
        bufp->chgSData(oldp+151,(vlSelfRef.SA_tb__DOT____Vcellout__dut__result_matrix[0]),10);
        bufp->chgSData(oldp+152,(vlSelfRef.SA_tb__DOT____Vcellout__dut__result_matrix[1]),10);
        bufp->chgSData(oldp+153,(vlSelfRef.SA_tb__DOT____Vcellout__dut__result_matrix[2]),10);
        bufp->chgCData(oldp+154,(vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[2U][2U]),4);
        bufp->chgCData(oldp+155,(vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[2U][1U]),4);
        bufp->chgCData(oldp+156,(vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[2U][0U]),4);
        bufp->chgCData(oldp+157,(vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[1U][2U]),4);
        bufp->chgCData(oldp+158,(vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[1U][1U]),4);
        bufp->chgCData(oldp+159,(vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[1U][0U]),4);
        bufp->chgCData(oldp+160,(vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[0U][2U]),4);
        bufp->chgCData(oldp+161,(vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[0U][1U]),4);
        bufp->chgCData(oldp+162,(vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[0U][0U]),4);
        bufp->chgSData(oldp+163,(vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[2U][2U]),10);
        bufp->chgSData(oldp+164,(vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[2U][1U]),10);
        bufp->chgSData(oldp+165,(vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[2U][0U]),10);
        bufp->chgSData(oldp+166,(vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[1U][2U]),10);
        bufp->chgSData(oldp+167,(vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[1U][1U]),10);
        bufp->chgSData(oldp+168,(vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[1U][0U]),10);
        bufp->chgSData(oldp+169,(vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[0U][2U]),10);
        bufp->chgSData(oldp+170,(vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[0U][1U]),10);
        bufp->chgSData(oldp+171,(vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[0U][0U]),10);
        bufp->chgBit(oldp+172,(vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[0U][0U]));
        bufp->chgBit(oldp+173,(vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[0U][1U]));
        bufp->chgBit(oldp+174,(vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[0U][2U]));
        bufp->chgBit(oldp+175,(vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[1U][0U]));
        bufp->chgBit(oldp+176,(vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[1U][1U]));
        bufp->chgBit(oldp+177,(vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[1U][2U]));
        bufp->chgBit(oldp+178,(vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[2U][0U]));
        bufp->chgBit(oldp+179,(vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[2U][1U]));
        bufp->chgBit(oldp+180,(vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[2U][2U]));
        bufp->chgBit(oldp+181,(vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out));
        bufp->chgCData(oldp+182,(vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__a_out),4);
        bufp->chgSData(oldp+183,(vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__result),10);
        bufp->chgCData(oldp+184,(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1),4);
        bufp->chgCData(oldp+185,(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2),4);
        bufp->chgBit(oldp+186,(vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[0U][0U]));
        bufp->chgCData(oldp+187,(vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[0U][0U]),4);
        bufp->chgBit(oldp+188,(vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out));
        bufp->chgCData(oldp+189,(vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__a_out),4);
        bufp->chgSData(oldp+190,(vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__result),10);
        bufp->chgCData(oldp+191,(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1),4);
        bufp->chgCData(oldp+192,(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2),4);
        bufp->chgCData(oldp+193,(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w),4);
        bufp->chgBit(oldp+194,(((0U == vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[0U][0U]) 
                                | (0U == (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))));
        bufp->chgBit(oldp+195,(vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[0U][1U]));
        bufp->chgCData(oldp+196,(vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[0U][1U]),4);
        bufp->chgBit(oldp+197,(vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out));
        bufp->chgCData(oldp+198,(vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__a_out),4);
        bufp->chgSData(oldp+199,(vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__result),10);
        bufp->chgCData(oldp+200,(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1),4);
        bufp->chgCData(oldp+201,(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2),4);
        bufp->chgCData(oldp+202,(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w),4);
        bufp->chgBit(oldp+203,(((0U == vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[0U][1U]) 
                                | (0U == (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))));
        bufp->chgSData(oldp+204,(vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[0U][0U]),10);
        bufp->chgBit(oldp+205,(vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out));
        bufp->chgCData(oldp+206,(vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__a_out),4);
        bufp->chgSData(oldp+207,(vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__result),10);
        bufp->chgCData(oldp+208,(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1),4);
        bufp->chgCData(oldp+209,(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2),4);
        bufp->chgBit(oldp+210,(vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[1U][0U]));
        bufp->chgCData(oldp+211,(vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[1U][0U]),4);
        bufp->chgSData(oldp+212,(vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[0U][1U]),10);
        bufp->chgBit(oldp+213,(vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out));
        bufp->chgCData(oldp+214,(vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__a_out),4);
        bufp->chgSData(oldp+215,(vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__result),10);
        bufp->chgCData(oldp+216,(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1),4);
        bufp->chgCData(oldp+217,(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2),4);
        bufp->chgCData(oldp+218,(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w),4);
        bufp->chgBit(oldp+219,(((0U == vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[1U][0U]) 
                                | (0U == (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))));
        bufp->chgBit(oldp+220,(vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[1U][1U]));
        bufp->chgCData(oldp+221,(vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[1U][1U]),4);
        bufp->chgSData(oldp+222,(vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[0U][2U]),10);
        bufp->chgBit(oldp+223,(vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out));
        bufp->chgCData(oldp+224,(vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__a_out),4);
        bufp->chgSData(oldp+225,(vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__result),10);
        bufp->chgCData(oldp+226,(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1),4);
        bufp->chgCData(oldp+227,(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2),4);
        bufp->chgCData(oldp+228,(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w),4);
        bufp->chgBit(oldp+229,(((0U == vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[1U][1U]) 
                                | (0U == (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))));
        bufp->chgSData(oldp+230,(vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[1U][0U]),10);
        bufp->chgBit(oldp+231,(vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out));
        bufp->chgCData(oldp+232,(vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__a_out),4);
        bufp->chgSData(oldp+233,(vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__result),10);
        bufp->chgCData(oldp+234,(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1),4);
        bufp->chgCData(oldp+235,(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2),4);
        bufp->chgBit(oldp+236,(vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[2U][0U]));
        bufp->chgCData(oldp+237,(vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[2U][0U]),4);
        bufp->chgSData(oldp+238,(vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[1U][1U]),10);
        bufp->chgBit(oldp+239,(vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out));
        bufp->chgCData(oldp+240,(vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__a_out),4);
        bufp->chgSData(oldp+241,(vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__result),10);
        bufp->chgCData(oldp+242,(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1),4);
        bufp->chgCData(oldp+243,(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2),4);
        bufp->chgCData(oldp+244,(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w),4);
        bufp->chgBit(oldp+245,(((0U == vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[2U][0U]) 
                                | (0U == (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))));
        bufp->chgBit(oldp+246,(vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[2U][1U]));
        bufp->chgCData(oldp+247,(vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[2U][1U]),4);
        bufp->chgSData(oldp+248,(vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[1U][2U]),10);
        bufp->chgBit(oldp+249,(vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out));
        bufp->chgCData(oldp+250,(vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__a_out),4);
        bufp->chgSData(oldp+251,(vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__result),10);
        bufp->chgCData(oldp+252,(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1),4);
        bufp->chgCData(oldp+253,(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2),4);
        bufp->chgCData(oldp+254,(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w),4);
        bufp->chgBit(oldp+255,(((0U == vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[2U][1U]) 
                                | (0U == (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))));
    }
    bufp->chgBit(oldp+256,(vlSelfRef.SA_tb__DOT__clk));
    bufp->chgIData(oldp+257,(vlSelfRef.SA_tb__DOT__errors),32);
    bufp->chgIData(oldp+258,(vlSelfRef.SA_tb__DOT__checks),32);
    bufp->chgIData(oldp+259,(vlSelfRef.SA_tb__DOT__test_num),32);
}

void VSA_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root__trace_cleanup\n"); );
    // Body
    VSA_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSA_tb___024root*>(voidSelf);
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
