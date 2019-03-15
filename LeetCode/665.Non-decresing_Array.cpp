class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        if(nums.size() <= 1) return true;
        int cnt = 0, prev = nums[0];
        for(int i = 1; i < nums.size(); ++i) {
            if(cnt > 1) return false;
            if(nums[i] < nums[i - 1]) {
                if(i == 1) nums[i - 1] = nums[i], cnt++;
                else if(nums[i] > nums[i - 2]) nums[i - 1] = nums[i - 2], cnt++;
                else nums[i] = nums[i - 1], cnt++;
            }
        }
        if(cnt > 1) return false;
        return true;
    }
};
