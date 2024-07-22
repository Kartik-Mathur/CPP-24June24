#include <iostream>
using namespace std;

int main() {

	int a = -10;

	if (a > 0) {
		cout << "Hello\n";
	}
	else {
		cout << "World\n";
	}

	// Syntax:
	// (condition) ? (if_condition_true) : (if_condition_false);
	(a > 0) ? cout << "Hello\n" : cout << "World\n";
	// We can also assign value using this tertiary operator
	bool ans;
	int x = 11;
	ans = ( (x % 2 == 0)  ? true  : false );
	if (ans) {
		cout << "Even hai\n";
	}
	else {
		cout << "Odd hai\n";
	}
	return 0;
}
















