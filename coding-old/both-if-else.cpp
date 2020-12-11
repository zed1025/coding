// executing both the if and else part of an if statement
#include<iostream>
using namespace std;

int main() {
    if(1) { //try changing 1 to 0
        label_1: cout << "Amit ";

        // Jump to the else statement after 
        // executing the above statement
        goto label_2;
    } else {
        // Jump to 'if block statement' if 
        // the Boolean condition becomes false
        goto label_1;

        label_2: cout << "Kumar\n";
    }
    return 0;
}