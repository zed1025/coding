#include<iostream>
using namespace std;
/*
the destructor of Tuna was not invoked
during delete, rather only that of the Fish. This is in stark contrast to the construction
and destruction of local member myDinner where all constructors and destructors are
invoked. Lesson 10 demonstrated in Listing 10.7 the correct order of construction and
destruction of classes in an inheritance hierarchy, showing that all destructors need to be
invoked, including ~Tuna(). Clearly, something is amiss.
This flaw means that the destructor of a deriving class that has been instantiated on the
free store using new would not be invoked if delete is called using a pointer of type
Base*. This can result in resources not being released, memory leaks, and so on and is a
problem that is not to be taken lightly.
 */

class Fish {
    public:
        Fish() {
            cout << "Constructed Fish\n";
        }
        ~Fish() {
            cout << "Destroyed Fish\n";
        }
};

class Tuna: public Fish {
    public:
        Tuna() {
            cout << "Constructed Tuna\n";
        }
        ~Tuna() {
            cout << "Destroyed Tuna\n";
        }
};

void DeleteFishMemory(Fish* myFish) {
    delete myFish;
}

int main() {
    cout << "Allocating a tuna on the free store: \n";
    Tuna* pTuna = new Tuna();
    cout << "Deleting the Tuna: \n";
    DeleteFishMemory(pTuna);

    cout << "Instantiating a Tuna on the stack: \n";
    Tuna myDinner;
    cout << "Automatic destruction as it goes out of scope\n";

    return 0;
}