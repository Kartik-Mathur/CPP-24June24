#include <iostream>
using namespace std;

void printAll7(int*a, int n, int i) {
	// base case
	if (i == n) return;
	// recursive case
	// agar ith par 7 hai toh ith index print kardo and return mat krna
	if (a[i] == 7) {
		cout << i << " ";
	}
	// Ask recursion to go and print the indexes of 7 in the remaining  array
	printAll7(a, n, i + 1);
}

int main() {

	int a[] = {7, 1, 2, 3, 7, 4, 5, 7};
	int n = sizeof(a) / sizeof(int);

	printAll7(a, n, 0);

	return 0;
}
















