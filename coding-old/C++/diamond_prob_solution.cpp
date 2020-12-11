#include<iostream>
using namespace std;

class Animal {
    public:
        Animal() {
            cout << "Animal Constructor\n";
        }
        //sample member
        int age;
};

class Mammal: public virtual Animal {};
class Bird: public virtual Animal {};
class Reptile: public virtual Animal {};

class Platypus final: public Mammal, public Bird, public Reptile {
    public:
        Platypus() {
            cout << "Platypus constructor\n";
        }
};

int main() {
    Platypus duckBilledP;

    duckBilledP.age = 25;

    return 0;
}