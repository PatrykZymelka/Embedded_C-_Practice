/*
Create a class HardwareTimer that represents a simple MCU hardware timer.
The default constructor must initialize all internal values to safe, reset-like defaults.

Your class must include:

    Private members
        int frequency
        bool enabled
        int prescaler
    Constructor behavior
        The default constructor must set:
            frequency = 0
            enabled = false
            prescaler = 1
        These values represent a safe reset state:
        Timer disabled
        Prescaler at minimum valid value
        No active frequency
    Public methods
        void configure(int freq, int pre)
            Sets frequency = freq
            Sets prescaler = pre
            Enables the timer
        void stop()
            Disables the timer
        void print()
            Prints the timer state in the format:

            F=<frequency> P=<prescaler> EN=<0 or 1>

In main()

    Create a HardwareTimer object using the default constructor
    Read integers f and p
    Call configure(f, p)
    Read integer flag x
        If x == 0, call stop()
    Print the final timer state using print()
*/
#include <iostream>

class HardwareTimer{
    private:
        int frequency;
        bool enable;
        int prescaler;

    public:
        HardwareTimer() : frequency(0), enable(false), prescaler(1){ }
        void configure(int f, int p){
            frequency = f;
            prescaler = p;
            enable = true;
        }
        void stop(){
            enable = false;
        }
        void print(){
            std::cout << "F=" << frequency << " P=" << prescaler <<  " EN=" << enable << std::endl;
        }
};

int main(){
    HardwareTimer ht;
    int f, p;
    std::cin >> f >> p;
    ht.configure(f, p);
    int x;
    std::cin >> x;
    if(x == 0){
        ht.stop();
    }
    ht.print();
    return 0;
}