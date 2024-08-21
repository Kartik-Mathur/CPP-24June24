#include <iostream>
using namespace std;

int fibo(int n) {
	// basecase
	if (n == 0 || n == 1) {
		return n;
	}

	//recursive case: fibo(n)=fibo(n-1)+fibo(n-2);
	int chotiProblem1 = fibo(n - 1);
	int chotiProblem2 = fibo(n - 2);
	int badiProblem = chotiProblem1 + chotiProblem2;
	return badiProblem;
}

int fibo(int n) {
	// basecase
	if (n == 0 || n == 1) {
		return n;
	}

	return fibo(n - 1) + fibo(n - 2);
}


int main() {

	int n;
	cin >> n;
	cout << fibo(n) << endl;

	return 0;
}
















