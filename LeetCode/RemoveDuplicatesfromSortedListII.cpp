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
        ListNode* deleteDuplicates(ListNode* head) {
            ListNode *t = new ListNode(-1);
            ListNode *ans = t;
            t->next = head;
            while(t) {
                bool flag = false;
                while(t->next && t->next->next && t->next->val == t->next->next->val) {
                    t->next = t->next->next;
                    flag = true;
                }
                if(flag) t->next = t->next->next;
                else t = t->next;
            }
            return ans->next;
        }
};

