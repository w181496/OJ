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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(!t1) return t2;
        dfs(t1, t2);
        return t1;
    }
    
    void dfs(TreeNode *t1, TreeNode *t2) {
        if(!t2) return;
        t1->val += t2->val;
        if(t2->left) {
            if(t1->left) dfs(t1->left, t2->left);
            else {
                t1->left = t2->left;
            }
        }
        if(t2->right) {
            if(t1->right) dfs(t1->right, t2->right);
            else {
                t1->right = t2->right;
            }
        }
    }
    
};
