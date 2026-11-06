/*
In embedded systems, data packets from sensors or communication modules often use fixed-size byte buffers. You must create a type alias for a fixed-size byte buffer using the using keyword, then fill the buffer and print its contents as numeric values.

What you must do:

    Create a type alias named Packet
    This alias must represent an array of 8 bytes: uint8_t[8]

Program Input:

    You will receive exactly 8 integers
    Each value is in the range 0–255
    Values are separated by spaces

Processing Requirements:

    Define a variable of type Packet to store the data
    Read input values using a temporary integer array
    Explicitly cast each value into the uint8_t buffer

Important Note about uint8_t:

    In C++, uint8_t is typically an alias for unsigned char
    While std::cin reads numeric values correctly into it, std::cout treats it as a character type
    To ensure numeric output (e.g., 65 instead of 'A'), values must be cast to an integer type when printing

 

Example 1: Standard Input

Input:

65 66 67 68 69 70 71 72

Output:

65 66 67 68 69 70 71 72

 

Example 2: Boundary Values

Input:

0 255 0 255 0 255 0 255

Output:

0 255 0 255 0 255 0 255

 

Output Requirements:

    Print all 8-byte values as numeric integers
    Values must be separated by a single space
    No trailing space after the last value

 

Constraints:

    You must define the alias using the using keyword
    The alias must represent a raw array type
    Do not use std::array or std::vector
    Output must be numeric, not ASCII characters
*/

#include <iostream>
#include <cstdint>

using Packet = uint8_t[8];

int main(){
    Packet p;
    int temp[8];
    for(int i = 0; i < 8; i++){
        std::cin >> temp[i];
    }

    for(int i = 0; i < 8; i++){
        p[i] = static_cast<uint8_t>(temp[i]);
    }
    

    for(int i = 0; i < 8; i++){
        std::cout << static_cast<unsigned int>(p[i]);
        if(i < 7){
            std::cout << " ";
        }
    }


    return 0;
}