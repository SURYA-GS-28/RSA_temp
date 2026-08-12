// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench_full.h for the primary calling header

#include "Vtestbench_full__pch.h"
#include "Vtestbench_full__Syms.h"
#include "Vtestbench_full___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench_full___024root___dump_triggers__act(Vtestbench_full___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestbench_full___024root___eval_triggers__act(Vtestbench_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_full___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.testbench_full__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__testbench_full__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__testbench_full__DOT__clk__0 
        = vlSelfRef.testbench_full__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtestbench_full___024root___dump_triggers__act(vlSelf);
    }
#endif
}
