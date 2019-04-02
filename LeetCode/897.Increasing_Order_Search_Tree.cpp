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
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode *ans = new TreeNode(-1);
        TreeNode *tmp = ans;
        dfs(root, tmp);
        return ans->right;
    }
    
    void dfs(TreeNode *root, TreeNode*& ans) {
        if(!root) return;
        else {
            dfs(root->left, ans);
            ans->right = new TreeNode(root->val);
            ans = ans->right;
            dfs(root->right, ans);
        }
    }
    
};
