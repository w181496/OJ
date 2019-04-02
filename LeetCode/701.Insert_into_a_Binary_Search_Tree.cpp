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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root) return new TreeNode(val);
        TreeNode* tmp = root;
        while(1) {
            if(tmp->val > val) {
                if(!tmp->left) {
                    tmp->left = new TreeNode(val);
                    return root;
                } else {
                    tmp = tmp->left;
                }
            } else {
                if(!tmp->right) {
                    tmp->right = new TreeNode(val);
                    return root;
                } else {
                    tmp = tmp->right;
                }
            }
        }
    }
};
