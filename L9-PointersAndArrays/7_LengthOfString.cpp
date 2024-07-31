#include <iostream>
using namespace std;

int stringLength(char*a) {
	int i;
	for (i = 0; a[i] != '\0'; ++i)
	{

	}
	return i;
}

int main() {

	char arr[100];
	cin.getline(arr, 100);

	// int len = stringLength(arr);
	int len = strlen(arr);
	cout << arr << ", length: " << len << endl;


	return 0;
}
















