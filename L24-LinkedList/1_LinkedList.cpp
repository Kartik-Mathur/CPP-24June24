#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;
	node(int d) {
		data = d;
		next = NULL;
	}
};

int lengthLL(node* head) {
	int cnt = 0;
	while (head != NULL) {
		cnt++;

		head = head->next;
	}

	return cnt;
}

void insertAtEnd(node* &head, node* &tail, int d) {
	if (head == NULL) {
		node* n = new node(d);
		head = tail = n;
	}
	else {
		node* n = new node(d);
		tail->next = n;
		tail = n;
	}
}

void insertAtFront(node* &head, node* &tail, int d) {
	if (head == NULL) {
		node* n = new node(d);
		head = tail = n;
	}
	else {
		node* n = new node(d);
		n->next = head;
		head = n;
	}
}

void insertAtMid(node* &head, node* &tail, int pos, int data) {
	if (pos >= lengthLL(head)) {
		insertAtEnd(head, tail, data);
	}
	else if (pos == 0) {
		insertAtFront(head, tail, data);
	}
	else {
		node* temp = head;
		for (int i = 0; i < pos - 1; ++i) temp = temp->next;

		node* n = new node(data);
		n->next = temp->next;
		temp->next = n;
	}
}


// DELETION IN LINKED LIST ///////////////////////////////////////////////////////////
void deleteAtFront(node* &head, node* &tail) {
	if (head == NULL) return;
	else if (head->next == NULL) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* temp = head;
		head = head->next;
		delete temp;
	}
}

void deleteAtEnd(node* &head, node* &tail) {
	if (head == NULL) return;
	else if (head->next == NULL) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* temp = head;
		while (temp->next != tail) {
			temp = temp->next;
		}

		delete tail;
		tail = temp;
		tail->next = NULL;
	}
}

void deleteAtMid(node* &head, node* &tail, int pos) {
	if (pos == 0) {
		deleteAtFront(head, tail);
	}
	else if (pos >= lengthLL(head) - 1) {
		deleteAtEnd(head, tail);
	}
	else {
		node* temp = head;
		for (int i = 0; i < pos - 1; ++i)
		{
			temp = temp->next;
		}

		node*n = temp->next;
		temp->next = n->next;
		delete n;
	}
}
// DELETION IN LINKED LIST ///////////////////////////////////////////////////////////


// Middle of LL
node* mid(node* head) {
	node* s = head;
	node* f = head->next;
	while (f != NULL and f->next != NULL) {
		f = f->next->next;
		s = s->next;
	}

	return s;
}


node* mergeLL(node*a, node* b) {
	// base case
	if (b == NULL) return a;
	if (a == NULL) return b;
	// recursive case
	node* nH;
	if (a->data < b->data) {
		nH = a;
		nH->next = mergeLL(a->next, b);
	}
	else {
		nH = b;
		nH->next = mergeLL(a, b->next);
	}
	return nH;
}


void printLL(node* head) {
	while (head != NULL) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL\n";
}

int main() {

	node* head = NULL, *tail = NULL;

	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 4);
	insertAtFront(head, tail, 5);
	insertAtFront(head, tail, 6);
	insertAtFront(head, tail, 7);
	insertAtMid(head, tail, 3, 17);

	printLL(head);
	deleteAtFront(head, tail);
	// deleteAtEnd(head, tail);
	printLL(head);

	// cout << "Length LL: " << lengthLL(head) << endl;

	node*ans = mid(head);
	cout << "Middle: " << ans->data << endl;




	return 0;
}
















