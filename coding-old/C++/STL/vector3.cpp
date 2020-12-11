//using pop_back() to remove elements from the back
#include<iostream>
#include<vector>
using namespace std;

//function to display vectors
template <typename t>
void displayVector(const vector<t>& v) {
    for(auto it=v.cbegin(); it != v.cend(); ++it) {
        cout << *it << " ";
    }cout << endl;
}

int main() {
    vector<int> integers;
    
    // Insert sample integers into the vector:
    integers.push_back (50);
    integers.push_back (1);
    integers.push_back (987);
    integers.push_back (1001);

    cout << "Vector contains " << integers.size () << " elements: ";
    displayVector(integers);

    //erase one element at the end
    integers.pop_back();

    cout << "After a call to pop_back()" << endl;
    cout << "Vector contains " << integers.size () << " elements: ";
    displayVector(integers);

    return 0;
}