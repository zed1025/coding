//concatenation of strings
#include<iostream>
#include<string>
using namespace std;
int main() {
    string s1("Hello");
    string s2(" String!");

    //concatenation
    s1 += s2;
    cout << s1 << endl << endl;

    string s3(" Fun is not needing to use pointers!");
    s1.append(s3);
    cout << s1 << endl << endl;

    const char* constCStyleString = " You however still can!";
    s1.append(constCStyleString);
    cout << s1 << endl;

    return 0;
}