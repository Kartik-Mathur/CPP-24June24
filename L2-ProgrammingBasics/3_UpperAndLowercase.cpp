#include <iostream>
using namespace std;

int main() {

	char ch;
	cin >> ch;
	if (ch >= 'A' && ch <= 'Z') {
		cout << "Uppercase\n";
	}
	else if (ch >= 'a' and ch <= 'z') {
		cout << "Lowercase\n";
	}
	else {
		cout << "Entered character isn't an alphabet\n";
	}
	return 0;
}

