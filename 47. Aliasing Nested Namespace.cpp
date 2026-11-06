/*
We have already created a nested namespace:

namespace Communication {
    namespace I2C {
        int speed = 400000; // 400 kHz
    }
}

Your task is to:

    Create an alias CI for the namespace Communication::I2C
    Use the alias to print the value of speed

The program should print:

I2C Speed: 400000 

Example Output:

I2C Speed: 400000 

Why this output?

The alias CI is just a shortcut name for Communication::I2C, so CI::speed refers to the same variable.

Question Significance:

Shows how namespace aliasing shortens long namespace paths, making code cleaner and easier to maintain.
*/

#include <iostream>

namespace Communication{
    namespace I2C{int speed = 400000;}
}

int main(){
    namespace CI =  Communication::I2C;
    std::cout << CI::speed << std::endl;
    return 0;
}