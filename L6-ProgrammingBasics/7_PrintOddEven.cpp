#include <iostream>
using namespace std;

void printOddEven(int x) {
	if (x % 2 == 0) {
		cout << "Even\n";
	}
	else {
		cout << "Odd\n";
	}
}

int main() {

	int n = 10;

	printOddEven(n);
	printOddEven(21);
	printOddEven(22);


	return 0;
}
















