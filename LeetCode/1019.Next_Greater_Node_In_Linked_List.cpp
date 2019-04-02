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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ans;
        ListNode *prev = head;
        if(!head) return ans;
        head = head->next;
        prev->next = NULL;
        while(head) {
            ListNode*tmp = head->next;
            head->next = prev;
            prev = head;
            head = tmp;
        }
        head = prev;
        stack<int>s;
        while(head) {
            while(!s.empty() && s.top() <= head->val) s.pop();
            if(s.empty()) {
                ans.push_back(0);
                
            } else {
                ans.push_back(s.top());
            }
            s.push(head->val);
            head = head->next;
        }
        vector<int>rev;
        for(int i = ans.size() - 1; i >= 0; i--)
            rev.push_back(ans[i]);
        return rev;
    }
};
