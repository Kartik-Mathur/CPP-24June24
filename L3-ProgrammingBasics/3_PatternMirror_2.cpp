#include <iostream>
using namespace std;

int main() {
	int n, rows, spaces, stars;
	cin >> n;

	for (rows = 1; rows <= n ; rows++) {
		// Print spaces n-rows
		for (spaces = 1; spaces <= n - rows ; spaces++) {
			cout << "  ";
		}

		// Print stars 2*rows-1
		for (stars = 1 ; stars <= 2 * rows - 1 ; stars++) {
			cout << "* ";
		}
		cout << endl;
	}
	// Pattern Mirroring
	for (rows = n - 1 ; rows >= 1 ; rows--) {
		// Print spaces n-rows
		for (spaces = 1; spaces <= n - rows ; spaces++) {
			cout << "  ";
		}

		// Print stars 2*rows-1
		for (stars = 1 ; stars <= 2 * rows - 1 ; stars++) {
			cout << "* ";
		}
		cout << endl;
	}

	return 0;
}
















