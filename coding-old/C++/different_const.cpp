#include<iostream>
using namespace std;

void calcArea(const double* const ptrPi, // const pointer to const data
              const double* const ptrRadius, // i.e. no chage allowed
              double* const ptrArea) {// can change data pointed to
    //check pointers for validity before using
    if(ptrPi && ptrRadius && ptrArea) {
        *ptrArea = (*ptrPi) * (*ptrRadius) * (*ptrRadius);
    }
}

int main() {
    const double Pi = 3.14;
    double radius = 3;
    double area = 0;

    calcArea(&Pi, &radius, &area);

    cout << "Area is " << area << endl;
    return 0;
}