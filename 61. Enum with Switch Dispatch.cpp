/*
We have already declared an enum class Command with values: Start, Stop, Reset.
 We have also provided a function execute(Command c) that prints:

    "STARTING..." for Start
    "STOPPING..." for Stop
    "RESETTING..." for Reset 

Your task is to implement the logic that reads the string input ("Start", "Stop", "Reset") and assigns the correct Command enum value before calling execute().

 

Example 1
Input:

Start

Output:

STARTING...

 

Example 2

Input:

Reset

Output:

RESETTING...
*/
#include <iostream>
#include <string>

enum class Command{

    Start,
    Stop,
    Reset,
    Null

};

const char* execute(Command c){
    switch(c){
        case Command::Start: return "Starting...";
        case Command::Stop: return "Stopping...";
        case Command::Reset: return "Resetting...";
        default: return "Error Invalid State";
    }
}

int main(){
    std::string s;
    std::cin >> s;
    Command c = Command::Null;
    if(s == "Start"){
        c = Command::Start;
    }
    else if(s == "Stop"){
        c = Command::Stop;
    }
    else if(s == "Reset"){
        c = Command::Reset;
    }
    std::cout << execute(c);

    return 0;
}