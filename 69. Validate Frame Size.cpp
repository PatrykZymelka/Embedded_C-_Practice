/*
Your device communicates with a sensor that requires each packet to be exactly 12 bytes.

Packets are represented in code using a struct named Frame.

You must define this struct and ensure—using static_assert—that its size matches the expected packet size (12 bytes).
If the size is wrong, the program must fail to compile.

Packet Format (Total = 12 bytes):
Field	Type	Size
header	uint16_t	2
command	uint8_t	1
length	uint8_t	1
payload[6]	uint8_t[6]	6
checksum	uint16_t	2

Your job:

    Define the struct Frame following the exact layout above.
    Use static_assert(sizeof(Frame) == 12) to validate correctness.
    If the struct is correct, the program prints "Frame OK".

Example Output:

Frame OK 

Constraints:

    You must not modify main().
    The struct must match the exact byte layout (no extra fields).
    Padding must not break the size.
    Use uint8_t and uint16_t exactly as shown.
*/

#include <iostream>
#include <cstdint>

struct Frame{
    uint16_t header;
    uint8_t command;
    uint8_t length;
    uint8_t payload[6];
    uint16_t checksum; 
};

static_assert(sizeof(Frame) == 12, "Frame Missmatch");

int main(){
    std::cout << "Frame passed";

    return 0;
}