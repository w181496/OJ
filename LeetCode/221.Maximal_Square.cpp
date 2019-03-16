// 經典DP: 最大正方形
// 狀態轉移(邊長): dp[i][j] = min(dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]) + 1
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if(matrix.size() == 0) return 0;
        vector<vector<int>>dp(matrix.size(), vector<int>(matrix[0].size(), 0));
        int ans = 0;
        for(int i = 0; i < matrix.size(); ++i) {
            for(int j = 0; j < matrix[i].size(); ++j) {
                if(i == 0 || j == 0 || matrix[i][j] == '0') 
                    dp[i][j] = matrix[i][j] - '0';
                else 
                    dp[i][j] = min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1])) + 1;
                ans = max(ans, dp[i][j]);
            }
        }
        return ans * ans;
    }
};
