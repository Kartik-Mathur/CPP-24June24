#include <iostream>
using namespace std;

int countDigits(int n, int digit) {
	int ans = 0;
	while (n > 0) {
		int ld = n % 10;
		if (ld == digit) {
			ans++;
		}
		n /= 10;
	}
	return ans;
}

int main() {
	int n, digit;
	cin >> n >> digit;
	int ans = countDigits(n, digit);
	cout << ans << endl;

	return 0;
}
















