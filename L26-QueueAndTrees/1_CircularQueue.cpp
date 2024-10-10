#include <iostream>
using namespace std;

template<typename T>
class Queue {
	T *a;
	int n;
	int cs;
	int f, e;
public:
	Queue(int s = 5) {
		a = new T[s];
		n = s;
		f = 0;
		e = n - 1;
		cs = 0;
	}

	void push(T d) {
		if (cs < n) {
			e = (e + 1) % n;
			a[e] = d;
			cs++;
		}
		else {
			cout << "Queue overflow\n";
		}
	}

	void pop() {
		if (cs > 0) {
			f = (f + 1) % n;
			cs--;
		}
		else {
			cout << "Queue underflow\n";
		}
	}

	T front() {
		return a[f];
	}

	int size() {
		return cs;
	}

	bool empty() {
		return cs == 0;
	}

};

int main() {

	Queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);

	// q.push('A');
	// q.push('B');
	// q.push('C');
	// q.push('D');

	while (!q.empty()) {
		cout << q.front() << " ";

		q.pop();
	}
	cout << endl;
	return 0;
}
















