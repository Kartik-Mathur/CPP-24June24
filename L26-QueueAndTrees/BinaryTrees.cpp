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

node* buildTree() {
	int data;
	cin >> data;
	if (data == -1) return NULL;

	node* root = new node(data);
	root->left = buildTree();
	root->right = buildTree();
	return root;
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

int height(node* root) {
	if (!root) return 0;

	int left = height(root->left);
	int right = height(root->right);
	return max(left, right) + 1;
}

int countNodes(node* root) {
	if (!root) return 0;

	return countNodes(root->left) + countNodes(root->right) + 1;
}

// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main() {

	node* root = buildTree();

	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;
	cout << "Height: " << height(root) << endl;
	cout << "Nodes : " << countNodes(root) << endl;


	return 0;
}
















