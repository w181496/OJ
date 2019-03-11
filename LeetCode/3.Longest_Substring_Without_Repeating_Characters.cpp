// O(n)
// Hash
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>ans(s.size(), 0);
        map<char, int>m;
        int mx = 0;
        if(s.size() == 0) return mx;
        ans[0] = mx = 1;
        m[s[0]] = 0;
        for(int i = 1; i < s.size(); ++i) {
            if(!m.count(s[i])) ans[i] = ans[i - 1] + 1, m[s[i]] = i;
            else if(i - m[s[i]] > ans[i - 1]) ans[i] = ans[i - 1] + 1, m[s[i]] = i;
            else ans[i] = i - m[s[i]], m[s[i]] = i;
            mx = max(mx, ans[i]);
        }
        return mx;
    }
};
