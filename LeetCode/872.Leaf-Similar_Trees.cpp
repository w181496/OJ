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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>l1, l2;
        dfs(root1, l1);
        dfs(root2, l2);
        return l1 == l2;
    }
    
    void dfs(TreeNode* root, vector<int>& l) {
        if(root == NULL) return;
        if(!root->left && !root->right) l.push_back(root->val);
        dfs(root->left, l);
        dfs(root->right, l);
    }
};
