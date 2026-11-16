/*

*/
#include <iostream>

class Sensor{
    protected:
    void readValue(){
        std::cout << "Reading sensor value\n";
    }
};
class Logger{
    protected:
    void logData(){
        std::cout << "Logging data\n";
    }
};

class SmartSensor : protected Logger, protected Sensor{
    public:
    void process(){
        readValue();
        logData();
    }
};

int main() {
    SmartSensor ss;
    ss.process();
    return 0;
}