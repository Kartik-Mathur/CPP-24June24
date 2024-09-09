#include <iostream>
using namespace std;

int stairs(int n) { // when k is fixed to 3
	if (n == 0) return 1;
	if (n < 0) return 0;

	return stairs(n - 1) + stairs(n - 2) + stairs(n - 3);
}

int nstairs(int n, int k) { // when k isn't fixed
	// base case
	if (n == 0) return 1;
	if (n < 0) return 0;

	// recursive case
	int ans = 0;
	for (int i = 1; i <= k; ++i)
	{
		ans += nstairs(n - i, k);
	}

	return ans;
}

int main() {

	cout << stairs(4) << endl;
	cout << nstairs(4, 3) << endl;


	return 0;
}
















