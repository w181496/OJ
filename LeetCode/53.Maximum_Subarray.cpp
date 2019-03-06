class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int mx = nums[0];
            int cnt = 0;
            for(int i = 0; i < nums.size(); ++i) {
                cnt += nums[i];
                if(cnt > mx) mx = cnt;
                if(cnt < 0) {
                    cnt = 0;
                }
            }
            return mx;
        }
};
