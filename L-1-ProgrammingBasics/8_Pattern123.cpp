#include <iostream>
using namespace std;

int main() {

	int n, row, no, i;
	cin >> n;

	no = 1;
	row = 1;
	while (row <= n)
	{

		i = 1;
		while (i <= row) {
			cout << no << " ";
			no = no + 1;

			i = i + 1;
		}

		cout << '\n';
		row = row + 1;
	}

	return 0;
}
















