#include<iostream>
using namespace std;

class Mammal{
    public:
        void FeedBabyMilk(){
            cout << "Mammal: Baby saying glug!\n";
        }
};

class Reptile {
    public:
        void SpitVenom() {
            cout << "Reptile: Shoo ememy! Spits Venom\n";
        }
};

class Bird {
    public: 
        void LayEggs() {
            cout << "Bird: Laid my eggs, am lighter now\n";
        }
};

class Platypus: public Mammal, public Reptile, public Bird {
    public:
        void Swim() {
            cout << "Platypus: Voila, I can swim\n";
        }
};

int main() {
    Platypus realFreak;
    realFreak.LayEggs();
    realFreak.FeedBabyMilk();
    realFreak.SpitVenom();
    realFreak.Swim();

    return 0;
}