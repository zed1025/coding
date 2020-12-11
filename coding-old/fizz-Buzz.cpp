/*
    Amit Kumar(HackerEarth Practise Test)
    11 October 2018, @11:40AM

    Write a program that prints the numbers in the given range.
    But for multiples of three print “Fizz” instead of the number and for the multiples of five print “Buzz”.
    For numbers which are multiples of both three and five print “FizzBuzz”. Print a new line after each string or number.

    Input Format First line will be the number of testcases, T. Next line will have T integers, denoted by N.

    Output Format For each testcase, print the number from 1 to N. But follow the rules given in the problem statement.

    Constraints
    1 <= T <= 10
    N is an integer.
*/

#include<iostream>

using namespace std;

bool multiple3(int n){ return (n%3 != 0)?false:true; }
bool multiple5(int n){ return (n%5 != 0)?false:true; }
//bool multiple35(int n){ return ((n%3 == 0) && (n%5 == 0))?true:false; }

int main(int argc, char const *argv[]) {
    int T;
    cin >> T;
    int *arrT = new int[T];
    for(int i=0; i<T; i++){
        cin >> arrT[i];
        for(int j=1; j<=arrT[i]; j++){
            if(multiple3(j)){
                if(multiple5(j)){
                    //j is multiple of both 3 and 5
                    cout << "FizzBuzz" << endl;
                } else {
                    cout << "Fizz" << endl;
                }

            }else if(multiple5(j)){
                cout << "Buzz" << endl;
            }else{
                cout << j << endl;
            }
        }
    }


    return 0;
}
