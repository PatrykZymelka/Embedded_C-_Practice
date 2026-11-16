/*
In embedded firmware, multiple peripheral drivers often require the same mandatory initialization steps, such as:

    Enabling a shared peripheral clock
    Resetting common control registers

This logic must be written once and reused by multiple derived drivers to avoid duplication and inconsistency.

Your task is to model this design using inheritance.

Step 1: Base Driver

Create a BaseDriver class that:

    Provides a function named initBase()

    When called, prints exactly:

    Base driver init start
    Base driver init complete

This function represents shared hardware initialization that all drivers must perform.

Step 2: Derived Drivers

Create two derived driver classes:

    SpiDriver
    I2cDriver

Each derived class must:

    Inherit publicly from BaseDriver
    Provide its own initialization function:
        initSpi() for SpiDriver
        initI2c() for I2cDriver
    Inside its initialization function:
        Call initBase()
        Print its own driver-specific message

Required output messages:

SPI driver initialized
I2C driver initialized

Step 3: main()

In main():

    Read one integer value mode
    If mode == 0:
        Create a SpiDriver
        Call initSpi()
    If mode == 1:
        Create an I2cDriver
        Call initI2c()

This selection simulates choosing different peripherals at runtime while reusing the same base initialization logic.

Input

One integer mode

    0 → SPI driver
    1 → I2C driver

Program Flow (Mandatory Order)

    Read integer mode
    Create selected derived driver object
    Call derived driver initialization function
    Base driver initialization prints
    Derived driver-specific initialization prints
*/

#include <iostream>

class BaseDriver{
    public:
    void initBase(){
        std::cout << "Base driver init start\n";
        std::cout << "Base driver init complete\n";
    }

};

class SpiDriver: public BaseDriver{
    public:
    void initSpi(){
        initBase();
        std::cout << "SPI driver initialized";
    }

};

class I2cDriver : public BaseDriver{

    public:
    void initI2c(){
        initBase();
        std::cout << "I2C driver initialized";
    }
};

int main() {
    int mode;
    std::cin >> mode;
    
    if(mode == 0){
        SpiDriver spi;
        spi.initSpi();
    }

    else if(mode == 1){
        I2cDriver i2c;
        i2c.initI2c();
    }
    return 0;
}