/*
A sensor reading may optionally be passed through a filtering step.

You must create a function that:

    Always receives a raw sensor value as the first parameter.
    Optionally receives a filter mode as the second parameter.
    Uses no filtering by default if the filter mode is not provided.
     

Filtering Behavior

Implement filtering as follows:

    NONE (default) → return the raw value unchanged
    LOW → return raw / 2 (basic smoothing)
    HIGH → return raw / 4 (strong smoothing)

All divisions use integer division.

Filter modes must be represented using an enum, not integers.

Program Behavior (main)

    Read an integer raw and an integer modeFlag.
    If modeFlag == 0:
        Call the function using the default filter mode.
    If modeFlag == 1:
        Read a string filter name ("LOW" or "HIGH").
        Call the function using the specified filter mode.
    Print the filtered sensor reading.

Assume all inputs are valid.
*/

#include <iostream>
#include <string>
float filtering(int raw, std::string s = "NONE"){

    if(s == "LOW"){
        return raw/2.0;
    }
    else if(s == "HIGH"){
        return raw/4.0;
    }
    return raw;
}

int main(){
    int raw, flag;
    float result;
    std::cin >> raw >> flag;
    if(flag == 0){
        result = filtering(raw);
    }
    else{
        std::string s;
        std::cin >> s;
        result = filtering(raw,s);
    }

    std::cout << result << std::endl;

    return 0;
}