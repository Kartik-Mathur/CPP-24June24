#include <iostream>
using namespace std;

void rotateString(char*a, int k) {
	int len = strlen(a);
	k %= len;
	// 1. Shift all the characters k times ahead from the last one
	int i = len - 1;
	while (i >= 0) {
		a[i + k] = a[i];
		i--;
	}
	cout << a << endl;

	// 2. bring the k characters to front from the len position
	i = len;
	int j = 0;
	while (j < k) {
		a[j] = a[i];
		j++;
		i++;
	}
	cout << a << endl;

	// 3. Add NULL at len position
	a[len] = '\0';
}


int main() {

	char a[100] = "Coding";

	rotateString(a, 123455);

	cout << a << endl;

	return 0;
}
















