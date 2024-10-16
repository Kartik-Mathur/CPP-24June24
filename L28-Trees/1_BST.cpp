#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* left, *right;
	node(int d) {
		data = d;
		left = right = NULL;
	}
};

node* insertInBST(node* root, int data) {
	// base case
	if (!root) {
		root = new node(data);
		return root;
	}

	// recursive case
	if (data <= root->data) { // LST mei jaega
		// insert krne ke baad merko LST ki root node return krna
		root->left = insertInBST(root->left, data);
	}
	else { // RST mei jaega
		// insert krne ke baad merko RST ki root node return krna
		root->right = insertInBST(root->right, data);
	}
	return root;
}

node* buildTree() {
	node* root = NULL;

	int data;
	cin >> data;
	while (data != -1) {
		root = insertInBST(root, data);
		// Data ko tree mei insert krega aur root
		// node ko return krega
		cin >> data;
	}

	return root;
}

void printRange(node* root, int k1, int k2) {
	// base case
	if (!root) return;

	// recursive case
	if (root->data >= k1 and root->data <= k2) cout << root->data << " ";
	printRange(root->left, k1, k2);
	printRange(root->right, k1, k2);
}

node* search(node* root, int key) {
	if (!root) return NULL;

	if (root->data == key) return root;
	if (key < root->data) {
		return search(root->left, key);
	}
	return search(root->right, key);
}

// Check BST
bool isBST(node*root, int mi = INT_MIN, int mx = INT_MAX) {
	if (!root) return true;

	if (root->data >= mi and root->data <= mx and isBST(root->left, mi, root->data) and
	        isBST(root->right, root->data, mx)) {
		return true; // Ab bst hoga
	}
	else return false;
}

class Pair {
public:
	int height;
	bool balanced;
};

Pair isBalanced(node* root) {
	Pair p;
	// base case
	if (!root) {
		p.height = 0;
		p.balanced = true;
		return p;
	}
	// recursive case
	Pair left = isBalanced(root->left);
	Pair right = isBalanced(root->right);

	p.height = max(left.height, right.height) + 1;
	if (abs(left.height - right.height) <= 1 and left.balanced and right.balanced) p.balanced = true;
	else p.balanced = false;
	return p;
}


void preOrder(node *root) {
	if (!root) return;

	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}

void inOrder(node *root) {
	if (!root) return;

	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
}


void postOrder(node *root) {
	if (!root) return;

	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
}

class LinkedList {
public:
	node* head, *tail;
};

LinkedList bstToLL(node* root) {
	LinkedList l;
	// base case
	if (!root) {
		l.head = l.tail = NULL;
		return l;
	}

	// recursive case
	if (root->left and root->right) {
		// Ask for converting LST to LinkedList
		LinkedList left = bstToLL(root->left);
		// Ask for converting RST to LinkedList
		LinkedList right = bstToLL(root -> right);

		// Now connect the root node at its correct position
		left.tail->right = root;
		root->right = right.head;
		l.head = left.head;
		l.tail = right.tail;
		return l;
	}
	else if (root->left and !root->right)
	{
		// Ask for converting LST to LinkedList
		LinkedList left = bstToLL(root->left);
		left.tail->right = root;
		l.head = left.head;
		l.tail = root;
		return l;
	}
	else if (!root->left and root->right) {
		// Ask for converting RST to LinkedList
		LinkedList right = bstToLL(root -> right);

		root->right = right.head;
		l.head = root;
		l.tail = right.tail;
		return l;

	}
	else { // left and right subtrees both aren't present
		l.head = l.tail = root;
		return l;
	}
}

// 8 3 10 1 6 14 4 7 13 -1
int main() {

	node* root = buildTree();

	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;

	LinkedList ans = bstToLL(root);

	node* head = ans.head;
	while (head) {
		cout << head->data << "-->";
		head = head->right;
	}
	cout << "NULL\n";





	return 0;
}
















