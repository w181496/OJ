// 每層Level的最右邊即為所求
// BFS做Level-order traversal

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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*>q;
        vector<int>ans;
        if(!root) return ans;
        q.push(root);
        ans.push_back(root->val);
        while(!q.empty()) {
            vector<TreeNode*>tmp;
            while(!q.empty()) {
                TreeNode* now = q.front();
                q.pop();
                if(now->left) tmp.push_back(now->left);
                if(now->right) tmp.push_back(now->right);
            }
            if(!tmp.empty()) {
                ans.push_back(tmp[tmp.size() - 1]->val);
                for(int i = 0; i < tmp.size(); ++i)
                    q.push(tmp[i]);
            }
        }
        return ans;
    }
    
};
