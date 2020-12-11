#include<iostream>
#include<string>
using namespace std;

//Singleton class President That Prohibits Copying, Assignment, and \
Multiple Instance Creation

class President {
    private:
        President() {}; //private default constructor
        President(const President &); //private copy constructor
        const President& operator=(const President&);   //overloaded assignment operator

        string name;
    public:
        static President& getInstance() {
            //static objects are constructed only once
            static President onlyInstance;
            return onlyInstance;
        }

        string getName() {
            return name;
        }

        void setName(string inputName) {
            name = inputName;
        }
};


int main() {
    President& onlyPresident = President::getInstance();
    onlyPresident.setName("Abraham Lincoln");

    // uncomment lines to see how compile failures prohibit duplicates
    // President second; // cannot access constructor
    // President* third= new President(); // cannot access constructor
    // President fourth = onlyPresident; // cannot access copy constructor
    // onlyPresident = President::GetInstance(); // cannot access operator=

    cout << "The name of the President is " << onlyPresident.getName() << endl;
    cout << "The name of the President is " << President::getInstance().getName() << endl;
}