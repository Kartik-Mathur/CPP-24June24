#include<iostream>
using namespace std;
int main() {
	int n = 10;
	int arr[100];

	for (int i = 0; i < n; i++) {
		int j;
		cin >> j;
		arr[i] = j;
	}

	for (int i = n - 1; i >= 0; --i) {
		cout << arr[i] << " ";
	}


}