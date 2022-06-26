// Link : https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
	vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
		if (!root) return {};
		queue<TreeNode*> q;
		bool leftToRight = true;
		q.push(root);
		vector<vector<int>> ans;
		while (!q.empty()) {
			vector<int> nodes;
			int m = q.size();
			for (int i = 0; i < m; i++) {
				TreeNode* node = q.front();
				if (node->left) q.push(node->left);
				if (node->right) q.push(node->right);
				nodes.push_back(node->val);
				q.pop();
			}
			if (!leftToRight) {
				reverse(nodes.begin(), nodes.end());
			}
			leftToRight ^= 1;
			ans.push_back(nodes);
		}

		return ans;
	}
};