#include<iostream>
using namespace std;

int main() {
    int nums[] = {1, 3, 4, 6, 75, 3, 23};
    for(int x: nums) {
        cout << x << " ";
        x+=1;   // this wont change the value of the numbers in array
    } cout << endl;
    for(int x: nums) {
        cout << x << " ";
    } cout << endl;

    //simplifying using auto keyword
    for(auto x: nums) {
        cout << x << " ";
    } cout << endl;

    //NOTE: Hence this style of for loop is read-only.
}