// DP
// dp[i][j] = dp[i - 1][j] + dp[i][j - 1]
// dp[i][j] = 0, if obstacleGrid[i][j] == 1
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid.empty()) return 0;
        vector<vector<long long int>>dp(obstacleGrid.size(), vector<long long int>(obstacleGrid[0].size()));
        for(int i = 0; i < dp.size(); ++i) {
            for(int j = 0; j < dp[i].size(); ++j) {
                if(i == 0 && j == 0) {
                    if(obstacleGrid[i][j] == 1) dp[i][j] = 0;
                    else dp[i][j] = 1;
                } else if(obstacleGrid[i][j] == 1) {
                    dp[i][j] = 0;
                } else {
                    if(i == 0) dp[i][j] = dp[i][j - 1];
                    else if(j == 0) dp[i][j] = dp[i - 1][j];
                    else dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                }
            }
        }
        return dp[dp.size() - 1][dp[0].size() - 1];
    }
};
