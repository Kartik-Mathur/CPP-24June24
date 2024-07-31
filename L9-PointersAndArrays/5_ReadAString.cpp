#include <iostream>
using namespace std;

void readString(char *arr, int sz, char delimiter = '\n') {
	char ch;
	ch = cin.get();
	int indx = 0;

	while (ch != delimiter and indx < sz - 1) {
		arr[indx] = ch;

		ch = cin.get();
		indx++;
	}
	arr[indx] = '\0'; // At the end of string we need to add NULL character
}

int main() {

	char arr[100];
	// readString(arr, 100);
	cin.getline(arr, 10, '@');

	cout << arr << endl;

	return 0;
}



/*
		int i = 1;
		char ch;

		ch = cin.get(); // Yeh bas ek character ko read krega

		while (ch != '\n') {
			cout << i << " character: " << ch << endl;

			ch = cin.get();
			i++;
		}
	*/












