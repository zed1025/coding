#include<iostream>
using namespace std;

class FishDummyMember {
    public:
        FishDummyMember() {
            cout << "FishFummyMember Constructor\n";
        }
        ~FishDummyMember() {
            cout << "FishDummyMember destructor\n";
        }
};

class Fish {
    protected:
        FishDummyMember dummy;
    public:
        //Fish Constructor
        Fish() {
            cout << "Fish Constructor\n";
        }
        ~Fish() {
            cout << "Fish Destructor\n";
        }
};

class TunaDummyMember{
    public:
        TunaDummyMember() {
            cout << "TunaDummyMember constructor\n";
        }
        ~TunaDummyMember() {
            cout << "TunaDummyMember destructor\n";
        }
};

class Tuna: public Fish {
    private: 
        TunaDummyMember dummy;
    public:
        Tuna() {
            cout << "Tuna constructor\n";
        }
        ~Tuna() {
            cout << "Tuna destructor\n";
        }
};

int main() {
    Tuna myDinner;
}