/*
We have two namespaces, each declaring a variable named threshold. Your task is to declare both namespaces and variables. 

    Declare:
        namespace A

            int threshold = 50

        namespace B

            int threshold = 75

The code already print both values using the scope resolution operator.
 

Example Output:

A.threshold=50
B.threshold=75

Why this output?

Both namespaces contain a threshold. Using A::threshold and B::threshold selects the intended one.

Question Significance

Teaches how namespaces prevent name collisions and how to access identically named items across different namespaces.
*/
#include <iostream>

namespace A{
    int threshold = 50;
}

namespace B{
    int threshold = 75;
}

int main(){
    std::cout << "A.threshold=" << A::threshold << "\nB.threshold=" << B::threshold << std::endl;

    return 0;
}