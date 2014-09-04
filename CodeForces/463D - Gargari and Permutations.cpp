#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int a[1010],b[6][1010];
    int n,s;
    cin>>n>>s;
    for(int i=0; i<n; ++i)cin>>a[i];
    for(int i=0; i<s-1; ++i)
        for(int j=0; j<n; ++j){
            int tmp;
            cin>>tmp;
            b[i][tmp]=j;
        }
    int dp[1010];
    for(int i=0;i<n;++i)
    {
        dp[i]=1;
        for(int j=0;j<i;++j)
        {
            bool chk=true;
            for(int k=0;k<s-1;++k)
            {
                if(b[k][a[i]]<b[k][a[j]])
                {
                    chk=false;
                    break;
                }
            }
            if(chk)dp[i]=max(dp[i],dp[j]+1);
        }
    }
    int ans=0;
    for(int i=0;i<n;++i)ans=max(dp[i],ans);
    cout<<ans<<endl;
    return 0;
}