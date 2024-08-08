#include <iostream>
using namespace std;

int main() {

	char a[] = "abcdccxz";
	char b[] = "xcbczcca";

	int freq[26] = {0} ;

	for (int i = 0; a[i] != '\0'; ++i)
	{
		int indx = (a[i] - 'a');
		// cout << a[i] << ", index: " << indx << endl;
		freq[indx]++;
	}

	for (int i = 0; b[i] != '\0'; ++i)
	{
		int indx = (b[i] - 'a');
		freq[indx]--;
	}

	// char ch = 'a';
	// for (int i = 0; i < 26; ++i)
	// {
	// 	cout << ch++ << " ";
	// }
	// cout << endl;
	bool isPermutation = true;
	for (int i = 0; i < 26; ++i)
	{
		if (freq[i] != 0) {
			isPermutation = false;
			break;
		}
	}

	if (isPermutation) {
		cout << "Hai\n";
	}
	else {
		cout << "Nahi Hai\n";
	}

	return 0;
}
















