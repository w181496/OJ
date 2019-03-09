// 3Sum簡單版(?
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans = target, diff = 1e8;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 2; ++i) {
            int start = i + 1, end = nums.size() - 1;
            while(start < end) {
                int sum = nums[i] + nums[start] + nums[end];
                if(sum == target) {
                    return target;
                } else if(sum > target) {
                    end--;
                    if(sum - target < diff) {
                        ans = sum;
                        diff = sum - target;
                    }
                } else {
                    start++;
                    if(target - sum < diff) {
                        ans = sum;
                        diff = target - sum;
                    }
                }
            }
        }
        return ans;
    }
};
