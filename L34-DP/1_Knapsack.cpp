#include <iostream>
using namespace std;

int knapsack(int *price, int *weight, int n, int capacity, int dp[][100]) {
	// base case
	if (n == 0 || capacity == 0) {
		return dp[n][capacity] = 0;
	}

	if (dp[n][capacity] != -1) {
		return dp[n][capacity];
	}

	// recursive case
	int op1 = 0, op2 = 0;
	if (capacity >= weight[n - 1]) {
		op1 = price[n - 1] + knapsack(price, weight, n - 1, capacity - weight[n - 1], dp);
	}
	op2 = knapsack(price, weight, n - 1, capacity, dp);

	return dp[n][capacity] = max(op1, op2);
}

int bottomUp(int *price, int *weight, int N, int capacity) {
	int dp[100][100] = {0};

	for (int n = 1; n <= N; ++n)
	{
		for (int cap = 1; cap <= capacity; ++cap)
		{
			int op1 = 0, op2 = 0;

			if (cap >= weight[n - 1]) {
				op1 = price[n - 1] + dp[n - 1][cap - weight[n - 1]];
			}
			op2 = dp[n - 1][cap];

			dp[n][cap] = max(op1, op2);
		}
	}

	for (int n = 0; n <= N; ++n)
	{
		for (int cap = 0; cap <= capacity; ++cap)
		{
			cout << dp[n][cap] << " ";
		}
		cout << endl;
	}

	return dp[N][capacity];
}

int main() {

	int price[] = {2, 6, 3, 5};
	int weight[] = {1, 2, 3, 4};

	int n = sizeof(price) / sizeof(int);

	int dp[100][100];
	memset(dp, -1, sizeof dp);

	cout << knapsack(price, weight, n, 5, dp) << endl;
	cout << bottomUp(price, weight, n, 5) << endl;

	return 0;
}
















