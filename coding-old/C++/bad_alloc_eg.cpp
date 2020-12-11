#include<iostream>
using namespace std;

int main() {
    try {
        int *pointerToManyNums = new int[0x1fffffff];
        // Use the allocated momory

        delete[] pointerToManyNums;
    } catch(bad_alloc) {
        cout << "Memory allocation failed! Ending program\n";
    }

    return 0;
}