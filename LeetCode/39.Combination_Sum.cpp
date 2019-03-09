class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>tmp;
        vector<vector<int>>ans;
        dfs(candidates, 0, target, 0, tmp, ans);
        return ans;
    }
    
    void dfs(vector<int>& candidates, int idx, int& target, int now, vector<int>res, vector<vector<int>>& ans) {
        if(now > target) return;
        if(now == target) {
            ans.push_back(res);
            return;
        }
        if(idx >= candidates.size()) return;
        for(int i = idx; i < candidates.size(); ++i) {
            res.push_back(candidates[i]);
            dfs(candidates, i, target, now + candidates[i], res, ans);
            res.pop_back();
        }
    }
};
