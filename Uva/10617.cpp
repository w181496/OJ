#include <iostream>
#include <string>
#include <cstring>
using namespace std;
typedef long long LL;
LL dp[200][200];
string s;
LL f(LL i, LL j)
{
    if(i > j || i < 0 || j >= s.size()) return 0;
    else if(dp[i][j] >= 0) return dp[i][j];
    else if(s[i] == s[j]) return dp[i][j] = f(i + 1, j) + f(i, j - 1) + 1;
    else return dp[i][j] = f(i + 1, j) + f(i, j - 1) - f(i + 1, j - 1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--)
    {
        cin >> s;
        for(int i = 0; i < s.size(); ++i)
        {
            for(int j = 0; j < s.size(); ++j)
            {
                if(i > j) dp[i][j] = 0;
                else if(i == j) dp[i][j] = 1;
                else dp[i][j] = -1;
            }
        }
        cout << f(0, s.size() - 1) << endl;
    }
    return 0;
}
