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
    vector<int> largestValues(TreeNode* root) {
        vector<int>ans;
        queue<TreeNode*>q;
        if(!root) return ans;
        q.push(root);
        while(!q.empty()) {
            vector<TreeNode*>tmp;
            while(!q.empty()) {
                TreeNode* now = q.front();
                q.pop();
                tmp.push_back(now);
            }
            int mx = -2147483648;
            for(int i = 0; i < tmp.size(); ++i) {
                mx = max(mx, tmp[i]->val);
                if(tmp[i]->left) q.push(tmp[i]->left);
                if(tmp[i]->right) q.push(tmp[i]->right);
            }
            ans.push_back(mx);
        }
        return ans;
    }
};
