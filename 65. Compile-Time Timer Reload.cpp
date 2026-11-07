/*
In many microcontrollers, periodic interrupts (1 ms, 10 ms, 100 ms, etc.) are generated using a hardware timer reload value.

This value must be computed using:

reload = timerClockHz × intervalSec

Since this value must be exact, firmware often computes it at compile time using constexpr.
Incorrect reload values cause jitter, drift, or system failure.

Your job is to compute the correct timer reload count at compile time for different timer intervals.

What you must do:

    Define a constexpr function named computeReload
        It must compute:

            (clockHz × intervalMs + 500) / 1000 

    This converts milliseconds to seconds
    +500 is used for integer rounding
    Define a constexpr array named RELOAD_TABLE
        It must contain exactly 3 compile-time reload values, in this order:
            Reload value for 1 ms
            Reload value for 10 ms
            Reload value for 100 ms
    All values must be computed using computeReload
    Use:
        timerClockHz = 1'000'000 (1 MHz)

Program input:

    The user enters an integer index:
        0 → 1 ms reload
        1 → 10 ms reload
        2 → 100 ms reload
    Input is guaranteed to be valid (0–2)

Program output:

    Print the reload value from RELOAD_TABLE[index]

 

Example 1

Input:

1

Output:

10000

 

Example 2

Input:

2

Output:

100000

*/
#include <iostream>

constexpr int reload(int clockMhz, int intervalMs){
    return (clockMhz * intervalMs + 500) / 1000;
}

constexpr int timerClockHz = 1000000;

constexpr int RELOAD_TABLE[] = {reload(1,timerClockHz), reload(10,timerClockHz),reload(100,timerClockHz)};

int main(){
    int x;
    std::cin >> x;

    std::cout << RELOAD_TABLE[x];

    return 0;
}
