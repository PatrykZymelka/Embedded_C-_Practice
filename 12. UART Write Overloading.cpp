/*
Simulate a simplified UART driver that supports multiple kinds of data transmission.

You must create exactly three overloaded functions named write, each handling a different type of UART transmission:

    One overload must handle sending a single byte value.
    One overload must handle sending a text string.
    One overload must handle sending a buffer of bytes.
     

Program Behavior

In main():

    Read an integer mode:
        1 → send a single byte
        2 → send a string
        3 → send a buffer of bytes
    Depending on the mode:
        Read the appropriate data
        Call the correct overloaded version of write
        Print the transmitted output exactly as described

         

Example  (Mode 1)

Input:

1 65

Output:

65

 

Example  (Mode 2)

Input:

2 Hello

Output:

Hello

 

Example  (Mode 3)

Input:

3 4 10 20 30 40

Output:

10 20 30 40

 

Input / Output Rules

    Mode 1

        Input: 1 <byte>
        Output: <byte>

    Mode 2

        Input: 2 <string>
        Output: <string>

    Mode 3

        Input: 3 <length> <byte1> <byte2> ...
        Output: <byte1> <byte2> ...

 

Output formatting requirements:

    Bytes must be separated by single spaces
    No trailing space
    No extra newline
     

Constraints:

    Implement exactly three overloaded functions named write
    Each overload must accept different parameter types
    The overload set must be unambiguous across compilers
    Single byte values are numeric and in the range 0–255
    Buffer length n is in the range 0–100
    Buffer values are numeric bytes in the range 0–255
    String input contains no spaces (read using cin >> s)
    Buffer input values must be treated as raw byte values, not ASCII characters
*/
#include <iostream>
#include <cstdint>
#include <string>

void write(uint8_t c){
    std::cout << c;
}

void write(std::string s){
    std:: cout << s;
}

void write(uint8_t arr[], int len){
    for(int i = 0; i < len; i++){
        std::cout << arr[i];
    }
}

int main(){
    int val;
    std::cin >> val;
    switch(val){
        case 1:
            {
            uint8_t byte;
            std::cin >> byte;
            write(byte);
            break;
            }
        case 2:
            {
            std::string s;
            std::cin >> s;
            write(s);
            break;
            }
        case 3:
            {
            
            int n;
            std::cin >> n;
                
            uint8_t arr[n];

            for(int i = 0; i < n; i++){
                std::cin >> arr[i]; 
            }
            write(arr, n);
            break;
            }
    }


    return 0;
}