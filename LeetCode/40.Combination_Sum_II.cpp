// 暴力硬幹...
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>tmp;
        vector<vector<int>>ans;
        sort(candidates.begin(), candidates.end());
        dfs(candidates, target, 0, 0, tmp, ans);
        return ans;
    }
    
    void dfs(vector<int>& candidates, int &target, int idx, int now, vector<int>res, vector<vector<int>>&ans) {
        if(now > target) return;
        if(now == target) {
            bool flag = false;
            for(int i = 0; i < ans.size(); ++i)
                if(ans[i] == res) {
                    flag = true;
                    break;
                }
            if(!flag) ans.push_back(res);
            return;
        }
        for(int i = idx; i < candidates.size(); ++i) {
            int tmp = i + 1;
            res.push_back(candidates[i]);
            dfs(candidates, target, i + 1, now + candidates[i], res, ans);
            res.pop_back();
        }
    }
};
