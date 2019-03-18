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
    ListNode* partition(ListNode* head, int x) {
        ListNode *ans1 = new ListNode(-1);
        ListNode *ans2 = new ListNode(-1);
        ListNode *tmp = ans2;
        ListNode *ans = ans1;
        ListNode *now = head;
        while(now != NULL) {
            if(now->val < x) {
                ans1->next = now;
                ans1 = ans1->next;
                now = now->next;
            } else {
                ans2->next = now;
                ans2 = ans2->next;
                now = now->next;
            }
        }
        ans1->next = tmp->next;
        ans2->next = NULL;
        ans = ans->next;
        return ans;
    }
};
