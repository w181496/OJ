#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <vector>
using namespace std;
typedef long long LL;
int main()
{
    ios_base::sync_with_stdio(0);
    int t, n, m, l, a, b, fk;
    cin>>t;
    for(int gg=1;gg<=t;++gg)
    {
        bool chk[10010];
        int ans=0;
        vector<vector<int> >v(10010);
        cin>>n>>m>>l;
        for(int i=0; i<=n; ++i)chk[i]=true;
        for(int i=0; i<m; ++i)
        {
            cin>>a>>b;
            v[a].push_back(b);
        }
        for(int xx=0; xx<l; ++xx)
        {
            cin>>fk;
            queue<int>que;
            que.push(fk);
            int now;
            chk[fk]=false;
            while(!que.empty())
            {
                now = que.front();
                que.pop();
                for(int i=0; i<v[now].size(); ++i)
                    if(chk[v[now][i]])
                    {
                        que.push(v[now][i]);
                        chk[v[now][i]]=false;
                    }
            }
        }
        for(int i=1; i<=n; ++i)if(!chk[i])ans++;
        cout<<ans<<endl;
    }

    return 0;
}
