/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {

        if(!head) return NULL;
        
        int len = 0;
        ListNode* tmp = head;
        while(tmp) {
            tmp = tmp->next;
            len++;
        }
        
        return dfs(head, 0, len - 1);
    }
    
    TreeNode* dfs(ListNode* head, int l, int r) {
        
        if(l > r) return NULL;
        
        int mid = (r - l) >> 1;
        ListNode *tmp = head;
        for(int i = 0; i < mid; ++i)
            tmp = tmp->next;
        TreeNode *root = new TreeNode(tmp->val);
        root->left = dfs(head, l, l + mid - 1);
        root->right = dfs(tmp->next, l + mid + 1, r);
        return root;
    }
};
