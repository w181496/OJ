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
        vector<int> postorderTraversal(TreeNode* root) {
            vector<int>ans, l, r;
            if(root == NULL) return ans;
            l = postorderTraversal(root->left);
            r = postorderTraversal(root->right);
            ans.insert(ans.end(), l.begin(), l.end());
            ans.insert(ans.end(), r.begin(), r.end());
            ans.push_back(root->val);
            return ans;
        }
};
