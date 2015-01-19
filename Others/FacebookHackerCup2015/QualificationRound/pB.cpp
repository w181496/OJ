#include <iostream>
#include <fstream>
using namespace std;
int t, n, gp, gc, gf;
int p[30], c[30], f[30], chk[30];

bool dfs(int id)
{
    if(id == n)
    {
        int sum1, sum2, sum3;
        sum1 = sum2 = sum3 = 0;
        for(int i = 0; i < n; ++i)
            if(chk[i])
            {
                 sum1 += p[i];
                 sum2 += c[i];
                 sum3 += f[i];
            }
        if(sum1 == gp && sum2 == gc && sum3 == gf)
            return true;
        else 
            return false;
    }
    else
    {
        chk[id] = true;
        if(dfs(id + 1)) return true;
        chk[id] = false;
        if(dfs(id + 1)) return true;
        return false;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    ifstream fin("pB.in");
    ofstream fout("pB.out");
    while(fin >> t)
    {
        for(int k = 1; k <= t; ++k)
        {
            fin >> gp >> gc >> gf;
            fin >> n;
            for(int i = 0; i < n; ++i)
                 fin >> p[i] >> c[i] >> f[i];
            if(dfs(0)) fout << "Case #" << k << ": yes" << endl;
            else fout << "Case #" << k << ": no" << endl;
        }
    }
    return 0;
}
