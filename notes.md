# Lab 3 Notes by ck21

## Tasks

```
// state transition
    always_ff @(posedge clk)
        if (rst)    current_state <= S0;
        else        current_state <= next_state;
```

We forgot to put the above state transition code in `f1_fsm.sv` asnd therefore did not initially obtain the expected results.

Subsequently the lights turned on one after another upon the press of the rotary switch.