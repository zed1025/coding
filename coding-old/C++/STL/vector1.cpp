//different ways of instantiating a vector
#include<iostream>
#include<vector>
using namespace std;
int main() {
    // vector of integers
    vector<int> integers;

    // vector initialized using C++11 list initialization
    std::vector<int> initVector{ 202, 2017, -1 };

    // Instantiate a vector with 10 elements (it can still grow), initialised to 0
    std::vector<int> tenElements (10);

    // Instantiate a vector with 10 elements, each initialized to 90
    std::vector<int> tenElemInit (10, 90);

    // Initialize vector to the contents of another
    std::vector<int> copyVector (tenElemInit);

    // Vector initialized to 5 elements from another using iterators
    std::vector<int> partialCopy (tenElements.cbegin(),tenElements.cbegin() + 5);

    return 0;
}