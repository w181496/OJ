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
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        bool ans = true;
        getSize(root, ans);
        return ans;
    }
    
    int getSize(TreeNode* root, bool& ans) {
        if(!root) return 0;
        int l = getSize(root->left, ans), r = getSize(root->right, ans);
        if(abs(l - r) > 1) {
            ans = false;
            return -1000;
        }
        return max(l, r) + 1;
    }
};
