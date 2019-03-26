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
    int findSecondMinimumValue(TreeNode* root) {
        if(!root) return 0;
        int mn = root->val;
        int ans = solve(root, mn);
        if(ans == mn) return -1;
        return ans;
    }
    
    int solve(TreeNode* root, int& mn) {
        if(!root) return mn;
        int v1, v2;
        if(root->left && root->left->val != mn)
            v1 = root->left->val;
        else
            v1 = solve(root->left, mn);
        if(root->right && root->right->val != mn)
            v2 = root->right->val;
        else
            v2 = solve(root->right, mn);
        if(v1 != mn && v2 != mn) return min(v1, v2);
        if(v1 != mn) return v1;
        return v2;
    }
};
