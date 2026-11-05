/*
We have already declared a nested namespace structure:

namespace Config {
    namespace ADC { int resolution = 12; }
    namespace PWM { int frequency = 1000; }
}

Your task is to print these variables in main() in the following format:

ADC.resolution=12
PWM.frequency=1000

Example Output:

ADC.resolution=12
PWM.frequency=1000

Why this output?

Because Config::ADC::resolution and Config::PWM::frequency are accessed using their full namespace paths.

Question Significance:

This reinforces how to access variables from nested namespaces using scope resolution.
*/

#include <iostream>

namespace Config{
    namespace ADC{ int resolution=12;}
    namespace PWM{ int frequency=1000;}
}
int main(){
    std::cout << "ADC.resolution=" << Config::ADC::resolution << "\nPWM.frequency=" << Config::PWM::frequency << std::endl;
    return 0;
}
