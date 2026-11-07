/*
A temperature sensor in an embedded system produces ADC result indices that correspond to fixed, known temperature values.

To avoid runtime computation, the firmware must store these values in a compile-time lookup table using constexpr.

Your task is to define such a lookup table and use it to convert an ADC index into the corresponding temperature.

What you must do:

    Create a constexpr array named TEMP_TABLE
    The table must contain exactly 6 entries, mapped as follows:
    ADC Index	Temperature (°C)
    0	-40
    1	-10
    2	20
    3	50
    4	80
    5	120
    You must declare this table yourself using constexpr

Program input:

    You must declare this table yourself using constexpr

Program input:

    Read an integer idx (range 0–5) representing the ADC result index

Program output:

    Print the corresponding temperature value from the lookup table
    No extra text

 

Example 1

    Read an integer idx (range 0–5) representing the ADC result index

Program output:

    Print the corresponding temperature value from the lookup table
    No extra text

 

Example 1

Input:

3

Output:

50

 

Example 2 

Input:

0

Output:

-40 
*/
#include <iostream>

constexpr int TEMP_TABLE[] = {-40,-10,20,50,80,120};

int main(){
    int x;
    std::cin >> x;
    if(x > 5){
        x = 5;
    }
    else if(x < 0){
        x = 0;
    }
    std::cout << TEMP_TABLE[x];
    return 0;
}