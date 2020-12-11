#include<iostream>
#include<cstring>

using namespace std;

/*
	Application of strstr() and strcpy()
		In this example with the help of strstr() function we first 
		searches for the occurrence of STL sub-string in s1 and after 
		that replaces that word with Strings.
*/

int main() {
	char s1[] = "Fun with STL";
	char s2[] = "STL";
	
	// Find first occurrence of s2 in s1 
	char *p = strstr(s1, s2);
	
	if(p) {
		strcpy(p, "Strings");
		cout << s1 << endl;
	} else {
		cout << "Error\n";
	}
	
}
