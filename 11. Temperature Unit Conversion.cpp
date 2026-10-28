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

float readTemp(int raw){
    return raw / 10.0f;
}

float readTemp(int raw, char unit){

    if(unit == 'F'){
        return (raw/10.0f * 1.8 + 32);
    }
    
    return raw/10.0f;
}


int main(){
    int raw;
    std::cin >> raw;
    char c;
    std::cin >> c;

    if(c == 'D'){
        std::cout << readTemp(raw);
    }
    else{
        std::cout << readTemp(raw,c);
    }


    return 0;
}