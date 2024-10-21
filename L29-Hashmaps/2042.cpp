
class Solution {
public:
	bool areNumbersAscending(string s) {

		char a[100000];
		for (int i = 0; i < s.size(); ++i)
		{
			a[i] = s[i];
		}
		a[s.size()] = '\0';

		char *p = strtok(a, " ");

		int previousVal = INT_MIN;
		while (p) {

			if (p[0] >= '0' and p[0] <= '9') {
				int x = stoi(p);
				if (x > previousVal) {
					x = previousVal;
				}
				else {
					return false;
				}
			}


			p = strtok(NULL, " ");
		}

		return true;

	}
};