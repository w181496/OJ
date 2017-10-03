#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstring>
typedef long long LL;
using namespace std;

LL arr[1010];
int main()
{
    ios_base::sync_with_stdio(0);
    ifstream fin("a.in");
    ofstream fout("a.txt");
    LL t, n;
    fin >> t;
    for(LL k = 1; k <= t; ++k)
    {
         LL ans1 = 0, ans2 = 0, mx = 0;
         fin >> n;
         for(int i = 0; i < n; ++i) {
             fin >> arr[i];
         }
         for(int i = 1; i < n; ++i)
             if(arr[i] < arr[i - 1]) {
                  ans1 += arr[i - 1] - arr[i];
                  mx = max(mx, arr[i - 1] - arr[i]);
             }
         for(int i = 0; i < n - 1; ++i)
         {
               if(mx > arr[i]) ans2 += arr[i];
               else ans2 += mx;
         }
         fout << "Case #" << k <<": " << ans1 << " " << ans2 << " " << endl;
    }
    return 0;
}

