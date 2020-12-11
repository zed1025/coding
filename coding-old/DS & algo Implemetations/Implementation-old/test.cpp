#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    char* arr = new char[n+1];
    cin >> arr;
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }cout << endl;
}