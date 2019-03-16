// DP
// dp(i): 以s[i]結尾的最大成對括號長度
// 轉移式: 
//  dp(i) = 0, if s[i] == '('
//  dp(i) = dp(i - 2) + 2, if s[i-1..i] == "()"
//  dp(i) = dp(i - 1) + 2 + dp(i - 1 - dp(i - 1) - 1), s[i - 1 - dp[i - 1]] == '('
//  ...
class Solution {
public:
    int longestValidParentheses(string s) {
        vector<int>dp(s.size());
        for(int i = 0; i < s.size(); ++i) {
            if(i == 0 || s[i] == '(') dp[i] = 0;
            else if(i > 1 && s[i] == ')' && s[i - 1] == '(') dp[i] = dp[i - 2] + 2;
            else if(i - 1 - dp[i - 1] > 0 && s[i - 1 - dp[i - 1]] == '(') dp[i] = dp[i - 1] + 2 + dp[i - 1 - dp[i - 1] - 1];
            else if(i - 1 - dp[i - 1] >= 0 && s[i - 1 - dp[i - 1]] == '(') dp[i] = dp[i - 1] + 2;
            else dp[i] = 0;
        }
        int ans = 0;
        for(int i = 0; i < dp.size(); ++i)
            ans = max(ans, dp[i]);
        return ans;
    }
};
