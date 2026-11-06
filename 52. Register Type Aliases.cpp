/*
In embedded systems, hardware registers have fixed widths such as 8-bit, 16-bit, or 32-bit.
To improve code readability and safety, firmware often uses type aliases to represent these register sizes.

Your task is to define register-sized type aliases using modern C++ and demonstrate how fixed-width registers behave when storing values that exceed their capacity.

 

Step 1 — Create type aliases

Create three type aliases using the using keyword:

    Reg8 → alias for uint8_t
    Reg16 → alias for uint16_t
    Reg32 → alias for uint32_t

These represent 8-bit, 16-bit, and 32-bit hardware registers.

 

Step 2 — Read input values

The program receives three unsigned integer values from input:

raw8 raw16 raw32

Example:

255 12345 987654321

Store these values in variables of the corresponding register alias types:

    raw8 → Reg8
    raw16 → Reg16
    raw32 → Reg32

If a value exceeds the capacity of the target type, allow natural overflow behavior (as occurs in real hardware registers).

 

Step 3 — Print output

Print the stored register values using the exact format:

R8=<value> R16=<value> R32=<value>

All values must be printed as unsigned integers, not characters.

 

Example 1

Input:

255 12345 987654321

Output:

R8=255 R16=12345 R32=987654321 

 

Example 2 (Overflow behavior)

Input:

300 70000 5

Output:

R8=44 R16=4464 R32=5 

Explanation:

    300 stored in an 8-bit register overflows to 44
    70000 stored in a 16-bit register overflows to 4464

 

Constraints

    You must use using (do not use typedef)
    Do not clamp or prevent overflow
    Only print the stored register values
    Output format must match exactly
*/

#include <iostream>
#include <cstdint>

using Reg8 = uint8_t;
using Reg16 = uint16_t;
using Reg32 = uint32_t;

int main(){
    uint64_t raw8, raw16, raw32;

    std::cin >> raw8 >> raw16 >> raw32;

    Reg8 r8 = raw8;
    Reg16 r16 = raw16;
    Reg32 r32 = raw32;

    std::cout << "R8=" << r8 << " R16=" << r16 << " R32=" << r32 << std::endl; 

    return 0;
}