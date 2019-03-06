// 二分搜兩次(左,右)
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        vector<int>ans;
        while(l <= r) {
            int m = (l + r) >> 1;
            if(nums[m] == target) {
                if(m > 0 && nums[m - 1] == target) {
                    r = m;
                } else {
                    ans.push_back(m);
                    break;
                }
            } else if(nums[m] < target) {
                l = m + 1;
            } else {
                r = m;
            }
            if(l == r && nums[l] != target) break;
        }
        if(nums.size() == 0 || l > r || (l == r && nums[l] != target)) {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        l = 0; 
        r = nums.size() - 1;
        while(l <= r) {
            int m = (l + r) >> 1;
            if(nums[m] == target) {
                if(m < nums.size() - 1 && nums[m + 1] == target) {
                    l = m + 1;
                } else {
                    ans.push_back(m);
                    break;
                }
            } else if(nums[m] < target) {
                l = m + 1;
            } else {
                r = m;
            }
            if(l == r && nums[l] != target) break;
        }
        return ans;
    }
};
