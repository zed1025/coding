#include<iostream>
#include<string>
using namespace std;
int main() {
    string stlString("Hello String");

    // Access the contents of the string using array syntax
    cout << "Display elements in string using array-syntax: " << endl;
    for(size_t charCount=0; charCount < stlString.length(); ++charCount) {
        cout << "character [" << charCount << "] is: ";
        cout << stlString[charCount] << endl;
    } cout << endl;

    // Access the contents of a string using iterators
    cout << "Display elements in string using iterators: " << endl;
    int charOffset = 0;
    string::const_iterator charLocator;
    for (auto charLocator = stlString.cbegin();charLocator != stlString.cend();++charLocator) {
        cout << "Character [" << charOffset ++ << "] is: ";
        cout << *charLocator << endl;
    } cout << endl;


    // Access contents as a const char*
    cout << "The char* representation of the string is: ";
    cout << stlString.c_str () << endl;

    return 0;
}