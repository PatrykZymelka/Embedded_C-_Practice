/*
Your task is to overload a function printValue in two ways:

    void printValue(int x) → prints an integer sensor value.
    void printValue(float x) → prints a floating-point sensor value. 

The program will call the correct version based on the input.
You only need to implement the two overloaded functions.

Example 1
Input:

42

Output:

Value=42

 

Example 2

Input:

3.75

Output:

Value=3.75
*/
#include <iostream>

void printValue(int value){
    std::cout << "Value = " << value << std::endl;
}

void printValue(float value){
    std::cout << "Value = " << value << std::endl;
}

int main(){

    float val;
    std::cin >> val;
    if(val == (int)val){
        printValue((int)val);
    }
    else{
        printValue(val);
    }


    return 0;
}