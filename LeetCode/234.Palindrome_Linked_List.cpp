/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// 醜爆
// 反轉左半
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *pp, *p, *cur;
        int len = 0;
        if(head == NULL) return true;
        if(head->next == NULL) return true;
        if(head->next->next == NULL)
            if(head->val == head->next->val) return true;
            else return false;
        
        cur = head;
        while(cur != NULL) {
            len++;
            cur = cur->next;
        }
        
        pp = head;
        p = pp->next;
        cur = p->next;
        p->next = pp;
        pp->next = NULL;
        
        // 特判
        if(len == 3) {
            if(cur->val == pp->val) return true;
            return false;
        }
        if(len == 4) {
            if(cur->val == p->val && pp->val == cur->next->val) return true;
            return false;
        }
        if(len == 5) {
            if(cur->next->val == p->val && cur->next->next->val == pp->val) return true;
            return false;
        }
        
        if(len & 1) {
            for(int i = 1; i <= (len - 1) / 2 - 3; ++i) {
                p->next = pp;
                pp = p;
                p = cur;
                cur = cur->next;
            }
            p->next = pp;
            pp = cur->next->next;
            cur->next = p;
            p = cur;
            cur = pp;
            while(cur != NULL) {
                if(cur->val != p->val) return false;
                cur = cur->next;
                p = p->next;
            }
        } else {
            for(int i = 1; i <= len / 2 - 3; ++i) {
                p->next = pp;
                pp = p;
                p = cur;
                cur = cur->next;
            }
            p->next = pp;
            pp = cur->next;
            cur->next = p;
            p = cur;
            cur = pp;
            while(cur != NULL) {
                if(cur->val != p->val) return false;
                cur = cur->next;
                p = p->next;
            }
        }
        return true;
    }
};
