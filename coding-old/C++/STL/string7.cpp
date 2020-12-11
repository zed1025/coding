//string case conversion
#include<iostream>
#include<algorithm>
#include<string>    
using namespace std;
int main() {
    cout << "Please enter a string for case-convertion:" << endl;
    cout << "> ";

    string inStr;
    getline (cin, inStr);
    cout << endl;

    transform(inStr.begin(), inStr.end(), inStr.begin(), ::toupper);
    //transform(inStr.begin(), inStr.end(), inStr.begin()+7, ::toupper);
    cout << "The string converted to upper case is: " << endl;
    cout << inStr << endl << endl;

    transform(inStr.begin(), inStr.end(), inStr.begin(), ::tolower);
    cout << "The string converted to lower case is: " << endl;
    cout << inStr << endl << endl;

    return 0;
}