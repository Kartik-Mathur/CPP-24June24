#include <iostream>
using namespace std;

int factorial(int n) {
	// base case
	if (n == 0) {
		return 1;
	}
	// recursive case
	// factorial(n) = n * factorial(n-1);
	int chotiProblem = factorial(n - 1); //Assumption ki recursion dega ans
	int badiProblem = n * chotiProblem;
	return badiProblem;
}


int factorial(int n) {
	// base case
	if (n == 0) {
		return 1;
	}
	// recursive case
	return n * factorial(n - 1);
}


int main() {

	int n;
	cin >> n;

	cout << factorial(n) << endl;

	return 0;
}
















