#include <iostream>
using namespace std;

int main() {

	char a[100] = "World";
	char b[100] = "Hello, There Learning Strings";

	int i = 0;
	int lenb = strlen(b);

	while (i <= lenb) {
		a[i] = b[i];
		i++;
	}

	cout << a << endl;


	return 0;
}
















