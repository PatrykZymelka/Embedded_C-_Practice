/*
In embedded systems, many driver APIs are marked const because calling them does not modify the device’s logical or externally observable state.

However, such functions may still update internal bookkeeping values, such as access counters or debug metrics.

These internal changes are allowed because they do not change the logical state of the object (e.g., hardware configuration, register contents, outputs). 
They only update metadata that is invisible to external users of the object.

Your task is to modify the class so that the logAccess() function can update an internal counter, even though both the function and the object are declared const.

What you must do:

    The program calls logAccess() N times on a const object.
    logAccess() must successfully increment the counter, even though it is a const function.
    After N calls, getCount() must return N.
    If N = 0, no calls should be recorded, and the output must be 0.
    Modify only the class internals to make this work.

Although logAccess() modifies a variable, it only updates internal bookkeeping, not the logical external state, which makes this valid inside a const function.

Important:

Do not use incorrect approaches such as:

    const_cast
    Making the counter static
    Removing the const keyword
    Using global variables

These break const-correctness.

There is a correct and safe C++ mechanism to allow internal updates.

 

Example 

Input:

3

Output:

3

*/
#include <iostream>
using namespace std;

class AccessTracker {
public:
    AccessTracker() : count(0) {}

    void logAccess() const {
        count++;   // this must be allowed
    }

    int getCount() const {
        return count;
    }

private:
    mutable int count;     // modify this so logAccess() can update it
};

int main() {
    int n;
    cin >> n;

    const AccessTracker tracker;   // must remain const

    for (int i = 0; i < n; i++) {
        tracker.logAccess();
    }

    cout << tracker.getCount();
    return 0;
}