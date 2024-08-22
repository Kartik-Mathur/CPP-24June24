#include <iostream>
using namespace std;

void bubbleSort(int *a, int n, int i) {
	// base case
	if (i == n - 1) {
		return ;
	}

	// recursive case
	for (int j = 0; j < n - 1 - i; ++j)
	{
		if (a[j] > a[j + 1]) {
			swap(a[j], a[j + 1]);
		}
	}

	bubbleSort(a, n, i + 1);
}

void bubbleSort1(int *a, int n, int i, int j) {
	// base case
	if (i == n - 1) {
		return ;
	}

	// recursive case
	if (j < n - i - 1) {
		// j ka loop will keep running
		if (a[j] > a[j + 1]) {
			swap(a[j], a[j + 1]);
		}
		bubbleSort1(a, n, i, j + 1);
	}
	else { // j ka loop ends
		// i changes and j starts from 0
		bubbleSort1(a, n, i + 1, 0);
	}
}


int main() {

	int a[] = {5, 4, 3, 2, 1};
	int n = sizeof(a) / sizeof(int);

	bubbleSort1(a, n, 0, 0);
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















