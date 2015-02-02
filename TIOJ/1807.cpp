#include <iostream>
#include <cstring>
#include <map>
using namespace std;
int mx[1800][1800];
int main()
{
    ios_base::sync_with_stdio(0);
    int m, n, x, y, idx;
    map<int, int>hash;
    idx = 1;
    cin >> m >> n;
    memset(mx, 0, sizeof(mx));
    for(int i = 0; i < n; ++i)
    {
        cin >> x >> y;
        if(!hash[x]) hash[x] = idx++;
        if(!hash[y]) hash[y] = idx++;
        x = hash[x];
        y = hash[y];
        if(x == y || mx[x][y] || mx[y][x])
        {
             cout << "Yes" << endl;
             return 0;
        }
        mx[x][y] = mx[y][x] = 1;
    }
    cout << "yes" << endl;
    return 0;
}
