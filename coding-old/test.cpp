#include "base.cpp"

int main() {
	string s1 = "sarah";
	string s2 = "samara";
	string s3 = "amit";
	string s4 = "anit";

	cout << s1.compare(s2) << endl;
	cout << s2.compare(s3) << endl;
	cout << s3.compare(s1) << endl;
	cout << s3.compare(s4) << endl;
	bool t = s3 > s1;

	cout << t << endl;
}
