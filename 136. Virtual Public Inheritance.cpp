/*
Your task is to define the following class hierarchy:

    Base class: Device
        A method void show() that prints:
        Generic Device
    Intermediate classes:
        Sensor inherits virtual public from Device.
        Actuator inherits virtual public from Device.
         
    Derived class: SmartDevice inherits publicly from both Sensor and Actuator.
        A method void identify() that prints:
        Smart Device
         

The program will:

    Create a SmartDevice object.
    Call show() (inherited from Device).
    Call identify() (defined in SmartDevice).
*/

#include <iostream>

class Device{
    public:
    void show(){
        std::cout << "Generic Device\n";
    }
};

class Sensor : virtual public Device{

};
class Actuator : virtual public Device{

};

class SmartDevice : public Sensor, public Actuator{
    public:
    void identify(){
        std::cout << "Smart Device\n";
    }
};

int main() {
    SmartDevice sd;
    sd.show();      // from Device
    sd.identify();  // from SmartDevice
    return 0;
}