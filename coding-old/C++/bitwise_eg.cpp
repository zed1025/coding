#include<iostream>
#include<bitset>

using namespace std;

int main() {
    cout << "Enter a number between (1 and 255): ";
    unsigned short inputNum;
    cin >> inputNum;

    bitset<8> inputBits(inputNum);
    cout << inputNum << " in binary is " << inputBits << endl;

    // bitwise not
    bitset<8> bitwiseNOT = (~inputNum);
    cout << "Logical NOT(~)" << endl;
    cout << "~ " << inputBits << " = " << bitwiseNOT << endl;

    // bitwise AND
    cout << "Logical AND(&)\n";
    bitset<8> bitwiseAND = (0x0F & inputNum); //0x0F is hex for 0001111
    cout << "0001111 & " << inputBits << " = " << bitwiseAND << endl; 


    // bitwise OR
    cout << "Logical OR(|)\n";
    bitset<8> bitwiseOR = (0x0F | inputNum);
    cout << "00001111 | " << inputBits << " = " << bitwiseOR << endl;

    // bitwise XOR
    cout << "Bitwise XOR(^)\n";
    bitset<8> bitwiseXOR = (0x0F ^ inputNum);
    cout << "00001111 | " << inputBits << " = " << bitwiseOR << endl;
}