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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        bool isLeft = false;
        if(!root) return ans;
        queue<TreeNode*>que;
        que.push(root);
        ans.push_back(vector<int>(1, root->val));
        while(!que.empty()) {
            vector<TreeNode*>tmp;
            while(!que.empty()) {
                TreeNode* now = que.front();
                que.pop();
                if(now->left) tmp.push_back(now->left);
                if(now->right) tmp.push_back(now->right);
            }
            vector<int>tmpans;
            if(isLeft) 
                for(int i = 0; i < tmp.size(); ++i)
                    tmpans.push_back(tmp[i]->val);
            else
                for(int i = tmp.size() - 1; i >= 0; --i)
                    tmpans.push_back(tmp[i]->val);
            if(!tmpans.empty()) ans.push_back(tmpans);
            isLeft = !isLeft;
            for(int i = 0; i < tmp.size(); ++i)
                que.push(tmp[i]);
        }
        return ans;
    }
};
