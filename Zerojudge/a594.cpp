#include <iostream>
#include <algorithm>
using namespace std;
struct Cus
{
    int id;
    int w;
};

bool cmp(Cus a, Cus b) {
    return a.id < b.id;
}

Cus c[100001];

int main()
{
    ios_base::sync_with_stdio(0);
    int t, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for(int i = 0; i < n; ++i)
            cin >> c[i].id >> c[i].w;
        sort(c, c + n, cmp);
        int l = 1, r = 10000000, ans;
        while(l <= r)
        {
            int m = (l + r) / 2, cnt = 0, sum = 0, flag = 1;
            for(int i = 0; i < n; ++i)
            {
                if(cnt == k || c[i].w > m)
                {
                    flag = 0;
                    break;
                }
                sum += c[i].w;
                if(sum > m)
                {
                     cnt++;
                     sum = 0;
                     i--;
                }
            }
            if(flag)
            {
                ans = m;
                r = m;
            }
            else
            {
                 l = m + 1;
            }
            if(l == r) break;
        }
        cout << ans << endl;
    }
    return 0;
}
