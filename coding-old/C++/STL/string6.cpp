//reversing a string
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {
    string sampleStr ("Hello String! We will reverse you!");
    cout << "The original sample string is: " << endl;
    cout << sampleStr << endl << endl;

    reverse(sampleStr.begin(), sampleStr.end());

    cout << "After applying the std::reverse algorithm: " << endl;
    cout << sampleStr << endl;

    return 0;
}