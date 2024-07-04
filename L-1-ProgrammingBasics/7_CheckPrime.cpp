#include <iostream>
using namespace std;

int main() {

	int n, i;
	cin >> n;

	i = 2; // Initialisation
	while (i <= n - 1) { // Condition Check

		// If n kisi bhi i se divide ho gaya toh prime nhi hoga
		if (n % i == 0) {
			cout << "Not Prime\n";
			return 0; //exit
		}

		i = i + 1; // Updation
	}

	// Agar yaha aa gaye toh matlab i == n, that means n kisi bhi i se
	// divide nhi hua
	cout << "Prime\n";

	return 0;
}
















