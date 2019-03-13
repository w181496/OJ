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
    void flatten(TreeNode* root) {
        TreeNode* ans = new TreeNode(1);
        dfs(root, ans);
    }
    
    void dfs(TreeNode* root, TreeNode*& ans) {
        if(!root) return;
        ans->right = root;
        ans = ans->right;
        TreeNode *tmp = root->right;
        dfs(root->left, ans);
        root->left = NULL;
        dfs(tmp, ans);
    }
};
