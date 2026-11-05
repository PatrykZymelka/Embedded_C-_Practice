/*
We have already created a namespace Config with two variables:

namespace Config {
    int baudRate = 9600;
    int threshold = 50;
}

Your task is to:

    Use the statement using namespace Config; inside main().
    Print the variables directly (without using Config::).

The program should print:

Baud: 9600, Threshold: 50 

Example Output:

Baud: 9600, Threshold: 50 

Why this output?
Because using namespace Config; makes the variables available in the current scope without the Config:: prefix.

Question Significance
This problem demonstrates how the using namespace directive imports all names from a namespace into the current scope.
*/

#include <iostream>

namespace Config{
    int baudRate = 9600;
    int threshold = 50;
}

int main(){
    using namespace Config;
    std::cout << baudRate << " " << threshold << std::endl;
}