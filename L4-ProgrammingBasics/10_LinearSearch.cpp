#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	int key;
	cin >> key;

	int indx = -1;
	for (int i = 0; i < n; ++i)
	{
		if (key == a[i]) {
			indx = i;
			break;
		}
	}
	cout << indx << endl;


	return 0;
}

















