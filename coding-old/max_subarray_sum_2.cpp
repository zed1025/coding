/*
    Slight variation of the cubic time algorithms.
    Uses just two loops instead of 3
    O(n^2)
*/
#include<iostream>
using namespace std;

int max_subarray_sum(int *arr, int n) {
    int best = 0;
    for(int i=0; i<n; i++) {
        int sum=0;
        for(int j=i; j<n; j++) {
            sum += arr[j];
            best = max(best, sum);
        }
    }
    return best;
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
    int ans = max_subarray_sum(arr, n);
    cout << "Maximun subarray sum is: " << ans << endl;

    return 0; 
}