#include<iostream>
using namespace std;

class Motor{
    public:
        void SwitchIgnition() {
            cout << "ignition ON\n";
        }
        void PumpFuel() {
            cout << "Fuel in cylinders\n";
        }
        void FireCylinders() {
            cout << "Vroooon\n";
        }
};

class Car: protected Motor{
    public: 
        void move() {
            SwitchIgnition();
            PumpFuel();
            FireCylinders();
        }
};

class RaceCar: protected Car {
    public:
        void move() {
            SwitchIgnition();   // RaceCar has access to members of
            PumpFuel(); // base Motor due to "protected" inheritance
            FireCylinders(); // between RaceCar & Car, Car & Motor
            FireCylinders();
            FireCylinders();
        }
};

int main() {
    RaceCar myCar;
    myCar.move();
}