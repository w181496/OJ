class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            if(nums.size() == 0) return 0;
            sort(nums.begin(), nums.end());
            int idx = 1;
            int prev = nums[0];
            for(int i = 1; i < nums.size(); ++i) {
                if(nums[i] != prev) {
                    prev = nums[i];
                    swap(nums[i], nums[idx]);
                    idx++;
                } else {
                    prev = nums[i];
                }
            }
            return idx;
        }
};
