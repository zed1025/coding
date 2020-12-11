/**
 * Using the friend Keyword to Allow an External Class Utility Access to
Private Data Members
 */

#include<iostream>
using namespace std;

class Human {
    private: 
        friend class Utility;
        string name;
        int age;
    public: 
        Human(string name, int age): name(name), age(age) {};
};

class Utility {
    public:
    static void DisplayAge(const Human& person) {
        cout << person.age << endl;
    }
};

int main() {
    Human firstMan("Adam", 24);
    cout << "Accessing private member age via friend class: ";
    Utility::DisplayAge(firstMan);
}