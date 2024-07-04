#include <iostream>
using namespace std;

int main() {

	int n, ld;
	cin >> n;

	int rev_n = 0;

	while (n != 0) {

		ld = n % 10;
		rev_n = rev_n * 10 + ld;

		n /= 10;
	}

	cout << "Reversed Number : " << rev_n << endl;

	return 0;
}
















