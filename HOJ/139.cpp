#include <iostream>
#include <vector>
using namespace std;
#define INF 2100000000
struct Node {
    int to;
    int w;
};
int main()
{
    ios_base::sync_with_stdio(0);
    int n, m, u, v, w, d[510];
    while(cin >> n >> m) {
        vector<Node>G[510];
        for(int i = 1; i <= n; ++i) d[i] = INF;
        d[1] = 0;
        for(int i = 0; i < m; ++i) {
            cin >> u >> v >> w;
            G[u].push_back((Node){v, w});
        }
        for(int i = 0; i < n; ++i)
            // 遍歷每條邊
            for(int j = 1; j <= n; ++j)
                for(int k = 0; k < G[j].size(); ++k)
                    if(d[j] < INF && d[G[j][k].to] > d[j] + G[j][k].w)
                        d[G[j][k].to] = d[j] + G[j][k].w;
        int flag = 0, res = d[n];
        for(int j = 1; j <= n; ++j)
            for(int k = 0; k < G[j].size(); ++k)
                if(d[j] < INF && d[G[j][k].to] > d[j] + G[j][k].w)
                    d[G[j][k].to] = d[j] + G[j][k].w;
        if(res > d[n]) flag = 1;
        if(flag || d[n] == INF) cout << "QAQ" << endl;
        else cout << d[n] << endl;
    }
    return 0;
}
