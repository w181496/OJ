//最大二分匹配
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
typedef long long LL;
vector<int>g[1001];
int vis[1010], m[1010];
int n, k, r, c, ans, t = 0;

bool dfs(int now)
{
    for(int i = 0; i < g[now].size(); ++i)
    {
         if(!vis[g[now][i]])
         {
             vis[g[now][i]] = 1;
             if(m[g[now][i]] < 0 || dfs(m[g[now][i]])) {
                 m[g[now][i]] = now;   
                 return true;
             }
         }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    while(cin >> n >> k && n && k){
        ans = 0;
        memset(g, 0, sizeof(g));
        memset(m, -1, sizeof(m));
        for(int i = 0; i < k; ++i)
        {
            cin >> r >> c;
            g[r-1].push_back(c-1);
        }
        for(int i = 0; i < n; ++i)
        {
             memset(vis, 0, sizeof(vis));
             if(dfs(i)) ans++;
        }
        cout << "Case #" << ++t << ":" << ans <<endl;
    }
    return 0;
}
