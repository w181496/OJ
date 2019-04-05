// 要注意的地方大概就開頭跟結尾
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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        
        if(m == n) return head;
        
        ListNode* first = new ListNode(87);
        first->next = head;
        head = first;
        
        int cnt = -1;
        bool isTail = false;
        ListNode* tmp = head;
        ListNode* prev_node;
        ListNode* next_node;
        while(tmp) {
            cnt++;
            if(cnt == m - 1) {
                prev_node = tmp;
            } else if(cnt == n) {
                if(tmp->next == NULL)
                    next_node = NULL;
                else 
                    next_node = tmp->next;
                tmp->next = NULL;
                break;
            } 
            tmp = tmp->next;
        }
        tmp = prev_node->next;
        
        ListNode* prev = NULL;
        while(tmp) {
            if(!prev) {
                prev = tmp;
                tmp = tmp->next;
                prev->next = next_node;
            } else {
                ListNode* tmp2 = tmp->next;
                tmp->next = prev;
                prev = tmp;
                tmp = tmp2;
            }
        }
        prev_node->next = prev;
        return head->next;
    }
};
