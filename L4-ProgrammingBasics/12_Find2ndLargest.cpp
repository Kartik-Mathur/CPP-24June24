#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 12, 13, 4, 5, 10, 14, 18, 6, 7, 15};
	int n = sizeof(a) / sizeof(int);

	// Find the first and second largest numbers: 13 and 12
	int largest, second_largest;
	largest = second_largest = a[0];

	for (int i = 1; i < n; ++i)
	{
		if (a[i] > largest) {
			second_largest = largest;
			largest = a[i];
		}
		else if (a[i] > second_largest) {
			second_largest = a[i];
		}
	}

	cout << "Second Largest : " << second_largest << endl;
	// cout << "First Largest  : " << largest << endl;


	return 0;
}
















