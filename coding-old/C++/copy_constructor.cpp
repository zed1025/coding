#include<iostream>
#include<string.h>
using namespace std;

class MyString {
    private:
        char *buffer;
    public:
        MyString(const char* initString) {  //constructor
            buffer = NULL;
            cout << "Default constructor: creating new MyString" << endl;
            if (initString != NULL) {
                buffer = new char[strlen(initString) + 1];
                strcpy(buffer, initString);

                cout << "buffer points to: " << (unsigned int*)buffer << endl;
            }
        }

        MyString(const MyString &copySource) {  //copy constructor
            buffer = NULL;
            cout << "Copy constructor: copying from MyString" << endl;
            if (copySource.buffer != NULL) {
                //allocate own buffer
                buffer = new char[strlen(copySource.buffer) + 1];

                //deep copy from source into local buffer
                strcpy(buffer, copySource.buffer);

                cout << "buffer points to: " << (unsigned int*)buffer << endl;
            }
        }

        //destructor
        ~MyString ()  {
            cout << "Invoking destructor, clearing up" << endl;
            delete[] buffer;
        }

        int getLength() {
            return strlen(buffer);
        }

        const char* getString() {
            return buffer;
        }
};

void useMyString(MyString str) {
    cout << "String buffer in MyString is " << str.getLength();
    cout << " characters long" << endl;

    cout << "buffer contains: " << str.getString() << endl;
    return;
}


int main() {
    MyString sayHello("Hello from Amit Kumar");
    useMyString(sayHello);

    return 0;
}