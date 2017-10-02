class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            if(nums.size() < 3) return nums.size();
            int idx = 1, cnt = 1;
            int prev = nums[0];
            for(int i = 1; i < nums.size(); ++i) {
                if(nums[i] == prev) {
                    cnt++;
                    if(cnt <= 2) {
                        nums[idx++] = nums[i];
                    }
                } else {
                    cnt = 1;
                    prev = nums[i];
                    nums[idx++] = nums[i];
                }
            }
            return idx;
        }
};
