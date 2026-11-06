/*
A vendor provides a very long namespace for its clock-control Hardware Abstraction Layer (HAL):

namespace VendorMegaChipCorporationUltraSeries9000_HardwareClockControlModule {
    void enableClock()  { cout << "CLOCK ENABLED"; }
    void disableClock() { cout << "CLOCK DISABLED"; }
}

Your tasks are:

    Keep the long namespace exactly as provided.
    Create a namespace alias named ClockHAL for the long vendor namespace.
    Read an integer command cmd from standard input:
        1 → Enable the clock using the full namespace name
        2 → Disable the clock using the namespace alias

 

Example 1

Input:

1

Output:

CLOCK ENABLED

 

Example 2

Input:

2

Output:

CLOCK DISABLED

 

Constraints:

    You must use a C++ namespace alias.
    Do not modify the original vendor namespace name.
    Use standard input/output (cin, cout).
*/

#include <iostream>

namespace VendorMegaChipCorporationUltraSeries9000_HardwareClockControlModule {
    void enableClock()  { std::cout << "CLOCK ENABLED"; }
    void disableClock() { std::cout << "CLOCK DISABLED"; }
}

int main(){
    namespace clockHAL = VendorMegaChipCorporationUltraSeries9000_HardwareClockControlModule;
    int flag;
    std::cin >> flag;
    if(flag == 1){
        clockHAL::enableClock();
    }
    else{
        clockHAL::disableClock();
    }
    return 0;
}