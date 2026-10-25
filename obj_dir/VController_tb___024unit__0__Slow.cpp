// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VController_tb.h for the primary calling header

#include "VController_tb__pch.h"

VL_ATTR_COLD void VController_tb___024unit___ctor_var_reset(VController_tb___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VController_tb___024unit___ctor_var_reset\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    for (int __Vi = 0; __Vi < 8; ++__Vi) {
        vlSelf->__Venumtab_enum_name15[__Vi] = ""s;
    }
    vlSelf->__Venumtab_enum_name15[0] = "IDLE"s;
    vlSelf->__Venumtab_enum_name15[1] = "LOAD"s;
    vlSelf->__Venumtab_enum_name15[2] = "FEED_0"s;
    vlSelf->__Venumtab_enum_name15[3] = "FEED_1"s;
    vlSelf->__Venumtab_enum_name15[4] = "DRAIN"s;
    vlSelf->__Venumtab_enum_name15[5] = "DONE"s;
}
