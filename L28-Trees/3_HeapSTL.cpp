#include <iostream>
#include <queue> // Queue
using namespace std;

class comparator {
public:
	// Functor
	bool operator()(int a, int b) {
		return a > b;
	}
};

int main() {

	// priority_queue<int> h; // Max heap
	// priority_queue<int, vector<int>, comparator> h; // Max and Min both
	// priority_queue<int, vector<int>, greater<int> >h; // Minheap
	priority_queue<int, vector<int>, less<int> >h; // Maxheap

	h.push(1);
	h.push(4);
	h.push(2);
	h.push(3);
	h.push(0);

	while (!h.empty()) {
		cout << h.top() << " ";
		h.pop();
	}
	cout << endl;;


	return 0;
}
















