// 正權有向圖最短路
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int N, int K) {
        vector<bool>label(N, false);
        vector<int>ans(N, 1e9);
        vector<vector<int>>edge(N, vector<int>(N, 1e9));
        
        for(int i = 0; i < times.size(); ++i) {
            int src = times[i][0] - 1;
            int dst = times[i][1] - 1;
            int w = times[i][2];
            edge[src][dst] = w;
        }
        
        ans[K - 1] = 0;
        for(int i = 0; i < N; ++i) {
            int mn = 1e9, x;
            for(int j = 0; j < N; ++j) {
                if(!label[j] && ans[j] < mn) {
                    mn = min(mn, ans[j]);
                    x = j;
                }
            }
            label[x] = true;
            for(int j = 0; j < N; ++j) {
                ans[j] = min(ans[j], ans[x] + edge[x][j]);
            }
        }
        int mx = -1e9;
        for(int i = 0; i < N; ++i) {
            mx = max(mx, ans[i]);
            if(ans[i] == 1e9) return -1;
        }
        return mx;
    }
};
