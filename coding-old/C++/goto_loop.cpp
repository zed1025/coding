#include<iostream>
using namespace std;

//this is an example of looping using goto
void printNames(string name) {
    Start:
        cout << name << endl;
        cout << "Want to print again?(y/n): ";
        char ch;
        cin >> ch;
    if(ch == 'y') {
        goto Start;
    }
}

int main() {
    printNames("Amit");
}