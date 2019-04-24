// 快慢指標 (走一步、走兩步)
// 第一次相遇時，把其中一個指標指到開頭，一起以相同速度走，下一次碰到就是迴圈開頭

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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        if(!head) return NULL;
        do {
            slow = slow->next;
            if(!slow || !fast->next) return NULL;
            fast = fast->next->next;
            if(!fast) return NULL;
        } while(slow != fast);
        
        slow = head;
        if(slow == fast) return slow;
        do {
            slow = slow->next;
            if(!slow) return NULL;
            fast = fast->next;
            if(!fast) return NULL;
        } while(slow != fast);
        
        return slow;
        
    }
};
