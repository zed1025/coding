#include<iostream>
#include<string.h>
#include<string>
using namespace std;

class Fish{
    protected:
        bool isFreshWaterFish;  //accessible only to derived classes and friends
    public:
        void swim() {
            if(isFreshWaterFish) {
                cout << "Swim in lake\n" << endl;
            } else {
                cout << "Swim in sea\n" << endl;
            }
        }
};

class Tuna: public Fish{
    public:
        Tuna() {
            isFreshWaterFish = false;;
        }
};

class Carp: public Fish{
    public:
        Carp() {
            isFreshWaterFish = false;
        }
};

int main() {
    Carp myLunch;
    Tuna myDinner;

    cout << "About my food\n";
    cout << "Lunch: "; 
    myLunch.swim();
    cout << "Dinner: ";
    myDinner.swim();

    // uncomment line below to see that protected members
    // are not accessible from outside the class hierarchy
    // myLunch.isFreshWaterFish = false;

    return 0;
}