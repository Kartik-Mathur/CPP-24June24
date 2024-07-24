#include <iostream>
using namespace std;

void printArray(int a[], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}


void mergeSorted(int a[], int m, int b[], int n) {
	int k = m + n - 1, j = n - 1, i = m - 1;

	while (i >= 0 and j >= 0) {
		if (a[i] > b[j]) {
			a[k--] = a[i--];
		}
		else {
			a[k] = b[j];
			k--;
			j--;
		}
	}

	while (j >= 0) {
		a[k--] = b[j--];
	}
}

int main() {

	int b[] = {2, 5, 7};
	int n = sizeof(b) / sizeof(int); // b[] ke andar 3 elements hi hai

	int a[7] = {1, 3, 4, 6};
	int m = sizeof(a) / sizeof(int) - n; // because array a[] ke andar 4 elements hi hai


	mergeSorted(a, m, b, n);
	printArray(a, m + n);


	return 0;
}
















