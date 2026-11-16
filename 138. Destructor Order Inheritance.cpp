/*
Your task is to demonstrate destructor execution order in Embedded C++ using inheritance.

You must write a C++ program that:

    Defines a base driver class with a destructor that prints:

    Base driver destroyed

    Defines a derived driver class that:
        Inherits publicly from the base driver

        Has a destructor that prints:

        Derived driver destroyed

    The program must prove that:
        The derived class destructor executes first
        The base class destructor executes after

Input:

    One integer value N

(Input is only used to keep the program structure consistent; it does not affect destruction order.)

Program Flow (Mandatory Execution Order):

    Read integer N
    Create a derived driver object
    Base driver constructor executes
    Derived driver constructor executes
    End of main() scope
    Derived driver destructor executes
    Base driver destructor executees
*/
#include <iostream>
class Base{
    public:
    Base(){
        std::cout << "Base driver initialized\n";
    }
    ~Base(){
        std::cout << "Base driver destroyed\n";
    }
};

class Derived : public Base{
    public:
    Derived(){
        std::cout << "Derived driver initialized\n";
    }
    ~Derived(){
        std::cout << "Derived driver destroyed\n";
    }
};

int main(){
    Derived d;
    return 0;
}