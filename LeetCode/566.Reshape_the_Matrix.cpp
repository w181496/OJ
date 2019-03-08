class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        vector<vector<int>>ans(r);
        int idx = 0;
        if((nums.size() == 0 && r * c != 0) || (nums.size() != 0 && r * c != nums[0].size() * nums.size())) return nums;
        for(int i = 0; i < r; ++i) ans[i].resize(c);
        for(int i = 0; i < nums.size(); ++i) {
            for(int j = 0; j < nums[i].size(); ++j) {
                ans[idx / c][idx % c] = nums[i][j];
                idx++;
            }
        }
        return ans;
    }
};
