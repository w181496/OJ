// O(logn*logn)
// 算當前樹到葉子最短和最長路徑長
// 再遞迴下去
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int countNodes(TreeNode* root) {
		if(!root) return 0;
           int l = countLeft(root), r = countRight(root);
		if(l == r) return (1 << l) - 1;
		else return countNodes(root->left) + countNodes(root->right) + 1;
    }

    int countRight(TreeNode* root) {
		if(!root) return 0;
		return countRight(root->right) + 1;
    }

    int countLeft(TreeNode* root) {
		if(!root) return 0;
		return countLeft(root->left) + 1;
    }

};



