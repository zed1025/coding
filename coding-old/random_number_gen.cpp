#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    //setting the seed
    srand(time(NULL));

    //generating random number between 0 and 99
    cout << rand() % 100 << endl;

    //random numbers between 1 and 8
    cout << rand() % 8 + 1 << endl;

    //random number between 1985-2014
    cout << rand() % 30 + 1985 << endl; //note 1985 + 30 - 1 = 2014
}
