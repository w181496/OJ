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
    int findBottomLeftValue(TreeNode* root) {
        int res;
        int mxh = -1;
        dfs(root, res, 0, mxh);
        return res;
    }
    
    void dfs(TreeNode* root, int &res, int h, int &mxh) {
        if(!root) return;
        if(h > mxh) res = root->val, mxh = h;
        dfs(root->left, res, h + 1, mxh);
        dfs(root->right, res, h + 1, mxh);
    }
};
