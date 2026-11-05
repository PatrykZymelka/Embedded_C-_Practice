/*
In embedded firmware, optional callback functions are often used to handle events such as sensor data processing.
This problem focuses on safe callback invocation using nullptr.

You are given an input that specifies whether a callback is registered and a sensor value.
Your task is to safely invoke the callback only if it is registered.

Input Format:

flag value

    flag (integer)
        0 → No callback is registered
        1 → Callback is registered
    value (integer)
        Sensor data value
        Can be positive, negative, or zero

Both values are space-separated and provided on a single line.

Output Format:

    If flag is 0, print:

        NO CALLBACK 

    If flag is 1, invoke the callback and print:

        DATA <value>

The output must match exactly, with no extra spaces or text.

Example 1

Input:

0 10

Output:

NO CALLBACK 

 

Example 2

Input:

1 25

Output:

DATA 25 

 

Constraints:

    Use nullptr to represent the absence of a callback
    Always check the callback pointer before calling it
    value fits within a 32-bit signed integer
    Do not invoke a null function pointer
*/

#include <iostream>

void call(int * p){
    std::cout << "NO CALLBACK\n";
}

void call(int x){
    std::cout << "DATA " << x << std::endl;
}

int main(){
    int flag, data;
    std::cin >> flag >> data;
    int * ptr = nullptr;
    if(flag == 0){
        call(ptr);
    }
    else if(flag == 1){
        ptr = new int;
        *ptr = data;
        call(*ptr);
    }
    delete(ptr);
    
    return 0;
}