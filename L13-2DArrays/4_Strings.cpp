#include <iostream>
using namespace std;

int main() {

	string s;
	s = "Hello"; // Assignment
	cout << s << endl;

	s = "World"; // Updation
	cout << s << endl;

	for (int i = 0; i < s.size(); ++i)
	{
		cout << s[i] << "-";
	}
	cout << endl;


	// Concatenation
	string s1 = "Coding";
	string s2 = "Blocks";
	string s3 = s1 + " " + s2;
	cout << s3 << endl;



	return 0;
}
















