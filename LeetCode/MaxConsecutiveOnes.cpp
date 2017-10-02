class Solution {
    public:
        int findMaxConsecutiveOnes(vector<int>& nums) {
            int ans = 0;
            int cnt = 0;
            for(int i = 0; i < nums.size(); ++i) {
                if(nums[i] == 0) cnt = 0;
                else cnt++;
                ans = max(ans, cnt);
            }
            return ans;
        }
};
