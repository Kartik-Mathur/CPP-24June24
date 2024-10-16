#include <iostream>
#include <queue>
using namespace std;

void printHeap(priority_queue<int, vector<int>, greater<int> >h) {
	while (!h.empty()) {
		cout << h.top() << " ";
		h.pop();
	}
	cout << endl;
}

int main() {

	priority_queue<int, vector<int>, greater<int> >h; // Minheap
	int k = 3, cnt = 0;
	while (1) {
		int data;
		cin >> data;

		if (data == -1) {
			// Print the heap
			printHeap(h);
			continue;
		}

		if (cnt < k) {
			h.push(data);
			cnt++;
		}
		else {
			if (h.top() < data) {
				h.pop();
				h.push(data);
			}
		}
	}
















	return 0;
}
















