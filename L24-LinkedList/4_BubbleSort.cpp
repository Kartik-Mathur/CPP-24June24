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


void bubbleSort(node* &head) {
	int len = lengthLL(head);

	for (int i = 0; i < len - 1; ++i)
	{
		node* c = head, *p = NULL, *n;
		while (c != NULL and c->next != NULL) {
			n = c->next;
			if (c->data > n->data) {
				// swapping hogi
				if (p == NULL) { // head change hoga
					c->next = n->next;
					n->next = c;
					head = p = n;
				}
				else { // head change nahi hoga
					c->next = n->next;
					n->next = c;
					p->next = n;
					p = n;
				}
			}
			else {
				// swapping nahi hogi
				p = c;
				c = n;
			}
		}
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

	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 6);
	insertAtEnd(head, tail, 7);
	insertAtEnd(head, tail, 5);

	printLL(head);
	bubbleSort(head);
	printLL(head);




	return 0;
}
















