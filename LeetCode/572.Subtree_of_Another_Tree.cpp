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
    bool isSubtree(TreeNode* s, TreeNode* t) {
        return dfs(s, t);
    }
    
    bool dfs(TreeNode *s, TreeNode *t) {
        if(!s && !t) return true;
        else if(!s) return false;
        else if(!t) return false;
        if(s->val != t->val) {
            return dfs(s->left, t) || dfs(s->right, t);   
        }
        if(isEqual(s, t)) return true;
        else return dfs(s->left, t) || dfs(s->right, t);
    }
    
    bool isEqual(TreeNode *s, TreeNode* t) {
        if(!s && !t) return true;
        if(!s) return false;
        if(!t) return false;
        if(s->val != t->val) return false;
        return isEqual(s->left, t->left) && isEqual(s->right, t->right);
    }
    
};
