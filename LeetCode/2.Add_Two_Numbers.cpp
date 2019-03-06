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
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            ListNode* tmp = new ListNode(0);
            ListNode* tmp2;
            ListNode* ans;
            ans = tmp;
            tmp2 = tmp;
            bool chk = true;
            while(l1 != NULL || l2 != NULL) {
                if(l1 != NULL && l2 != NULL) {
                    tmp->val += (l1->val + l2->val);
                    l1 = l1->next;
                    l2 = l2->next;
                } else if(l1 != NULL) {
                    tmp->val += (l1->val);
                    l1 = l1->next;
                } else { 
                    tmp->val += (l2->val);
                    l2 = l2->next;
                }
                if(l1 != NULL || l2 != NULL)
                    tmp-> next = new ListNode(0);
                tmp = tmp->next;
            }
            int flag = 0;
            while(tmp2 != NULL) {
                tmp2->val += flag;
                flag = 0;
                if(tmp2->val > 9) {
                    flag = 1;
                    tmp2->val -= 10;
                }
                if(tmp2->next == NULL && flag) tmp2->next = new ListNode(0); 
                tmp2 = tmp2->next;
            }
            return ans;
        }
};
