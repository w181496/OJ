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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int> >ans;
        queue<TreeNode*>q;
        if(root) q.push(root); 
        while(!q.empty()) {
            vector<TreeNode*>tmp;
            vector<int>tmpans;
            while(!q.empty()) {
                TreeNode *n = q.front();
                q.pop();
                if(n->left) tmp.push_back(n->left);
                if(n->right) tmp.push_back(n->right);
                tmpans.push_back(n->val);
            }
            for(int i = 0; i < tmp.size(); i++)
                q.push(tmp[i]);
            ans.push_back(tmpans);
        }
        return ans;
    }
};
