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
    bool isUnivalTree(TreeNode* root) {
        if(root == NULL) return false;
        if(root->left == NULL && root->right == NULL) return true;
        if(isUnivalTree(root->left) && isUnivalTree(root->right) && root->left->val == root->val && root->val == root->right->val) return true;
        if(!root->left && isUnivalTree(root->right) && root->val == root->right->val) return true;
        if(!root->right && isUnivalTree(root->left) && root->val == root->left->val) return true;
        return false;
    }
};
