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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans, tmpans;
        queue<TreeNode*>q;
        if(!root) return ans;
        q.push(root);
        tmpans.push_back(vector<int>(1, root->val));
        while(!q.empty()) {
            vector<TreeNode*>tmp;
            vector<int>tmp2;
            while(!q.empty()) {
                TreeNode* now = q.front();
                q.pop();
                if(now->left) tmp.push_back(now->left);
                if(now->right) tmp.push_back(now->right);
            }
            for(int i = 0; i < tmp.size(); ++i) {
                q.push(tmp[i]);
                tmp2.push_back(tmp[i]->val);
            }
            if(!tmp2.empty())
                tmpans.push_back(tmp2);
        }
        for(int i = tmpans.size() - 1; i >= 0; --i)
            ans.push_back(tmpans[i]);
        return ans;
    }
};
