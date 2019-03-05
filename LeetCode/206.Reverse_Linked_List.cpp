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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        if(head->next->next == NULL) {
            ListNode*tmp = head->next;
            head->next->next = head;
            head->next = NULL;
            return tmp;
        }
        
        ListNode *prev, *cur, *nxt;
        prev = head;
        cur = head->next;
        nxt = head->next->next;
        prev->next = NULL;
        
        while(cur->next != NULL) {
            cur->next = prev;
            prev = cur;
            cur = nxt;
            nxt = nxt->next;
        }
        cur->next = prev;
        
        return cur;
        
    }
};
