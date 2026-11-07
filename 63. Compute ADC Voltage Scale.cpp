/*
A microcontroller reads an analog input using a 12-bit ADC with a digital output range of 0–4095.

In embedded firmware, ADC readings are commonly converted into physical units using fixed-point arithmetic to avoid floating-point overhead and to ensure deterministic behavior. A common pattern is to compute a scale factor at compile time and apply it at runtime using integer math.

Your task is to compute an ADC-to-microvolts scale factor at compile time using a constexpr function, and then use it at runtime to convert an ADC reading into microvolts (µV).

Task Requirements

    Create a constexpr function named computeScale.

        It must compute microvolts per ADC count using the formula:

        (maxVoltage_mV * 1000) / maxAdc 

        The computation must use integer division, meaning the result is truncated.

    Define a constexpr int32_t constant named SCALE_UV by calling:

    computeScale(4095, 3300)

    Read a 32-bit integer input x, representing the ADC digital value.

    Compute the voltage in microvolts using:

    voltage_uv = x * SCALE_UV

    Print the computed voltage in microvolts.

 

Input Format

    A single 32-bit integer x representing the ADC digital value

Output Format

    A single 32-bit integer representing the voltage in microvolts (µV)

 

Example 1

Input:

1000 

Output:

805000

 

Example 2

Input:

4095 

Output:

3296475
*/

#include <iostream>
#include <cstdint>

constexpr int computeScale(int32_t maxAdc, int32_t maxVoltage_mv){
    return (maxVoltage_mv * 1000) / maxAdc;
}

constexpr int32_t SCALE_UV = computeScale(4095, 3300);

int main(){
    int32_t x;
    std::cin >> x;

    int32_t result = x * SCALE_UV;
    std::cout << result;
    return 0;
}