#include <iostream>
using namespace std;

int main() {
	// 3n + 2, series ke n terms print krne hai
	int n, n2;
	cin >> n >> n2;
	int termsPrinted = 0;
	for (int i = 1; termsPrinted != n; ++i)
	{
		int term = 3 * i + 2;
		if (term % n2 != 0) {
			cout << term << " ";
			termsPrinted++;
		}
	}

	cout << endl;



	return 0;
}
















