#include<iostream>
using namespace std;

union SimpleUnion {
    int num;
    char alphabet;
};

struct ComplexType {
    /**
     * This combination of a
struct comprising an enumeration used to hold type information and a union used to
hold value is a popular application of the union.

     */

    enum DataType {
        Int, Char
    } Type;

    union Value {
        int num;
        char alphabet;

        Value() {}
        ~Value() {}
    } value;
};


void DisplayComplexObject(const ComplexType& obj) {
    switch (obj.Type) {
        case ComplexType::Int:
            cout << "Union contains number: " << obj.value.num << endl;
            break;
        case ComplexType::Char:
            cout << "Union contains character: " << obj.value.alphabet << endl;
            break;
    }
}

int main() {
    SimpleUnion u1, u2;
    u1.num = 2100;
    u2.alphabet = 'C';

    cout << "sizeof(u1) containing integer: " << sizeof(u1) << endl;
    cout << "sizeof(u2) containing character: " << sizeof(u2) << endl;

    ComplexType myData1, myData2;
    myData1.Type = ComplexType::Int;
    myData1.value.num = 2017;

    myData2.Type = ComplexType::Char;
    myData2.value.alphabet = 'X';

    DisplayComplexObject(myData1);
    DisplayComplexObject(myData2);

    return 0;
}