#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
main()
{
    int n,m,time=0;
    while(cin>>n>>m)
    {
        time++;
        if(n==0&&m==0)break;
        int s1[n+1];
        int s2[m+1];
        int dp[n+1][m+1];
        for(int i=0;i<=n;++i)
            for(int j=0;j<=m;++j)
                if(i==0||j==0)dp[i][j]=0;
        s1[0]=s2[0]=0;
        for(int i=1;i<=n;++i)cin>>s1[i];
        for(int i=1;i<=m;++i)cin>>s2[i];
        for(int i=1;i<=n;++i)
        {
            for(int j=1;j<=m;++j)
            {
                if(s1[i]==s2[j])dp[i][j]=dp[i-1][j-1]+1;
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        cout<<"Twin Towers #"<<time<<endl;
        cout<<"Number of Tiles : "<<dp[n][m]<<endl;
    }
}
