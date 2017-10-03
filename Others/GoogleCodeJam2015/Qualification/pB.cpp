#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <fstream>
#define MAXN 100005
typedef long long LL;
using namespace std;
int arr[1050];
int main()
{
    ios_base::sync_with_stdio(0);
    int t, n;
    ifstream fin("b.in");
    ofstream fout("b.txt");
    fin >> t;
    for(int k = 1; k <= t; ++k)
    {
        fin >> n;
        int ans = 99999999, mx = -1;
        for(int i = 0; i < n; ++i) {
            fin >> arr[i];
            mx = max(arr[i], mx);
        }
        for(int i = 1; i <= mx; ++i)
        {
             int sum = 0;
             for(int j = 0; j < n; ++j)
             {
                 if(arr[j] > i)
                 {
                      if(arr[j] % i)
                          sum += arr[j] / i;
                      else
                           sum += (arr[j] / i - 1);
                 }
             }
             sum += i;
             if(sum < ans) ans = sum;
        }
        fout << "Case #" << k << ": " << ans << endl;
    }
    return 0;
}

