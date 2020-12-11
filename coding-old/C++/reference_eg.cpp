#include<iostream>
using namespace std;

int main() {
    int origional = 30;
    cout << "origional = " << origional << endl;
    cout << "origional is at address " << &origional << endl;

    int &reference = origional;
    cout << "reference is at address " << &reference << endl;

    int &reference2 = reference;
    cout << "reference2 is at address " << &reference2 << endl;
}