#include <iostream>
#include <vector>
using namespace std;
typedef long long LL;
int m[4][4], ans, cnt;
char ch;
vector<int>pos, res;
bool chk()
{
    int sum = 0;
    for(int i = 0; i < 4; ++i)
        for(int j = 0; j < 4; ++j)
            sum += m[j][i];
    return sum == 0;
}

void flip(int x, int y)
{
    m[x][y] = !m[x][y];
    for(int i = 0; i < 4; ++i)
        m[i][y] = !m[i][y], m[x][i] = !m[x][i];
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
    pos.push_back(x + y * 4);
    cnt++;
    if(chk()) {
        ans = min(ans, cnt);
        res = pos;
    }
    rec(x + 1, y);
    cnt--;
    flip(x, y);
    pos.pop_back();
    rec(x + 1, y);
}

int main()
{
    ios_base::sync_with_stdio(0);
    for(int i = 0; i < 4; ++i)
        for(int j = 0; j < 4; ++j)
        {
            cin >> ch;
            m[j][i] = (ch == '+' ? 1 : 0);
        }
    ans = 1e9;
    cnt = 0;
    rec(0, 0);
    if(ans != 1e9)
        cout << ans << endl;
    else
        cout << "Impossible" << endl;
    for(int i = 0; i < res.size(); ++i)
        cout << res[i] / 4 + 1 << " " << res[i] % 4 + 1 << endl;
    return 0;
}
