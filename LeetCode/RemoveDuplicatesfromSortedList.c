/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* ans = head;
    while(head) {
        while(head->next && head->val == head->next->val) {
            head->next = head->next->next;
        }
        head = head->next;
    }
    return ans;
}
