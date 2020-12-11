#include<iostream>

using namespace std;

int main() {
    int a = 500;
    {
        int a = 59;
        cout << "Inside a block, value of a is " << a << endl;  // uses local scope
    }
    {
        cout << "Inside another block, value of a is " << a << endl;    //uses global scope
    }

    //hence the pointer to an array contains the address of the first element of the array only
    int *arr = new int[10];
    cout << sizeof(arr) << endl;
}