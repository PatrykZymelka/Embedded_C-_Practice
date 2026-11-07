/*
Your task is to declare a scoped enum class named ErrorCode with the following explicit numeric values:

    None = 0
    Timeout = 1
    Overflow = 2
    Invalid = 3

The value ErrorCode::Invalid represents an explicit error state.

Implement a function:

const char* toString(ErrorCode e);

that returns the corresponding string:

    "None"
    "Timeout"
    "Overflow"
    "Invalid"

The program will read an integer from standard input and convert it to an ErrorCode as follows:

    If the input value is 0, 1, 2, or 3, it maps directly to the corresponding ErrorCode

Finally, print the string representation of the resulting ErrorCode.

 

Example 1

Input:

0

Output:

None 

 

Example 2

Input:

2

Output:

Overflow 

 

Example 3

Input:

3

Output:

Invalid
*/

#include <iostream>
#include <cstdint>
enum class ErrorCode : uint8_t{

    None = 0,
    Timeout = 1,
    Overflow = 2,
    Invalid = 3

};

const char* toString(ErrorCode e){
    if(e == ErrorCode::None){
        return "None";
    }
    else if(e == ErrorCode::Timeout){
        return "Timeout";
    }
    else if(e == ErrorCode::Overflow){
        return "Overflow";
    }
    else{
        return "Invalid";
    }
}

int main(){
    int x;
    std::cin >> x;
    ErrorCode e;
    switch(x){
        case 0:
            e = ErrorCode::None;
            break;
        case 1:
            e = ErrorCode::Timeout;
            break;
        case 2:
            e = ErrorCode::Overflow;
            break;
        default:
            e = ErrorCode::Invalid;
            break;
    }
    std::cout << toString(e) << std::endl;
    return 0;

}