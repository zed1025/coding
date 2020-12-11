#include<iostream>
using namespace std;

int main( ) {
    //memory allocation for a single int
    int *ptrToInt = new int;
    cout << "Enter your dogs age: ";
    cin >> *ptrToInt;

    cout << "Age of your dog is: " << *ptrToInt << " stored at " << ptrToInt << endl;

    //deallocating memory
    delete ptrToInt;


    //allocation and deallocation for arrays
    int *arr = new int[10];
    delete[] arr;
}