// 即中序相鄰最小絕對差值
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
    int getMinimumDifference(TreeNode* root) {
        vector<int> arr;
        dfs(root, arr);
        int ans = 1e8;
        for(int i = 1; i < arr.size(); ++i)
            if(abs(arr[i] - arr[i - 1]) < ans)
                ans = abs(arr[i] - arr[i - 1]);
        return ans;
    }
    
    void dfs(TreeNode* root, vector<int>& arr) {
        if(!root) return;
        dfs(root->left, arr);
        arr.push_back(root->val);
        dfs(root->right, arr);
    }

};
