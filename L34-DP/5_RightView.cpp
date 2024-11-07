#define node TreeNode
class Solution {
public:
	vector<int> ans;

	void solve(node* root, int &minD, int d = 0) {
		if (!root) return;

		if (d > minD) {
			minD = d;
			ans.push_back(root->val);
		}
		solve(root->right, minD, d + 1);
		solve(root->left, minD, d + 1);
	}

	vector<int> rightSideView(node* root) {
		int minD = -1;

		solve(root, minD);

		return ans;
	}
};