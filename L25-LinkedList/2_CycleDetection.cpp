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

void printLL(node* head) {
	while (head != NULL) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL\n";
}

void breakCycle(node* head, node* f) {
	node* s = head;
	node* fp = head;
	while (fp->next != f) {
		fp = fp->next;
	}

	while (f != s) {
		fp = f;
		f = f->next;
		s = s->next;
	}

	fp->next = NULL;
}

bool isCyclic(node* head) {
	node* f = head, *s = head;

	while (f != NULL and f->next != NULL) {
		f = f->next->next;
		s = s->next;

		if (f == s) {
			// cout << "Fast and slow meet at: " << f->data << endl;
			breakCycle(head, f);
			return true;
		}
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
	insertAtEnd(head, tail, 7);
	insertAtEnd(head, tail, 8);
	insertAtEnd(head, tail, 9);
	insertAtEnd(head, tail, 10);
	insertAtEnd(head, tail, 11);
	insertAtEnd(head, tail, 12);


	tail->next = head->next->next->next->next->next->next;

	if (isCyclic(head)) {
		cout << "Cycle Hai\n";
		printLL(head);
	}
	else {
		printLL(head);
	}




	return 0;
}
















