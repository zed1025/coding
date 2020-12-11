// WAP for DFA that accepts any binary string with substring 010 in it
#include<iostream>
#include<string>
#include<string.h>

using namespace std;

struct state{
    bool isFinal;
};

bool check(char* s, int n) {
    state q0, q1, q2, q3;
    q3.isFinal = true;
    q1.isFinal = false;
    q2.isFinal = false;
    q0.isFinal = false;
    state *current = &q0;
    cout << "\n\nPrintinting steps: \n";
    for(int i=0; i<n; i++) {
        if(current == &q0 && s[i] == '1') {
            cout << "Input: " << s[i] << "\n";
            cout << "Current: q0, Input: 1, Next: q0\n";
            current = &q0;
            continue;
        }
        if(current == &q0 && s[i] == '0') {
            
            cout << "Input: " << s[i] << "\n";
            cout << "Current: q0, Input: 0, Next: q1\n";
            current = &q1;
            continue;
        }
        if(current == &q1 && s[i] == '0') {
            cout << "Input: " << s[i] << "\n";
            cout << "Current: q1, Input: 0, Next: q1\n";
            current = &q1;
            continue;
        }
        if(current == &q1 && s[i] == '1') {
            cout << "Input: " << s[i] << "\n";
            cout << "Current: q1, Input: 1, Next: q2\n";
            current = &q2;
            continue;
        }
        if(current == &q2 && s[i] == '1') {
            cout << "Input: " << s[i] << "\n";
            cout << "Current: q2, Input: 1, Next: q0\n";
            current = &q0;
            continue;
        }
        if(current == &q2 && s[i] == '0') {
            cout << "Input: " << s[i] << "\n";
            cout << "Current: q2, Input: 0, Next: q3\n";
            current = &q3;
            continue;
        }
        if(current == &q3 && s[i] == '1') {
            cout << "Input: " << s[i] << "\n";
            cout << "Current: q3, Input: 0, Next: q3\n";
            current = &q3;
            continue;
        }
        if(current == &q3 && s[i] == '0') {
            cout << "Input: " << s[i] << "\n";
            cout << "Current: q3, Input: 1, Next: q3\n";
            current = &q3;
            continue;
        }
    }
    //cout << "\n" << current->isFinal << endl;
    if(current->isFinal == true){
        return true;
    }else {
        return false;
    }
}


int main() {
    char* input;
    int len;
    
    cout << "This DFA accepts all string with 010 as substring\n";
    cout << "Enter string length: ";
    cin >> len;
    input = new char[len+1];
    cin >> input;

    cout << "Input is: ";
    for(int i=0; i<len; i++) {
        cout << input[i] << " ";
    }cout << endl;

    bool result = check(input, len);
    if(result) {
        cout << input << " accepted"<< endl;
    } else {
        cout << input << " rejected\n";
    }

    return 0;
}