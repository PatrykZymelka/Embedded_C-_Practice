/*
Create a class PWMController that simulates a simple PWM output channel on a microcontroller.
The goal is to practice constructor overloading, state initialization, and safe parameter handling in Embedded C++.

Details you must implement

    Private members
        int frequency — PWM frequency in Hz
        int duty — duty cycle percentage (0–100)
        bool enabled — PWM output state
    Constructor 1: Basic Initialization
        PWMController(int freq)
            Sets frequency = freq
            Sets duty = 0
            Sets enabled = false
        This constructor represents a PWM channel that is configured but not active.
    Constructor 2: Full Initialization
        PWMController(int freq, int dutyCycle)
            Sets frequency = freq
            Sets duty = dutyCycle, clamped to the range 0–100
            Sets enabled = true
        This constructor represents a PWM channel that is configured and enabled immediately.
    Public methods
        void setDuty(int d)
            Updates the duty cycle
            Duty must always be clamped to 0–100
        void disable()
            Sets enabled = false
        void print()
            Prints the current PWM state in the exact format:

                F=<frequency> D=<duty> EN=<0 or 1>

Program flow (main())

    Read an integer mode
    If mode == 1
        Read freq
        Construct PWMController using Constructor 1
    If mode == 2
        Read freq and duty
        Construct PWMController using Constructor 2
    Read integer x
        If x == -1, call disable()
        Otherwise, call setDuty(x)
    Print the final PWM state using print()
*/
#include <iostream>
using namespace std;

class PWMController{
    private:
    int frequency;
    int duty;
    bool enabled;
    public:
    PWMController(int freq): frequency(freq), duty(0), enabled(false){}
    PWMController(int freq, int dutyCycle): frequency(freq), enabled(true){
        setDuty(dutyCycle);
    }
    void setDuty(int d){
        if(d > 100){
            d = 100;
        }
        else if(d < 0){
            d = 0;
        }
        duty = d;
    }
    void disable(){
        enabled = false;

    }
    void print(){
        std::cout << "F=" << frequency << " D=" << duty << " EN=" << enabled << std::endl;
    }
};
int main() {
    int mode;
    cin >> mode;

    PWMController pwm(0); // temporary placeholder

    if (mode == 1) {
        int f;
        cin >> f;
        pwm = PWMController(f);
    }
    else {
        int f, d;
        cin >> f >> d;
        pwm = PWMController(f, d);
    }

    int x;
    cin >> x;

    if (x == -1)
        pwm.disable();
    else
        pwm.setDuty(x);

    pwm.print();
    return 0;
}