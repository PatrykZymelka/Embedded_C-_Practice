/*
 Your task is to overload a function setThreshold in two ways:

    void setThreshold(int x) → sets the threshold using an integer.
    void setThreshold(double x) → sets the threshold using a floating-point number. 

The program will call the correct version based on the input.
You only need to implement the two overloaded functions.

Example 1
Input:

50

Output:

Threshold set to 50

 

Example 2

Input:

3.75

Output:

Threshold set to 3.75
*/

#include <iostream>

void SetThreshold(int x){
    std::cout << "Threshold set to: " << x << std::endl;
}

void SetThreshold(double x){
    std::cout << "Threshold set to: " << x << std::endl;
}

int main(){
    double x;
    std::cin >> x;
    
    if(x == (int)x){
        SetThreshold((int)x);
    }
    else{
        SetThreshold(x);
    }

    return 0;
}