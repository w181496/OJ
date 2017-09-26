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
        ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
            ListNode* ans;
            ListNode* tmp = NULL;
            ListNode* gg;
            bool flag = false;
            while(l1 != NULL || l2 != NULL) {
                if(l1 != NULL && l2 != NULL) {
                    if(l1->val < l2->val) {
                        gg = new ListNode(l1->val);
                        l1 = l1->next;
                    } else {
                        gg = new ListNode(l2->val);
                        l2 = l2->next;
                    }
                } else if(l1 != NULL) {
                    while(l1 != NULL) {
                        gg = new ListNode(l1->val);
                        if(!flag) {
                            ans = gg;
                            tmp = ans;
                            flag = !flag;
                        }
                        else {
                            ans->next = gg;
                            ans = ans->next;
                        }
                        l1 = l1->next;
                    }
                    return tmp;
                } else {
                    while(l2 != NULL) {
                        gg = new ListNode(l2->val);
                        if(!flag) {
                            ans = gg;
                            tmp = ans;
                            flag = !flag;
                        }
                        else {
                            ans->next = gg;
                            ans = ans->next;
                        }
                        l2 = l2->next;
                    }
                    return tmp;
                }
                if(!flag) {
                    ans = gg;
                    tmp = ans;
                    flag = !flag;
                } else {
                    ans->next = gg;
                    ans = ans->next;
                }
            }
            return tmp;
        }
};
