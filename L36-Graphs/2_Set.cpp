#include <iostream>
#include <set>
using namespace std;

int main() {

	set<int> s;

	s.insert(4);
	s.insert(3);
	s.insert(1);
	// s.insert(1); // Duplicates aren't allowed inside set
	s.insert(2);
	s.insert(5);

	// Print
	for (auto e : s) {
		cout << e << " ";
	}
	cout << endl;

	// Print way:2
	while (!s.empty()) {
		auto x = s.begin();
		cout << *x << " ";

		s.erase(x);
	}
	cout << endl;


	// Inserting a pair inside set
	set<pair<int, string> > s1;
	s1.insert({100, "Mango"});
	s1.insert({120, "Apple"});
	s1.insert({80, "Guava"});
	s1.insert({90, "Orange"});

	// while (!s1.empty()) {
	// 	auto x = s1.begin();
	// 	cout << (*x).first << ", " << (*x).second << endl;

	// 	s1.erase(x);
	// }
	// cout << endl;

	// Inorder to update value inside set, we need to delete the previous value
	// then insert new one again
	// To update price of Mango->150
	auto add = s1.find({100, "Mango"});
	if (add != s1.end()) {
		s1.erase(add);
	}

	s1.insert({150, "Mango"});

	while (!s1.empty()) {
		auto x = s1.begin();
		cout << (*x).first << ", " << (*x).second << endl;

		s1.erase(x);
	}
	cout << endl;

	return 0;
}
















