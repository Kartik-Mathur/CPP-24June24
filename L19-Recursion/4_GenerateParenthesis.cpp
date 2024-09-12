#include <iostream>
using namespace std;

void balancedParanthesis(int n, int i, char *a, int open, int close) {
	// base case
	if (i == 2 * n) {
		a[i] = '\0';
		cout << a << endl;
		return;
	}

	// recursive case
	if (open < n) {
		a[i] = '(';
		balancedParanthesis(n, i + 1, a, open + 1, close);
	}

	if (open > close) {
		a[i] =  ')';
		balancedParanthesis(n, i + 1, a, open, close + 1);
	}
}



int main() {

	int n;
	cin >> n;

	char a[1000];

	balancedParanthesis(n, 0, a, 0, 0);

	return 0;
}
















