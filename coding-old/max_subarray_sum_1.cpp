/*
    Brute Force 
    O(n^3)
*/
#include<iostream>

using namespace std;

int max_subarray_sum(int *arr, int len) {
    int best = 0;
    for(int i=0; i<len; i++) {
        for(int j=i; j<len; j++) {
            int sum=0;
            for(int k=i; k<=j; k++) {
                sum += arr[k];
            }
            best = max(sum, best);
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