/*
Your firmware processes a sensor reading in two different ways depending on whether the value is allowed to be modified or must be treated as read-only.

You must create two overloaded functions named process that differ only by const-correctness:

    If a reading is non-negative, the modifying overload must be used.
        This overload must double the sensor value.
    If a reading is negative, the read-only overload must be used.
        This overload must print "readonly" and must not modify the value.

You must use function overloading with const and non-const references.
Do not merge both behaviors into a single function.

In main():

    Read an integer x
    If x < 0, call the read-only overload
    Otherwise, call the modifying overload
    After modification, print the updated value
     

Example 1

Input:

5

Output:

10

 

Example 2

Input:

-3

Output:

readonly

 

Constraints:

    Two overloaded versions of the process must exist
    One overload must accept a non-const reference
    One overload must accept a const reference

The read-only overload must not modify the input
*/

#include <iostream>

void process(const int & x){
    std::cout << "readonly";
}
void process(int & x){
    x *= 2;
}

int main(){
    int x;
    std::cin >> x;
    if(x < 0){
        process(static_cast<const int&>(x));
    }
    else{
        process(x);
    }

    std::cout << x << std::endl;

    return 0;
}