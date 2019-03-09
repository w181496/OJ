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
    int maxPathSum(TreeNode* root) {
        int sum = -1e8;
        find(root, sum);
        return sum;
    }
    
    int find(TreeNode* root, int& sum) {
        if(root == NULL) return 0;
        int l = 0, r = 0;
        if(root->left) l = max(find(root->left, sum), 0);
        if(root->right) r = max(find(root->right, sum), 0);
        
        int s1 = max(l, r) + root->val;
        int s2 = root->val + l + r;
        sum = max(max(s1, s2), sum);
        return s1;
    }
};
