#include <iostream>
using namespace std;

class node {
public:
	string key;
	int value;
	node* next;
	node(string &s, int x) {
		key = s;
		value = x;
		next = NULL;
	}
};

class hashmap {
private:
	int hashFunction(string key) {
		int ans = 0;
		int mul = 1;
		for (int i = 0; i < key.size(); ++i)
		{
			ans += key[i] % ts * mul % ts;
			mul *= 37;
			mul %= ts;
			ans %= ts;
		}

		return ans % ts;
	}

	void rehashing() {
		node** olda = a;
		int oldts = ts;

		cs = 0;
		a = new node*[2 * ts];
		ts *= 2;

		for (int i = 0; i < ts; ++i)
		{
			a[i] = NULL;
		}

		for (int i = 0; i < oldts; ++i)
		{
			node* head = olda[i];
			if (!head) continue;

			while (head) {
				string key = head->key;
				int value = head->value;
				insert(key, value);

				head = head->next;
			}
		}

		delete []olda;
	}

public:
	node** a;
	int ts;
	int cs;

	hashmap(int s = 5) {
		ts = s;
		a = new node*[ts];
		for (int i = 0 ; i < ts; i++) {
			a[i] = NULL;
		}
		cs = 0;
	}

	void insert(string key, int value) {
		// key ke badle ek hash index chahiye hoga
		int index = hashFunction(key);

		node* n = new node(key, value);
		n->next = a[index];
		a[index] = n;
		cs++;

		float load_factor = (cs * 1.0) / ts;
		if (load_factor >= 0.6) {
			rehashing();
		}
	}

	void print() {
		for (int i = 0; i < ts; ++i)
		{
			cout << i << "--> ";

			node* head = a[i];
			while (head) {
				string key = head->key;
				int value = head->value;
				cout << "(" << key << "," << value << ") ";
				head = head->next;
			}
			cout << endl;
		}
	}

	node* search(string &key) {
		// Mill gaya toh node ka address return krenge, else NULL
		int hashIndex = hashFunction(key);

		node* head = a[hashIndex];
		while (head) {
			if (head->key == key) {
				return head;
			}

			head = head->next;
		}

		return NULL;
	}


	int& operator[](string key) {
		node* x = search(key);
		if (x == NULL) {
			int random;
			insert(key, random);
			x = search(key);
			return x->value;
		}
		return x->value;
	}

};

int main() {

	hashmap h;

	h.insert("Mango", 100);
	h.insert("Kiwi", 20);
	h.insert("Banana", 50);
	h.insert("Pineapple", 150);
	h.insert("Guava", 1500);
	// h.insert("Orange", 100);

	h["Orange"] = 100;// Insertion

	h["Orange"] = 150; // Update

	cout << h["Orange"] << endl; // Read


	h.print();

	return 0;
}
















