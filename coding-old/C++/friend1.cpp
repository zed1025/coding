/**
 * Using the friend Keyword to Allow an External Function DisplayAge()
Access to Private Data Members


 */

#include<iostream>
#include<string>
using namespace std;

class Human {
    private: 
        friend void DisplayAge(const Human& person);
        string name;
        int age;
    public: 
        Human(string name, int age): name(name), age(age) {};
};

void DisplayAge(const Human& person) {
    cout << person.age << endl;
}

int main() {
    Human firstMan("Adam", 25);
    cout << "Accessing private member via friend function: ";
    DisplayAge(firstMan);
}