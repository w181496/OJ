#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    ios_base::sync_with_stdio(0);
    int N, m[40];
    while(cin >> N && N)
    {
        for(int i = 0; i < N; ++i)
            cin >> m[i];
        sort(m, m + N, cmp);
        for(int i = 0; i < N; ++i)
        {
            int tmp = m[i], tmp2, cnt = 0;
            while(tmp)
            {
                tmp >>= 1;
                cnt ++;
            }
            cnt--;
            cnt = (cnt < 0 ? 0 : cnt);
            tmp2 = 1 << cnt;
            for(int j = i + 1; j < N; ++j)
            {
                if(m[j] & tmp2)
                {
                     m[j] ^= m[i];
                }
            }
            sort(m, m + N, cmp);
        }
        for(int i = N - 1; i >= 0; --i)
        {
            int tmp = m[i], tmp2, cnt = 0;
            while(tmp)
            {
                tmp >>= 1;
                cnt++; 
            }
            cnt--;
            cnt = (cnt < 0 ? 0 : cnt);
            tmp2 = 1 << cnt;
            for(int j = i - 1; j >= 0; --j)
            {
                 if(m[j] & tmp2)
                 {
                      m[j] ^= m[i];
                 }
            }
        }
        int ans = m[0];
        for(int i = 1; i < N; ++i)
        {
             ans ^= m[i];
        }
        cout << ans << endl;
    }
    return 0;
}
