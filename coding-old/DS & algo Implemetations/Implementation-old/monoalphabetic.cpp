#include<iostream>
#include<cstring>

using namespace std;

int findIndex(char *arr/*array of alphabet*/, char ch){
	for(int i=0; i<26; i++){
		if(arr[i] == ch){
			return i;
		}
	}
	return -1;
}

void printCharFrequency(int *arr/*array of frequencies*/, int n /*size of array*/){
	char alphabet[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '};
	for(int i=0; i<27 ; i++){
		cout << alphabet[i] << ": " << arr[i] << endl;
	}
}

int main(){
	char alphabet[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '};
	char key[27] =      {'Z', 'B', 'E', 'A', 'M', 'T', 'J', 'C', 'R', 'H', 'D', 'O', 'Y', 'N', 'L', 'I', 'Q', 'F', 'K', 'V', 'S', 'G', 'P', 'U', 'W', 'X', ' '};
	
	int n;
	string plain_text;
	cout << "Enter plaintext: ";
	getline(cin, plain_text);
	n = plain_text.length();
	cout << n;
	
	char *p_text = new char[n];
	int *c_text = new int[n];
	int *index = new int[n];
	int *freq = new int[27];
	
	//converting string to char*
	p_text = strcpy(p_text, plain_text.c_str());
	
	for(int i=0; i<27; i++){
		freq[i] = 0;
	}
	
	//convertig plaintext to ciphertext
	char ch;
	int ind;
	for(int i=0; i<n; i++){
		ind = findIndex(alphabet, p_text[i]);
		index[i] = ind;
		freq[ind] += 1;
	}

	cout << "Ciphertext is: ";
	for(int i=0; i<n; i++){
		cout << key[index[i]];
	}
	cout << endl;
	
	printCharFrequency(freq, n);
	return 0;
}
