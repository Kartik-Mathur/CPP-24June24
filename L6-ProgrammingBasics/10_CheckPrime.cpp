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

int main() {

	if (isPrime(170)) {
		cout << "Prime hai\n";
	}
	else {
		cout << "Prime nahi hai\n";
	}


	return 0;
}
















