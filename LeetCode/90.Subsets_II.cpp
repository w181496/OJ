class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        map<vector<int>,bool>chk;
        dfs(nums, ans, 0, vector<int>(), chk);
        return ans;
    }
    
    void dfs(vector<int>& nums, vector<vector<int>>& ans, int base, vector<int>now, map<vector<int>,bool>& chk) {
        if(!chk.count(now)) {
            ans.push_back(now);
            chk[now] = true;
        }
        for(int i = base; i < nums.size(); ++i) {
            now.push_back(nums[i]);
            vector<int>tmp = now;
            sort(tmp.begin(), tmp.end());
            dfs(nums, ans, i + 1, tmp, chk);
            now.pop_back();
        }
    }
    
};
