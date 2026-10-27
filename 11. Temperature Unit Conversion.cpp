/*

A temperature sensor outputs a raw reading in 0.1°C units.
 Create two overloaded functions named readTemp:

    float readTemp(int raw)
        Converts the raw value to Celsius (default output)
    float readTemp(int raw, char unit)
        If unit == 'C', return Celsius

        If unit == 'F', Convert Celsius to Fahrenheit using:

        F = C * 1.8 + 32

In main():

    Read integer raw and character unit ('D', 'C', 'F')
    If unit == 'D', call readTemp(raw)
    Otherwise call readTemp(raw, unit)
    Print the temperature value as float (no formatting required) 

 

Example 1 

Input:

250 D

Output:

25

 

Example 2

Input:

250 F

Output:

77

*/
#include <iostream>

void readTemp(int raw){
    std::cout << raw << std::endl;
}

void readTemp(int raw, char c){
    if(c == 'F'){
        raw = raw * 1.8 + 32;
        std::cout << raw;
    }
    else{
        std::cout << raw;
    }
}


int main(){
    int raw;
    std::cin >> raw;
    char c;
    std::cin >> c;

    if(c == 'D'){
        readTemp(raw);
    }
    else{
        readTemp(raw, c);
    }



    return 0;
}