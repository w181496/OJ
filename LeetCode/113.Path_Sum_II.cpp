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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>>ans;
        vector<int>tmp;
        if(!root) return ans;
        dfs(root, sum, 0, tmp, ans);
        return ans;
    }
    
    void dfs(TreeNode* root, int& sum, int now, vector<int>now_v, vector<vector<int>>& ans) {
        if(!root) return;
        if(!root->left && !root->right && root->val + now == sum) {
            now_v.push_back(root->val);
            ans.push_back(now_v);
            return;
        }
        now_v.push_back(root->val);
        dfs(root->left, sum, now + root->val, now_v, ans);
        dfs(root->right, sum, now + root->val, now_v, ans);
    }
};
