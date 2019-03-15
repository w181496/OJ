class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        if(nums.empty()) return false;
        while(l != r && nums[l] == nums[r]) l++;
        while(l < r) {
            int mid = (l + r) >> 1;
            if(nums[mid] == target) return true;
            else if(nums[mid] > nums[r]) l = mid + 1;
            else r = mid;
        }
        
        if(l != 0 && target <= nums[l - 1] && target >= nums[0]) {
            r = l - 1;
            l = 0;
        } else {
            r = nums.size() - 1;   
        }
        
        while(l < r) {
            int mid = (l + r) >> 1;
            if(nums[mid] == target) return true;
            else if(nums[mid] > target) r = mid;
            else l = mid + 1;
        }
        if(nums[l] == target) return true;
        
        return false;
    }
    
};
