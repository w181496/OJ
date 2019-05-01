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
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *p1, *p2;
        p1 = head;
        p2 = head->next;
        while(p2 && p2->next) {
            p1 = p1->next;
            p2 = p2->next->next;
        }
        p2 = p1->next;
        p1->next = NULL;
        p1 = head;
        
        return mergeList(sortList(p1), sortList(p2));
    }
    
    ListNode* mergeList(ListNode* p1, ListNode* p2) {
        if(p1 && p2 && p1->val > p2->val) swap(p1, p2);
        ListNode *res = p1;
        while(p1->next && p2) {
            if(p1->next->val < p2->val) {
                if(!p1->next) break;
                p1 = p1->next;
            } else {
                ListNode* tmp = p1->next;
                p1->next = p2;
                p1 = p1->next;
                p2 = p2->next;
                p1->next =tmp;
            }
        }
        while(p2) {
            p1->next = p2;
            p1 = p1->next;
            p2 = p2->next;
        }
        return res;
    }
    
};
