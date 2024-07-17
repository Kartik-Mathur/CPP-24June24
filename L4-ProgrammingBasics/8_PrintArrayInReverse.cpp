#include <iostream>
using namespace std;

int main() {

	int a[1000];

	int n;
	cin >> n;
	// int a[n]; Incorrect way of creating an array is this!! Don't do this

	// Take n buckets input
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	// Print n buckets in reverse order
	for (int i = n - 1; i >= 0; i--)
	{
		cout << a[i] << " ";
	}

	cout << endl;
	return 0;
}
















