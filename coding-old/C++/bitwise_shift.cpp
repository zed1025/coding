#include<iostream>
using namespace std;

int main() {
    cout << "Enter a number: ";
    int inputNum = 0;
    cin >> inputNum;

    int halfNum = inputNum >> 1; //right shift divides by 2
    int quarterNum = inputNum >> 2; //here we are right shifting 2 bits
    int doubleNum = inputNum << 1; 
    int quadrupleNum = inputNum << 2;

    cout << "Quarter: " << quarterNum << endl;
    cout << "Half: " << halfNum << endl;
    cout << "Double: " << doubleNum << endl;
    cout << "Double: " << doubleNum << endl;
}