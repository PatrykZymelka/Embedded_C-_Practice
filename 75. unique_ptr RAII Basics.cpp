/*
You are given a program that allocates a dynamic buffer inside a limited scope.

Your task is to manage this buffer using std::unique_ptr so that the memory is released automatically when the scope ends, without calling delete.

This problem introduces the core idea of RAII (Resource Acquisition Is Initialization), where resource lifetime is tied to object lifetime.

Program Flow:

    Read integer N
    Enter a local scope
    Allocate a dynamic buffer of N integers
    Read N integers into the buffer
    Print the buffer contents
    Exit the scope
    Print confirmation after the scope ends

 

Example Input:

4
10 20 30 40

Example Output:

10 20 30 40 
Scope ended

 

Constraints:

    N ranges from 1 to 100
    Input values fit within 32-bit signed integers
    Use std::unique_ptr for ownership
    Do not use delete explicitly
    Output format must match exactly
*/
#include <iostream>
#include <memory>

int main(){
    int n;
    std::cin >> n;
    {
        std::unique_ptr<int[]> ptr(new int[n]);
        for(int i = 0; i < n; i++){
            std::cin >> ptr[i];
        }

        for(int i = 0; i < n; i++){
            std::cout << ptr[i];
        }
    }

    std::cout << "\nOut of scope\n";
    return 0;
}