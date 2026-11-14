/*
Your task is to define two classes:

    Base class: Device
        Has a public method void showType() that prints:
        Generic Device
         
    Derived class: Sensor (inherits protectedly from Device)
        Has a public method void showSensor() that:
            Calls showType() (from base, but accessible inside derived).
            Prints:
            Sensor Device


The program will:

    Create a Sensor object.
    Call only showSensor() — not showType() directly.
     
*/
#include <iostream>

class Device{
    public:
        void showType(){
            std::cout << "Generic Device\n";
        }
};

class Sensor : public Device{
    public:
        void showSensor(){
            showType();
            std::cout << "Sensor Device\n";
        }

};
int main(){
    Sensor s;
    s.showSensor(); 
    return 0;
}