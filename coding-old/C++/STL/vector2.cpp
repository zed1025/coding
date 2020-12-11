//inserting elements at a set position using insert()
#include<iostream>
#include<vector>
using namespace std;

void displayVector(const vector<int>& inVec) {
    for(auto i=inVec.begin(); i != inVec.end(); ++i) {
        cout << *i << " ";
    } cout << endl;
}
int main() {
    // Instantiate a vector with 4 elements, each initialized to 90
    vector<int> integers(4, 90);

    cout << "The initial contents of the vector: ";
    displayVector(integers);

    // Insert 25 at the beginning
    integers.insert(integers.begin(), 25);

    // Insert 2 numbers of value 45 at the end
    integers.insert(integers.end(), 2, 45);

    cout << "Vector after inserting elements at beginning and end: ";
    displayVector(integers);

    // Another vector containing 2 elements of value 30
    vector <int> another (2, 30);

    // Insert two elements from another container in position [1]
    integers.insert(integers.begin()+1, another.begin(), another.end());

    cout << "Vector after inserting contents from another vector: ";
    cout << "in the middle:" << endl;
    displayVector(integers);

    return 0;

}