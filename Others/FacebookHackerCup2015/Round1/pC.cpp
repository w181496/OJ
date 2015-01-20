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
int dp[2001][2001];
int dp2[2001][2001];
int ta, tb;


int dfs(int a, int b)
{
     if(a < 0 || b < 0) return 0;
     if(dp[a][b] >= 0) return dp[a][b];
     if(a <= b || a > ta || b > tb) return dp[a][b] = 0;
     return dp[a][b] = (dfs(a - 1, b) + dfs(a, b - 1)) % 1000000007;
}

int dfs2(int a, int b)
{
     if(a < 0 || b < 0) return 0;
     if(dp2[a][b] >= 0) return dp2[a][b];
     if(b == 0) return dp2[a][b] = 1;
     if(ta - a > tb - b) return dp2[a][b] = 0;
     return dp2[a][b] = (dfs2(a - 1, b) + dfs2(a, b - 1)) % 1000000007;
}

int main()
{
    ios_base::sync_with_stdio(0);
    //ifstream fin("b.txt");
    //ofstream fout("b.out");
    int t;
    char ch;
    fin >> t;
    for(int i = 1; i <= t; ++i)
    {
         fin >> ta >> ch >> tb;
         for(int j = 0; j <= 2000; ++j)
             for(int k = 0; k <= 2000; ++k)
                 dp[j][k] = dp2[j][k] =  -1;
         dp[1][0] = dp[2][0] = 1;
         dp[0][1] = dp[0][2] = 0;
         dp2[1][0] = dp2[2][0] = 1;
         dp2[0][1] = dp2[0][2] = 0;
         fout << "Case #" << i << ": " << dfs(ta, tb) << " " << dfs2(ta, tb) << endl;
    }

    return 0;
}
