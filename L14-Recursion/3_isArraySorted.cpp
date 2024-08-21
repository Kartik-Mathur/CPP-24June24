#include <iostream>
using namespace std;
// Way-1
bool isSorted(int *a, int n) {
	//base case
	if (n <= 1) return true;

	//recursive case
	if (a[0] <= a[1] and isSorted(a + 1, n - 1) == true) {
		return true;
	}
	return false;
}

// Way-2
bool isSorted2(int *a, int n) {
	// base case
	if (n <= 1) return true;

	// recursive case
	if (a[n - 1] >= a[n - 2] and isSorted2(a, n - 1)) {
		return true;
	}
	return false;
}

// Way-3
bool isSorted3(int *a, int n, int i) {
	// base case
	if (i == n - 1) return true;

	//recursive case
	if (a[i] <= a[i + 1] and isSorted3(a, n, i + 1)) {
		return true;
	}
	return false;
}

int main() {

	int a[] = {1, 2, 13, 4, 5};
	int n = sizeof(a) / sizeof(int);

	if (isSorted3(a, n, 0)) {
		cout << "Sorted\n";
	}
	else {
		cout << "Not Sorted\n";
	}

	return 0;
}
















