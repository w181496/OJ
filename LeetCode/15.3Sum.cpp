// O(n^2)
// 排序O(nlogn) + 固定第一個數做2Sum O(n^2)
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        if(nums.size() < 3) return ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 2; ++i) {
            while(i > 0 && i < nums.size() - 2 && nums[i] == nums[i - 1]) i++;
            if(i > 0 && nums[i] == nums[i - 1]) break;
            int start = i + 1, end = nums.size() - 1;
            while(start < end) {
                int sum = nums[i] + nums[start] + nums[end];
                if(sum > 0) {
                    end--;
                } else if(sum == 0) {
                    vector<int>tmp;
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[start]);
                    tmp.push_back(nums[end]);
                    ans.push_back(tmp);
                    start++;
                    while(start < end && nums[start] == nums[start - 1]) start++;
                    end--;
                    while(end > start && nums[end] == nums[end + 1]) end--;
                } else {
                    start++;   
                }
            }
        }
        return ans;
    }
};
