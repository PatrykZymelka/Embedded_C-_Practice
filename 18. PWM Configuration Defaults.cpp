/*
Simulate a PWM (Pulse Width Modulation) driver configuration function using C++ default arguments.

Implement a function that configures PWM parameters and prints the resulting configuration.

Function Requirements:

Create a function setPWM with the following parameters:

    duty (required): integer duty-cycle percentage
        Valid range: 0–100
    frequency (optional): PWM frequency in Hz
        Default value: 1000
        Valid range: 1–100000
    deadtime (optional): dead-time in microseconds
        Default value: 0
        Valid range: 0–1000

 Rules:

    Use one function only
    Use default arguments, not function overloading
    Default arguments must appear from right to left

 

Output Format:

The function must print the PWM configuration exactly as:

duty frequency deadtime

Values must be separated by a single space.

No additional text should be printed.

 

In main():

    Read two integers: duty and mode
    mode determines which parameters are provided:
    mode == 0
        Call setPWM(duty)
        Use default frequency and deadtime
    mode == 1
        Read frequency
        Call setPWM(duty, frequency)
    mode == 2
        Read frequency and deadtime
        Call setPWM(duty, frequency, deadtime)

You may assume all input values are valid and within the specified ranges.

 

Example 1 

Input:

50 0

Output:

50 1000 0

 

Example 2

Input:

70 1 2000

Output:

70 2000 0

 

Example 3

Input:

90 2 5000 10

Output:

90 5000 10

 

Constraints:

    0 ≤ duty ≤ 100
    1 ≤ frequency ≤ 100000
    0 ≤ deadtime ≤ 1000
    mode ∈ {0, 1, 2}
*/

#include <iostream>

void setPWM(int duty, int frequency = 1000, int deadTime = 0){

    std::cout << duty << " " <<  frequency << " " << deadTime << std::endl;

}

int main(){
    int duty, mode;
    std::cin >> duty >> mode;
    if(mode == 0){
        setPWM(duty);

    }
    else if(mode == 1){
        int freq;
        std::cin >> freq;
        setPWM(duty, freq);
    }
    else if(mode == 2){
        int freq, deadTime;
        std::cin >> freq >> deadTime;
        setPWM(duty, freq, deadTime);
    }
    

    return 0;
}