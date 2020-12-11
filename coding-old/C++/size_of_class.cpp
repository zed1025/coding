#include<iostream>
#include<string.h>
using namespace std;

class MyString {
    private: 
        char* buffer;
    public:
        MyString(const char* initString) {  //default constructor
            buffer = NULL;
            if (initString != NULL) {
                buffer = new char[strlen(initString) + 1];
                strcpy(buffer, initString);
            }
        }

        MyString(const MyString& copySource) {     //copy constructor
            buffer = NULL;
            if(copySource.buffer != NULL) {
                buffer = new char[strlen(copySource.buffer) + 1];
                strcpy(buffer, copySource.buffer);
            }
        }

        ~MyString () {
            delete[] buffer;
        }

        int getLength() {
            return strlen(buffer);
        }

        const char* getString() {
            return buffer;
        }
};


class Human {
    private:
        int age;
        bool gender;
        MyString name;

    public: 
        Human(const MyString& InputName, int InputAge, bool gender)
        :name(InputName), gender(gender), age(InputAge) {}

        int getAge() {
            return age;
        }
};

int main() {
    MyString mansName("Adam");
    MyString womansName("Eve");

    cout << "sizeof(MyString) = " << sizeof(MyString) << endl;
    cout << "sizeof(mansName) = " << sizeof(mansName) << endl;
    cout << "sizeof(womansName) = " << sizeof(womansName) << endl;

    Human firstMan(mansName, 25, true);
    Human firstWoman(womansName, 18, false);

    cout << "sizeof(Human) = " << sizeof(Human) << endl;
    cout << "sizeof(firstMan) = " << sizeof(firstMan) << endl;
    cout << "sizeof(firstWoman) = " << sizeof(firstWoman) << endl;

    return 0;
}

/**
 * Don’t be surprised that mansName and womansName have the
same size in bytes in spite of one containing “Adam” and the other “Eve” because these
are stored by MyString::buffer that is a char*, a pointer whose size is fixed at 4 bytes
(on my 32-bit system) and is independent of the volume of data being pointed to.

Try calculating the sizeof() a Human manually that is reported as 12. Lines 44, 45, and
46 tell that a Human contains an int, a bool, and a MyString. Referring to Listing 3.4
for a quick refresh on bytes consumed by inbuilt types, you know that an int consumes
4 bytes, a bool 1 byte, and MyString 4 bytes on the system I used for the examples,
which do not sum up to 12 as reported by the output. This is because of word padding
and other factors that influence the result of sizeof().
 */