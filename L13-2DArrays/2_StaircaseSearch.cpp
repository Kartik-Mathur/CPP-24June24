#include <iostream>
using namespace std;

bool stairCaseSearch(int a[][4], int n, int m, int key) {
	int i = 0, j = m - 1;
	while (i<n and j >= 0) {
		if (a[i][j] == key) {
			cout << "Found key at " << i << ", " << j << endl;
			return true;
		}
		else if (a[i][j] > key) {
			j--;
		}
		else {
			i++;
		}
	}

	return false;
}


int main() {

	int a[][4] = {
		{1, 2, 3, 4},
		{5, 6, 10, 15},
		{7, 11, 13, 16},
		{9, 12, 14, 20},
	};

	if (!stairCaseSearch(a, 4, 4, 200)) {
		cout << "Key Not Found\n";
	}

	return 0;
}
















