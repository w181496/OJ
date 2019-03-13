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
    int sumNumbers(TreeNode* root) {
        long long int ans = 0;
        dfs(root, 0, ans);
        return ans;
    }
    
    void dfs(TreeNode* root, long long int now, long long int& sum) {
        if(!root) return;
        if(!root->left && !root->right) {
            now = now * 10 + root->val;
            sum += now;
            return;   
        }
        dfs(root->left, now * 10 + root->val, sum);
        dfs(root->right, now * 10 + root->val, sum);
    }
};
