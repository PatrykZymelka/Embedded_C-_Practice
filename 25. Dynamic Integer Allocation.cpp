/*
Dynamically allocate a single integer using new.
Assign it a value read from input, print that value, and then free the memory using delete.

Steps required in main():

    Read an integer x from input.
    Dynamically allocate an int using new.
    Store x in the allocated memory.
    Print the stored value.
    Free the memory using delete.

Important:

    Do not use stack variables to hold the value (except for reading input).
    The printed value must come from the dynamically allocated memory.

Example 

Input:

42

Output:

42

Constraints:

    Use new and delete.
    Do not use new[] or delete[].
*/
#include <iostream>

int main(){
    int x;
    std::cin >> x;
    int * space = new int;
    *space = x;

    std::cout << *space;

    delete space;



    return 0;
}