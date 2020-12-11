#include<iostream>
using namespace std;

int main() {
    // Request LOTS of memory space, use nothrow
    int *pointerToManyInts = new(std::nothrow) int [0xfffffff]; 

    if(pointerToManyInts) { // check pointsToManyNums != NULL
        //use allocated memory
        delete[] pointerToManyInts;
    } else {
        cout << "Memory allocation failed!\n";
    }

    return 0;
}