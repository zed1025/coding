#include<iostream>

using namespace std;

int main() {
    int a = 234;
    int b;
    char ch = 'v';
    bool bul = false;

    // NOTE: all sizes are in bytes
    cout << "int:initialized = " << sizeof(a) << endl;
    cout << "int:uninitialized = " << sizeof(b) << endl;
    cout << "char = " << sizeof(ch) << endl;
    cout << "bool = " << sizeof(bul) << endl;
}