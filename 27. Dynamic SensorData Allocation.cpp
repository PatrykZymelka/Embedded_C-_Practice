/*
A sensor driver needs to create a SensorData structure dynamically at runtime, fill it with readings, and process it.

You must:

    Define a struct named SensorData with three integer fields:
        x
        y
        z
    Dynamically allocate a SensorData object using new.
    Read integer values for x, y, and z from standard input and store them in the allocated struct.
    Print the values in the following format:

        x y z

    Free the allocated memory using delete.

 

Example 1

Input:

3 4 5

Output:

3 4 5

 

Example 2

Input:

10 20 30

Output:

10 20 30

 

Constraints:

    Use new to allocate the struct.
    Use delete to free the allocated memory.
    Do not allocate arrays.
    Use standard input and output.
    Assume int is sufficient to hold all input values.
*/

#include <iostream>

typedef struct{
    int x;
    int y;
    int z;
}Data;

int main(){
    Data * data_ptr = new Data;

    int x,y,z;
    std::cin >> x >> y >> z;
    data_ptr->x = x;
    data_ptr->y = y;
    data_ptr->z = z;

    std::cout << data_ptr->x << " " << data_ptr->y << " " << data_ptr->z << std::endl;

    delete data_ptr;

    return 0;
}