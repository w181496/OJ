class Solution {
public:
    int calculate(string s) {
        stack<pair<char,int>>stk;
        int sign = 1;
        for(int i = 0; i < s.size(); ++i) {
            if(s[i] == ' ') continue;
            if(s[i] >= '0' && s[i] <= '9') {
                int tmp = 0;
                int idx = i;
                while(s[idx] >= '0' && s[idx] <= '9' && idx < s.size()) {
                    tmp = tmp * 10 + (s[idx] - '0');
                    idx++;
                }
                stk.push(make_pair('I', sign * tmp));
                i = idx - 1;
            } else if(s[i] == '-') {
                sign = -1;
            } else if(s[i] == '+') {
                sign = 1;
            } else if(s[i] == '(') {
                if(sign == 1) stk.push(make_pair('+', -1));
                else stk.push(make_pair('-', -1));
                stk.push(make_pair('(', -1));
                sign = 1;
            } else if(s[i] == ')') {
                int sum = 0;
                while(!stk.empty()) {
                    pair<char,int>p = stk.top();
                    stk.pop();
                    if(p.first == '(') {
                        break;
                    }
                    sum += p.second;
                } 
                pair<char,int>tmp = stk.top();
                stk.pop();
                if(tmp.first == '-') sum *= -1;
                stk.push(make_pair('I', sum));
            } else if(s[i] != '+') {
                stk.push(make_pair(s[i], -1));
            }
        }
        int ans = 0;
        while(!stk.empty()) {
            pair<char,int>p = stk.top();
            stk.pop();
            ans += p.second;
        }
        return ans;
    }
};
