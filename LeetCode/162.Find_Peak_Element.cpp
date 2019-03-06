class Solution {
    public:
        int findPeakElement(vector<int>& nums) {
            int ans = 0;
            int now = -2147483648;
            for(int i = 0; i < nums.size(); ++i) {
                if(nums[i] > now) {
                    ans = i;
                    now = nums[i];
                }
            }
            return ans;
        }
};
