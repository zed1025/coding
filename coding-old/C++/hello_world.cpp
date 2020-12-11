#include<iostream>
#include<cmath>

// this using keyword can even be placed inside the main function
// using namespace std;

int main() {
    using std::cout;
    using std::endl;

    cout << "Hello World\n";

    // single line comment
    /*
        multi
        line
        comment
     */

    // chunking seperator( ' ), improves readibility, c++14 
    int num = 23'900;
    cout << num << endl;
    

    //writing code on multiple lines using '\'
    cout << "My " \
    "name is Amit " \
    "Kumar" << endl;
    //another example
    cout << 2 \
    + 2 \
    << endl;
    
}