#include<iostream>
using namespace std;

class Human {
    public:
        string name;
        int age;

        void introduceSelf() {
            cout << "I am " << name << " and I am " << age << " years old!\n";
        }
};

//example of pointer operator
int main() {
    // accessing members using the dot operator
    Human h1;
    h1.name = "Amit";
    h1.age = 21;
    h1.introduceSelf();

    //accessing members using the pointer operator
    Human *h2 = &h1;
    h2->name = "Priya";
    h2->age = 19;
    h2->introduceSelf();

}