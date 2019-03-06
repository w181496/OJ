class Solution {
public:
    int minAddToMakeValid(string S) {
        stack<int>stk;
        for(int i = 0; i < S.size(); ++i) {
            if(S[i] == '(') {
                stk.push(1);       
            } else {
                if(!stk.empty() && stk.top() == 1) {
                    stk.pop();
                    continue;
                } else {
                    stk.push(0);
                }
            }
        }
        return stk.size();
    }
};
