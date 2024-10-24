#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isValid(const vector<bool>& visited, int start, int end) {
	for (int i = start; i < end; i++) {
		if (visited[i]) {
			return false;
		}
	}
	return true;
}

bool isCBNo(long long n) {
	if (n == 0 || n == 1) {
		return false;
	}

	int arr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

	for (int i = 0; i < 10; i++) {
		if (n == arr[i]) {
			return true;
		}
	}

	for (int i = 0; i < 10; i++) {
		if (n % arr[i] == 0) {
			return false;
		}
	}

	return true;
}

int main() {
	int n;
	cin >> n;

	string str;
	cin >> str;

	int count = 0;
	vector<bool> visited(str.length(), false);

	for (int len = 1; len <= str.length(); len++) {
		for (int si = 0; si <= str.length() - len; si++) {
			int ei = si + len;
			string ss = str.substr(si, len);  // Extract substring
			long long num = stoll(ss);  // Convert substring to long long

			if (isCBNo(num) && isValid(visited, si, ei)) {
				count++;
				for (int i = si; i < ei; i++) {
					visited[i] = true;
				}
			}
		}
	}

	cout << count << endl;
	return 0;
}
