class Solution {
    public:
        int minimumTotal(vector<vector<int>>& triangle) {
            int sz = triangle.size();
            int dp[triangle.size()][triangle[sz - 1].size()];
            for(int i = 0; i < triangle.size(); ++i)
                for(int j = 0; j < triangle[i].size(); ++j)
                    if(i == 0) dp[i][j] = triangle[i][j];
                    else if(j == 0) dp[i][j] = dp[i - 1][j] + triangle[i][j];
                    else if(j == triangle[i].size() - 1) dp[i][j] = dp[i - 1][j - 1] + triangle[i][j];
                    else dp[i][j] = min(dp[i - 1][j], dp[i - 1][j - 1]) + triangle[i][j];
            int ans = 1e9;
            for(int i = 0; i < triangle[sz - 1].size(); ++i)
                if(dp[sz - 1][i] < ans) ans = dp[sz - 1][i];
            return ans;
        }
};
