/*
Two different motor driver modules define a function named init().
Without namespaces, these functions conflict.

Your task is to organize them into two namespaces and call the correct one based on input.

Create two namespaces:

DriverA containing:

    void init() → prints "A INIT"

DriverB containing:

    void init() → prints "B INIT"

In main():

    Read an integer x
        If x == 1 → call DriverA::init()
        If x == 2 → call DriverB::init()

 

Example 1

Input:

1

Output:

A INIT

 

Example 2

Input:

2

Output:

B INIT

 

Constraints:

    Use namespaces to separate both drivers
    Do not rename functions; both must be named init()


*/

#include <iostream>

namespace A{
    void init(){
        std::cout << "A INIT\n";
    }
}
namespace B{
    void init(){
        std::cout << "B INIT\n";
    }
}
int main(){
    int flag;
    std::cin >> flag;
    if(flag == 1){
        A::init();
    }
    else{
        B::init();
    }
    return 0;
}