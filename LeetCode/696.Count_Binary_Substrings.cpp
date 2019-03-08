// 類似Codeforces的Sushi for Two
class Solution {
public:
    int countBinarySubstrings(string s) {
        int ans = 0;
        int cnt1 = 1, cnt2 = 0;
        if(s.size() <= 1) return 0;
        for(int i = 1; i < s.size(); ++i) {
            if(s[i] != s[i - 1]) {
                if(cnt2 == 0) cnt2++;
                else {
                    ans += min(cnt1, cnt2);
                    cnt1 = cnt2;
                    cnt2 = 1;
                }
            } else {
                if(cnt2 != 0) cnt2++;
                else cnt1++;
            }
        }
        ans += min(cnt1, cnt2);
        return ans;
    }
};
