/*
You are given a program that contains a compile-time check:

static_assert(a == 12, "Failed");

Your job is to define a compile-time constant named a so that this static assertion succeeds.

    If a is not a compile-time constant equal to 12, the program will fail to compile.
    If correct, the program will compile and print:

        passed 

This demonstrates how static_assert enforces configuration rules before the firmware even runs.

Example Output:

passed 

Constraints:

    a must be defined as a compile-time constant (constexpr or equivalent).
    Do not modify the static_assert inside main().
    Only write code in the marked section.
*/
#include <iostream>

constexpr int a = 12;

int main(){
    static_assert(a == 12, "Failed");
    std::cout << "Passed\n";
    return 0;
}