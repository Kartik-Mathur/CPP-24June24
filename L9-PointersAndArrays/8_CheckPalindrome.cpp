#include <iostream>
using namespace std;

bool isPalindrome(char *a) {
	int fi = 0;
	int li = strlen(a) - 1;

	while (fi < li) {
		if (a[fi] != a[li]) {
			return false;
		}

		fi++;
		li--;
	}
	return true;
}

int main() {

	char a[] = "axbcba";
	if (isPalindrome(a)) {
		cout << "Palindrome\n";
	}
	else {
		cout << "Not a Palindrome\n";
	}

	return 0;
}
















