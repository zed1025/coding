#include<iostream>
using namespace std;

int main() {
    cout << "How many integers do you wish to enter? ";
    int numEntries = 0;
    cin >> numEntries;

    int *pointsToInt = new int[numEntries];

    cout << "Allocated for " << numEntries << " integers" << endl;
    for(int counter=0; counter < numEntries; ++counter) {
        cout << "Enter number " << counter << ": ";
        cin >> *(pointsToInt+counter);
    }

    cout << "Displaying all numbers entered: " << endl;
    for(int counter = 0; counter < numEntries; ++counter) {
        cout << *(pointsToInt++) << " ";
    } cout << endl;

    // return pointer to initial position
    pointsToInt -= numEntries;

    //deallocation
    delete[] pointsToInt;
}