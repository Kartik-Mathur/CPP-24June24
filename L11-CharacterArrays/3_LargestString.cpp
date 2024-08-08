#include <iostream>
using namespace std;

void copyString(char *a, char *b) {
	int i = 0;
	int lenb = strlen(b);

	while (i <= lenb) {
		a[i] = b[i];
		i++;
	}
}

int main() {

	char a[100], largest[100];

	int n, len_a = 0, len_largest = 0;
	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; i++) {
		cin.getline(a, 100);
		len_a = strlen(a);
		if (len_a > len_largest) {
			// largest ke andar array a ko copy krdo
			// copyString(largest, a); // User defined function
			strcpy(largest, a); // Inbuilt function
			// largest ki length bhi update krdo
			len_largest = len_a;
		}
	}

	// Print kardo largest string ko
	cout << "Largest: " << largest << endl;
	cout << "Largest Len : " << len_largest << endl;

	return 0;
}
















