#include <iostream>
#include <cstring>
using namespace std;

int fibo(int n) {
	if (n == 0 || n == 1) {
		return n;
	}

	return fibo(n - 1) + fibo(n - 2);
}

int topDown(int n, int *dp) {
	if (n == 0 || n == 1) {
		dp[n] = n; // return se pehle store
		return n;
	}

	// DP ke array ko check karo, kahi answer already hai toh nhi
	if (dp[n] != -1) {
		return dp[n];
	}

	return dp[n] = topDown(n - 1, dp) + topDown(n - 2, dp);
}

int bottomUp(int n) {
	int dp[10000];

	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n; ++i)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	return dp[n];
}

int main() {

	int n;
	cin >> n;
	int dp[1000];
	memset(dp, -1, sizeof dp); // Array ke andar har bucket par -1 daal dega

	cout << topDown(n, dp) << endl;
	cout << bottomUp(n) << endl;
	// for (int i = 0 ; i <= n ; i++) {
	// 	cout << dp[i] << " ";
	// }
	// cout << endl;
	cout << fibo(n) << endl;

	return 0;
}
















