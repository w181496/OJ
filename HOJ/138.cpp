#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;
#define INF 1e9
typedef pair<int,int> pii;
struct Edge
{
    int to;
    int w;
};

vector<Edge>mx[50001];
int v[50001], d[50001];

int main()
{
    ios_base::sync_with_stdio(0);
    int n, m, a, b, c;
    priority_queue<pii, vector<pii>, greater<pii> >q;
    cin >> n >> m;
    for(int i = 0; i < m; ++i)
    {
        cin >> a >> b >> c;
        mx[a - 1].push_back((Edge){.to = b - 1, .w = c});
    }
    memset(v, 0, sizeof(v));
    d[0] = 0;
    q.push(make_pair(d[0], 0));
    for(int i = 1; i < n; ++i) d[i] = INF;
    while(!q.empty())
    {
         int x;
         pii u = q.top(); q.pop();
         x = u.second;
         if(v[x]) continue;
         v[x] = 1;
         for(int j = 0; j < mx[x].size(); ++j) if(d[x] + mx[x][j].w < d[mx[x][j].to]) {
             d[mx[x][j].to] = d[x] + mx[x][j].w;
             q.push(make_pair(d[mx[x][j].to], mx[x][j].to));
         }
    }
    if(d[n -1] == INF) cout << -1 << endl;
    else cout << d[n - 1] << endl;
    return 0;
}
