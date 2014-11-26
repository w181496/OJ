#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <cmath>
#include <cstring>
#include <vector>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <stack>
using namespace std;
typedef long long LL;
int n, m, x, y;
vector<int>g[40010];
int color[40010];

bool bi(int u)
{
    for(int i = 0; i < g[u].size(); ++i)
    {
        int v = g[u][i];
        if(color[u] == color[v])return false;
        if(!color[v]) {
            color[v] = 3 - color[u];
            if(!bi(v))return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    while(cin >> n >> m) {
        if(n == 0 && m == 0)break; 
        for(int i = 0; i < n; ++i)
            g[i].clear();
        for(int i = 0; i < m; ++i)
        {
            cin >> x >> y;
            g[x-1].push_back(y-1);
            g[y-1].push_back(x-1);
        }
        memset(color, 0, sizeof(color));
        bool chk = true;
        for(int i = 0; i < n; ++i)
        {
            if(!color[i])
            {
                color[i] = 1;
                if(!bi(i)) {
                    chk = false;
                    break;
                }
            }
        }
       /* 
        color[0] = 1;
        if(!bi(0))chk = false;
        */
        if(chk)cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
