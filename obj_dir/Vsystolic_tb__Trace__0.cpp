// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vsystolic_tb__Syms.h"


void Vsystolic_tb___024root__trace_chg_0_sub_0(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsystolic_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_chg_0\n"); );
    // Body
    Vsystolic_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_tb___024root*>(voidSelf);
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vsystolic_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlUnpacked<CData/*0:0*/, 128> Vsystolic_tb__ConstPool__TABLE_h08a72cc3_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsystolic_tb__ConstPool__TABLE_h028f018c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsystolic_tb__ConstPool__TABLE_h82a00311_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsystolic_tb__ConstPool__TABLE_h757529b2_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsystolic_tb__ConstPool__TABLE_h0c797d14_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsystolic_tb__ConstPool__TABLE_hbabea407_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vsystolic_tb__ConstPool__TABLE_h35b5d552_0;
void Vsystolic_tb___024root__trace_chg_dtype____0(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 3>& __VdtypeVar);
void Vsystolic_tb___024root__trace_chg_dtype____1(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 3>& __VdtypeVar);
void Vsystolic_tb___024root__trace_chg_dtype____2(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>& __VdtypeVar);
void Vsystolic_tb___024root__trace_chg_dtype____3(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*9:0*/, 3>& __VdtypeVar);
extern const VlUnpacked<CData/*2:0*/, 128> Vsystolic_tb__ConstPool__TABLE_hf261e1ac_0;
void Vsystolic_tb___024root__trace_chg_dtype____4(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>, 2>& __VdtypeVar);
void Vsystolic_tb___024root__trace_chg_dtype____5(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>, 2>& __VdtypeVar);
void Vsystolic_tb___024root__trace_chg_dtype____6(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<SData/*9:0*/, 3>, 3>& __VdtypeVar);
void Vsystolic_tb___024root__trace_chg_dtype____7(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 6>& __VdtypeVar);
void Vsystolic_tb___024root__trace_chg_dtype____8(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 1>& __VdtypeVar);
void Vsystolic_tb___024root__trace_chg_dtype____9(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 1>& __VdtypeVar);
void Vsystolic_tb___024root__trace_chg_dtype____10(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 2>& __VdtypeVar);
void Vsystolic_tb___024root__trace_chg_dtype____11(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar);
void Vsystolic_tb___024root__trace_chg_dtype____12(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*9:0*/, 2>& __VdtypeVar);
void Vsystolic_tb___024root__trace_chg_dtype____13(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*9:0*/, 1>& __VdtypeVar);

void Vsystolic_tb___024root__trace_chg_0_sub_0(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_chg_0_sub_0\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.systolic_tb__DOT__rst_n));
        bufp->chgCData(oldp+1,(vlSelfRef.systolic_tb__DOT__a11),4);
        bufp->chgCData(oldp+2,(vlSelfRef.systolic_tb__DOT__a12),4);
        bufp->chgCData(oldp+3,(vlSelfRef.systolic_tb__DOT__a13),4);
        bufp->chgCData(oldp+4,(vlSelfRef.systolic_tb__DOT__a21),4);
        bufp->chgCData(oldp+5,(vlSelfRef.systolic_tb__DOT__a22),4);
        bufp->chgCData(oldp+6,(vlSelfRef.systolic_tb__DOT__a23),4);
        bufp->chgCData(oldp+7,(vlSelfRef.systolic_tb__DOT__a31),4);
        bufp->chgCData(oldp+8,(vlSelfRef.systolic_tb__DOT__a32),4);
        bufp->chgCData(oldp+9,(vlSelfRef.systolic_tb__DOT__a33),4);
        bufp->chgCData(oldp+10,(vlSelfRef.systolic_tb__DOT__b11),4);
        bufp->chgCData(oldp+11,(vlSelfRef.systolic_tb__DOT__b12),4);
        bufp->chgCData(oldp+12,(vlSelfRef.systolic_tb__DOT__b13),4);
        bufp->chgCData(oldp+13,(vlSelfRef.systolic_tb__DOT__b21),4);
        bufp->chgCData(oldp+14,(vlSelfRef.systolic_tb__DOT__b22),4);
        bufp->chgCData(oldp+15,(vlSelfRef.systolic_tb__DOT__b23),4);
        bufp->chgCData(oldp+16,(vlSelfRef.systolic_tb__DOT__b31),4);
        bufp->chgCData(oldp+17,(vlSelfRef.systolic_tb__DOT__b32),4);
        bufp->chgCData(oldp+18,(vlSelfRef.systolic_tb__DOT__b33),4);
        bufp->chgBit(oldp+19,(vlSelfRef.systolic_tb__DOT__in_valid));
        bufp->chgIData(oldp+20,(vlSelfRef.systolic_tb__DOT__test_errors),32);
        bufp->chgIData(oldp+21,(vlSelfRef.systolic_tb__DOT__jobs),32);
        bufp->chgIData(oldp+22,(vlSelfRef.systolic_tb__DOT__gap),32);
        bufp->chgCData(oldp+23,(vlSelfRef.systolic_tb__DOT__A[0U][0U][0U]),4);
        bufp->chgCData(oldp+24,(vlSelfRef.systolic_tb__DOT__A[0U][0U][1U]),4);
        bufp->chgCData(oldp+25,(vlSelfRef.systolic_tb__DOT__A[0U][0U][2U]),4);
        bufp->chgCData(oldp+26,(vlSelfRef.systolic_tb__DOT__A[0U][1U][0U]),4);
        bufp->chgCData(oldp+27,(vlSelfRef.systolic_tb__DOT__A[0U][1U][1U]),4);
        bufp->chgCData(oldp+28,(vlSelfRef.systolic_tb__DOT__A[0U][1U][2U]),4);
        bufp->chgCData(oldp+29,(vlSelfRef.systolic_tb__DOT__A[0U][2U][0U]),4);
        bufp->chgCData(oldp+30,(vlSelfRef.systolic_tb__DOT__A[0U][2U][1U]),4);
        bufp->chgCData(oldp+31,(vlSelfRef.systolic_tb__DOT__A[0U][2U][2U]),4);
        bufp->chgCData(oldp+32,(vlSelfRef.systolic_tb__DOT__A[1U][0U][0U]),4);
        bufp->chgCData(oldp+33,(vlSelfRef.systolic_tb__DOT__A[1U][0U][1U]),4);
        bufp->chgCData(oldp+34,(vlSelfRef.systolic_tb__DOT__A[1U][0U][2U]),4);
        bufp->chgCData(oldp+35,(vlSelfRef.systolic_tb__DOT__A[1U][1U][0U]),4);
        bufp->chgCData(oldp+36,(vlSelfRef.systolic_tb__DOT__A[1U][1U][1U]),4);
        bufp->chgCData(oldp+37,(vlSelfRef.systolic_tb__DOT__A[1U][1U][2U]),4);
        bufp->chgCData(oldp+38,(vlSelfRef.systolic_tb__DOT__A[1U][2U][0U]),4);
        bufp->chgCData(oldp+39,(vlSelfRef.systolic_tb__DOT__A[1U][2U][1U]),4);
        bufp->chgCData(oldp+40,(vlSelfRef.systolic_tb__DOT__A[1U][2U][2U]),4);
        bufp->chgCData(oldp+41,(vlSelfRef.systolic_tb__DOT__B[0U][0U][0U]),4);
        bufp->chgCData(oldp+42,(vlSelfRef.systolic_tb__DOT__B[0U][0U][1U]),4);
        bufp->chgCData(oldp+43,(vlSelfRef.systolic_tb__DOT__B[0U][0U][2U]),4);
        bufp->chgCData(oldp+44,(vlSelfRef.systolic_tb__DOT__B[0U][1U][0U]),4);
        bufp->chgCData(oldp+45,(vlSelfRef.systolic_tb__DOT__B[0U][1U][1U]),4);
        bufp->chgCData(oldp+46,(vlSelfRef.systolic_tb__DOT__B[0U][1U][2U]),4);
        bufp->chgCData(oldp+47,(vlSelfRef.systolic_tb__DOT__B[0U][2U][0U]),4);
        bufp->chgCData(oldp+48,(vlSelfRef.systolic_tb__DOT__B[0U][2U][1U]),4);
        bufp->chgCData(oldp+49,(vlSelfRef.systolic_tb__DOT__B[0U][2U][2U]),4);
        bufp->chgCData(oldp+50,(vlSelfRef.systolic_tb__DOT__B[1U][0U][0U]),4);
        bufp->chgCData(oldp+51,(vlSelfRef.systolic_tb__DOT__B[1U][0U][1U]),4);
        bufp->chgCData(oldp+52,(vlSelfRef.systolic_tb__DOT__B[1U][0U][2U]),4);
        bufp->chgCData(oldp+53,(vlSelfRef.systolic_tb__DOT__B[1U][1U][0U]),4);
        bufp->chgCData(oldp+54,(vlSelfRef.systolic_tb__DOT__B[1U][1U][1U]),4);
        bufp->chgCData(oldp+55,(vlSelfRef.systolic_tb__DOT__B[1U][1U][2U]),4);
        bufp->chgCData(oldp+56,(vlSelfRef.systolic_tb__DOT__B[1U][2U][0U]),4);
        bufp->chgCData(oldp+57,(vlSelfRef.systolic_tb__DOT__B[1U][2U][1U]),4);
        bufp->chgCData(oldp+58,(vlSelfRef.systolic_tb__DOT__B[1U][2U][2U]),4);
        bufp->chgIData(oldp+59,(vlSelfRef.systolic_tb__DOT__C_exp[0U][0U][0U]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.systolic_tb__DOT__C_exp[0U][0U][1U]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.systolic_tb__DOT__C_exp[0U][0U][2U]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.systolic_tb__DOT__C_exp[0U][1U][0U]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.systolic_tb__DOT__C_exp[0U][1U][1U]),32);
        bufp->chgIData(oldp+64,(vlSelfRef.systolic_tb__DOT__C_exp[0U][1U][2U]),32);
        bufp->chgIData(oldp+65,(vlSelfRef.systolic_tb__DOT__C_exp[0U][2U][0U]),32);
        bufp->chgIData(oldp+66,(vlSelfRef.systolic_tb__DOT__C_exp[0U][2U][1U]),32);
        bufp->chgIData(oldp+67,(vlSelfRef.systolic_tb__DOT__C_exp[0U][2U][2U]),32);
        bufp->chgIData(oldp+68,(vlSelfRef.systolic_tb__DOT__C_exp[1U][0U][0U]),32);
        bufp->chgIData(oldp+69,(vlSelfRef.systolic_tb__DOT__C_exp[1U][0U][1U]),32);
        bufp->chgIData(oldp+70,(vlSelfRef.systolic_tb__DOT__C_exp[1U][0U][2U]),32);
        bufp->chgIData(oldp+71,(vlSelfRef.systolic_tb__DOT__C_exp[1U][1U][0U]),32);
        bufp->chgIData(oldp+72,(vlSelfRef.systolic_tb__DOT__C_exp[1U][1U][1U]),32);
        bufp->chgIData(oldp+73,(vlSelfRef.systolic_tb__DOT__C_exp[1U][1U][2U]),32);
        bufp->chgIData(oldp+74,(vlSelfRef.systolic_tb__DOT__C_exp[1U][2U][0U]),32);
        bufp->chgIData(oldp+75,(vlSelfRef.systolic_tb__DOT__C_exp[1U][2U][1U]),32);
        bufp->chgIData(oldp+76,(vlSelfRef.systolic_tb__DOT__C_exp[1U][2U][2U]),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[5U])))) {
        bufp->chgQData(oldp+77,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed),36);
        bufp->chgQData(oldp+79,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed),36);
        bufp->chgCData(oldp+81,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[0U][0U]),4);
        bufp->chgCData(oldp+82,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[0U][1U]),4);
        bufp->chgCData(oldp+83,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[0U][2U]),4);
        bufp->chgCData(oldp+84,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[1U][0U]),4);
        bufp->chgCData(oldp+85,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[1U][1U]),4);
        bufp->chgCData(oldp+86,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[1U][2U]),4);
        bufp->chgCData(oldp+87,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[2U][0U]),4);
        bufp->chgCData(oldp+88,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[2U][1U]),4);
        bufp->chgCData(oldp+89,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[2U][2U]),4);
        bufp->chgCData(oldp+90,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[0U][0U]),4);
        bufp->chgCData(oldp+91,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[0U][1U]),4);
        bufp->chgCData(oldp+92,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[0U][2U]),4);
        bufp->chgCData(oldp+93,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[1U][0U]),4);
        bufp->chgCData(oldp+94,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[1U][1U]),4);
        bufp->chgCData(oldp+95,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[1U][2U]),4);
        bufp->chgCData(oldp+96,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[2U][0U]),4);
        bufp->chgCData(oldp+97,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[2U][1U]),4);
        bufp->chgCData(oldp+98,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[2U][2U]),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgSData(oldp+99,((0x000003ffU & vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[0U])),10);
        bufp->chgSData(oldp+100,((0x000003ffU & (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[0U] 
                                                 >> 0x0000000aU))),10);
        bufp->chgSData(oldp+101,((0x000003ffU & (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[0U] 
                                                 >> 0x00000014U))),10);
        bufp->chgSData(oldp+102,((0x000003ffU & ((vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[1U] 
                                                  << 2U) 
                                                 | (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[0U] 
                                                    >> 0x0000001eU)))),10);
        bufp->chgSData(oldp+103,((0x000003ffU & (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[1U] 
                                                 >> 8U))),10);
        bufp->chgSData(oldp+104,((0x000003ffU & (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[1U] 
                                                 >> 0x00000012U))),10);
        bufp->chgSData(oldp+105,((0x000003ffU & ((vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[2U] 
                                                  << 4U) 
                                                 | (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[1U] 
                                                    >> 0x0000001cU)))),10);
        bufp->chgSData(oldp+106,((0x000003ffU & (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[2U] 
                                                 >> 6U))),10);
        bufp->chgSData(oldp+107,((0x000003ffU & (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[2U] 
                                                 >> 0x00000010U))),10);
        bufp->chgBit(oldp+108,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__mark[5U]));
        bufp->chgSData(oldp+109,(vlSelfRef.systolic_tb__DOT__C_got[0U][0U]),10);
        bufp->chgSData(oldp+110,(vlSelfRef.systolic_tb__DOT__C_got[0U][1U]),10);
        bufp->chgSData(oldp+111,(vlSelfRef.systolic_tb__DOT__C_got[0U][2U]),10);
        bufp->chgSData(oldp+112,(vlSelfRef.systolic_tb__DOT__C_got[1U][0U]),10);
        bufp->chgSData(oldp+113,(vlSelfRef.systolic_tb__DOT__C_got[1U][1U]),10);
        bufp->chgSData(oldp+114,(vlSelfRef.systolic_tb__DOT__C_got[1U][2U]),10);
        bufp->chgSData(oldp+115,(vlSelfRef.systolic_tb__DOT__C_got[2U][0U]),10);
        bufp->chgSData(oldp+116,(vlSelfRef.systolic_tb__DOT__C_got[2U][1U]),10);
        bufp->chgSData(oldp+117,(vlSelfRef.systolic_tb__DOT__C_got[2U][2U]),10);
        bufp->chgCData(oldp+118,(vlSelfRef.systolic_tb__DOT__dut__DOT__entry_valid),2);
        bufp->chgBit(oldp+119,(Vsystolic_tb__ConstPool__TABLE_h08a72cc3_0
                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
        bufp->chgBit(oldp+120,(Vsystolic_tb__ConstPool__TABLE_h028f018c_0
                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
        bufp->chgBit(oldp+121,(Vsystolic_tb__ConstPool__TABLE_h82a00311_0
                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
        bufp->chgBit(oldp+122,(Vsystolic_tb__ConstPool__TABLE_h757529b2_0
                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
        bufp->chgBit(oldp+123,(Vsystolic_tb__ConstPool__TABLE_h0c797d14_0
                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
        bufp->chgBit(oldp+124,(Vsystolic_tb__ConstPool__TABLE_hbabea407_0
                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
        bufp->chgCData(oldp+125,(Vsystolic_tb__ConstPool__TABLE_h35b5d552_0
                                 [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]),2);
        Vsystolic_tb___024root__trace_chg_dtype____0(vlSelf, bufp, 126, vlSelfRef.systolic_tb__DOT__dut__DOT__a_skewed);
        Vsystolic_tb___024root__trace_chg_dtype____1(vlSelf, bufp, 129, vlSelfRef.systolic_tb__DOT__dut__DOT__slot_data);
        Vsystolic_tb___024root__trace_chg_dtype____2(vlSelf, bufp, 132, vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires);
        bufp->chgWData(oldp+141,(vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed),90);
        Vsystolic_tb___024root__trace_chg_dtype____3(vlSelf, bufp, 144, vlSelfRef.systolic_tb__DOT__dut__DOT__result_matrix);
        bufp->chgCData(oldp+147,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[2U][2U]),4);
        bufp->chgCData(oldp+148,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[2U][1U]),4);
        bufp->chgCData(oldp+149,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[2U][0U]),4);
        bufp->chgCData(oldp+150,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[1U][2U]),4);
        bufp->chgCData(oldp+151,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[1U][1U]),4);
        bufp->chgCData(oldp+152,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[1U][0U]),4);
        bufp->chgCData(oldp+153,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[0U][2U]),4);
        bufp->chgCData(oldp+154,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[0U][1U]),4);
        bufp->chgCData(oldp+155,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[0U][0U]),4);
        bufp->chgSData(oldp+156,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[2U][2U]),10);
        bufp->chgSData(oldp+157,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[2U][1U]),10);
        bufp->chgSData(oldp+158,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[2U][0U]),10);
        bufp->chgSData(oldp+159,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[1U][2U]),10);
        bufp->chgSData(oldp+160,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[1U][1U]),10);
        bufp->chgSData(oldp+161,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[1U][0U]),10);
        bufp->chgSData(oldp+162,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[0U][2U]),10);
        bufp->chgSData(oldp+163,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[0U][1U]),10);
        bufp->chgSData(oldp+164,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[0U][0U]),10);
        bufp->chgBit(oldp+165,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[0U][0U]));
        bufp->chgBit(oldp+166,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[0U][1U]));
        bufp->chgBit(oldp+167,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[0U][2U]));
        bufp->chgBit(oldp+168,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[1U][0U]));
        bufp->chgBit(oldp+169,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[1U][1U]));
        bufp->chgBit(oldp+170,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[1U][2U]));
        bufp->chgBit(oldp+171,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[2U][0U]));
        bufp->chgBit(oldp+172,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[2U][1U]));
        bufp->chgBit(oldp+173,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[2U][2U]));
        bufp->chgCData(oldp+174,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_row[0U]),4);
        bufp->chgCData(oldp+175,(vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[0U][0U]),4);
        bufp->chgBit(oldp+176,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out));
        bufp->chgCData(oldp+177,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__a_out),4);
        bufp->chgSData(oldp+178,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__result),10);
        bufp->chgCData(oldp+179,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1),4);
        bufp->chgCData(oldp+180,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2),4);
        bufp->chgCData(oldp+181,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w),4);
        bufp->chgBit(oldp+182,(((0U == vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_row[0U]) 
                                | (0U == (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))));
        bufp->chgBit(oldp+183,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[0U][0U]));
        bufp->chgCData(oldp+184,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[0U][0U]),4);
        bufp->chgCData(oldp+185,(vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[0U][1U]),4);
        bufp->chgBit(oldp+186,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out));
        bufp->chgCData(oldp+187,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__a_out),4);
        bufp->chgSData(oldp+188,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__result),10);
        bufp->chgCData(oldp+189,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1),4);
        bufp->chgCData(oldp+190,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2),4);
        bufp->chgCData(oldp+191,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w),4);
        bufp->chgBit(oldp+192,(((0U == vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[0U][0U]) 
                                | (0U == (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))));
        bufp->chgBit(oldp+193,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[0U][1U]));
        bufp->chgCData(oldp+194,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[0U][1U]),4);
        bufp->chgCData(oldp+195,(vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[0U][2U]),4);
        bufp->chgBit(oldp+196,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out));
        bufp->chgCData(oldp+197,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__a_out),4);
        bufp->chgSData(oldp+198,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__result),10);
        bufp->chgCData(oldp+199,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1),4);
        bufp->chgCData(oldp+200,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2),4);
        bufp->chgCData(oldp+201,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w),4);
        bufp->chgBit(oldp+202,(((0U == vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[0U][1U]) 
                                | (0U == (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))));
        bufp->chgBit(oldp+203,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly[0U]));
        bufp->chgCData(oldp+204,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly[0U]),4);
        bufp->chgCData(oldp+205,(vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[1U][0U]),4);
        bufp->chgSData(oldp+206,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[0U][0U]),10);
        bufp->chgBit(oldp+207,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out));
        bufp->chgCData(oldp+208,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__a_out),4);
        bufp->chgSData(oldp+209,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__result),10);
        bufp->chgCData(oldp+210,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1),4);
        bufp->chgCData(oldp+211,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2),4);
        bufp->chgCData(oldp+212,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w),4);
        bufp->chgBit(oldp+213,(((0U == vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly[0U]) 
                                | (0U == (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))));
        bufp->chgBit(oldp+214,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[1U][0U]));
        bufp->chgCData(oldp+215,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[1U][0U]),4);
        bufp->chgCData(oldp+216,(vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[1U][1U]),4);
        bufp->chgSData(oldp+217,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[0U][1U]),10);
        bufp->chgBit(oldp+218,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out));
        bufp->chgCData(oldp+219,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__a_out),4);
        bufp->chgSData(oldp+220,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__result),10);
        bufp->chgCData(oldp+221,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1),4);
        bufp->chgCData(oldp+222,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2),4);
        bufp->chgCData(oldp+223,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w),4);
        bufp->chgBit(oldp+224,(((0U == vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[1U][0U]) 
                                | (0U == (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))));
        bufp->chgBit(oldp+225,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[1U][1U]));
        bufp->chgCData(oldp+226,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[1U][1U]),4);
        bufp->chgCData(oldp+227,(vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[1U][2U]),4);
        bufp->chgSData(oldp+228,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[0U][2U]),10);
        bufp->chgBit(oldp+229,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out));
        bufp->chgCData(oldp+230,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__a_out),4);
        bufp->chgSData(oldp+231,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__result),10);
        bufp->chgCData(oldp+232,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1),4);
        bufp->chgCData(oldp+233,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2),4);
        bufp->chgCData(oldp+234,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w),4);
        bufp->chgBit(oldp+235,(((0U == vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[1U][1U]) 
                                | (0U == (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))));
        bufp->chgBit(oldp+236,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly[1U]));
        bufp->chgCData(oldp+237,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly[1U]),4);
        bufp->chgCData(oldp+238,(vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[2U][0U]),4);
        bufp->chgSData(oldp+239,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[1U][0U]),10);
        bufp->chgBit(oldp+240,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out));
        bufp->chgCData(oldp+241,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__a_out),4);
        bufp->chgSData(oldp+242,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__result),10);
        bufp->chgCData(oldp+243,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1),4);
        bufp->chgCData(oldp+244,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2),4);
        bufp->chgCData(oldp+245,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w),4);
        bufp->chgBit(oldp+246,(((0U == vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly[1U]) 
                                | (0U == (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))));
        bufp->chgBit(oldp+247,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[2U][0U]));
        bufp->chgCData(oldp+248,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[2U][0U]),4);
        bufp->chgCData(oldp+249,(vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[2U][1U]),4);
        bufp->chgSData(oldp+250,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[1U][1U]),10);
        bufp->chgBit(oldp+251,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out));
        bufp->chgCData(oldp+252,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__a_out),4);
        bufp->chgSData(oldp+253,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__result),10);
        bufp->chgCData(oldp+254,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1),4);
        bufp->chgCData(oldp+255,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2),4);
        bufp->chgCData(oldp+256,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w),4);
        bufp->chgBit(oldp+257,(((0U == vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[2U][0U]) 
                                | (0U == (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))));
        bufp->chgBit(oldp+258,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[2U][1U]));
        bufp->chgCData(oldp+259,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[2U][1U]),4);
        bufp->chgCData(oldp+260,(vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[2U][2U]),4);
        bufp->chgSData(oldp+261,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[1U][2U]),10);
        bufp->chgBit(oldp+262,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out));
        bufp->chgCData(oldp+263,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__a_out),4);
        bufp->chgSData(oldp+264,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__result),10);
        bufp->chgCData(oldp+265,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1),4);
        bufp->chgCData(oldp+266,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2),4);
        bufp->chgCData(oldp+267,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w),4);
        bufp->chgBit(oldp+268,(((0U == vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[2U][1U]) 
                                | (0U == (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))));
        bufp->chgCData(oldp+269,(vlSelfRef.systolic_tb__DOT__dut__DOT__controlla__DOT__state),3);
        bufp->chgCData(oldp+270,(Vsystolic_tb__ConstPool__TABLE_hf261e1ac_0
                                 [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]),3);
        bufp->chgCData(oldp+271,(vlSelfRef.systolic_tb__DOT__dut__DOT__controlla__DOT__cycle_count),2);
        Vsystolic_tb___024root__trace_chg_dtype____4(vlSelf, bufp, 272, vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf);
        Vsystolic_tb___024root__trace_chg_dtype____5(vlSelf, bufp, 290, vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf);
        bufp->chgBit(oldp+308,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr));
        bufp->chgCData(oldp+309,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_row[0]),4);
        bufp->chgCData(oldp+310,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_row[1]),4);
        bufp->chgCData(oldp+311,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_row[2]),4);
        Vsystolic_tb___024root__trace_chg_dtype____6(vlSelf, bufp, 312, vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal);
        bufp->chgSData(oldp+321,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__deskewed[0]),10);
        bufp->chgSData(oldp+322,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__deskewed[1]),10);
        bufp->chgSData(oldp+323,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__deskewed[2]),10);
        Vsystolic_tb___024root__trace_chg_dtype____7(vlSelf, bufp, 324, vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__mark);
        Vsystolic_tb___024root__trace_chg_dtype____8(vlSelf, bufp, 330, vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly);
        Vsystolic_tb___024root__trace_chg_dtype____9(vlSelf, bufp, 331, vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly);
        Vsystolic_tb___024root__trace_chg_dtype____10(vlSelf, bufp, 332, vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly);
        Vsystolic_tb___024root__trace_chg_dtype____11(vlSelf, bufp, 334, vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly);
        Vsystolic_tb___024root__trace_chg_dtype____12(vlSelf, bufp, 336, vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly);
        Vsystolic_tb___024root__trace_chg_dtype____13(vlSelf, bufp, 338, vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__1__KET____DOT__genblk1__DOT__dly);
    }
    bufp->chgBit(oldp+339,(vlSelfRef.systolic_tb__DOT__clk));
    bufp->chgIData(oldp+340,(vlSelfRef.systolic_tb__DOT__errors),32);
    bufp->chgIData(oldp+341,(vlSelfRef.systolic_tb__DOT__checks),32);
    bufp->chgIData(oldp+342,(vlSelfRef.systolic_tb__DOT__outs_seen),32);
    bufp->chgIData(oldp+343,(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd),32);
    bufp->chgIData(oldp+344,(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__num_tests),32);
    bufp->chgIData(oldp+345,(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n),32);
}

void Vsystolic_tb___024root__trace_chg_dtype____0(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_chg_dtype____0\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),4);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),4);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),4);
}

void Vsystolic_tb___024root__trace_chg_dtype____1(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_chg_dtype____1\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
    bufp->chgBit(oldp+2,(__VdtypeVar[2]));
}

void Vsystolic_tb___024root__trace_chg_dtype____2(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_chg_dtype____2\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0U][0U]),4);
    bufp->chgCData(oldp+1,(__VdtypeVar[0U][1U]),4);
    bufp->chgCData(oldp+2,(__VdtypeVar[0U][2U]),4);
    bufp->chgCData(oldp+3,(__VdtypeVar[1U][0U]),4);
    bufp->chgCData(oldp+4,(__VdtypeVar[1U][1U]),4);
    bufp->chgCData(oldp+5,(__VdtypeVar[1U][2U]),4);
    bufp->chgCData(oldp+6,(__VdtypeVar[2U][0U]),4);
    bufp->chgCData(oldp+7,(__VdtypeVar[2U][1U]),4);
    bufp->chgCData(oldp+8,(__VdtypeVar[2U][2U]),4);
}

void Vsystolic_tb___024root__trace_chg_dtype____3(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*9:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_chg_dtype____3\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[0]),10);
    bufp->chgSData(oldp+1,(__VdtypeVar[1]),10);
    bufp->chgSData(oldp+2,(__VdtypeVar[2]),10);
}

void Vsystolic_tb___024root__trace_chg_dtype____4(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_chg_dtype____4\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0U][0U][0U]),4);
    bufp->chgCData(oldp+1,(__VdtypeVar[0U][0U][1U]),4);
    bufp->chgCData(oldp+2,(__VdtypeVar[0U][0U][2U]),4);
    bufp->chgCData(oldp+3,(__VdtypeVar[0U][1U][0U]),4);
    bufp->chgCData(oldp+4,(__VdtypeVar[0U][1U][1U]),4);
    bufp->chgCData(oldp+5,(__VdtypeVar[0U][1U][2U]),4);
    bufp->chgCData(oldp+6,(__VdtypeVar[0U][2U][0U]),4);
    bufp->chgCData(oldp+7,(__VdtypeVar[0U][2U][1U]),4);
    bufp->chgCData(oldp+8,(__VdtypeVar[0U][2U][2U]),4);
    bufp->chgCData(oldp+9,(__VdtypeVar[1U][0U][0U]),4);
    bufp->chgCData(oldp+10,(__VdtypeVar[1U][0U][1U]),4);
    bufp->chgCData(oldp+11,(__VdtypeVar[1U][0U][2U]),4);
    bufp->chgCData(oldp+12,(__VdtypeVar[1U][1U][0U]),4);
    bufp->chgCData(oldp+13,(__VdtypeVar[1U][1U][1U]),4);
    bufp->chgCData(oldp+14,(__VdtypeVar[1U][1U][2U]),4);
    bufp->chgCData(oldp+15,(__VdtypeVar[1U][2U][0U]),4);
    bufp->chgCData(oldp+16,(__VdtypeVar[1U][2U][1U]),4);
    bufp->chgCData(oldp+17,(__VdtypeVar[1U][2U][2U]),4);
}

void Vsystolic_tb___024root__trace_chg_dtype____5(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_chg_dtype____5\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0U][0U][0U]),4);
    bufp->chgCData(oldp+1,(__VdtypeVar[0U][0U][1U]),4);
    bufp->chgCData(oldp+2,(__VdtypeVar[0U][0U][2U]),4);
    bufp->chgCData(oldp+3,(__VdtypeVar[0U][1U][0U]),4);
    bufp->chgCData(oldp+4,(__VdtypeVar[0U][1U][1U]),4);
    bufp->chgCData(oldp+5,(__VdtypeVar[0U][1U][2U]),4);
    bufp->chgCData(oldp+6,(__VdtypeVar[0U][2U][0U]),4);
    bufp->chgCData(oldp+7,(__VdtypeVar[0U][2U][1U]),4);
    bufp->chgCData(oldp+8,(__VdtypeVar[0U][2U][2U]),4);
    bufp->chgCData(oldp+9,(__VdtypeVar[1U][0U][0U]),4);
    bufp->chgCData(oldp+10,(__VdtypeVar[1U][0U][1U]),4);
    bufp->chgCData(oldp+11,(__VdtypeVar[1U][0U][2U]),4);
    bufp->chgCData(oldp+12,(__VdtypeVar[1U][1U][0U]),4);
    bufp->chgCData(oldp+13,(__VdtypeVar[1U][1U][1U]),4);
    bufp->chgCData(oldp+14,(__VdtypeVar[1U][1U][2U]),4);
    bufp->chgCData(oldp+15,(__VdtypeVar[1U][2U][0U]),4);
    bufp->chgCData(oldp+16,(__VdtypeVar[1U][2U][1U]),4);
    bufp->chgCData(oldp+17,(__VdtypeVar[1U][2U][2U]),4);
}

void Vsystolic_tb___024root__trace_chg_dtype____6(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<SData/*9:0*/, 3>, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_chg_dtype____6\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[0U][0U]),10);
    bufp->chgSData(oldp+1,(__VdtypeVar[0U][1U]),10);
    bufp->chgSData(oldp+2,(__VdtypeVar[0U][2U]),10);
    bufp->chgSData(oldp+3,(__VdtypeVar[1U][0U]),10);
    bufp->chgSData(oldp+4,(__VdtypeVar[1U][1U]),10);
    bufp->chgSData(oldp+5,(__VdtypeVar[1U][2U]),10);
    bufp->chgSData(oldp+6,(__VdtypeVar[2U][0U]),10);
    bufp->chgSData(oldp+7,(__VdtypeVar[2U][1U]),10);
    bufp->chgSData(oldp+8,(__VdtypeVar[2U][2U]),10);
}

void Vsystolic_tb___024root__trace_chg_dtype____7(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 6>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_chg_dtype____7\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
    bufp->chgBit(oldp+2,(__VdtypeVar[2]));
    bufp->chgBit(oldp+3,(__VdtypeVar[3]));
    bufp->chgBit(oldp+4,(__VdtypeVar[4]));
    bufp->chgBit(oldp+5,(__VdtypeVar[5]));
}

void Vsystolic_tb___024root__trace_chg_dtype____8(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_chg_dtype____8\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),4);
}

void Vsystolic_tb___024root__trace_chg_dtype____9(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_chg_dtype____9\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
}

void Vsystolic_tb___024root__trace_chg_dtype____10(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_chg_dtype____10\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),4);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),4);
}

void Vsystolic_tb___024root__trace_chg_dtype____11(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_chg_dtype____11\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
}

void Vsystolic_tb___024root__trace_chg_dtype____12(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*9:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_chg_dtype____12\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[0]),10);
    bufp->chgSData(oldp+1,(__VdtypeVar[1]),10);
}

void Vsystolic_tb___024root__trace_chg_dtype____13(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*9:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_chg_dtype____13\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[0]),10);
}

void Vsystolic_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_cleanup\n"); );
    // Body
    Vsystolic_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_tb___024root*>(voidSelf);
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
