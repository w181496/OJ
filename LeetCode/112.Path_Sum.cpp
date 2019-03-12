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
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root) return false;
        return dfs(root, sum, 0);
    }
    
    bool dfs(TreeNode* root, int& sum, int now) {
        if(!root) return false;
        if(!root->left && !root->right && now + root->val == sum) return true;
        return dfs(root->left, sum, now + root->val) || dfs(root->right, sum, now + root->val);
    }
};
