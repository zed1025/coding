/*
    O(n) sorting algorithm
*/

#include<iostream>
using namespace std;

int max_element(int *arr, int n) {      // O(n) time complexity
    int temp = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i] > temp) temp = arr[i];
    }
    return temp;
}

int* counting_sort(int *arr, int n) {
    int m = max_element(arr, n)+1;
    //int new_arr[m];       //this causes error because this is a local variable declared statically, once this function goes out of scope the pointer returned(which contains the base address of this array) becomes invalid(dangling pointer)
    //solution is to allocate memory dynamically
    int* new_arr = new int[m];
    
}


int main() {
    int n;
    cout << "Enter length of array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter array: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    //print the array after calling the function

    return 0; 
}