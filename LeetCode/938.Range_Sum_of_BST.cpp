// 水題
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
    int rangeSumBST(TreeNode* root, int L, int R) {
        int sum = 0;
        dfs(root, sum, L, R);
        return sum;
    }
    
    void dfs(TreeNode *root, int &sum, int L, int R) {
        if(root == NULL) return;   
        if(root->val >= L && root->val <= R) sum += root->val;
        if(root->left) dfs(root->left, sum, L, R);
        if(root->right) dfs(root->right, sum, L, R);
    }
};
