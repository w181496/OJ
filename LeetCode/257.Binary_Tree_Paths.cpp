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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if(root) dfs(root, "", res);
        return res;
    }
    
    void dfs(TreeNode* root, string s, vector<string>& res) {
        if(root->left == NULL && root->right == NULL) { 
            if(s != "") res.push_back(s + "->" + to_string(root->val));
            else res.push_back(to_string(root->val));
            return ;
        }
        string tmp;
        if(s != "") tmp = s + "->" + to_string(root->val);
        else tmp = s + to_string(root->val);
        
        if(root->left) dfs(root->left, tmp , res);
        if(root->right) dfs(root->right, tmp, res);
    }
    
    
};
