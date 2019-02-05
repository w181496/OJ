class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int dp[400000] = {0};
    
        for(int i = 1; i <= amount; i++)
            if(dp[i] != 1) dp[i] = 1e9;
        
        for(int i = 1; i <= amount; i++) {
            for(int j = 0; j < coins.size(); j++) {
                if(coins[j] > i) continue;
                dp[i] = min(dp[i - coins[j]] + 1, dp[i]);
            }
        }
        
        return dp[amount] == 1e9 ? -1 : dp[amount];
        
    }
};
