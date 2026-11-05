/*
We have already created a namespace named Config.

Your task is to declare two integer variables inside it:

    baudRate = 9600
    threshold = 50 

The program already uses these variables in main().

You only need to declare them inside the namespace.

Example Output:

Baud: 9600, Threshold: 50

Why this output?

Because main() prints the variables stored inside the namespace Config.

Question Significance

This problem teaches how to place variables inside an existing namespace.


*/

#include <iostream>

namespace Config{
    int baudRate = 9600;
    int threshold = 50;
}

int main(){
    //std::cin >> Config::baudRate >> Config::threshold;

    std::cout << Config::baudRate << " " << Config::threshold << std::endl;

    return 0;
}