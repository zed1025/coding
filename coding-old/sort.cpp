#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

typedef vector<int> vi;

void print_arr(vi v) {
    for(auto i = v.begin(); i!=v.end(); ++i) {
        cout << *i << " ";
    }cout << endl;
}

void print_arr(int *arr, int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }cout << endl;
}

int main() {
    cout << "Sorting vectors: \n";
    vi v = {4,2,5,3,5,8,3};
    cout << "Before sorting: ";
    print_arr(v);
    sort(v.begin(), v.end());
    cout << "After Sorting: ";
    print_arr(v);

    cout << "\n\nSorting arrays: \n";
    int arr[7] = {4,2,5,3,5,8,3};
    cout << "Before sorting: ";
    print_arr(arr, 7);
    sort(arr, arr+7);
    cout << "After Sorting: ";
    print_arr(arr, 7);

    cout << "\n\nSorting strings:\n";
    string name = "Amit Kumar";
    cout << "Before Sorting: " << name << endl;
    sort(name.begin(), name.end());
    cout << "After sorting: " << name << endl;

    return 0;
}