//finding elements in a set/multiset
#include<set>
#include<iostream>
using namespace std;
int main() {
    set<int> setInts{ 43, 78, -1, 124 };
    // Display contents of the set to the screen
    for(auto i=setInts.begin(); i != setInts.end(); ++i) {
        cout << *i << " ";
    } cout << endl;

    // Try finding an element
    auto i = setInts.find(-1);

    //check if found ...
    if (i != setInts.end()) {
        cout << *i <<" element found\n";
    } else {
        cout <<  *i << " element not found\n";
    }

    // finding another
    i = setInts.find (12345);
    //check if found ...
    if (i != setInts.end()) {
        cout << *i <<" element found\n";
    } else {
        cout << *i <<" element not found\n";
    }
    
    return 0;
}