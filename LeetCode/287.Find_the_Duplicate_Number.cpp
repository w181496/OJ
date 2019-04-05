// BinarySearch 
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l = 1, r = nums.size() - 1;
        while(l < r) {
            int mid = (l + r) >> 1;
            int cnt = 0;
            for(int i = 0; i < nums.size(); ++i) 
                if(nums[i] <= mid) cnt++;
            if(cnt <= mid) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        return l;
    }
};
