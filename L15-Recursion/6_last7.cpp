#include <iostream>
using namespace std;

int last7(int *a, int n, int i) {
	// base case
	if (i == n) return -1;
	// recursive case
	if (a[i] == 7) {
		int aageIndx = last7(a, n, i + 1);
		if (aageIndx == -1) return i;
		return aageIndx;
	}
	else {
		int indx = last7(a, n, i + 1);
		// agar indx aaya 7 ka toh vo ans hoga
		if (indx != -1) return indx;
		// agr aage 7 nhi hai toh -1 aaega, that means whi -1 return krdo because 7 nahi milla
		return indx;
		// return last7(a, n, i + 1);
	}
}

int main() {

	int a[] = {1, 2, 7, 7, 3, 4, 5, 71};
	int n = sizeof(a) / sizeof(int);

	cout << last7(a, n, 0) << endl;

	return 0;
}
















