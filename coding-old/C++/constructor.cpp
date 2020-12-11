#include<iostream>
using namespace std;

class Human {
    int age;
    public:
        string name;
    
        // Constructor
        Human() {
            name = (string)NULL;
            age = 0;
        }
        // declaring the definition of constructor outside the class
        Human(int age, string name);

        void introduceSelf();
};

Human::Human(int a, string n) {
    age = a;
    name = n;
}

void Human::introduceSelf() {
    cout << "I am " << name << " and I am " << age << " years old!\n";
}

int main() {
    Human h1(21, "Amit");
    h1.introduceSelf();
}