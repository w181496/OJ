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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;
        ListNode* tmp = head;
        int len = 1;
        while(tmp->next) {
            tmp = tmp->next;
            len++;
        }
        ListNode* tail = tmp;
        tmp = head;
        for(int i = 1; i < len - (k % len); ++i)
            tmp = tmp->next;
        tail->next = head;
        head = tmp->next;
        tmp->next = NULL;
        return head;
    }
};
