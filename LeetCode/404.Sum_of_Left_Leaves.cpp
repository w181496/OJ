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
        int sumOfLeftLeaves(TreeNode* root) {
            if(root == NULL) return 0;
            TreeNode *left = root->left;
            TreeNode *right = root->right;
            if(left != NULL && left->left == NULL && left->right == NULL)
                return left->val + sumOfLeftLeaves(right);
            else 
                return sumOfLeftLeaves(left) + sumOfLeftLeaves(right);
        }
};
