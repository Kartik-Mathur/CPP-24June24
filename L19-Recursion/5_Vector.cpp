#include <iostream>
#include <vector> // headerfile/STL(Standard Template library)
using namespace std;

int main() {

	vector<int> v;

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
















