#include <bits/stdc++.h>
using namespace std;

class Vehicle{
    protected:
        int wheels;
        float weight;
    public:
        void init(int whls, float wght){
            wheels = whls;
            weight = wght;
        }
        int getWheels(){
            return wheels;
        }
        float getWeight(){
            return weight;
        }
        float wheelLoading(){
            return weight / wheels;
        }
};

class Car: public Vehicle{
    private:
        int passengerLoad;
    public:
        void init(int whls, float wght, int people = 4){
            passengerLoad = people;
            wheels = whls;
            weight = wght;
        }

        int passengers(){
            return passengerLoad;
        }
};

class Truck: public Vehicle{
    private:
        int passengerLoad;
        float payLoad;
    public:
        void initTruck(int number = 2, float maxLoad = 24000.0){
            passengerLoad = number;
            payLoad = maxLoad;
        }
        float efficiency(){
            return payLoad / (payLoad + weight);
        }
        int passengers(){
            return passengerLoad;
        }
};

int main(){
    Vehicle bi;
    bi.init(2, 25);
    cout << "Xe dap co " << bi.getWheels() << " banh xe." << endl;
    cout << "Khoi dong banh xe " << bi.wheelLoading() << " don vi khoi luong trn mot banh xe. "<< endl;
    cout << "Khoi luong xe la " << bi.getWeight() << " don vi khoi luong." << endl;
    Car c;
    c.init(4, 1500.0, 5);
    cout << "Xe o to cho duoc " << c.passengers() << " hanh khach." << endl;
    cout << "Khoi dong banh xe "<< c.wheelLoading() << "don vi khoi luong tren mot banh xe.";
    Truck v;
    v.init(18, 7000.0);
    v.initTruck(1, 15000.0);
    cout << "Xe tai nang " << v.getWeight();
    cout << " don vi khoi luong" << endl;
    cout << "SU dung hieu qua: " << 100 * v.efficiency() << " phan tram";
}