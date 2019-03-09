// 注意邊界case
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l = 0;
        ListNode *p = head;
        while(p) {
            p = p->next;
            l++;
        }
        p = head;
        for(int i = 0; i < l - n - 1; ++i)
            p = p->next;
        if(l == n) return head->next;
        else if(p->next == NULL) return NULL;
        else if(p->next->next) p->next = p->next->next;
        else p->next = NULL;
        return head;
    }
};
