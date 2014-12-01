#include <iostream>
using namespace std;
typedef long long LL;
int m[4][4], ans, cnt;
char ch;

bool chk()
{
    int sum = 0;
    for(int i = 0; i < 4; ++i)
        for(int j = 0; j < 4; ++j)
            sum += m[j][i];
    return sum == 0 || sum == 16;
}

void flip(int x, int y)
{
    m[x][y] = !m[x][y];
    if(x > 0) m[x - 1][y] = !m[x - 1][y];
    if(x < 3) m[x + 1][y] = !m[x + 1][y];
    if(y > 0) m[x][y - 1] = !m[x][y - 1];
    if(y < 3) m[x][y + 1] = !m[x][y + 1];
}

void rec(int x, int y)
{
    if(chk()) ans = min(ans, cnt);
    if(x == 4)
    {
        x = 0;
        y++;
    }
    if(y == 4)return;
    flip(x, y);
    cnt++;
    if(chk()) ans = min(ans, cnt);
    rec(x + 1, y);
    cnt--;
    flip(x, y);
    rec(x + 1, y);
}

int main()
{
    ios_base::sync_with_stdio(0);
    for(int i = 0; i < 4; ++i)
        for(int j = 0; j < 4; ++j)
        {
            cin >> ch;
            m[j][i] = (ch == 'b' ? 1 : 0);
        }
    ans = 1e9;
    cnt = 0;
    rec(0, 0);
    if(ans != 1e9)
        cout << ans << endl;
    else
        cout << "Impossible" << endl;
    return 0;
}
