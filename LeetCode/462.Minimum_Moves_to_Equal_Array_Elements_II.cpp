// 中位數距離總和
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int mid, ans = 0;
        if(nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        if(nums.size() & 1) 
            mid = nums[nums.size() / 2];
        else
            mid = (nums[nums.size() / 2 - 1] + nums[nums.size() / 2]) / 2;
        for(int i = 0; i < nums.size(); ++i)
            ans += abs(mid - nums[i]);
        return ans;
    }
};
