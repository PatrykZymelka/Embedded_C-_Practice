/*
Your task is to define two classes:

    Base class: Device
        Has a public method void showType() that prints:
        Generic Device
         
    Derived class: Actuator (inherits privately from Device)
        Has a public method void showActuator() that:
            Calls showType() (accessible inside because of inheritance).
            Prints:
            Actuator Device


The program will:

    Create an Actuator object.
    Call only showActuator() — showType() is completely hidden from outside.
*/

#include <iostream>

class Device{
    public:
        void showType(){
            std::cout << "Generic Device\n";
        }
};

class Actuator : private Device{
    public:
        void showActuator(){
            showType();
            std::cout << "Actuator Device";
        }
};

int main() {
    Actuator a;
    a.showActuator();  // should print both lines
    return 0;
}