#include <iostream>
using namespace std;

void update(int &x) {
	x = x + 1;
}

int main() {


	// int a = 1;

	// update(a);

	// cout << a << endl;


	// 2042
	string x = "Hello 123 World 5";
	char a[100000];
	for (int i = 0; i < x.size(); ++i)
	{
		a[i] = x[i];
	}
	a[x.size()] = '\0';

	char *p = strtok(a, " ");
	cout << p << endl;

	int previousVal = INT_MIN;
	while (p) {

		if (p[0] >= '0' and p[0] <= '9') {
			int x = stoi(p);
			// cout << p << ", " << x << ", " << x + 10 << endl;
			if (x > previousVal) {
				x = previousVal;
			}
			else {
				return false;
			}
		}


		p = strtok(NULL, " ");
	}

	return true;


	return 0;
}
















