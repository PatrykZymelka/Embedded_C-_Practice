/*
Your firmware maintains a fixed memory pool for sensor packets because heap allocation is not allowed.

The pool can hold 3 packets, and each packet is represented by a struct SensorPacket.

You must:

    Define a struct SensorPacket with:
        id (integer)
        value (integer)
    Create a properly aligned memory pool capable of storing exactly 3 SensorPacket objects, ensuring that each pool slot is individually aligned for SensorPacket.
    Read:
        An integer index (0–2) specifying which pool slot to use
        Integer values id and value
    Use placement new to construct a SensorPacket inside the chosen pool slot.
    Print the packet’s id and value in the format:

        id value

    Manually call the destructor for the constructed object.

 

Example 

Input:

1 50 900

Output:

50 900

Explanation:

    Construct a packet in pool slot 1
    id = 50, value = 900
    Output is 50 900

 

Constraints:

    Heap allocation is forbidden
    Placement new must be used
    Destructor must be called manually
    index will always be between 0 and 2
    Memory must be correctly aligned for each SensorPacket object
*/

#include <iostream>
#include <new>
#include <cstdint>

typedef struct{

    int id;
    int value;
}Packet;

int main(){

    alignas(Packet) uint8_t buffer[3*sizeof(Packet)];

    int index,id,value;
    std::cin >> index, id, value;

    Packet * ptr = new (buffer) Packet();

    (ptr+index)->id = id;
    (ptr+index)->value = value;

    std::cout << (ptr+index)->id << " " <<  (ptr+index)->value << std::endl;

    ptr->~Packet();
    return 0;
}