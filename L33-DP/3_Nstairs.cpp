#include <iostream>
#include <vector>
using namespace std;

#define vvi(a,n,m,val) vector<vector<int> > a(n + 1, vector<int>(m + 1,val));
#define vi(a,n,val) vector<int> a(n + 1, val);

int solve(int n, int k, vector<int> &dp) {
	if (n == 0) return dp[n] = 1;
	if (n < 0) return dp[n] = 0;

	if (dp[n] != -1) return dp[n];

	int ans = 0;
	for (int i = 1; i <= k; ++i)
	{
		ans += solve(n - i, k, dp);
	}
	return dp[n] = ans;
}

int bottomUp(int n, int k) {
	vi(dp, n, 0);

	dp[0] = 1;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= k; ++j)
		{
			if (i - j < 0) break;
			dp[i] += dp[i - j];
		}
	}

	return dp[n];
}


int nstairs(int n, int k) {
	vi(dp, n, 0);

	dp[0] = dp[1] = 1;
	for (int i = 2; i <= n; ++i)
	{
		dp[i] = 2 * dp[i - 1] - ( (n - 1 - k) >= 0 ? dp[i - 1 - k] : 0);
	}

	return dp[n];
}

int main() {
	vi(dp, 100, -1);
	int n = 6, k = 4;
	cout << solve(n, k, dp) << endl;
	cout << bottomUp(n, k) << endl;
	cout << nstairs(n, k) << endl;

	return 0;
}
















