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
    int longestUnivaluePath(TreeNode* root) {
        int ans = 0;
        find(root, ans);
        return max(ans - 1, 0);
    }
    
    int find(TreeNode *root, int &ans) {
        if(root == NULL) return 0;
        int l = 0, r = 0;
        l = find(root->left, ans);
        r = find(root->right, ans);
        if(root->left && root->left->val != root->val) l = 0;
        if(root->right && root->right->val != root->val) r = 0;
        ans = max(ans, l + r + 1);
        return max(l, r) + 1;
    }
};
