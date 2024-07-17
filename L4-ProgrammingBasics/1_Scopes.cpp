#include <iostream>
using namespace std;

int a = 1000;
int main() {

	int a = 10;
	int b = 100;

	if (a > 1) {
		a++;
		int b = -1;
		cout << b << endl;

		b = -10;
		cout << b << endl;
		cout << "Global a inside if block : " <<::a << endl;
		::a = ::a + 1000;
	}

	// Scope Resolution operator -> ::
	cout << "Global a : " <<::a << endl;

	cout << a << endl;
	cout << b << endl;

	for (int i = 0; i < 2; ++i)
	{
		cout << "Hello\n";
	}

	// cout << i << endl;

	return 0;
}

















