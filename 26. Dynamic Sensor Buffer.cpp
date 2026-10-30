/*
Your firmware needs to capture a burst of sensor readings.
The number of readings (n) is not known at compile time, so a dynamic buffer must be allocated using new[].

Steps:

    Read integer n — number of samples to store.
    If n is less than 1, terminate the program.
    Dynamically allocate an integer array of size n using new[].
    Read n sensor readings into the buffer.
    Compute the average sensor value using integer division.
    Print the average.
    Release the allocated memory using delete[].

 

Example 1

Input:

5
10 20 30 40 50

Output:

30

 

Example 2

Input:

4
100 100 100 100

Output :

100

 

Constraints:

    Use new[] and delete[]
    Do not use STL containers or static arrays
    Assume 1 ≤ n ≤ 1000
    Sensor readings are integers
*/

#include <iostream>

int main(){

    int n;
    std::cin >> n;
    if(n<1){
        return 1;
    }

    int * arr = new int[n];
    int sum = 0;
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
        sum+= arr[i];
    }

    std::cout << sum/n << std::endl;

    delete[] arr;

    return 0;
}