#include <iostream>
using namespace std;

void update(string &x) {
	x = "World";
	// cout << "Inside Update: " << x << endl;
}
int main() {

	string s = "Hello";
	cout  << "Before Update : " << s << endl;
	update(s);
	cout  << "After update : " << s << endl;

	return 0;
}
















