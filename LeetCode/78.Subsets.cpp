class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        dfs(nums, vector<int>(), 0, ans);
        return ans;
    }
    
    void dfs(vector<int>& nums, vector<int>now, int idx, vector<vector<int>>& ans) {
        if(idx == nums.size()) {
            ans.push_back(now);
            return;
        }
        now.push_back(nums[idx]);
        dfs(nums, now, idx + 1, ans);
        now.pop_back();
        dfs(nums, now, idx + 1, ans);
    }
    
};
