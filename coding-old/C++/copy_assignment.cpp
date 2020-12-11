//overloading the copy assignment operator =
#include<iostream>
#include<string.h>
using namespace std;

class MyString {
    private:
        char* buffer;
    public:
        MyString(const char* initialInput) {
            if(initialInput != NULL) {
                buffer = new char[strlen(initialInput)+1];
                strcpy(buffer, initialInput);
            } else {
                buffer = NULL;
            }
        }

        //copy assignment operator
        MyString& operator =(const MyString& copySource) {
            if((this != &copySource) && (copySource.buffer != NULL)) {
                if(buffer!=NULL) {
                    delete[] buffer;
                }

                //endure deep copy by first allocating own buffer
                buffer = new char[strlen(copySource.buffer) + 1];

                //copy from source into the local buffer
                strcpy(buffer, copySource.buffer);
            }
            return *this;
        }

        operator const char*() {
            return buffer;
        }

        ~MyString() {
            delete[] buffer;
        }
};

int main() {

    MyString string1("Hello ");
    MyString string2("World\n");

    cout << "Before assignment: " << endl;
    cout << string1 << string2;
    string2 = string1;
    cout << "After assignment string2=string1: ";
    cout << string1 << string2 << endl;

    return 0;
}