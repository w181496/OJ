#include <iostream>
#include <cstring>
#include <queue>
#include <stack>
using namespace std;
int mx[3010][3010];
bool chk[3010][3010];
int main()
{
    ios_base::sync_with_stdio(0);
    int n, m, ans;
    cin >> n >> m;
    ans = 0;
    memset(chk, 0, sizeof(chk));
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            cin >> mx[j][i];
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
             if(mx[j][i] >= 0)
             {
                 int sx = j, sy = i, nx, ny, tmp, cnt = 0, flag;
                 queue<int>q;
                 q.push(sy * m + sx);
                 flag = mx[j][i];
                 while(!q.empty())
                 {
                      tmp = q.front();
                      q.pop();
                      nx = tmp % m;
                      ny = tmp / m;
                      mx[nx][ny] = -1;
                      cnt++;
                      if(cnt > ans) ans = cnt;
                      if(ny > 0 && !chk[nx][ny - 1] && mx[nx][ny - 1] == flag)
                           q.push((ny - 1) * m + nx), chk[nx][ny - 1] = true;
                      if(ny < n - 1 && !chk[nx][ny + 1] && mx[nx][ny + 1] == flag)
                           q.push((ny + 1) * m + nx), chk[nx][ny + 1] = true;
                      if(nx > 0 && !chk[nx - 1][ny] && mx[nx - 1][ny] == flag)
                           q.push(ny * m + nx - 1), chk[nx - 1][ny] = true;
                      if(nx < m - 1 && !chk[nx + 1][ny] && mx[nx + 1][ny] == flag)
                           q.push(ny * m + nx + 1), chk[nx + 1][ny] = true;
                 }
             }
        }
    }
    cout << ans << endl;
    return 0;
}
