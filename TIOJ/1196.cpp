#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    char mx[13][13];
    int dp[13][13];
    cin >> n;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
            cin >> mx[j][i];
    for(int i = 0; i <= n; ++i)
        dp[0][i] = dp[i][0] = -1e8;
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= n; ++j)
        {
            if(mx[j][i] == 'A') dp[j][i] = 0;
            else if(mx[j][i] == 'X') dp[j][i] = -1e8;
            else if(mx[j][i] == 'B')
                dp[j][i] = max(dp[j - 1][i], dp[j][i - 1]);
            else
                dp[j][i] = max(dp[j - 1][i], dp[j][i - 1]) + (mx[j][i] - '0');
        }
    }
    if(dp[n][n] >= 0) cout << dp[n][n] << endl;
    else cout << 'X' << endl;
    return 0;
}
