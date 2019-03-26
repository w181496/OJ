class Solution {
public:
    int minMoves(vector<int>& nums) {
        int c = 0;
        int mn = 2147483647;
        for(int i = 0; i < nums.size(); ++i)
            mn = min(nums[i], mn);
        for(int i = 0; i < nums.size(); ++i)
            c += (nums[i] - mn);
        return c;
    }
};
