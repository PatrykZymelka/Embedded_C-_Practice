/*
In embedded systems, Interrupt Service Routines (ISRs) often notify the main firmware logic by calling a registered callback function. This design decouples low-level hardware events from higher-level application behavior and is commonly used in drivers and hardware abstraction layers (HALs).

Your task is to define a function pointer type alias using modern C++ syntax, select the correct callback based on a hardware mode input, and invoke the callback safely through the alias.

What You Must Do:

    Create a function pointer type alias named ISRCallback using the using keyword.
    The alias must represent a pointer to a function with the following signature:

        void callback(int32_t code);

    Two callback functions are already provided:
        onError(int32_t code) — prints ERROR <code>
        onComplete(int32_t code) — prints COMPLETE <code>
    Based on the input mode, register the appropriate callback.
    Invoke the callback indirectly through the function pointer alias.

 

Program Input:

Read two space-separated integers from standard input:

mode eventCode

    mode determines which callback to register
    eventCode is passed to the callback

 

Selection Logic:

    If mode == 1 → register onError
    If mode == 2 → register onComplete

After registration, invoke the callback using eventCode as the argument.

 

Example 1

Input:

1 42

Output:

ERROR 42 

 

Example 2

Input:

2 -5

Output:

COMPLETE -5 

 

Constraints:

    mode will always be exactly 1 or 2
    eventCode is a 32-bit signed integer
    Range: -2,147,483,648 to 2,147,483,647
    You must use the using keyword to define the alias
    You must call the function through the function pointer variable (not directly)
*/

#include <iostream>

using ISRCallback = void (*)(int32_t);

void onError(int32_t code) {
    std::cout << "ERROR " << code;
}

void onComplete(int32_t code) {
    std::cout << "COMPLETE " << code;
}

int main(){
    int32_t flag, code;
    std::cin >> flag >> code;

    ISRCallback fp = nullptr;

    if(flag == 1){
        fp = onError;
    }
    else{
        fp = onComplete;
    }
    fp(code);

    return 0;
}