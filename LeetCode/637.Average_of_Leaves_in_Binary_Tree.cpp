// BFS Level-order traversal

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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*>que;
        vector<double>ans;
        if(root == NULL) return ans;
        que.push(root);
        ans.push_back(root->val);
        while(!que.empty()) {
            queue<TreeNode*>tmp;
            double sum = 0;
            int cnt = 0;
            while(!que.empty()) {
                TreeNode *now = que.front();
                que.pop();
                if(now->left) tmp.push(now->left);
                if(now->right) tmp.push(now->right);
            }
            while(!tmp.empty()) {
                TreeNode* now = tmp.front();
                sum += now->val;
                cnt++;
                tmp.pop();
                que.push(now);
            }
            if(cnt) ans.push_back(sum /= cnt);
        }
        return ans;
    }
};
