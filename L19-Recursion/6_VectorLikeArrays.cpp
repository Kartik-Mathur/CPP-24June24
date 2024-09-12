#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int>v(5);
	// cout << "Size    : " << v.size() << endl; // 5
	// cout << "Capacity: " << v.capacity() << endl; // 5

	for (int i = 0; i < v.size(); ++i)
	{
		v[i] = (i + 1) * 10;
	}

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;



	return 0;
}
















