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

void printLL(node* head) {
	while (head != NULL) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL\n";
}

void reverseLL(node* &head, node* &tail) {

	node* c = head, *p = NULL, *n;

	while (c != NULL) {
		n = c->next;
		c->next = p;
		p = c;
		c = n;
	}

	swap(head, tail);
}

bool isCyclic(node* head) {
	node* f = head, *s = head;

	while (f != NULL and f->next != NULL) {
		f = f->next->next;
		s = s->next;

		if (f == s)return true;
	}

	return false;
}

int main() {

	node* head = NULL, *tail = NULL;

	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 6);

	printLL(head);

	printLL(head);




	return 0;
}
















