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
    ListNode* middleNode(ListNode* head) {
        int l = 0;
        ListNode *ptr = head;
        if(head == NULL) return head;
        while(ptr != NULL) {
            ptr = ptr->next;
            l++;
        }
        ptr = head;
        l /= 2;
        for(int i = 1; i <= l; ++i)
            ptr = ptr->next;
        return ptr;
    }
};
