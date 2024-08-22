#include <iostream>
using namespace std;

string keys[10] = {
	"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"
};

void intToString(int n) {
	//base case
	if (n == 0) {
		return;
	}

	// recursive case
	int ld = n % 10;
	intToString(n / 10);
	cout << keys[ld] << " ";
}

int main() {

	int n = 2048;
	intToString(n);
	cout << endl;

	return 0;
}
















