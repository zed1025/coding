#include<iostream>
using namespace std;

class Bird {
    public:
        virtual void display() {
            cout << "Bird\n";
        }
};
class Reptile {
    public:
        virtual void display() {
            cout << "Reptile\n";
        }
};

class Platypus: public Bird, public Reptile {
    public:
        void display() {
            
        }
};

int main() {
    Platypus p;
    p.display();
}