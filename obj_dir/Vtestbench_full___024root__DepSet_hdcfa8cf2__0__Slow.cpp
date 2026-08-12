// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench_full.h for the primary calling header

#include "Vtestbench_full__pch.h"
#include "Vtestbench_full__Syms.h"
#include "Vtestbench_full___024root.h"

VL_ATTR_COLD void Vtestbench_full___024root___eval_initial__TOP(Vtestbench_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_full___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    vlSelfRef.testbench_full__DOT__clk = 0U;
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x66756c6cU;
    __Vtemp_1[2U] = 0x7370695fU;
    __Vtemp_1[3U] = 0x7273615fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}
