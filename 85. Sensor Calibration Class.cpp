/*
Design and implement a simple Embedded C++ class that models a calibrated sensor.

You must define a class named Sensor that stores raw sensor readings and applies a calibration offset before reporting the final value.

Requirements

    Class Definition
        Define a class Sensor.
    Private Data Members
        int rawValue — stores the most recent raw sensor reading.
        int offset — stores the calibration offset.
    Public Member Functions
        void setRaw(int value)
            Stores a new raw sensor reading.
        void calibrate(int off)
            Sets the calibration offset.
        int read()
            Returns the calibrated sensor value (rawValue + offset).
    Main Function Behavior
        Read three integers from standard input in the following order:
            Initial raw sensor value
            Calibration offset
            New raw sensor value
        Create a Sensor object.
        Call setRaw() using the initial raw value.
        Call calibrate() using the offset.
        Call setRaw() again using the new raw value.
        Print the final calibrated sensor reading using read().

 

Input Format

Three signed integers provided via standard input, each separated by a newline:

raw
offset
newRaw

Output Format

A single integer printed to standard output:

calibrated_value 

Example Input

100
-5
120

Example Output

115

Explanation

The final calibrated reading is:

120 + (-5) = 115

Constraints

    rawValue and offset must be private.
    These variables may only be modified using class member functions.
    Signed integer arithmetic is used.
    No overflow handling is required beyond standard C++ int behavior.
    Output must match exactly with no extra spaces or newlines.
*/

#include <iostream>

class Sensor{
    private:
        int rawValue;
        int offset;
    public:
        void setRaw(int value){
            rawValue = value;
        }
        void calibrate(int off){
            offset = off;
        }
        int read(){
            return offset+rawValue;
        }
};


int main(){
    int rawValue, finalValue, offs;
    std::cin >> rawValue >> finalValue >> offs;
    Sensor sens;
    sens.setRaw(rawValue);
    sens.calibrate(offs);
    std::cout << sens.read() << "\n";

    sens.setRaw(finalValue);
    std::cout << sens.read() << "\n";


    return 0;
}