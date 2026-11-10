/*
Create a class SensorBuffer that stores up to 5 sensor samples (integers).
This simulates a fixed-size sample buffer commonly used in embedded firmware where memory is limited.

Your class must:

    Store the following private members:
        int id → sensor ID
        int data[5] → fixed-size buffer
        int count → number of stored samples (range: 0–5)
    Provide:
        A constructor that sets id and initializes count = 0
        void addSample(int v)
            If the buffer is full (count == 5), ignore the new value
            Otherwise, store the value at index count and increment count
        int size()
            Returns the number of stored samples
        void print()
            Prints all stored samples in insertion order, space-separated
            If empty, print nothing
    In main():
        Read id
        Read n (number of incoming samples)
        Read n integer samples
        Add each sample using addSample()
        Print the stored samples using print()
*/
#include <iostream>

class SensorBuffer{
    private:
        int id;
        int data[5];
        int count;
    public:
        SensorBuffer(int i){
            id = i;
            count = 0;
        }
        void addSample(int v){
            if(count == 5){

            }
            else{
                data[count++] = v;
            }
        }
        int size(){
            return count;
        }
        void print(){
            for(int i = 0; i < count; i++){
                std::cout << data[i];
                if(i != count-1){
                    std::cout << " ";
                }
            }
            
        }
};

int main(){
    
    int id, n;
    std::cin >> id >> n;

    SensorBuffer s(id);

    for(int i = 0; i < n; i++){
        int temp;
        std::cin >> temp;
        s.addSample(temp);
    }
    s.print();

    return 0;
}