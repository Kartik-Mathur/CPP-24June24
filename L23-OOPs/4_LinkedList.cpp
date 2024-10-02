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

	printLL(head);






	return 0;
}
















