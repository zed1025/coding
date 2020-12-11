/*
    O(n) algorithm (Kadane's Algorithm)
    The idea is to calculate, for each array position, the
        maximum sum of a subarray that ends at that position. After this, the answer
        for the problem is the maximum of those sums.
    Consider the subproblem of finding the maximum-sum subarray that ends at
        position k. There are two possibilities:
        1. The subarray only contains the element at position k.
        2. The subarray consists of a subarray that ends at position k¡1, followed by
        the element at position k.

    Sample Input: -1 2 4 -3 5 2 -5 2
    Sample Output: 10
*/
#include<iostream>
using namespace std;

int max_subarray_sum(int *arr, int n) {
    int sum = 0, best = 0;
    for(int i=0; i<n; i++) {
        sum = max(arr[i], sum+arr[i]);
        best = max(best, sum);
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