#include<iostream>
using namespace std;

// another enum, enum can be declared ourside any function just like any other variable
enum CardinalDirections {
 North,
 South,
 East,
 West
};

int main() {
    enum RainbowColors {
        Violet = 0,
        Indigo,
        Blue,
        Green,
        Yellow,
        Orange,
        Red
    };

    cout << "Violet: " << Violet << endl;
    cout << "Indigo: " << Indigo << endl;
    RainbowColors r = Red;
    cout << "RainbowColor: " << r << endl;
}