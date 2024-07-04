#include <iostream>
#include <climits> // For using INT_MIN and INT_MAX
using namespace std;

int main() {

	int n, largest, i, no;

	largest = INT_MIN; // INT_MIN: -2^31
	cin >> n;

	i = 1; // Initialisation
	while (i <= n) {	// Condition Check

		cin >> no;

		if (no > largest) {
			largest = no;
		}


		i = i + 1; // Updation Condition
	}

	// Print the largest
	cout << "Largest Number : " << largest << '\n';

	return 0;
}
















