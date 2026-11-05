/*
Your task is to declare two separate namespaces to organize configuration variables for different communication peripherals.

    Declare a namespace named UART containing an integer variable baudRate initialized to 115200
    Declare a namespace named SPI containing an integer variable clockSpeed initialized to 1000000

The variables must be accessed using explicit namespace qualification.

Example Output:

UART Baud: 115200 SPI Clock: 1000000 

Why this output?
Because variables from each namespace are accessed explicitly using UART::baudRate and SPI::clockSpeed.

Question Significance

This problem demonstrates how multiple namespaces help organize code and prevent naming collisions, which is especially important in embedded and firmware projects with multiple peripherals.
*/
#include <iostream>

namespace UART{
    int baudRate = 115200;
}

namespace SPI{
    int clockSPeed = 1000000;
}

int main(){

    std::cout << "UART Baud: " << UART::baudRate << " SPI Clock: " << SPI::clockSPeed << std::endl;

    return 0;
}