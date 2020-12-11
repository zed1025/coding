#include<iostream>
#include<string>
#include<bitset>

//denotes the size of the bitset. Note that the bitset size should be fixed at runtime. it cannot be changed at compile time
#define SEESE 16

using namespace std;

const int size = 16;

int main(){
    //declaring bs with capacity equal to "size"
    bitset<SEESE> bs;
    //bitset with 10 bits
    bitset<10> bs2(45);
    //bitset with 13 bits
    bitset<13> bs3("1100101");

    cout << "bs: " << bs << endl;
    cout << "bs1: " << bs2 << endl;
    cout << "bs2: " << bs3 << endl;
    cout << endl;

    //functions on bitset
    //returns number of "set" bits in the bitset
    cout << "bs has " << bs.count() << " set bits" << endl;

    //returns the number of bits the bitset
    cout << bs.size() << endl;
    cout << bs2.size() << endl;
    cout << bs3.size() << endl;

    //test() function
    for(int i=0; i<bs2.size(); i++){
        cout << bs2.test(i) << endl;
    }


    cout << endl;
    // any function return true if at least 1 bit is set
    cout << "ba2.any() return " << bs2.any() << endl;

    //none function returns true, if none of the bit is set
    cout << "bs3.none() return " << bs2.none() << endl;

    cout << "bs.set() sets all bits to 1: " << bs.set() << endl;

    // bset.set(pos, b) makes bset[pos] = b
    cout << bs2.set(4, 0) << endl;

    // bset.set(pos) makes bset[pos] = 1  i.e. default
    // is 1
    cout << bs2.set(4) << endl;

    // reset function makes all bits 0
    cout << bs2.reset(2) << endl;
    cout << bs2.reset() << endl;

    // flip function flips all bits i.e.  1 <-> 0
    // and  0 <-> 1
    cout << bs2.flip(2) << endl;
    cout << bs2.flip() << endl;

    // Converting decimal number to binary by using bitset
    int num = 100;
    cout << "\nDecimal number: " << num
         << "  Binary equivalent: " << bitset<8>(num);

    return 0;
}
