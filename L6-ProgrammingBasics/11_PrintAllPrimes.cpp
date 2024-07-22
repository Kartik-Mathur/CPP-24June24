#include <iostream>
using namespace std;

bool isPrime(int n) {
	for (int i = 2 ; i < n ; i++) {
		if (n % i == 0) {
			return false;
		}
	}

	return true;
}

void printAllPrimes(int n) {
	for (int i = 2; i <= n; ++i)
	{
		if (isPrime(i)) { // agar i prime hai toh print kardo
			cout << i << " ";
		}
	}
	cout << endl;
}

int main() {

	int n;
	cin >> n;

	printAllPrimes(n);

	return 0;
}
















