/*
You must define a class Packet that represents a small telemetry packet sent from a sensor module.

Your class must:

    Store the following private members:
        int id
        int temperature
        int humidity
    Provide:
        A constructor that sets id and initializes temperature and humidity to 0
        A method void update(int t, int h)
            Updates temperature and humidity
        A method void print()
            Prints the packet contents in the format:

                ID=<id> TEMP=<temperature> HUM=<humidity>

    In main():
        Read id, t1, h1, t2, h2
        Create a Packet object with the given id
        Call update(t1, h1)
        Call update(t2, h2)
        Print the final packet using print()
*/
#include <iostream>

class Packet{
    private:
        int id;
        int temperature;
        int humidity;
    public:
        Packet(int i){
            id = i;
            temperature = 0;
            humidity = 0;
        }
        void update(int t, int h){
            temperature = t;
            humidity = h;
        }
        void print(){
            std::cout << "ID=" << id << " TEMP=" << temperature << " HUM=" << humidity << std::endl;
        }
};

int main() {
    int id, t1, h1, t2, h2;
    std::cin >> id >> t1 >> h1 >> t2 >> h2;
 
    Packet pkt(id);
    pkt.update(t1, h1);
    pkt.update(t2, h2);
 
    pkt.print();
    return 0;
}