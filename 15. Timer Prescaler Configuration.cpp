/*
Create a function that simulates configuring a hardware timer.

The function must:

    Take two parameters:
        frequency (required)
        prescaler (optional, default value must be 1)
    Return the effective timer frequency
     

The effective timer frequency is calculated as:

effectiveFrequency = frequency / prescaler

 

In main():

    Read two integers: frequency and mode
    If mode == 0:
        Call the function using only the frequency
    If mode == 1:
        Read another integer prescaler
        Call the function with both arguments
    Print the returned effective frequency
     

Example 1

Input:

1000 0

Output:

1000

 

Example 2

Input:

1000 1 4

Output:

250

 

Constraints:

    frequency > 0
    prescaler > 0
    Integer arithmetic is used (fractional results are truncated)
    You must use a default argument for prescaler
    Do not create multiple overloads
*/

#include <iostream>

int func(int frequency, int prescaler = 1){
    int result;
    result = frequency/prescaler;
    return result;
}

int main(){

    int frequency, mode;

    std::cin >> frequency >> mode;
    int result;
    if(mode == 0){
        result = func(frequency);
    }
    else if(mode == 1){
        int prescaler;
        std::cin >> prescaler;
        result = func(frequency,prescaler); 
    }
    std::cout << result << std::endl;

    return 0;
}