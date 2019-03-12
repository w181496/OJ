// 翻一個子樹
// 再比較左右是否相等
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
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        flip(root->left);
        return isOK(root->left, root->right);
    }
    
    void flip(TreeNode* root) {
        if(!root) return; 
        TreeNode *tmp;
        tmp = root->left;
        root->left = root->right;
        root->right = tmp;
        if(root->left) flip(root->left);
        if(root->right) flip(root->right);
    }
    
    bool isOK(TreeNode* r1, TreeNode* r2) {
        if(r1 == NULL && r2 == NULL) return true;
        if(r1 == NULL) return false;
        if(r2 == NULL) return false;
        if(r1->val != r2->val) return false;
        return isOK(r1->left, r2->left) && isOK(r1->right, r2->right);
    }
};
