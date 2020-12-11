#include<iostream>
using namespace std;

class Fish {
    public:
        //virtual function in base class allows for runtime polymorphism
        virtual void Swim(){
            cout << "Fish Swims\n";
        }
};

class Tuna: public Fish {
    public:
        //Override Fish::Swim()
        void Swim() {
            cout << "Tuna Swims\n";
        }
};

class Carp: public Fish {
    public: 
        //override Fish::Swim()
        void Swim() {
            cout << "Carp Swims\n";
        }
};

void MakeFishSwim(Fish& myFish) {
    //calling virtual method Swim()
    myFish.Swim();
}

int main() {
    Tuna myLunch;
    Carp myDinner;

    MakeFishSwim(myDinner);
    MakeFishSwim(myLunch);

    return 0;
}