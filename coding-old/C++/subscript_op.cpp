#include<iostream>
#include<string.h>
using namespace std;

class MyString {
    private:
        char* buffer;

        //private default constructor
        MyString() {}
    public:
        //constructor
        MyString(const char* initialInput) {
            if(initialInput != NULL) {
                buffer = new char[strlen(initialInput) + 1];
                strcpy(buffer, initialInput);
            }else {
                buffer = NULL;
            }
        }

        //copy constructor
        MyString(const MyString& copySource);

        //copy assignment operator
        MyString& operator =(const MyString& copySource);

        int GetLength() const{
            return strlen(buffer);
        }

        const char& operator[] (int index) const {
            if(index < GetLength()) {
                return buffer[index];
            }
        }

        //destructor
        ~MyString() {
            if(buffer != NULL) {
                delete[] buffer;
            }
        }


        operator const char*() {
            return buffer;
        }
};

int main() {

    cout << "Type a statement: ";
    string strInput;
    getline(cin, strInput);

    MyString youSaid(strInput.c_str());
    
    cout << "Using operator[] for displaying your input: " << endl;
    for(int index=0; index < youSaid.GetLength(); ++index) {
        cout << youSaid[index] << " ";
    }cout << endl;

    cout << "Enter index 0 - " << youSaid.GetLength() - 1 << ": ";
    int index = 0;
    cin >> index;
    cout << "Input character at zero-based position: " << index;
    cout << " is: " << youSaid[index] << endl;

    return 0;
}