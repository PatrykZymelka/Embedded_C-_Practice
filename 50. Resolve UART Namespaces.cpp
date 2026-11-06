/*
Your firmware project includes two different UART drivers:

    One for the bootloader
    One for the application firmware

Both drivers provide a function named send().

To avoid a name conflict, place each driver in its own nested namespace:

    Boot::UART
    App::UART

Each send() function must print a different message:

    Bootloader UART → "BOOT UART"
    Application UART → "APP UART"

In main():

    Read an integer mode
        1 → call Boot::UART::send()
        2 → call App::UART::send()

 

Example 1

Input:

1

Output:

BOOT UART

 

Example 2

Input:

2

Output:

APP UART

 

Constraints:

    Use nested namespaces (namespace inside namespace)
    Both functions must be named send()
*/
#include <iostream>

namespace Boot{
    namespace UART{
        void send(){
            std::cout << "BOOT UART";
        }
    }
}

namespace App{
    namespace UART{
        void send(){
            std::cout << "APP UART";
        }
    }
}

int main(){
    int flag;
    std::cin >> flag;
    if(flag == 1){
        Boot::UART::send();
    }
    else{
        App::UART::send();
    }
    return 0;
}