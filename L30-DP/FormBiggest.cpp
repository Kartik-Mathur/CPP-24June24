#include <iostream>
using namespace std;

int main() {

	// int a[] = {999, 9009, 990, 99, 9};
	// 9,99,999,990,9009 : 9999999909009
	string a[] = {"999", "9009", "99", "90", "990"};
	int n = 5;
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - 1 - i; ++j)
		{
			string no1 = a[j] + a[j + 1];
			string no2 = a[j + 1] + a[j];
			// cout << "Comparing: " << no1 << ", " << no2 << endl;
			if (no1 > no2) {
				swap(a[j], a[j + 1]);
			}
		}
	}

	for (int i = n - 1; i >= 0; --i)
	{
		cout << a[i];
	}
	cout << endl;



	return 0;
}
















