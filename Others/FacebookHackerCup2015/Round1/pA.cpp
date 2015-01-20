#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <cmath>
#include <cstring>
#include <vector>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <stack>
#include <fstream>
using namespace std;
typedef long long LL;
#define fin cin
#define fout cout
int prime[10000000];
int Count[10000000];
int main()
{
    ios_base::sync_with_stdio(0);
    //ifstream fin("a.in");
    //ofstream fout("pa.out");
    int t, a, b, k;
    memset(prime, 1, sizeof(prime));
    memset(Count, 0, sizeof(Count));
    prime[0] = prime[1] = 0;
    Count[2] = 1;
    for(int i = 4; i <= 10000000; i += 2)
        prime[i] = 0, Count[i]++;
    for(int i = 3; i <= 10000000; i += 2)
    {
        if(prime[i])
        {
             Count[i] = 1;
             for(int j = 2; j * i <= 10000000; j++)
                 prime[j * i] = 0, Count[j * i]++;
        }
    }
    fin >> t;
    for(int i = 1; i <= t; ++i)
    {
        fin >> a >> b >> k;
        int ans = 0;
        for(int j = a; j <= b; ++j)
        { 
             int cnt = 0;
             if(Count[j] == k) ans++;
        }
        fout << "Case #" << i << ": " << ans << endl;
    }

    return 0;
}
