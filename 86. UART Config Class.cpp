/*
Define a class UartConfig that represents configuration parameters of a UART peripheral in an embedded system.

Your class must:

    Store the following private members:
        int baudrate
        int parity
            0 = none
            1 = even
            2 = odd
        int stopBits
            valid values: 1 or 2
    Provide the following public members:
        A constructor that initializes all three configuration fields.
        A method void update(int b, int p, int s) which updates all configuration fields.
        A method void print() which prints the configuration exactly in the format:

            baud=<value> parity=<value> stop=<value>

    In main():
        Read three integers b1 p1 s1 representing the initial UART configuration.
        Read three integers b2 p2 s2 representing the updated UART configuration.
        Create a UartConfig object using the initial values.
        Update the object using the second set of values.
        Print the final configuration using print().
*/
#include <iostream>

class UartConfig{
    private:
        int baudrate;
        int parity;
        int stopBits;

    public:
        UartConfig(int b, int p, int s){
            baudrate = b;
            parity = p;
            stopBits = s;
        }
        void update(int b, int p, int s){
            baudrate = b;
            parity = p;
            stopBits = s;
        }
        void print(){
            std::cout << "baud=" << baudrate << " parity=" << parity << " stop=" << stopBits << std::endl;   
        }

};

int main(){
    int b1, p1, s1;
    int b2, p2, s2;

    std::cin >> b1 >> p1 >> s1;
    std::cin >> b2 >> p2 >> s2;

    UartConfig cfg(b1, p1, s1);
    cfg.update(b2, p2, s2);

    cfg.print();

    return 0;
}