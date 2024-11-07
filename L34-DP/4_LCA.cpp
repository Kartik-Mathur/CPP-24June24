#define node TreeNode
class Solution {
public:
	node* solve(node* root, node* p, node* q) {
		// base case
		if (!root) return root;

		if (root == p || root == q) return root;

		// recursive case
		node* left = solve(root->left, p, q);
		node* right = solve(root->right, p, q);

		if (left and right) return root;
		if (left and !right) return left;
		return right;
	}

	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		return solve(root, p, q);
	}
};