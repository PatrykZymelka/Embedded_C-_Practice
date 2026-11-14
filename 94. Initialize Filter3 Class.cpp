/*
Create a class Filter3 that represents a simple 3-coefficient digital filter used in embedded signal processing.

This problem focuses on correct use of constructor initialization lists in Embedded C++, which are mandatory when initializing const members and fixed-size arrays.

All internal members must be initialized using a constructor initialization list, not by assignment inside the constructor body.

Class Requirements

    Private Members
        const int id
        int coeff[3]
        int lastOutput
    Constructor Requirements
        Create the following constructor:

            Filter3(int filterId, int c0, int c1, int c2)

        The constructor must initialize all members using an initialization list:
            id initialized with filterId
            coeff initialized as {c0, c1, c2}
            lastOutput initialized to 0
        ❗ Assignment inside the constructor body is not allowed.
    Public Methods
        void apply(int x)
            Updates the output using the formula:

                lastOutput = x * coeff[0] + coeff[1] + coeff[2]; 

        int read()
            Returns the current value of lastOutput

In main()

    Read id, c0, c1, c2
    Construct a Filter3 object
    Read two input samples s1 and s2
    Call apply(s1) and then apply(s2)
    Print the final output using read()
*/
#include <iostream>
using namespace std;

class Filter3{
    private:
        const int id;
        int coeff[3];
        int lastOutput;
    public:
        Filter3(int filterId, int c0, int c1, int c2): id(filterId), coeff{c0,c1,c2},lastOutput(0){}
        void apply(int x){
            lastOutput = x * coeff[0] + coeff[1] + coeff[2];
        }
        int read(){
            return lastOutput;
        }
};

int main() {
    int id, c0, c1, c2;
    cin >> id >> c0 >> c1 >> c2;

    Filter3 f(id, c0, c1, c2);

    int s1, s2;
    cin >> s1 >> s2;

    f.apply(s1);
    f.apply(s2);

    cout << f.read();
    return 0;
}