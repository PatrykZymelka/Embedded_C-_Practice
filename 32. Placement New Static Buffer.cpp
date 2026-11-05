/*
Your microcontroller firmware environment does not allow heap allocation, so objects must be constructed inside preallocated static memory.

You must:

    Define a struct Block with two integer fields:
        id
        value
    Create a statically allocated, properly aligned buffer large enough to hold one Block
    Use placement new to construct a Block object inside that buffer
    Read two integers from input and assign them to id and value
    Print the fields in the format:

        id value

    Manually call the destructor of the constructed object

 Important: Placement new does not allocate memory and therefore requires explicit destruction.

 

Example 

Input:

7 42

Output:

7 42

 

Constraints:

    Use placement new syntax: new (buffer) Block
    Do not use normal new or delete
    The buffer must be properly aligned for Block
    Explicitly call the destructor using: obj->~Block();
    Use only stack or static memory (embedded-safe)
*/

#include <iostream>
#include <new>

typedef struct{

    int id;
    int value;

}Buff;

alignas(Buff) int buffer[sizeof(Buff)];

int main(){

    int id, value;
    std::cin >> id >> value;

    Buff * ptr = new (buffer) Buff(id, value);

    std::cout << ptr->id << " " << ptr->value << std::endl;

    ptr->~Buff();

    return 0;
}