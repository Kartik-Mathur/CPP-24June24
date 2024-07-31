#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	int *lastBucketAddress = &a[3];
	int *firstBucketAddress = &a[0];

	// It will give us the number of buckets between address
	// [firstBucketAddress, lastBucketAddress)

	cout << lastBucketAddress - firstBucketAddress << endl;


	return 0;
}
















