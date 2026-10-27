/*
Given two signed 32-bit integers a and b, create a C++ reference that aliases a.
Update the value of a by adding b only through this reference.

Do not modify a directly after the reference is created.

Print the updated value of a.

Example 

Input:

5 3

Output:

8

 

Constraints:

    a and b are signed 32-bit integers (int32_t)
    Modification of a must occur only through a C++ reference
    Do not use pointers
    Assume no integer overflow occurs
*/

#include <iostream>

int add_by_ref( int & a, int & b){

    return a+b;

}

int main(){

    int a, b;

    std::cin >> a >> b;

    std::cout << add_by_ref(a,b) << std::endl;

    return 0;
}
