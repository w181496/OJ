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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *prev, *cur;
        if(head == NULL || (head->next == NULL && head->val == val)) return NULL;
        if(head->next == NULL) return head;
        while(head && head->val == val) head = head->next;
        
        if(!head) return head;
         
        prev = head;
        cur = head->next;
        while(cur) {
            if(cur->val == val) {
                while(cur && cur->val == val)
                    cur = cur->next;   
                prev->next = cur;
                prev = cur;
                if(cur) cur = cur->next;
            } else {
                prev = cur;
                cur = cur->next;
            }
        }
        return head;
    }
};
