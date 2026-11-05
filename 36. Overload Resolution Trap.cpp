/*
Write two overloaded functions with the same name but different parameter types:

void foo(int x);
void foo(int* p);

The goal is to demonstrate how overload resolution behaves differently for integer literals and nullptr in modern C++.

The program will explicitly call:

foo(0);
foo(nullptr);

You only need to implement the two overloads so that each prints which overload was selected.

    foo(int) must print:

        int overload

    foo(int*) must print:

        int* overload

 

Example Output:

int overload
int* overload
*/

#include <iostream>

void foo(int x){
    std::cout << "int overload\n";
}

void foo(int * ptr){
    std::cout << "int ptr overload\n";
}

int main(){
    int x = 5;
    int * p = nullptr;

    foo(x);
    foo(p);
    return 0;
}