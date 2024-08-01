#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int row = 1; row <= n; ++row)
	{
		for (int stars = 1; stars <= row; ++stars)
		{
			cout << "*\t";
		}
		cout << endl;
	}

	return 0;
}
















