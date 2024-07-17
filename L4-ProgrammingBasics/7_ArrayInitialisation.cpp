#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2};
	int n = sizeof(a) / sizeof(int);
	cout << "n : " << n << endl;

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}







