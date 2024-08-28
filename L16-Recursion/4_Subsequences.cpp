#include <iostream>
using namespace std;

void subsequences(char *ip, int i, char* op, int j) {
	// base case
	if (ip[i] == '\0') {
		op[j] = '\0';
		cout << op << endl;
		return;
	}

	// recursive case
	// 1.don't take the ith character at front of op[]
	subsequences(ip, i + 1, op, j);
	// 2.Take the ith character at front of op[]
	op[j] = ip[i];
	subsequences(ip, i + 1, op, j + 1);
}

int main() {

	char a[100] = "abc", b[100];
	subsequences(a, 0, b, 0);




	return 0;
}
















