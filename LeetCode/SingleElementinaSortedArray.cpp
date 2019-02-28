// 二分搜
// 中間值判斷index是否為2的倍數
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        while(l < r) {
            int m = (l + r) >> 1;
            if(m == 0 || m == nums.size() - 1) {
                return nums[m];
            } else {
                if(nums[m - 1] == nums[m]) {
                    if(m % 2 == 1) l = m + 1;
                    else r = m - 2;
                } else if(nums[m + 1] == nums[m]) {
                    if((m + 1) % 2 == 1) l = m + 2;
                    else r = m - 1;
                } else {
                    return nums[m];
                }
            }
        }
        return nums[l];
    }
};
