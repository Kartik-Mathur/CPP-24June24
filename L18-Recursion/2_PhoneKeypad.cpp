#include <iostream>
using namespace std;

string keys[] = {
	"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"
};

string contacts[] = {
	"JIYA", "ANKIT", "SUMIT"
};

void phoneKeypad(string &ip, string &op, int i) {
	// base case
	if (i == ip.size()) {
		// cout << op << endl;
		for (int j = 0; j < 3; ++j)
		{
			if (contacts[j] == op) cout << op << endl;
		}
		return;
	}

	// recursive case
	int digit = ip[i] - '0';
	for (int k = 0; k < keys[digit].size(); ++k)
	{
		char ch = keys[digit][k];
		// Current ch ko op string mei daalo and ask recursion to do the work of smaller ip
		op.push_back(ch);
		phoneKeypad(ip, op, i + 1);
		op.pop_back(); // backtracking
	}

}


int main() {


	string ip, op;
	cin >> ip;

	phoneKeypad(ip, op, 0);

	return 0;
}
















