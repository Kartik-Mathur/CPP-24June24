#include <iostream>
using namespace std;

void update(int x) {

	x = x + 1;

	cout << "Inside Function : " << x << endl;
}


int main() {

	int a = 1;

	cout << "Before update: " << a << endl;

	update(a);

	cout << "After update: " << a << endl;

	return 0;
}
















