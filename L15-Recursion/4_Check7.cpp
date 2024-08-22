#include <iostream>
using namespace std;

bool is7Present(int*a, int n) {
	// base case
	if (n == 0) {
		return false;
	}

	// recursive case
	if (a[0] == 7) return true;

	return is7Present(a + 1, n - 1);
}

int main() {

	int a[] = {1, 2, 7, 4, 5};
	int n = sizeof(a) / sizeof(int);


	return 0;
}
















