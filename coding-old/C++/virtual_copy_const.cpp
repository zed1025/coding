#include<iostream>
using namespace std;
/*
    Tuna and Carp That Support a Clone Function as a Simulated Virtual
Copy Constructor
 */
class Fish{
    public:
        virtual Fish* Clone() = 0; //pure vivrtual function, so Fish is now abstract
        virtual void Swim() = 0;
        virtual ~Fish(){};
};

class Tuna: public Fish {
    public:
        Fish* Clone() override{
            return new Tuna(*this); // return new Tuna that is a copy of this
        }
        void Swim() override final{
            cout << "Tuna swims fast in the sea\n";
        }
};

class BluefinTuna final : public Tuna {
    public:
        Fish* Clone() override{
            return new BluefinTuna(*this);
        }
        // Cannot override Tuna::Swim as it is "final" in Tuna
};

class Carp final: public Fish {
    Fish* Clone() override{
        return new Carp(*this);
    }
    void Swim() override final {
        cout << "Carp swims slow in the lake\n";
    }
};

int main() {
    const int ARR_SIZE = 4;
    Fish* myFish[ARR_SIZE] = {NULL};
    myFish[0] = new Tuna();
    myFish[1] = new Carp();
    myFish[2] = new BluefinTuna();
    myFish[3] = new Carp();

    Fish* myNewFishes[ARR_SIZE];
    for(int index=0; index < ARR_SIZE; ++index) {
        myNewFishes[index] = myFish[index]->Clone();
    }

    //invoke a virtual method to check
    for(int index=0; index < ARR_SIZE; ++ index) {
        myNewFishes[index] -> Swim();
    }

    //memory cleanup
    for(int index=0; index < ARR_SIZE; ++index) {
        delete myFish[index];
        delete myNewFishes[index];
    }

    return 0;
}