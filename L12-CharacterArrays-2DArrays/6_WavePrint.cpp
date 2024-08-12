#include <iostream>
using namespace std;

int main() {

	int a[][4] = {
		{1, 2, 3, 10},
		{4, 5, 6, 11},
		{7, 8, 9, 12},
		{13, 14, 15, 16}
	};
	int m = 4, n = 4;
	for (int col = 0; col < m; ++col)
	{
		if (col % 2 == 0) { // Column is even
			for (int row = 0; row < n; ++row)
			{
				cout << a[row][col] << " ";
			}
		}
		else { // Column is odd
			for (int row = n - 1; row >= 0; --row)
			{
				cout << a[row][col] << " ";
			}
		}
	}

	cout << endl;
	return 0;
}