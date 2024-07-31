#include <iostream>
using namespace std;

// void printArray(int x[], int n) {
void printArray(int *x, int n) {
	for (int i = 0; i < n; ++i)
	{
		// cout << *(x + i) << " ";
		cout << x[i] << " ";
	}
	cout << endl;
}

int main() {

	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = sizeof(a) / sizeof(int);

	// int *x = a; // a: Address of 0th index bucket

	printArray(a, n); // we are sending the address of 0th index bucket(i.e, integer bucket)

	return 0;
}
















