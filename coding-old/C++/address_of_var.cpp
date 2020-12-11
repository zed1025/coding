#include<iostream>
using namespace std;

int main() {
    int age = 40;
    const double pi = 3.14;

    // use & to find the address in memory
    cout << "int age is located at: " <<&age << endl;
    cout << "constant double pi is located at: " << &pi << endl;

    //intro to pointers
    int *pointsToInt = &age;
    cout << "pointsToInt points to age now\n";
    cout << "pointsToInt = " << pointsToInt << endl;

    int dogs = 8;
    pointsToInt = &dogs;
    cout << "pointsToInt now points to dogs\n";
    cout << "pointsToInt = " << pointsToInt << endl;


    //one last interesting thing
    cout << "sizeof(pointsToInt) = " << sizeof(pointsToInt) << endl;
    cout << "sizeof(*pointsToInt) = " << sizeof(*pointsToInt) << endl;

    char *pointsToChar = NULL;
    cout << "sizeof(pointsToChar) = " << sizeof(pointsToChar) << endl;
    //The sizeof() a pointer is hence\
    dependent on the compiler and the operating system the program has been compiled\
    for and is not dependent on the nature of the data being pointed to
}