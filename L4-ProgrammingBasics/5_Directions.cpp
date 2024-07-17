#include <iostream>
using namespace std;

int main() {

	int x = 0, y = 0;

	char ch;

	ch = cin.get();
	while (ch != '\n') {

		if (ch == 'N') y++;
		else if (ch == 'S') y--;
		else if (ch == 'E') x++;
		else if (ch == 'W') x--;

		ch = cin.get();
	}

	// Print the directions 'E','N','S','W'
	if (x >= 0) {
		// Print x times E
		for (int i = 0; i < x; ++i)
		{
			cout << 'E';
		}
	}

	if (y >= 0) {
		// Print y times 'N'
		for (int i = 0; i < y; ++i)
		{
			cout << 'N';
		}
	}
	else {
		// Print |y| times 'S', |y| because y is negative
		y = y * -1;
		for (int i = 0; i < y; ++i)
		{
			cout << 'S';
		}
	}


	// Print 'W' at the end
	if (x < 0) {
		// Print |x| times 'W', |x| because x is negative
		x = x * -1;
		for (int i = 0; i < x; ++i)
		{
			cout << 'W';
		}
	}

	cout << endl;
	return 0;
}
















