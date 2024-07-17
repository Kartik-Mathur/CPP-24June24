#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	// Program to find sum of all elements
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		ans += a[i];
	}


	cout << ans << endl;

	return 0;
}
















