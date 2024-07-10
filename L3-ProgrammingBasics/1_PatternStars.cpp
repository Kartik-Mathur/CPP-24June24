#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		// 1. Print i times star
		for (int stars = 1; stars <= i; ++stars)
		{
			cout << "*";
		}

		// 2. Print ' '
		cout << " ";

		// 3. Print n-i+1 times star
		for (int stars = 1; stars <= n - i + 1; ++stars)
		{
			cout << "*";
		}

		// 4. Print ' '
		cout << " ";

		// 5. Print n-i+1 times star
		for (int stars = 1; stars <= n - i + 1; ++stars)
		{
			cout << "*";
		}

		// 6. Print ' '
		cout << " ";

		// 7. Print i times star
		for (int stars = 1; stars <= i; ++stars)
		{
			cout << "*";
		}

		cout << endl;
	}



	return 0;
}
















