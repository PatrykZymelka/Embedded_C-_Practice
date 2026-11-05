/*
In embedded firmware, some objects (such as state machine nodes or mode configurations) must be reinitialized without changing their memory location.

Heap allocation is not allowed. Instead, placement new is used to construct objects directly inside a preallocated static buffer.

You must:

    Define a struct Mode with a single integer field level.
    Create a statically allocated, properly aligned buffer large enough to hold one Mode object.
    Use placement new to construct the first Mode object in the buffer, initializing level with the first input.
    Manually call the destructor of the object.
    Reconstruct a second Mode object in the same buffer, initializing level with the second input.
    Manually call the destructor of the object.
    Print the final mode level.

 

Example 

Input:

3 9

Output:

9

 

Constraints:

    Placement new must be used for both constructions.
    The destructor must be called manually before reconstruction.
    The buffer must be correctly aligned for Mode.
    No heap allocation is allowed.
*/

#include <iostream>
#include <new>
#include <cstdint>

typedef struct{

    int field;

}Mode;

int main(){

    int a;
    std::cin >> a;

    alignas(Mode) uint8_t buffer[sizeof(Mode)];

    Mode * ptr = new (buffer) Mode();

    ptr->field = a;

    ptr->~Mode();

    ptr = new (buffer) Mode();

    int b;
    std::cin >> b;

    ptr->field = b;

    std::cout << ptr->field;

    ptr->~Mode();

    return 0;

}