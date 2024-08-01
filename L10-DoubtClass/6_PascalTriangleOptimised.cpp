#include <iostream>
using namespace std;

int main() {

	int n, nT, pT;
	cin >> n;

	for (int row = 0; row < n; ++row)
	{
		int pT = 1;
		cout  << pT << " ";
		for (int r = 1; r <= row; ++r)
		{
			nT = pT * (row - r + 1) / r;
			cout << nT << " ";
			pT = nT;
		}
		cout  << endl;
	}

	return 0;
}
















