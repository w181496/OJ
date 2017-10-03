#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <cstring>
#define MAXN 100005
typedef long long LL;
using namespace std;
int main()
{
    LL t;
    ifstream fin("a.in");
    ofstream fout("a.txt");
    fin >> t;
    for(LL k = 1; k <= t; ++k)
    {
        LL n, ans = 0, sum = 0;
        char ch;
        string s;
        fin >> n;
        for(LL i = 1; i <= n + 1; ++i)
        {
             fin >> ch;
             sum += (ch - '0');
             if(sum < i) 
             {
                  ans++;
                  sum++;
             }
        }
        fout << "Case #" << k << ": " << ans << endl;
    }
    return 0;
}

