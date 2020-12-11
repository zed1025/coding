//a linear time implementation of maximum subarray problem using kadane's algorhtms
#include<iostream>
#include<limits>
using namespace std;

int MAX_SUBARRAY_SUM(int *A, int size) {
    int max_so_far = std::numeric_limits<int>::min();
    int max_ending_here = 0;
    for(int i=0; i<size; i++) {
        max_ending_here += A[i];
        if(max_so_far < max_ending_here)
            max_so_far = max_ending_here;
        if(max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int max_subarray_sum = MAX_SUBARRAY_SUM(arr, n);
    cout << "Maximum Subarray sum is: " << max_subarray_sum << endl;

    return 0;
}