#include<iostream>

using namespace std;

int findIndex(char *arr, char ch){
	for(int i=0; i<26; i++){
		if(arr[i] == ch){
			return i;
		}
	}
	return -1;
}

int main(){
	char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int n; //number of letters in plaintext and ciphertext
	int k; //key
	cout << "Enter number of letters in plaintext: ";
	cin >> n;
	cout << "Enter key: ";
	cin >> k;
	
	char *plain = new char[n];
	int *indexes = new int[5];
	
	char ch;
	int index;
	
	//reading the plaintext
	cout << "Enter plaintext: ";
	for(int i=0; i<n; i++){
		cin >> ch;
		index = findIndex(alphabet, ch);
		indexes[i] = index;
		plain[i] = alphabet[index];
	}
	
	for(int i=0; i<n; i++){
		index = (indexes[i] + k)%26;
		
		plain[i] = alphabet[index];
	}
	
	cout << "Ciphertext: ";
	for(int i=0; i<n; i++){
		cout << plain[i];
	}
}
