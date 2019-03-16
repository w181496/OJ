// preorder: 根左右
// inorder: 左根右
// 先找根，再遞迴build左和右
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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return solve(preorder, inorder, 0, preorder.size(), 0, inorder.size());
    }
    
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int pl, int pr, int il, int ir) {
        
        if(preorder.empty()) return NULL;
        if(pl > preorder.size() || pr > preorder.size() || pl < 0 || pr < 0 || pl >= pr) return NULL;
        if(il > inorder.size() || ir > inorder.size() || il < 0 || ir < 0 || il >= ir) return NULL;
            
        TreeNode* root = new TreeNode(preorder[pl]);
        if(pl + 1 == pr || il + 1 == ir) return root;
        
        // left subtree size
        int lsize = 0;
        for(int i = il; i < ir; ++i) {
            if(inorder[i] == root->val) {
                break;
            } else {
                lsize++;
            }
        }
        
        TreeNode *left = solve(preorder, inorder, pl + 1, pl + 1 + lsize, il, il + lsize);
        TreeNode *right = solve(preorder, inorder, pl + 1 + lsize, pr, il + lsize + 1, ir);
        
        root->left = left;
        root->right = right;
        return root;
        
    }
};
