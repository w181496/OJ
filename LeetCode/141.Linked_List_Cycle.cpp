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
    bool hasCycle(ListNode *head) {
        ListNode *check = new ListNode(1e8);
        ListNode *tmp;
        while(head != NULL) {
            if(head->val == 1e8) return true;
            tmp = head;
            head = head->next;
            if(tmp->next) tmp->next = check;
        }
        return false;
    }
};
