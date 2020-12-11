#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void displayNums(vector<int> &dynArray) {
    for_each (dynArray.begin(), dynArray.end(), \
    [] (int Element) {cout << Element << " ";});
    
    cout << endl;
}

int main() {
    vector<int> myNums;
    myNums.push_back(501);
    myNums.push_back(-1);
    myNums.push_back(25);
    myNums.push_back(-35);

    displayNums(myNums);

    cout << "Sorting them in descending order" << endl;

    sort(myNums.begin(), myNums.end(), [](int n1, int n2) {return n1 > n2;});

    displayNums(myNums);
    return 0;
}