#include <iostream>
#include <list>
using namespace std;

int main() {
	/*
		pair<string, int> p;
		p.first = "Mango";
		p.second = 100;
	*/
	/*
	pair<string, int> p;
	p = make_pair("Apple", 100);
	*/

	pair<string, int> p = {"Mango", 100};
	cout << p.first << ", " << p.second << endl;

	// List of pair
	list<pair<char, char> > l;
	l.push_back({'a', 'b'});
	l.push_back({'a', 'c'});
	l.push_back({'a', 'd'});
	l.push_back({'b', 'e'});
	l.push_back({'d', 'e'});
	// for every pair p which belongs to linkedlist l
	for (auto p : l) {
		cout << "(" << p.first << ", " << p.second << ") --> ";
	}
	cout << endl;


	return 0;
}
















