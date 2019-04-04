class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.empty() || nums.size() == 1) return true;
        int now = nums[0];
        int idx = 0;
        while(now >= 0 && idx < nums.size()) {
            if(idx == nums.size() - 1) return true;
            now = max(now, nums[idx]);
            now--;
            idx++;
        }
        if(now >= 0 && idx >= nums.size() - 1) return true;
        return false;
    }
};
