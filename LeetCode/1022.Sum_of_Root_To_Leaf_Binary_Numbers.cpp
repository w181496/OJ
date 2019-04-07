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
    int sumRootToLeaf(TreeNode* root) {
        int ans = 0;
        dfs(root, ans, 0);
        return ans;
    }
    
    void dfs(TreeNode *root, int& ans, int now) {
        if(!root) return;
        now = now * 2 + root->val;
        if(!root->left && !root->right) {
            ans += now;
            return;
        }
        dfs(root->left, ans, now);
        dfs(root->right, ans, now);
    }
};
