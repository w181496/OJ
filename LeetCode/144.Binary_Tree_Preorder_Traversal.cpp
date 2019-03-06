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
        vector<int> preorderTraversal(TreeNode* root) {
            vector<int>ans, l, r;
            if(root == NULL) return ans;
            ans.push_back(root->val);
            l = preorderTraversal(root->left);
            r = preorderTraversal(root->right);
            ans.insert(ans.end(), l.begin(), l.end());
            ans.insert(ans.end(), r.begin(), r.end());
            return ans;
        }
};
