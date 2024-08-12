#include <iostream>
using namespace std;

int main() {

	int a[4][4] = {
		{1, 2, 3, 10},
		{4, 5, 6, 11},
		{7, 8, 9, 12},
		{13},
	};
	int row = sizeof(a) / sizeof(a[0]);
	int col = sizeof(a[0]) / sizeof(int);

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}
















