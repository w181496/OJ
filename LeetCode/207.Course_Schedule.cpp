// 黑白灰判斷有向圖是否有環
class Solution {
public:
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
        vector<vector<int>>mx(numCourses);
        vector<int>state(numCourses);
        for(int i = 0; i < prerequisites.size(); ++i) {
            int x, y;
            x = prerequisites[i].first;
            y = prerequisites[i].second;
            mx[x].push_back(y);
        }
        for(int i = 0; i < numCourses; ++i)
            state[i] = 0;
        bool ans = true;
        for(int i = 0; i < numCourses && ans; ++i)
            if(state[i] == 0)
                ans &= dfs(i, state, mx);
        return ans;
    }
    
    bool dfs(int now, vector<int>&state, vector<vector<int>>& mx) {
        state[now] = 1;
        bool flag = true;
        for(int i = 0; i < mx[now].size(); ++i) {
            int target = mx[now][i];
            if(state[target] == 1) return false;
            if(state[target] == 0) flag &= dfs(target, state, mx); 
        }
        state[now] = 2;
        return flag;
    }
     
};
