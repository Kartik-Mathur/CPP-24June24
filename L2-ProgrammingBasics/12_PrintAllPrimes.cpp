#include <iostream>
using namespace std;

int main() {

	int n, i, number;
	cin >> n;

	for (number = 2; number <= n; number++) {
		// Check karlo number prime hai ya nhi hai

		// if number is prime then print it else ignore it
		for (i = 2 ; i < number ; i ++) {
			if (number % i == 0) {
				break;
			}
		}

		if (i == number) {
			cout << number << " ";
		}


	}

	cout << endl;

	return 0;
}
















