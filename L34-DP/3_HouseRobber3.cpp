
class Pair {
public:
	int rootChori_Profit;
	int rootChoriBina_Profit;
};

class Solution {
public:

	Pair solve(TreeNode* root) {
		Pair p;
		// base case
		if (!root) return {0, 0};

		// recursive case
		Pair left = solve(root->left);
		Pair right = solve(root->right);
		// root par chori hogi: LST and RST ki root chori nhi ho skti, adjacent h
		p.rootChori_Profit = root->val + left.rootChoriBina_Profit
		                     + right.rootChoriBina_Profit;
		// root par chori nhi hogi
		p.rootChoriBina_Profit = max(left.rootChori_Profit, left.rootChoriBina_Profit) +
		                         max(right.rootChori_Profit, right.rootChoriBina_Profit);
		return p;
	}

	int rob(TreeNode* root) {
		Pair ans = solve(root);
		return max(ans.rootChori_Profit, ans.rootChoriBina_Profit);
	}
};






