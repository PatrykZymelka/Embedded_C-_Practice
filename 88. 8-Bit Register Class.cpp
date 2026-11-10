/*
Create a class Reg8 that simulates an 8-bit hardware register.

Class Requirements:

The class must:

    Maintain a private uint8_t register value
    Provide the following methods:
        Reg8() → initializes the register to 0
        void write(uint8_t v) → writes a new value to the register
        uint8_t read() → returns the current register value
        void setBit(int bit) → sets the specified bit only if bit is in range 0–7
        void clearBit(int bit) → clears the specified bit only if bit is in range 0–7

⚠️ If bit is outside the range 0–7, the register must remain unchanged.

In main():

    Read three integers:
        initialValue
        bitToSet
        bitToClear
    Write initialValue to the register
    Set bitToSet
    Clear bitToClear
    Print the final register value as an integer
*/
#include<iostream>
#include <cstdint>

class Reg8{
    private:
    uint8_t reg_val;

    public:
        Reg8(){
            reg_val = 0;
        }
        void write(uint8_t v){
            reg_val = v;
        }
        uint8_t read(){
            return reg_val;
        }
        void setBit(int bit){
            if(bit >= 0 && bit <= 7){
                reg_val |= (1 << bit);
            }
        }
        void clearBit(int bit){
            if(bit >= 0 && bit <= 7){
                reg_val &= ~(1 << bit);
            }
        }

};
int main(){
    int initialValue;
    int bitToSet, bitToClear;

    std::cin >> initialValue >> bitToSet >> bitToClear;

    Reg8 reg;
    reg.write(static_cast<uint8_t>(initialValue));
    reg.setBit(bitToSet);
    reg.clearBit(bitToClear);

    std::cout << static_cast<int>(reg.read());
    return 0;
}