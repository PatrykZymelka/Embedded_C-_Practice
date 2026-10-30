/*
Create an inline function that clamps (saturates) a sensor reading between a minimum and maximum value.

The inline function must:

    Take three signed integers: value, minVal, and maxVal
    Assume minVal <= maxVal
    Return:
        minVal if value < minVal
        maxVal if value > maxVal
        Otherwise, return value

No overflow handling is required beyond standard int behavior.

In main():

    Read integers value, minVal, and maxVal from standard input
    Call the inline saturation function
    Print the saturated value

Example 1

Input:

120 0 100

Output:

100

 

Example 2

Input:

-5 0 50 

Output:

0

 

Example 3

Input:

42 0 50

Output:

42

 

Constraints:

    Use an inline function for saturation
    No other helper functions allowed
    minVal <= maxVal
    Standard 32-bit signed int is assumed
*/

#include <iostream>

inline int clamp(int val, int min, int max){
    if(val < min) return min;
    if(val > max) return max;
    return val;
}

int main(){

    int val, min, max;
    std::cin >> val >> min >> max;

    int result = clamp(val,min,max);

    std::cout << result << std::endl;

    return 0;

}