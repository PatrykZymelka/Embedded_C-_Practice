/*
Your task is to demonstrate constructor execution order in Embedded C++ using inheritance.

You must write a C++ program that:

    Defines a base driver class with a constructor that prints:

    Base driver initialized

    Defines a derived driver class that:
        Inherits publicly from the base driver
        Has a constructor that:
            Receives an integer value

            Prints:

            Derived driver initialized

        Stores the received integer

        Provides a function to print:

        Driver value <value>

    In main():
        Read one integer from standard input
        Create one object of the derived driver
        Call the derived driver function to print the value

The program output must prove that the base class constructor executes before the derived class constructor.

Input:

    One integer value N

Program Flow (Mandatory Execution Order):

    Read integer N
    Create a derived driver object using N
    Base driver constructor prints its message
    Derived driver constructor prints its message
    Derived driver prints N

 
*/
#include <iostream>

class Base{
    public:
    Base(){
        std::cout << "Base driver initialized\n";
    }
};

class Derived : public Base{
    private:
        int val;
    public:
        Derived(int n){
            std::cout << "Derived driver initialized\n";
            val = n;
        }
        void print(){
            std::cout <<"Driver value " << val << std::endl;
        }
};

int main(){
    int v;
    std::cin >> v;
    Derived d(v);
    d.print();
    return 0;
}