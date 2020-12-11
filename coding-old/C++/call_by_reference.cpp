#include<iostream>

void areaofcircle(double radius, double &result) {
    result = 3.14*radius*radius;
}
using namespace std;

int main() {
    double radius = 3.0, result = 0;
    areaofcircle(radius, result);
    cout << result << endl;
}