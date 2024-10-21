#include <iostream>
using namespace std;

int main() {

	cout << (5 * 7 + 3 * 9) % 4 << endl;
	cout << (5 % 4 * 7 % 4 + 3 * 9) % 4 << endl;
	cout << ((5 % 4 * 7 % 4) % 4 + (3 % 4 * 9 % 4) % 4) % 4 << endl;

	// string key = "KARTIK MATHUR";

	// int mul = 1;

	// int ans = 0;

	// for (int i = 0; i < key.size(); ++i)
	// {
	// 	ans += (key[i] % 7) * mul % 7;
	// 	mul *= 37;
	// 	mul %= 7;
	// 	ans %= 7;
	// }
	// ans %= 7;
	// cout << ans << endl;

	return 0;
}
















