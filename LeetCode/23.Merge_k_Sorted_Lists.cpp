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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return NULL;
        ListNode* ans = lists[0];
        for(int i = 1; i < lists.size(); ++i)
            ans = mergeTwoList(ans, lists[i]);   
        return ans;
    }
    
    ListNode *mergeTwoList(ListNode* a, ListNode* b) {
        ListNode* tmp = new ListNode(-1);
        ListNode* res;
        res = tmp;
        while(a != NULL && b != NULL) {
            if(a->val < b->val) {
                tmp->next = a;
                tmp = tmp->next;
                a = a->next;
            } else {
                tmp->next = b;
                tmp = tmp->next;
                b = b->next;
            }
        }
        while(a != NULL) {
            tmp->next = a;
            tmp = tmp->next;
            a = a->next;
        }
        while(b != NULL) {
            tmp->next = b;
            tmp = tmp->next;
            b = b->next;
        }
        res = res->next;
        return res;
    }
    
};
