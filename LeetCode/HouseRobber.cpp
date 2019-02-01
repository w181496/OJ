// DP
class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return nums[0];
        vector<int>dp;
        dp.push_back(nums[0]);
        dp.push_back(max(nums[0], nums[1]));
        for(int i = 2; i < nums.size(); ++i) 
            dp.push_back(max(dp[i - 2] + nums[i], dp[i - 1]));
        return dp.back();
    }
};
