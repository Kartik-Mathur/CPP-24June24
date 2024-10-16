#include <iostream>
#include <queue>
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

	cout << root->data << ", ";
	preOrder(root->left);
	preOrder(root->right);
}

void inOrder(node *root) {
	if (!root) return;

	inOrder(root->left);
	cout << root->data << ", ";
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

int diameter(node* root) {
	if (!root) return 0;

	// Case 1: Via Root
	int op1 = height(root->left) + height(root->right);
	// Case 2: LST max dia
	int op2 = diameter(root->left);
	// Case 3: RST max dia
	int op3 = diameter(root->right);
	return max(op1, max(op2, op3));
}

// FAST DIAMETER
class Pair {
public:
	int height;
	int diameter;
};

Pair fastDiameter(node* root) {
	Pair p;
	// Base case
	if (!root) {
		p.height = p.diameter = 0;
		return p;
	}

	// Recursive case
	Pair left = fastDiameter(root->left); // LST ki height and max diameter ka pair
	Pair right = fastDiameter(root->right);// RST ki height and max diameter ka pair

	// Diameter of Bigger tree including root
	int op1 = left.height + right.height; // Root node ke through diameter
	int op2 = left.diameter; // LST ka max diameter
	int op3 = right.diameter;// RST ka max diameter

	p.diameter = max(op1, max(op2, op3));
	// Height
	p.height = max(left.height, right.height) + 1;
	return p;
}

// LEVEL ORDER PRINT
void levelOrderPrint(node* root) {
	queue<node*> q; // Inside this queue we will insert addresses

	q.push(root);
	q.push(NULL);

	while (!q.empty()) {
		node* x = q.front();
		q.pop();

		if (x != NULL) {
			cout << x->data << " ";
			if (x->left) q.push(x->left);
			if (x->right) q.push(x->right);
		}
		else {
			cout << endl;
			if (!q.empty()) q.push(NULL);
		}
	}
}

void mirror(node* root) {
	if (!root) return;

	swap(root->left, root->right);
	mirror(root->left);
	mirror(root->right);
}

void createTree() {

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
	// cout << "Height: " << height(root) << endl;
	// cout << "Nodes : " << countNodes(root) << endl;
	// cout << "Diameter : " << diameter(root) << endl;

	// Pair ans = fastDiameter(root);
	// cout << "Fast Diameter : " << ans.diameter << endl;
	// cout << "Fast Height : " << ans.height << endl;
	levelOrderPrint(root);
	mirror(root);
	levelOrderPrint(root);

	return 0;
}
















