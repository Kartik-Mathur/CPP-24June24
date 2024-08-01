#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	// Print the first part
	cout << "*";
	// spaces
	int spacesCnt = n - ((n + 1) / 2 + 1);
	for (int i = 0; i < spacesCnt; ++i)
	{
		cout << " ";
	}
	// stars
	for (int stars = 1; stars <= (n + 1) / 2; ++stars)
	{
		cout  << "*";
	}
	cout << endl;

	// Print second segment
	for (int rows = 1; rows <= (n - 3) / 2; ++rows)
	{
		cout << '*';
		int spacesCnt = n - ((n + 1) / 2 + 1);
		for (int i = 0; i < spacesCnt; ++i)
		{
			cout << " ";
		}
		cout << '*';
		cout << endl;
	}

	// Third segment
	for (int stars = 1; stars <= n; ++stars)
	{
		cout << '*';
	}
	cout << endl;

	// Fourth segment
	for (int rows = 1; rows <= (n - 3) / 2; ++rows)
	{
		int spacesCnt = n - ((n + 1) / 2 + 1);
		for (int i = 0; i < spacesCnt + 1; ++i)
		{
			cout << " ";
		}
		cout << '*';

		for (int i = 0; i < spacesCnt; ++i)
		{
			cout << " ";
		}
		cout << '*';
		cout << endl;
	}


	// Fifth segment
	// stars
	for (int stars = 1; stars <= (n + 1) / 2; ++stars)
	{
		cout  << "*";
	}
	// spaces
	spacesCnt = n - ((n + 1) / 2 + 1);
	for (int i = 0; i < spacesCnt; ++i)
	{
		cout << " ";
	}

	cout << "*";
	cout << endl;


	return 0;
}
















