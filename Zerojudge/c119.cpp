#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstring>
#define MAXN 100005
typedef long long LL;
using namespace std;
LL rec[1010];
int main()
{
    rec[0] = rec[1] = 1;
    vector<int>res(1);
    res[0] = 1;
    for(int i = 2; i <= 1000; ++i)
    {
        for(int j = res.size() - 1; j >= 0; --j)
        {
            int tmp = j;
            while(res[j] > 9)
            {
                if(j == res.size() - 1)
                    res.push_back(res[j] / 10);
                else
                    res[j + 1] += res[j] / 10;
                res[j] %= 10;
                j++;
            }
            j = tmp;
            res[j] *= i;
            while(res[j] > 9)
            {
                if(j == res.size() - 1)
                    res.push_back(res[j] / 10);
                else
                    res[j + 1] += res[j] / 10;
                res[j] %= 10;
                j++;
            }
            j = tmp;
        }
        int idx = res.size() - 1;
        while(res[idx] > 9)
        {
            res.push_back(res[idx] / 10);
            res[idx] %= 10;
            idx++;
        }
        LL ans = 0;
        for(int k = 0; k < res.size(); ++k)
            ans += res[k];
        rec[i] = ans;
    }
    int n;
    ios_base::sync_with_stdio(0);
    while(cin >> n)
    {
        cout << rec[n] << endl;
    }
    return 0;
}
