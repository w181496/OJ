#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    long long int dp[10001];
    long long int n,m;
    while(cin>>n>>m)
    {
        if(n==0&&m==0)break;
        long long int weight[n];
        memset(dp,0,sizeof(dp));
        for(long long int i=0;i<n;++i)
            cin>>weight[i];
        dp[0]=1;
        for(long long int i=0;i<n;++i)
            for(long long int j=weight[i]; j<=m; ++j)
                dp[j]+=dp[j-weight[i]];
        cout<<dp[m]<<endl;
    }
    return 0;
}
