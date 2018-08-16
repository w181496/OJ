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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL) return head;
        if(head->next != NULL) {
            ListNode *tmp = head->next->next;
            ListNode *n = head->next;
            n->next = head;
            head->next = swapPairs(tmp);
            return n;
        }
        return head;
    }
};
