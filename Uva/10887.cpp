#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#define MAXN 100005
typedef long long LL;
using namespace std;
string s1[2000], s2[2000];
int main()
{
    ios_base::sync_with_stdio(0);
    int t, n, m;
    cin >> t;
    for(int k = 1; k <= t; ++k)
    {
         cin >> n >> m;
         getline(cin, s1[1999]);
         for(int i = 0; i < n; ++i) {
             getline(cin, s1[i]);
         }
         for(int i = 0; i < m; ++i) {
             getline(cin, s2[i]);
         }
         map<string, int>mp;
         int ans = 0;
         for(int i = 0; i < n; ++i)
             for(int j = 0; j < m; ++j)
                if(mp[s1[i] + s2[j]] == 0)
                {
                     mp[s1[i] + s2[j]] = 1;
                     ans++;
                }
         cout << "Case " << k << ": " << ans << endl;
    }
    return 0;
}

