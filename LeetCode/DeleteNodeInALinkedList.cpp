/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *tmp = node;
        while(tmp->next) {
            tmp->val = tmp->next->val;
            if(tmp->next->next == NULL) {
                tmp->next = NULL;
                break;
            }
            tmp = tmp->next;
        }
    }
};
