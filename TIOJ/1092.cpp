#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <queue>
using namespace std;
typedef long long LL;
vector<short>m[10001], rev[10001];
int main()
{
    ios_base::sync_with_stdio(0);
    int N, E, x, y, now, res[10001], deg[10001];
    string name;
    while(cin >> N >> E) 
    {
        if(N == 0 && E == 0)break;
        for(int i = 0; i <= N; ++i) m[i].clear(), rev[i].clear(), deg[i] = 0;
        for(int i = 0; i < E; ++i)
        {
            cin >> x >> y;
            rev[x].push_back(y);
            m[y].push_back(x);
            deg[x]++;
        }
        cin >> name;
        memset(res, 0, sizeof(res));
        queue<int>que;
        que.push(N);
        res[N] = 1;
        while(!que.empty())
        {
            now = que.front();
            que.pop();
            bool chk = true;
            if(res[now] && now != N)continue;
            for(int i = 0; i < rev[now].size(); ++i)
            {
                 if(res[rev[now][i]] == 1)
                  {
                     res[now] = 2;
                     chk = false;
                     break;
                 }
            }
            if(chk) res[now] = 1;
            for(int i = 0; i < m[now].size(); ++i)
            {
                deg[m[now][i]]--;
                if(deg[m[now][i]] == 0)
                    que.push(m[now][i]);   
            }
        }
        if((name == "Mimi" && res[1] == 1) || (name == "Moumou" && res[1] == 2))
            cout << "Mimi" << endl;
        else
            cout << "Moumou" << endl;
    }
    return 0;
}
