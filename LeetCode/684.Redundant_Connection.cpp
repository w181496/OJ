// 並查集
class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int N = 0;
        for(int i = 0; i < edges.size(); ++i) 
            N = max(N, max(edges[i][0], edges[i][1]));
        vector<int>dis(N + 1);
        for(int i = 0; i < N + 1; i++)
            dis[i] = i;
        for(int i = 0; i < edges.size(); ++i) {
            int x = find(dis, edges[i][0] - 1), y = find(dis, edges[i][1] - 1);
            if(x == y) return edges[i];
            dis[x] = y;
        }
        return vector<int>();
    }
    
    int find(vector<int>& dis, int x) {
        if(dis[x] == x) return x;
        return dis[x] = find(dis, dis[x]);
    }
    
};
