/*
Your task is to define both:

    A macro called SQUARE(x) that returns the square of x
    An inline function called square(int x) that also returns the square of x

The macro must be written safely so that it works correctly for any valid integer expression, not just simple variables.

In main(), the program will:

    Read an integer n
    Call both implementations
    Print the results in the exact format shown below

Input Specification:

    A single integer n

Output Specification:

Macro Square: <result>
Inline Square: <result>

 

Example 1

Input:

5

Output:

Macro Square: 25
Inline Square: 25

 

Example 2

Input

-3 

Output

Macro Square: 9
Inline Square: 9

 

Constraints & Notes

    Input n is a 32-bit signed integer
    Assume no overflow occurs for the given test cases
    The macro must be written using proper parentheses to avoid operator precedence issues
    The goal is to highlight differences between macros and inline functions in Embedded C++
*/

#include <iostream>

#define SQUARED(x) (x)*(x)

inline int squared_fun(int x){
    return x*x;
}

int main(){
    int x;
    std::cin >> x;
    int result = SQUARED(x) ;
    std::cout << result << std::endl;

    result = squared_fun(x);
    std::cout << result << std::endl;

    return 0;

}