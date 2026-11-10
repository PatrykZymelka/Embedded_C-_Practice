/*
In embedded systems, peripheral configuration registers commonly use bit flags to enable or disable features.

Your task is to declare a scoped enum class named AdcConfig that represents configuration flags for an ADC peripheral. Each flag occupies a single bit in an 8-bit configuration register.

The enum must contain the following values:

    ChannelEnable → bit 0 (value 1)
    InterruptEnable → bit 1 (value 2)
    DMAEnable → bit 2 (value 4)

You must also implement a helper function:

void printConfig(uint8_t cfg);

This function examines the configuration word and prints which features are enabled.

The program reads three integers, each being either 0 or 1, indicating whether the corresponding feature is enabled:

    Channel enable
    Interrupt enable
    DMA enable

These inputs must be combined into a single 8-bit configuration word using bitwise operations, then passed to printConfig().

If no flags are enabled, print None.

Input Format

    Three space-separated integers: ch intr dma
    Each value is guaranteed to be either 0 or 1
    Input order corresponds to:
        ch → ChannelEnable
        intr → InterruptEnable
        dma → DMAEnable

Output Format

    Print enabled feature names in the following fixed order:
        ChannelEnable
        InterruptEnable
        DMAEnable
    Separate multiple names with a single space.
    If no features are enabled, output exactly:

        None 

 

Example 1

Input:

1 0 1

Output:

ChannelEnable DMAEnable

 

Example 2

Input:

0 0 0

Output:

None
*/

#include <iostream>
#include <cstdint>
using namespace std;


enum class AdcConfig: uint8_t{
    ChannelEnable = 1,
    InterruptEnable = 2,
    DMAEnable = 4
};


void printConfig(uint8_t cfg){
    if(cfg & (1 << 0)){
        std::cout << "ChannelEnable";
    }
    if(cfg & (1 << 1)){
        if(cfg & (1 << 0)){
            std::cout << " ";
        }
        std::cout << "InterruptEnable";
    }
    if(cfg & (1 << 2)){
        if((cfg & (1 << 0)) || (cfg & (1 << 1))){
            std::cout << " ";
        }
        std::cout << "DMAEnable";
    }
    if(cfg == 0){
        std::cout << "None";
    } 
    
}

int main() {
    int ch, intr, dma;
    cin >> ch >> intr >> dma;

    uint8_t cfg = 0;
    if (ch)   cfg |= static_cast<uint8_t>(AdcConfig::ChannelEnable);
    if (intr) cfg |= static_cast<uint8_t>(AdcConfig::InterruptEnable);
    if (dma)  cfg |= static_cast<uint8_t>(AdcConfig::DMAEnable);

    printConfig(cfg);
    return 0;
}