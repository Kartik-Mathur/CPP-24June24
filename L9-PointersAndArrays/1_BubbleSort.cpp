#include <iostream>
using namespace std;

void bubbleSort(int *a, int n) { // int a[] is same as int*a in arguments
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - i - 1; ++j)
		{
			if (*(a + j) > *(a + j + 1)) { // *(a+j) == a[j]
				swap(*(a + j), *(a + j + 1));
			}
		}
	}
}

void printArray(int *x, int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << *(x + i) << " ";
	}
	cout << endl;
}

int main() {

	int a[] = {5, 4, 3, 2, 1};
	int n = sizeof(a) / sizeof(int);

	bubbleSort(a, n);
	printArray(a, n);

	return 0;
}
















