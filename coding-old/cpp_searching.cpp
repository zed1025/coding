#include<iostream>
#include<vector>
#include<algorithm>

/*
    The following functions are based on binary search. They assume that the input array is sorted
    1. lower_bound: returns a pointer to the first array element whose value is at least x
    2. upper_bound: returns a pointer to the first array element whose value is larger than x
    3. equal_range: returns both the above pointers
*/

using namespace std;

void print_arr(int *arr, int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }cout << endl;
}

int main() {
    int arr[] = {23, 333, 44, 1, 89, 90, 333, 2, 7};
    print_arr(arr, 8);

    //sorting the array
    sort(arr, arr+8);
    cout << "sorted array: ";
    print_arr(arr, 8);

    

    //following code checks if the array arr contains an element 333
    auto k = lower_bound(arr, arr+8, 333)-arr;
    if(k < 8 && arr[k] == 333) {
        cout << "Found!\n";
    }



    //the following code counts the number of elements whose value is 333
    auto a = lower_bound(arr, arr+8, 333);
    auto b = upper_bound(arr, arr+8, 333);
    cout << b-a << "\n";



    //the above code becomes shorter using equal_range
    auto r = equal_range(arr, arr+8, 333);
    cout << r.second-r.first << "\n";



    //checking what these functions return when the value is not present
    auto p = lower_bound(arr, arr+8, 88);
    auto q = upper_bound(arr, arr+8, 88);
    cout << "lower_bound: " << *p << "\nupper_bound: " << *q << endl;
    return 0;
}