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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return build(nums, 0, nums.size() - 1);
    }
    
    TreeNode* build(vector<int>& nums, int l, int r) {
        if(l > r || l < 0 || r >= nums.size()) return NULL;
        if(l == r) return new TreeNode(nums[l]);
        int mx = -1e9, idx;
        for(int i = l; i <= r; ++i)
            if(nums[i] > mx) {
                mx = nums[i];
                idx = i;
            }
        TreeNode *root = new TreeNode(mx);
        root->left = build(nums, l, idx - 1);
        root->right = build(nums, idx + 1, r);
        return root;
    }
    
};
