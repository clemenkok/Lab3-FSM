// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    if (((((((((0U == vlSelf->top__DOT__stateMachine__DOT__current_state) 
               | (1U == vlSelf->top__DOT__stateMachine__DOT__current_state)) 
              | (2U == vlSelf->top__DOT__stateMachine__DOT__current_state)) 
             | (3U == vlSelf->top__DOT__stateMachine__DOT__current_state)) 
            | (4U == vlSelf->top__DOT__stateMachine__DOT__current_state)) 
           | (5U == vlSelf->top__DOT__stateMachine__DOT__current_state)) 
          | (6U == vlSelf->top__DOT__stateMachine__DOT__current_state)) 
         | (7U == vlSelf->top__DOT__stateMachine__DOT__current_state))) {
        if ((0U == vlSelf->top__DOT__stateMachine__DOT__current_state)) {
            vlSelf->data_out = 0U;
            vlSelf->top__DOT__stateMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__count)
                    ? 1U : vlSelf->top__DOT__stateMachine__DOT__current_state);
        } else if ((1U == vlSelf->top__DOT__stateMachine__DOT__current_state)) {
            vlSelf->data_out = 1U;
            vlSelf->top__DOT__stateMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__count)
                    ? 2U : vlSelf->top__DOT__stateMachine__DOT__current_state);
        } else if ((2U == vlSelf->top__DOT__stateMachine__DOT__current_state)) {
            vlSelf->data_out = 3U;
            vlSelf->top__DOT__stateMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__count)
                    ? 3U : vlSelf->top__DOT__stateMachine__DOT__current_state);
        } else if ((3U == vlSelf->top__DOT__stateMachine__DOT__current_state)) {
            vlSelf->data_out = 7U;
            vlSelf->top__DOT__stateMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__count)
                    ? 4U : vlSelf->top__DOT__stateMachine__DOT__current_state);
        } else if ((4U == vlSelf->top__DOT__stateMachine__DOT__current_state)) {
            vlSelf->data_out = 0xfU;
            vlSelf->top__DOT__stateMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__count)
                    ? 5U : vlSelf->top__DOT__stateMachine__DOT__current_state);
        } else if ((5U == vlSelf->top__DOT__stateMachine__DOT__current_state)) {
            vlSelf->data_out = 0x1fU;
            vlSelf->top__DOT__stateMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__count)
                    ? 6U : vlSelf->top__DOT__stateMachine__DOT__current_state);
        } else if ((6U == vlSelf->top__DOT__stateMachine__DOT__current_state)) {
            vlSelf->data_out = 0x3fU;
            vlSelf->top__DOT__stateMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__count)
                    ? 7U : vlSelf->top__DOT__stateMachine__DOT__current_state);
        } else {
            vlSelf->data_out = 0x7fU;
            vlSelf->top__DOT__stateMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__count)
                    ? 8U : vlSelf->top__DOT__stateMachine__DOT__current_state);
        }
    } else if ((8U == vlSelf->top__DOT__stateMachine__DOT__current_state)) {
        vlSelf->data_out = 0xffU;
        vlSelf->top__DOT__stateMachine__DOT__next_state 
            = ((IData)(vlSelf->top__DOT__count) ? 0U
                : vlSelf->top__DOT__stateMachine__DOT__current_state);
    } else {
        vlSelf->data_out = 0U;
        vlSelf->top__DOT__stateMachine__DOT__next_state 
            = vlSelf->top__DOT__stateMachine__DOT__current_state;
    }
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->N = VL_RAND_RESET_I(16);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__count = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clkTick__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__stateMachine__DOT__current_state = 0;
    vlSelf->top__DOT__stateMachine__DOT__next_state = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}