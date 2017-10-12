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
        ListNode* insertionSortList(ListNode* head) {
            ListNode *ans = new ListNode(-1);
            ans->next = NULL;
            while(head != NULL) {
                ListNode *prev = ans;
                ListNode *tmp = ans->next;
                while(tmp != NULL && head->val > tmp->val) {    // 找可以插的地方
                    prev = tmp;
                    tmp = tmp->next;
                }
                prev->next = head;  //插在後面
                head = head->next;
                prev->next->next = tmp; //把原本後面的繼續接上插上去的東西後面
            }
            return ans->next;
        }
};
