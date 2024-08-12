#include <iostream>
using namespace std;

int main() {

	int a[][4] = {
		{1, 2, 3, 10},
		{4, 5, 6, 11},
		{7, 8, 9, 12},
		{13, 14, 15, 16}
	};
	bool isKeyFound = false;
	int row = sizeof(a) / sizeof(a[0]);
	int col = sizeof(a[0]) / sizeof(int), key = 20;

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if (a[i][j] == key) {
				cout << "Key Found: " << i << ", " << j << endl;
				isKeyFound = true;
				break;
			}
		}

		if (isKeyFound)
		{
			break;
		}
	}

	if (!isKeyFound) {
		cout << "Key Not Found\n";
	}


	return 0;
}
















