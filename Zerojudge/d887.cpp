#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    long long int dp[26][26]={};
    while(cin>>n)
    {
        for(int i=0;i<=n;++i)dp[i][0]=1;
        for(int i=1;i<=n;++i)
        {
            for(int j=i;j<=n;++j)
            {
                dp[j][i]=dp[j-1][i]+dp[j][i-1];
            }
        }
        cout<<dp[n][n]<<endl;
    }
    return 0;
}
