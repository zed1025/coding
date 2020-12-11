#include<iostream>
using namespace std;

int main() {
    // static array of 5 ints
    int myNums[5];

    // assign array to pointer to int
    int *ptrToInt = myNums;

    // display address contained in pointer variable
    cout << "ptrToInt contains " << ptrToInt << endl;

    // display address of the first element of the array
    cout << "&myNums[0] is " << &myNums[0] << endl;
}