/*
Your embedded system prepares telemetry packets to send over a wireless link.
Each packet contains a single integer field representing a processed sensor value.

The workflow is:

    Allocate memory for a packet using new int.
    Store the first computed value in the packet.
    Before generating the next telemetry packet, delete the old packet to avoid a memory leak.
    Allocate a new packet (again using new int).
    Store the second computed value.
    Print the final packet value (the second one).
    Delete the final packet before program exit.

Just like real firmware, your code must not overwrite heap pointers without freeing them first.

Input Format:

Two integers provided in a single line:

firstValue secondValue

 

Example 

Input:

25 40

Output:

40

 

Explanation:

    First packet is dynamically created and set to 25
    It must be deleted before the pointer is reused
    Second packet is created and set to 40
    The final output is 40

 

Constraints:

    Use new and delete exactly as required
    The first allocation must be deleted before reuse
    No memory leaks are allowed
*/
#include <iostream>

int main(){
    int x, y;
    std::cin >> x >> y;

    int * ptr = new int;
    *ptr = x;

    delete ptr;
    ptr = new int;
    *ptr = y;

    std::cout << *ptr;

    delete ptr;

    return 0;
}