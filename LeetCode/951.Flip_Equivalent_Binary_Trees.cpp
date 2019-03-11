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
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2) return true;
        if(!(root1 && root2)) return false;
        if(root1->val != root2->val) return false;
        int l = -1, r = -1, l2 = -1, r2 = -1;
        if(root1->left && root1->left->val) l = root1->left->val;
        if(root1->right && root1->right->val) r = root1->right->val;
        if(root2->left && root2->left->val) l2 = root2->left->val;
        if(root2->right && root2->right->val) r2 = root2->right->val;
        if(l == l2 && r == r2) {
            return flipEquiv(root1->left, root2->left) & flipEquiv(root1->right, root2->right);
        } else if(l == r2 && r == l2) {
            return flipEquiv(root1->left, root2->right) & flipEquiv(root1->right, root2->left);
        } else {
            return false;   
        }
    }
};
