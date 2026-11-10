/*
Create a class LED that represents a simple LED connected to a microcontroller GPIO pin.

Your class must:

    Store two private data members:
        int pin → GPIO pin number (non-negative integer)
        int state → LED state (0 = OFF, 1 = ON)
    Provide a constructor that:
        Accepts the GPIO pin number
        Initializes the LED state to OFF
    Provide the following public member functions:
        void on() → sets the LED state to 1
        void off() → sets the LED state to 0
        void toggle() → flips the LED state (0 ↔ 1)
        int status() → returns the current LED state (0 or 1)
    In main():
        Read three integers from input:
            pin → GPIO pin number
            initialState → initial LED state (0 or 1 only)
            toggleCount → number of times to toggle the LED (≥ 0)
        Create a LED object using the given pin
        Set the initial LED state based on initialState
        Call toggle() exactly toggleCount times
        Print the final LED state (0 or 1) using status()

*/
#include <iostream>

class LED{
    private:
        int pin;
        int state;
    public:
        LED(int p){
            pin = p;
            state = 0;
        }
        void on(){
            state = 1;
        }
        void off(){
            state = 0;
        }
        void toggle(){
            state = (state+1)%2;
        }
        int status(){
            return state;
        }
};

int main(){
    int pin, state, toggle_nr;
    std::cin >> pin >> state >> toggle_nr;

    LED l(pin);
    if(state == 1){
        l.on();
    }

    for(int i = 0; i < toggle_nr;i++){
        l.toggle();
    }
    std::cout << l.status();

    return 0;
}