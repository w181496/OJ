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
    bool isValidBST(TreeNode* root) {
        return check(root, 2147483648, -2147483649);
    }
    
    bool check(TreeNode* root, long long int mx, long long int mn) {
        if(!root) return true;
        bool res = true;
        if(root->val >= mx || root->val <= mn) return false;
        if(root->left) res &= check(root->left, root->val, mn);
        if(root->right) res &= check(root->right, mx, root->val);
        return res;
    }
    
};
