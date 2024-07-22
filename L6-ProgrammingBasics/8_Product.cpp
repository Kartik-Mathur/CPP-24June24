#include <iostream>
using namespace std;

int multiply(int x, int y) {
	int ans = x * y;
	return ans;
}

int sum(int a, int b) {
	return a + b;
}

int subtract(int a, int b) {
	return a - b;
}


int main() {

	int a = 13, b = 10;

	int product = multiply(a, b);

	cout << product << endl;

	cout << multiply(13, 147) << endl;
	cout << sum(10, 20) << endl;
	cout << subtract(10, 20) << endl;


	return 0;
}
















