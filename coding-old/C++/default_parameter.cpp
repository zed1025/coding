#include<iostream>
using namespace std;

double areaofcircle(double radius, double pi = 3.14) {
    return pi*radius*radius;
}

//NOTE: here pi has a defualt value, so it is an optional parameter, when calling the function
//You can have multiple parameters with default values; however,\
these should all be at the tail end of the parameter list.

int main() {
    cout << "Area of circle with radius 3.0cm is " << areaofcircle(3) << " cm^2\n"; 
}