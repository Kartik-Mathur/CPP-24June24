#include <iostream>
#include <cstring>
using namespace std;

void combine(char* a, char* b) {
	int lena = strlen(a), lenb = strlen(b);

	int i = lena, j = 0;
	while (j <= lenb) {
		a[i] = b[j];
		i++;
		j++;
	}
}

int main() {

	char a[100] = "Hello";
	char b[100] = "World";
	// User defined
	// combine(a, b);
	// Inbuilt
	strcat(a, b);
	cout << a << endl;

	return 0;
}
















