/*
Define a simple C++ class named GpioPin.

Class Requirements:

The class should contain:

    An integer variable to store the pin number
    An integer variable to store the pin state
        0 represents LOW
        1 represents HIGH

Constructor Requirements:

    Provide a default constructor only
    The default constructor must initialize:
        Pin state to 0 (LOW)
    Pin number will be assigned manually after object creation

Member Functions:

    void write(int value)
        Sets the pin state
        The value will always be 0 or 1
    int read()
        Returns the current pin state

In main() Function:

    Read three integers from standard input:
        pin
        initialValue
        finalValue
    Create a GpioPin object using the default constructor
    Assign the pin number directly to the object
    Call write(initialValue)
    Call write(finalValue)
    Print the output in the required format using read()

Input Format:

pin
initialValue
finalValue

    pin is a non-negative integer
    initialValue and finalValue are always 0 or 1

Output Format:

GPIO Pin <pin number> State <pin state>

    Output must match the format exactly
    Single line output
    No extra spaces or newlines

 

Example Input:

13
0
1

Example Output:

GPIO Pin 13 State 1 

 

Constraints:

    Use only a basic class with variables and functions
    Do not use constructor parameters
    Do not use advanced OOP concepts
    No input validation is required
    Output must match exactly
*/

#include <iostream>

class GpioPin{
    int pinState;
    public:
        int pinNumber;
        
        GpioPin(){
            pinState = 0;
        }

        void write(int value){
            pinState = value;
        }

        int read(){
            return pinState;
        }

};

int main(){
    int value, initialValue, finalValue;
    std::cin >> value >> initialValue >> finalValue;

    GpioPin gpio;          // default constructor
    gpio.pinNumber = value; // manual assignment

    gpio.write(initialValue);
    gpio.write(finalValue);

    std::cout << "GPIO Pin " << gpio.pinNumber
         << " State " << gpio.read();


}