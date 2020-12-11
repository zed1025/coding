//this program shows how iterators connect algorithms and containers
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int> intArray;

    // Insert sample integers into the array
    intArray.push_back (50);
    intArray.push_back (2991);
    intArray.push_back (23);
    intArray.push_back (9999);

    cout << "The contents of the vector are: " << endl;
    for(auto it = intArray.begin(); it!=intArray.end(); ++it) {
        cout << *it << " ";
    }cout << endl;


    // Find an element (say 2991) using the 'find' algorithm
    vector<int>::iterator it2 = find(intArray.begin(), intArray.end(), 2991);
    //check if value found
    if(it2 != intArray.end()) {
        // Determine position of element using std::distance
        int elPos = distance (intArray.begin (), it2);
        cout << "Value "<< *it2;
        cout << " found in the vector at position: " << elPos << endl;
    }

    return 0;
}