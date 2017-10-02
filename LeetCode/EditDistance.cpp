class Solution {
    public:
        int minDistance(string word1, string word2) {
            int dp[1000][1000];
            if(word1.size() == 0 || word2.size() == 0) return max(word1.size(), word2.size());
            for(int i = 0; i <= word1.size(); ++i) {
                for(int j = 0; j <= word2.size(); ++j) {
                    if(i == 0) dp[j][i] = j;
                    else if(j == 0) dp[j][i] = i;
                    else if(word1[i - 1] == word2[j - 1]) dp[j][i] = dp[j - 1][i - 1];
                    else dp[j][i] = min(min(dp[j - 1][i], dp[j][i - 1]), dp[j - 1][i - 1]) + 1;
                }
            }
            return dp[word2.size()][word1.size()];
        }
};
