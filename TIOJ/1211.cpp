#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
#define MAXM 1000010
#define MAXN 10010
long long u[MAXM], v[MAXM], w[MAXM], p[MAXN], r[MAXM];

bool cmp(int a, int b)
{
    return w[a] < w[b];
}

int find(int x)
{
    if(x == p[x])
        return x;
    else
        return p[x] = find(p[x]);
    //return x == p[x] ? x : p[x] = find(p[x]);
}

int main()
{
    ios_base::sync_with_stdio(0);
    long long n, m, ans, chk;
    while(cin >> n >> m)
    {
        if(n == 0 && m == 0) break;
        for(int i = 0; i < m; ++i) {
            int ta, tb;
            cin >> ta >> tb >> w[i];
            u[i] = ta - 1;
            v[i] = tb - 1;
            r[i] = i;
        }
        for(int i = 0; i < n; ++i) p[i] = i;
        sort(r, r + m, cmp);
        ans = 0;
        chk = n;
        for(int i = 0; i < m; ++i)
        {
             int a, b, c;
             c = r[i];
             a = find(u[c]);
             b = find(v[c]);
             if(a != b)
             {
                 ans += w[c];
                 p[a] = b;
                 chk--;
             }
        }
        if(chk == 1)
            cout << ans << endl;
        else cout << -1 << endl;
    }
    return 0;
}
