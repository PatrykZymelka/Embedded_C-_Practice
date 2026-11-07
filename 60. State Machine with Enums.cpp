/*
We have already declared an enum class State with values: Idle, Busy, Error.
A helper function toString(State s) is also provided.

The system starts in State::Idle.

Your task is to process a sequence of input commands and update the system state based on the following state transition rules:

    "start" → Idle → Busy
    "done" → Busy → Idle
    "fail" → Busy → Error

If a command does not match a valid transition for the current state, it is ignored and the state remains unchanged.

Once the system enters the Error state, all further commands are ignored.

After processing all commands, print the final state.

 

Example 1

Input:

3
start done start 

Output:

Busy 

 

Example 2

Input:

2
start fail

Output:

Error 
*/

#include <iostream>
#include <string>
#include <vector>

enum class State{

    Idle,
    Busy,
    Error

};

const char* toString(State s){
    switch(s){
        case State::Idle: return "Idle";
        case State::Busy: return "Busy";
        case State::Error: return "Error";
    }
    return "Error";
}

int main(){
    int x;
    std::cin >> x;  

    State s = State::Idle;

    for(int i = 0; i < x; i++){
        std::string input;
        std::cin >> input;

        if(s == State::Idle && input == "start"){
            s = State::Busy;
            toString(s);
        }
        else if(s == State::Busy && input == "done"){
            s = State::Idle;
            toString(s);
        }
        else if(s == State::Busy && input == "fail"){
            s = State::Error;
            toString(s);
            break;
        }
    }
    std::cout << toString(s);


    return 0;
}