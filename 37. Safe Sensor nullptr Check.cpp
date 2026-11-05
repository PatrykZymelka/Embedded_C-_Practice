/*
Your firmware supports an optional sensor represented by a pointer.

    If no sensor is connected, the pointer must remain nullptr
    If a sensor is connected, memory must be dynamically allocated and used to store the sensor reading

Based on input, safely handle the pointer and print the correct output.

Steps:

    Read an integer flag
    Behavior based on flag:
        0 → no sensor connected → pointer remains nullptr
        1 → sensor connected → dynamically allocate memory and read the sensor value
        Any other value → treat as no sensor connected
    Output:
        Print "NO SENSOR" if the pointer is nullptr
        Otherwise, print the stored sensor value
    Free allocated memory (if any) before exiting

Input Format:

    First integer: flag
    If flag == 1, a second integer follows representing the sensor reading

Output Format:

    "NO SENSOR" (exact, uppercase, no extra spaces), or
    The integer sensor value

 

Example 1

Input:

0

Output:

NO SENSOR

 

Example 2

Input:

1 35

Output:

35

 

Constraints:

    Use nullptr to represent a missing sensor
    Do not dereference a null pointer
    Sensor readings may be negative, zero, or positive integers
    Invalid flag values must not cause undefined behavior
*/

#include <iostream>

int main(){
    int flag;
    std::cin >> flag;

    int * sensor_reading = nullptr;

    if(flag == 1){
        sensor_reading = new int;
        std::cin >> *sensor_reading;
    }
    
    if(sensor_reading == nullptr){
        std::cout << "NO SENSOR\n";
    }
    else{
        std::cout << *sensor_reading;
        free(sensor_reading);
    }

    return 0;
}