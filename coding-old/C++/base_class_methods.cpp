#include<iostream>
using namespace std;

class Fish {
    private:
        bool isFreshWaterFish;
    public:
        //Fish constructor
        Fish(bool isFreshWater):isFreshWaterFish(isFreshWater) {}

        void swim() {
            if(isFreshWaterFish) {
                cout << "Swim in lake" <<endl;
            } else {
                cout << "Swim in sea" << endl;
            }
        }
};

class Tuna: public Fish {
    public:
        Tuna():Fish(false) {}
    
        void swim() {
            //Fish::swim();
            cout << "Tuna swims real fast\n";
        }

};

class Carp: public Fish {
    public:
        Carp():Fish(true) {}

        void swim() {
            Fish::swim();
            cout << "Carp swims real slow\n";
        }
};


int main() {
    Carp myLunch;
    Tuna myDinner;

    cout << "About my food\n";

    cout << "Lunch: ";
    myLunch.swim();

    cout << "Dinner: ";
    myDinner.Fish::swim();

    return 0;
}