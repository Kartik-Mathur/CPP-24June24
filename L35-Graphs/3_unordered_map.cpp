#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

int main() {

	map<string, int> h; // O(logN)
	// unordered_map<string, int> h; // O(1):Average
	// Insertion of key-value pair inside hashmap h
	h.insert(make_pair("Mango", 100));
	h.insert({"Kiwi", 50});
	h["Apple"] = 120;
	h["Pineapple"] = 60;
	h["Banana"] = 80;
	h["Orange"] = 40;
	// h["Apple"] = 100; // update

	// Printing hashmap: unordered_map(only) not for ordered_map
	/*
	for (int i = 0; i < h.bucket_count(); i++) {
		cout << i << " : ";
		for (auto it = h.begin(i); it != h.end(i) ; it++) {
			cout << "(" << (*it).first << ", " << (*it).second << ") ";
		}
		cout << endl;
	}
	*/
	// Printing hashmap: unordered_map and ordered_map both works
	// for (pair<string, int> p : h) {
	for (auto p : h) {
		cout << p.first << ", " << p.second << endl;
	}


	return 0;
}
















