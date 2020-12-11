/*
Overriding can take an extreme form where Tuna::Swim() can potentially hide all overloaded
versions of Fish::Swim() available, even causing compilation failure when the
overloaded ones are used (hence, called hidden),
 */
#include<iostream>
using namespace std;

class Fish {
    public:
        void swim() {
            cout << "Fish swims...\n";
        }
        void swim(bool isFreshWaterFish) {
            if(isFreshWaterFish) {
                cout << "Swim in lake\n";
            } else {
                cout << "Swim in sea\n";
            }
        }
};

class Tuna: public Fish {
    public:
        void swim() {
            cout << "Tuna swims real fast\n";
        }
};

int main() {
    Tuna myDinner;

    cout << "About my food\n";

    // myDinner.swim(false);//failure: Tuna::swim() hides Fish::swim(bool)
    myDinner.swim();

    return 0;
}