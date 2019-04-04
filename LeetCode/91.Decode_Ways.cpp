// DP
// 結尾為0的狀況要注意
class Solution {
public:
    int numDecodings(string s) {
        vector<long long int>dp(s.size());
        for(int i = 0; i < s.size(); ++i) {
            if(i == 0) {
                if(s[i] == '0') dp[i] = 0;
                else dp[i] = 1;
            } else {
                if(i > 0 && ((s[i - 1] == '1') || (s[i - 1] == '2' && s[i] - '0' < 7))) {
                    if(i - 2 < 0 && s[i] == '0') dp[i] = 1;
                    else if(i - 2 < 0) dp[i] = dp[i - 1] + 1;
                    else if(s[i] == '0') dp[i] = dp[i - 2];
                    else dp[i] = dp[i - 1] + dp[i - 2];
                } else if(s[i] == '0') {
                    dp[i] = 0;
                } else {
                    dp[i] = dp[i - 1];
                }
            }
        }
        return dp[s.size() - 1];
    }
};
