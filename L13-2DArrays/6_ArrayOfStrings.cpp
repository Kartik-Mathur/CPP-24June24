#include <iostream>
using namespace std;

int main() {

	string s[5];

	s[0] = "Hello";
	s[1] = "Code";
	s[2] = "We";
	s[3] = "Hi";
	s[4] = "Code";

	for (int i = 0; i < 5; ++i)
	{
		cout << s[i] << endl;
	}

	// Another way to print
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < s[i].size(); ++j)
		{
			cout << s[i][j] << "_";
		}
		cout << endl;
	}

	return 0;
}
















