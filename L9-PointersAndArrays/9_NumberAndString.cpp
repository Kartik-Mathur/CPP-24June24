#include <iostream>
using namespace std;

int main() {

	int n;
	char a[100];

	cin >> n;
	// cin.get(); // Ignore kardo number ke baad wale character ko
	cin.ignore();
	cin.getline(a, 100);

	cout << "Number: " << n << endl;
	cout << "String: " << a << endl;

	return 0;
}
















