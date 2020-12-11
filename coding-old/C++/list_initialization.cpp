#include<iostream>
using namespace std;

int main() {
    /*
    When you initialize a variable of a smaller integer type (say, short) using another of
    a larger type (say, an int), you are risking a narrowing conversion error, because the
    compiler has to fit data stored in a type that can potentially hold much larger numbers
    into a type that doesn’t have the same capacity (that is, is narrower)
    */
    int largeNum = 5000000;
    short smallNum = largeNum;  // compiles OK, yet narrowing error
    cout << "Large: " << largeNum << endl;  //5000000
    cout << "Small: " << smallNum << endl;  //19264
 

    /*
    To avoid this problem, C++11 recommends list initialization techniques that prevent
    narrowing. To use this feature, insert initialization values/variables within braces {…}.
    */
    int anotherLarge = 5000000;
    short anotherSmall{anotherLarge};    // warning
    float someFloat{ largeNum };    // warning, an integer may be narrowed
}