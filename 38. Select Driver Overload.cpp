/*
In a microcontroller HAL, the init() function has two overloads:

    One initializes using a GPIO pin number
    One initializes using a port pointer

void init(int pin);
void init(int* portPtr);

You must:

    Read a mode value
    If mode = 1 → initialize using a pin number
    If mode = 2 → initialize using a null port pointer (nullptr)
    Call the correct overload
    Print the corresponding message

Output rules:

    Calling init(int pin) → print

        PIN <pin>

    Calling init(int* ptr) with a nullptr → print

        PORT NULL 

Important:
You must use nullptr, not 0 or NULL, to ensure the pointer overload is selected.

 

Example 1

Input:

1 7

Output:

PIN 7 

 

Example 2

Input:

2

Output:

PORT NULL 
*/

#include <iostream>

void pin_port(int * p){
    std::cout << "PORT NULL\n";
}

void pin_port(int x){
    std::cout << "PIN " << x << std::endl;
}


int main(){

    int flag;
    std::cin >> flag;
    int * pin = nullptr;

    if(flag == 1){
        pin = new int;    
        std::cin >> *pin;
        pin_port(*pin);
    }
    else if(flag == 2){
        pin_port(pin);
    }

    delete(pin);

    return 0;
}