#include <iostream>
using namespace std;

void printTable(int initial_value, int final_val, int step) {
	int far, cel;
	// Print the table
	far = initial_value;

	while (far <= final_val) {

		cel = 5 * (far - 32) / 9;

		cout << far << " " << cel << '\n';

		far = far + step;
	}
}

int main() {

	// int initial_value, final_val, step;
	// cin >> initial_value >> final_val >> step;

	printTable(0, 300, 25);
	printTable(0, 300, 40);

	return 0;
}
















