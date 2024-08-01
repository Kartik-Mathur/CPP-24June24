#include <iostream>
using namespace std;

int factorial(int n) {
	int ans = 1;
	for (int i = 1; i <= n; ++i)
	{
		ans *= i;
	}
	return ans;
}

int ncr(int n, int r) {
	int f_n = factorial(n);
	int f_r = factorial(r);
	int f_nr = factorial(n - r);

	return f_n / (f_r * f_nr);
}

int main() {

	int n;
	cin >> n;
	for (int row = 0; row <= n - 1; ++row)
	{
		for (int r = 0; r <= row; ++r)
		{
			int term = ncr(row, r);
			cout << term << " ";
		}
		cout  << endl;
	}


	return 0;
}
















