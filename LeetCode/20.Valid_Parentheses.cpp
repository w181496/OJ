class Solution {
    public:
        bool isValid(string s) {
            char stk[30000];
            int idx = 0;
            for(int i = 0; i < s.size(); ++i) {
                if(s[i] == ')') {
                    if(idx == 0 || stk[idx - 1] != '(') return false;
                    else idx--;
                } else if(s[i] == '}') {
                    if(idx == 0 || stk[idx - 1] != '{') return false;
                    else idx--;
                } else if(s[i] == ']') {
                    if(idx == 0 || stk[idx - 1] != '[') return false;
                    else idx--;
                } else {
                    stk[idx++] = s[i];
                }
            }
            if(idx != 0) return false;
            return true;
        }
};
