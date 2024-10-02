#include <iostream>
using namespace std;

class Vector {
public:
	int* a;
	int cs; // Kitne kaam ke elements array mei h
	int ms; // Kitne elements array mei h add kar skte hai maximum

	Vector(int s = 1) {
		ms = s; // Current capacity, by default->2
		cs = 0;
		a = new int[ms];
	}

	void push_back(int d) {
		if (cs == ms) {
			int*newa = new int[2 * ms];
			int new_ms = 2 * ms;

			for (int i = 0; i < ms; ++i)
			{
				newa[i] = a[i];
			}

			delete[]a;
			a = newa;
			ms = new_ms;
		}

		a[cs++] = d;
	}

	void pop_back() {
		if (cs > 0) cs--;
	}

	int size() {
		return cs;
	}

	int capacity() {
		return ms;
	}

	int operator[](int i) {
		return a[i];
	}
};

int main() {

	Vector v;

	for (int i = 1; i <= 5; ++i)
	{
		v.push_back(i);
		cout << "After inserting " << i << ", size: " << v.size() << ", capacity: " << v.capacity() << endl;
	}

	// v.pop_back();
	// v.pop_back();
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}
















