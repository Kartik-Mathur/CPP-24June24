#include <iostream>
using namespace std;

int main() {

	int initial_value, final_val, step, far, cel;
	cin >> initial_value >> final_val >> step;

	// Print the table
	far = initial_value;

	while (far <= final_val) {

		// cel = (5 / 9.0) * (far - 32);
		cel = 5 * (far - 32) / 9;

		cout << far << " " << cel << '\n';

		far = far + step;
	}

	return 0;
}
















