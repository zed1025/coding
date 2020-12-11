//different ways of instantiating a list
#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main() {
    // instantiate an empty list
    list<int> linkInts;

    // instantiate a list with 10 integers
    list<int> listWith10Integers(10);

    // instantiate a list with 4 integers, each value 99
    list<int> listWith4IntegerEach99 (4, 99);

    // create an exact copy of an existing list
    list<int> listCopyAnother(listWith4IntegerEach99);

    // a vector with 10 integers, each 2017
    vector<int> vecIntegers(10, 2017);

    // instantiate a list using values from another container
    list<int> listContainsCopyOfAnother(vecIntegers.cbegin(), vecIntegers.cend());

    return 0;
}