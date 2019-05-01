// 雙色DFS
class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        if(graph.empty()) return true;
        vector<int>chk(graph.size(), -1);
        bool res = true;
        for(int i = 0; i < graph.size() && res; ++i)
            if(chk[i] == -1)
                res &= dfs(graph, chk, i);
        return res;
    }
    
    bool dfs(vector<vector<int>>& graph, vector<int>&chk, int now) {
        bool res = true;
        if(chk[now] == -1) {
            int who = -1;
            for(int i = 0; i < graph[now].size(); ++i) {
                if(chk[graph[now][i]] != who) {
                    who = !chk[graph[now][i]];
                    break;
                }
            }
            if(who == -1) chk[now] = 0;
            else chk[now] = who;
        }
        for(int i = 0; i < graph[now].size(); ++i) {
            int target = graph[now][i];
            if(chk[target] == -1) {
                chk[target] = !chk[now];
                res &= dfs(graph, chk, target);
                if(!res) return res;
            } else if(chk[target] == chk[now]) {
                return false;
            }
        }
        return res;
    }
    
};
