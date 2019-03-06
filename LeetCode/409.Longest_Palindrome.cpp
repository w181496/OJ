// 題目：字串可以隨意重排，問最長回文子字串長度
// 字元出現偶數次，則必為解的一部分；奇數次則只能挑一組奇數個字元，其他只能挑偶數個
class Solution {
    public:
        int longestPalindrome(string s) {
            map<char, int>m;
            for(int i = 0; i < s.size(); ++i)
                m[s[i]]++;
            int ans = 0;
            int odd = 0;
            for(map<char, int>::iterator it = m.begin(); it != m.end(); it++) {
                if(it->second % 2 == 0) ans += (it->second);
                else {
                    ans += (it->second - 1);
                    odd = 1;
                }
            }
            return odd ? ans + 1 : ans;
        }
};
