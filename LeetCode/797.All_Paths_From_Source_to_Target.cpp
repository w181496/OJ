class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ans;
        vector<int>tmp;
        dfs(graph, ans, 0, tmp);
        return ans;
    }
    
    void dfs(vector<vector<int>>& graph, vector<vector<int>>& ans, int now, vector<int>tmp) {
        tmp.push_back(now);
        if(now == graph.size() - 1) {
            ans.push_back(tmp);
            return;
        }
        for(int i = 0; i < graph[now].size(); ++i) {
            dfs(graph, ans, graph[now][i], tmp);
        }
    }
};
