#include<iostream>
#include<string>
using namespace std;
int main() {
    //you can simply initialize or assign a constant character string literal to a regular STL std::string object
    const char* consCStyleString = "Hello String";
    string strFromConst (consCStyleString);
    string strFromConst2 = consCStyleString;    //does the same thing as the previous statement
    cout << strFromConst << endl;
    cout << strFromConst2 << endl;


    // Initialize a string to the first 5 characters of another
    string strPartialCopy (consCStyleString, 5);
    cout << strPartialCopy << endl;

    //You can also initialize a string to contain a specific number of instances of a particular character
    // Initialize a string object to contain 10 'a's
    string strRepeatChars (10, 'a');
    cout << strRepeatChars << endl;

    //NO NEED TO WORRY ABOUT MEMORY MANAGEMENT WITH std::string 
}