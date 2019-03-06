class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        while(l < r) {
            int mid = (l + r) >> 1;
            if(target == nums[mid]) return mid;
            else if(target > nums[mid]) l = mid + 1;
            else r = mid;
        }
        if(nums[l] != target) return -1;
        return l;
    }
};
