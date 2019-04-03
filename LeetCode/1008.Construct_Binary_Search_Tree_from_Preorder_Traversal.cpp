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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode *root;
        if(preorder.empty()) return NULL;
        root = new TreeNode(preorder[0]);
        for(int i = 1; i < preorder.size(); ++i) {
            TreeNode *tmp = root;
            while(1) {
                if(preorder[i] < tmp->val) {
                    if(!tmp->left) {
                        tmp->left = new TreeNode(preorder[i]);
                        break;
                    } else {
                        tmp = tmp->left;
                    }
                } else {
                    if(!tmp->right) {
                        tmp->right = new TreeNode(preorder[i]);
                        break;
                    } else {
                        tmp = tmp->right;
                    }
                }
            }
        }
        return root;
    }
};
