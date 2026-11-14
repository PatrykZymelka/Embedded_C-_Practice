/*
Your task is to define two classes:

    Base class: Vehicle

        A method void printCategory() that prints:
        Generic Vehicle

         
    Derived class: Car (inherits publicly from Vehicle)
        A method void printCar() that prints:
        Car Vehicle


The program will:

    Create a Car object.
    Call printCategory() (inherited from base).
    Call printCar() (defined in derived).
*/

#include <iostream>

class Vehicle{
    private:

    public:
        void printCategory(){
            std::cout << "Generic Vehicle\n";
        }
};

class Car : public Vehicle{
    public:
        void printCar(){
            std::cout << "Car Vehicle\n";
        }
};

int main(){
    Car c;
    c.printCategory(); // inherited method
    c.printCar();      // derived method
    return 0;
}