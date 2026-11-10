/*
Create a class SensorConfig that represents configuration data for a digital sensor in an embedded system.

Each sensor must be initialized with valid configuration data at startup, specifically a sensor ID and a calibration offset. The system must not allow uninitialized sensor objects.

The class must store the latest calibrated sensor value and update it whenever new raw data is received.

Class Requirements

The class SensorConfig must contain the following private data members:

    int id — unique sensor identifier
    int offset — calibration offset applied to raw readings
    int lastValue — last calibrated value (must be initialized to 0)

Constructor Requirements

The class must define only one constructor:

SensorConfig(int sensorId, int calibrationOffset)

The constructor must:

    Assign sensorId to id
    Assign calibrationOffset to offset
    Initialize lastValue to 0

❗ A default constructor must not be used.

Public Member Functions

    void update(int raw)
        Applies calibration using the formula:

            lastValue = raw + offset

    int read()
        Returns the current value of lastValue

Main Function Behavior

In main():

    Read two integers: id and offset
    Create a SensorConfig object using the parameterized constructor
    Read two raw sensor values: r1 and r2
    Call update(r1) followed by update(r2)
    Print the final calibrated value returned by read()

Input Format

id offset
r1 r2

    All values are integers
    Offsets may be negative

Output Format

<final_calibrated_value>

    Output only the final calibrated value
    No extra spaces or newlines
*/

#include <iostream>
using namespace std;

class SensorConfig{
    private:
        int id;
        int offset;
        int lastValue;
    public:
        SensorConfig(int s, int c): id(s), offset(c),lastValue(0){}
        void update(int raw){
            lastValue = raw + offset;
        }
        int read(){
            return lastValue;
        }
};
int main() {
    int id, offset;
    cin >> id >> offset;

    SensorConfig cfg(id, offset);  // must use parameterized constructor

    int r1, r2;
    cin >> r1 >> r2;

    cfg.update(r1);
    cfg.update(r2);

    cout << cfg.read();
    return 0;
}