#include <iostream>
using namespace std;

int main() {

	int n, i;
	cin >> n;
	// We are going to check whether n is prime or not
	for (i = 2 ; i < n ; i++) {
		if (n % i == 0) {
			// Number n prime nahi hoga, pakki baat hai, stamp paper par lelo
			// Ab aur check krne ki need nahi hai divide krke, toh exit karo loop se
			break; // seedhe loop se bahar phenk dega
		}
	}

	// Yaha kaise pata lagaye n prime tha ya prime nhi tha
	if (i == n) { // Loop se bahar normally aaye hai
		cout << "Prime\n";
	}
	else { // loop se bahar phenke gaye hai
		cout << "Not Prime\n";
	}


	return 0;
}
















