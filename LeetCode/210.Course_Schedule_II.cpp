// 新增一點，連向所有入度為0的點做拓樸排序
// 最後再檢查是否有沒走訪過的點，有代表其中某Component有環

class Solution {
public:
    vector<int> findOrder(int numCourses, vector<pair<int, int>>& prerequisites) {
        vector<int>ans, check(numCourses + 1), indegree(numCourses, 0);
        vector<vector<int>>mx(numCourses + 1);
        for(int i = 0; i < prerequisites.size(); ++i) {
            mx[prerequisites[i].second].push_back(prerequisites[i].first);
            indegree[prerequisites[i].first]++;
        }
        for(int i = 0; i < numCourses; ++i) {
            check[i] = 0;
            if(indegree[i] == 0) mx[numCourses].push_back(i);
        }
        vector<int>tmp;
        if(dfs(numCourses, numCourses, mx, tmp, check)) 
            for(int j = tmp.size() - 2; j >= 0; --j) 
                ans.push_back(tmp[j]);
        for(int i = 0; i < numCourses; ++i)
            if(check[i] == 0)
                return vector<int>();
        return ans;
    }
    
    bool dfs(int now, int numCourses, vector<vector<int>>& mx, vector<int>& res, vector<int>& check) {
        bool status = true;
        check[now] = 1;
        for(int i = 0; i < mx[now].size() && status; ++i) {
            if(check[mx[now][i]] == 1) return false;
            else if(check[mx[now][i]] == 0) status &= dfs(mx[now][i], numCourses, mx, res, check);
        }
        if(!status) return status;
        check[now] = 2;
        res.push_back(now);
        return status;
    }
    
};
