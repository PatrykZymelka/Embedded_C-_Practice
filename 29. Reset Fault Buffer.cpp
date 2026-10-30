/*
Your firmware stores a fault code in a dynamically allocated buffer.
After handling the fault, the buffer must be deleted and the pointer reset to nullptr to avoid unsafe reuse.

Steps required:

    Dynamically allocate an integer pointer using new.
    Store the input fault code in it.
    Print the stored code.
    Delete the allocated memory using delete.
    Set the pointer to nullptr.
    Print:
        "OK" if the pointer is nullptr
        "NOT_OK" otherwise

 

Output format:

<faultCode> OK

 

Example 

Input:

55

Output:

55 OK

 

Constraints:

    You must delete the allocated memory and reset the pointer to nullptr.
    Do not print the pointer value directly.
*/
#include <iostream>

int main(){
    int fault;
    std::cin >> fault;

    int * ptr = new int;
    *ptr = fault;
    std::cout << *ptr;

    delete ptr;
    ptr = nullptr;
    if(ptr == nullptr){
        std::cout << " OK";
    }
    else{
        std::cout << "NOT OK";
    }

    return 0;
}