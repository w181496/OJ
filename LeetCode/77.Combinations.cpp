// 爆搜+剪枝
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        dfs(ans, 0, n, k, vector<int>(), 1);
        return ans;
    }
    
    void dfs(vector<vector<int>>& ans, int cnt, int& n, int& k, vector<int>now, int idx) {
        if(cnt == k) {
            ans.push_back(now);
            return;
        }
        if(idx > n) return;
        if(n - idx + cnt + 1 < k) return;
        now.push_back(idx);
        dfs(ans, cnt + 1, n, k, now, idx + 1);
        now.pop_back();
        dfs(ans, cnt, n, k, now, idx + 1);
    }
    
};
