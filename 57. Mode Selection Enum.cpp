/*
Declare a scoped enum class named Mode representing GPIO operating modes with exactly four values, defined in the following order:

    Input
    Output
    PullUp
    PullDown

The enum must use uint8_t as its underlying type.

Implement a function:

const char* toString(Mode m);

This function must return the following string representations:

    Mode::Input → "INPUT"
    Mode::Output → "OUTPUT"
    Mode::PullUp → "PULLUP"
    Mode::PullDown → "PULLDOWN"

The program will read an integer value from standard input.

The input value is guaranteed to be in the range 0 to 3, where:

    0 maps to Mode::Input
    1 maps to Mode::Output
    2 maps to Mode::PullUp
    3 maps to Mode::PullDown

After mapping the integer to the corresponding enum value, print the string representation using toString().

Input

A single integer value in the range 0 to 3 (inclusive).

Output

A single uppercase string representing the corresponding GPIO mode.

 

Example 1

Input:

0

Output:

INPUT 

 

Example 2

Input:

2

Output:

PULLUP 

 

Constraints

    Input integer x is guaranteed to be in the range 0 ≤ x ≤ 3
    Enum underlying type must be uint8_t
    No dynamic memory allocation is allowed
    toString() must return string literals (no std::string)
    Program must compile under C++11 or later
    Execution must be deterministic with no undefined behavior
    Only standard headers <iostream> and <cstdint> may be used
*/
#include <iostream>
#include <cstdint>

enum class Mode : uint8_t{
    Input,
    Output,
    PullUp,
    PullDown
};

const char* toString(Mode m){
    switch (m) {
        case Mode::Input:    return "INPUT";
        case Mode::Output:   return "OUTPUT";
        case Mode::PullUp:   return "PULLUP";
        case Mode::PullDown: return "PULLDOWN";
    }
    return "UNKNOWN"; 
}

int main(){
    int x;
    std::cin >> x;

    Mode m = Mode::Input; 

    if (x == 0)      m = Mode::Input;
    else if (x == 1) m = Mode::Output;
    else if (x == 2) m = Mode::PullUp;
    else if (x == 3) m = Mode::PullDown;


    std::cout << toString(m);

    return 0;
}