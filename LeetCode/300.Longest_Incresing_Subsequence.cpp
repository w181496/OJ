// O(n^2) DP
/*
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>dp;
        int ans = 1;
        if(nums.size() == 0) return 0;
        for(int i = 0; i < nums.size(); ++i)
            dp.push_back(1);
        for(int i = 1; i < dp.size(); ++i) {
            for(int j = 0; j < i; ++j)
                if(nums[i] > nums[j]) dp[i] = max(dp[i], dp[j] + 1);   
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};
*/

// O(nlogn) Binary Search
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>lis;
        if(!nums.size()) return 0;
        lis.push_back(nums[0]);
        for(int i = 1; i < nums.size(); ++i) {
            if(nums[i] > lis.back()) lis.push_back(nums[i]);
            else *lower_bound(lis.begin(), lis.end(), nums[i]) = nums[i];
        }
        return lis.size();
    }
};
