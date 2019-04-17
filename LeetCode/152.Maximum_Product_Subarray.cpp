class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.empty()) return 0;
        vector<int>mx(nums.size(), 0);
        vector<int>mn(nums.size(), 0);
        int ans = nums[0];
        mx[0] = mn[0] = nums[0];
        for(int i = 1; i < nums.size(); ++i) {
            mx[i] = max(max(mx[i - 1] * nums[i], nums[i]), mn[i - 1] * nums[i]);
            mn[i] = min(min(mx[i - 1] * nums[i], nums[i]), mn[i - 1] * nums[i]);
            ans = max(ans, mx[i]);
        }
        return ans;
    }
};
