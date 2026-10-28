/*
Create a function that logs messages from firmware.

The function must accept:

    A string message (required)
    A boolean flag indicating whether a timestamp should be included (optional; default = false)

If the timestamp flag is:

    false → print only the message
    true → print a simulated timestamp followed by the message

Use a fixed timestamp value of 123456 for this exercise.

 

The final printed format must be:

Without timestamp:

message

With timestamp:

[123456] message

 

In main():

    Read mode
        0 → call the function using only the message (default behavior)
        1 → call the function with timestamp enabled (true)
    Read the message as a single word.

 

Example 1

Input:

0 Hello

Output:

Hello

 

Example 2

Input:

1 Alert

Output:

[123456] Alert

 

Constraints:

    Use a default argument for the timestamp flag
    Do not create overloaded functions
*/
#include <iostream>
#include <string>

void logMsg(const std::string & s, bool flag = false){
    if(flag == false){
        std::cout << s << std::endl;
    }
    else{
        std::cout << "[123456] " << s << std::endl; 
    }
}

int main(){
    int mode;
    std::string s;
    std::cin >> mode >> s;

    if(mode == 0){
        logMsg(s);
    }
    else{
        logMsg(s, true);
    }
    return 0;
}