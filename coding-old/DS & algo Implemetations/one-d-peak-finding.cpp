/*
    Time complexity: O(log n)
 */

#include<iostream>
#include<cmath>
using namespace std;

int find_one_d_peak(int *arr, int l, int r) {
    //if(l == r) return arr[l];
    int mid = floor((l+r)/2);
    if(arr[mid] < arr[mid-1]) return find_one_d_peak(arr, l, mid);
    else if(arr[mid] < arr[mid+1]) return find_one_d_peak(arr, mid+1, r);
    else return arr[mid];
}

int main() {
    int arr[] = {6, 7, 1, 3, 6, 1, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int peak = find_one_d_peak(arr, 0, size);

    cout << "One of the peaks is: " << peak << endl;

    return 0;
}