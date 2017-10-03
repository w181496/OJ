// O(n ^ 2) 勉強卡過=.=
class Solution {
    public:
        string longestPalindrome(string s) {
            string ans;
            if(s.size() == 0) return ans;
            bool flag = true;
            for(int i = 0; i <= s.size() / 2; ++i)
                if(s[i] != s[s.size() - 1 - i]) {
                    flag = false;
                    break;
                }
            if(flag) return s;
            for(int i = 0; i < s.size(); ++i) {
                string tmp;
                if(i + 1 < s.size() && s[i] == s[i + 1]) {
                    tmp = chk(s, tmp, i, i + 1);
                }
                if(tmp.size() > ans.size()) ans = tmp;
                tmp = "";
                tmp = chk(s, tmp+s[i], i - 1, i + 1);
                if(tmp.size() > ans.size()) ans = tmp;
            }
            return ans;
        }
        string chk(string s, string tmp, int l, int r) {
            if(l < 0 || r >= s.size()) return tmp;
            for(int i = 0; l - i >= 0 && r + i < s.size(); ++i) {
                if(s[l - i] != s[r + i]) return tmp;
                else tmp = s[l - i] + tmp + s[r + i];
            }
            return tmp;
        }
};
