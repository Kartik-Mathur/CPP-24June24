#include <iostream>
using namespace std;

void solve(int *a, int n, int i, int &cnt, int target, int sum = 0) {
	if (i == n) {
		if (sum == target) cnt++;
		return;
	}

	solve(a, n, i + 1, cnt, target, sum + a[i]);
	solve(a, n, i + 1, cnt, target, sum - a[i]);
}

int main() {

	int a[100000];
	int n, target;
	cin >> n >> target;

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	int cnt = 0;
	solve(a, n, 0, cnt, target);

	cout << cnt << endl;

	return 0;
}
















