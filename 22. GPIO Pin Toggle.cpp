/*
Create an inline function that toggles the state of a GPIO pin.

Each pin state is represented as:

    0 → LOW
    1 → HIGH

Your inline function must:

    Take the current pin state as input
    Return the toggled state:
        0 → 1
        1 → 0

In main():

    Read the initial states of exactly 10 GPIO pins (space-separated, index 0–9).
    Read an integer n, the number of toggle operations.
    Read n pin indices.
    For each pin index:
        Toggle the corresponding pin every time it appears.
    Print the final states of all 10 pins, separated by spaces.

Example 

Input:

0 1 0 1 0 1 0 1 0 1
3
0 1 0

Output:

0 0 0 1 0 1 0 1 0 1

 

Explanation of Example:

    Toggle pin 0 → 0 → 1
    Toggle pin 1 → 1 → 0
    Toggle pin 0 again → 1 → 0

Final state:

0 0 0 1 0 1 0 1 0 1

 

Input Constraints:

    Pin states are guaranteed to be either 0 or 1
    Pin indices are guaranteed to be in the range 0 to 9
    0 ≤ n ≤ 10^5
    No global variables may be used
    Toggling must be performed using an inline function
*/

#include <iostream>

inline int reverse_bit(int x){
    return ((x+1)%2);
}

int main(){

    int arr[10];
    for(int i = 0; i < 10; i++){
        std::cin >> arr[i];
    }
    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        arr[i] = reverse_bit(arr[i]);
    }

    for(int i = 0; i < 10; i++){
        std::cout << arr[i];
    }

    return 0;
}