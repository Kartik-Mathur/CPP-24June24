#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a =  0, b = 1, c;
	if (n == 1) {
		cout << 0 << endl;
	}
	else if (n == 2) {
		// Print the first row manually
		cout << 0 << endl;
		// Print the second row manually
		cout << 1 << "\t" << 1 << "\t";
	}
	else {
		// Print the first row manually
		cout << 0 << endl;
		// Print the second row manually
		cout << 1 << "\t" << 1 << endl;
		// Ab 3rd row se print krna hai merko
		a = 1; b = 1;
		for (int row = 3; row <= n; ++row)
		{
			for (int stars = 1; stars <= row; ++stars)
			{
				c = a + b;
				cout << c << "\t";
				a = b;
				b = c;
			}
			cout << endl;
		}
	}
	return 0;
}
















