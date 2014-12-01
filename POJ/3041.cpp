#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

vector<int>g[510];
int m[510];
int v[510];

bool dfs(int u)
{
    for(int i = 0; i < g[u].size(); ++i)
    {
        if(!v[g[u][i]])
        {
            v[g[u][i]] = 1;
            if(m[g[u][i]] == -1 || dfs(m[g[u][i]]))
            {
                m[g[u][i]] = u;
                return true;
            }
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int n, k, x, y, ans = 0;
    while(cin >> n >> k){
        for(int i = 0; i < n; ++i) g[i].clear();
        memset(m, -1, sizeof(m));
        for(int i = 0; i < k; ++i)
        {
            cin >> x >> y;
            g[x - 1].push_back(y - 1);
        }
        for(int i = 0; i < n; ++i) {
            memset(v, 0, sizeof(v));
            if(dfs(i)) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
