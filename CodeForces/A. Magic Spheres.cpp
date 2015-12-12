#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#define MAXN 100005
typedef long long LL;
using namespace std;
int a, b, c, x, y, z;
int main()
{
    ios_base::sync_with_stdio(0);
    while(cin >> a >> b >> c >> x >> y >> z) {
        int s1 = 0, s2 = 0;
        if(a > x) s1 += (a - x) / 2;
        else s2 += (x - a);
        if(b > y) s1 += (b - y) / 2;
        else s2 += (y - b);
        if(c > z) s1 += (c - z) / 2;
        else s2 += (z - c);

        if(s1 >= s2) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}

