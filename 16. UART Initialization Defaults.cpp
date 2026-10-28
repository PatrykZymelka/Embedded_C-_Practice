/*
Simulate initialization of a UART peripheral with optional configuration parameters.

You must create a function that:

    Always takes a baud rate as the first (required) parameter.
    Optionally takes a parity setting (character), with a default of 'N' (no parity).
    Optionally takes a stop bit count (integer), with a default value of 1.

The function must print the final UART configuration in this order:

baud parity stopBits

In main():

    Read two integers: baud and mode.
    If mode == 0
        Call the function with only baud (use both defaults).
    If mode == 1
        Read a character parity, call the function with baud and parity (use default stop bits).
    If mode == 2
        Read a character parity and an integer stopBits, call the function with all three arguments.
    The function should print the configuration directly.

     

Example 1

Input:

9600 0

Output:

9600 N 1

 

Example 2

Input:

115200 1 E

Output:

115200 E 1

 

Example 3

Input:

38400 2 O 2

Output:

38400 O 2

 

Constraints:

     Use default arguments for the optional parameters.
    Do not create multiple overloaded functions for this task.
*/

#include <iostream>

void uartFun( int baudRate, char parity = 'N', int stopBit = 1){
    std::cout << baudRate << " " << parity << " " << stopBit << std::endl; 
}

int main(){
    int baud, mode;
    std::cin >> baud >> mode;
    if(mode == 0){
        uartFun(baud);
    }
    else if(mode == 1){
        char parity;
        std::cin >> parity;
        uartFun(baud,parity);
    }
    else if(mode == 2){
        char parity;
        int stopBit;
        std::cin >> parity >> stopBit;
        uartFun(baud,parity,stopBit);
    }

    return 0;
}