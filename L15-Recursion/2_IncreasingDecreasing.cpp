#include <iostream>
using namespace std;

void printDecreasing(int n) {
	//base case
	if (n == 0) {
		return;
	}
	// recursive case
	cout << n << " ";
	printDecreasing(n - 1);
}

void printIncreasing(int n) {
	//base case
	if (n == 0) {
		return;
	}
	// recursive case
	printIncreasing(n - 1);
	cout << n << " ";
}

int main() {

	int n = 10;

	printDecreasing(n);
	cout << endl;
	printIncreasing(n);
	cout << endl;


	return 0;
}
















