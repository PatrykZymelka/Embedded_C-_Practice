/*
We have already declared a namespace MathOps with:

    A variable int x = 10;
    A function int square(int n) that returns n * n

Your task is to:

    Print the value of x
    Call square(x) and print the result

Example Output:

x=10 Square=100 

Why this output?
Because the variable x is accessed using MathOps::x, and the function is called using MathOps::square(10).

Question Significance
Demonstrates how to access variables and functions defined inside a namespace using the scope resolution operator.


*/
#include <iostream>

namespace MathOps{
    int x = 10;
    int square(int n){
        return n*n;
    }
}

int main(){
    std::cout << MathOps::x << " " << MathOps::square(MathOps::x) << std::endl;

    return 0;
}