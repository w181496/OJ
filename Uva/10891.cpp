#include<iostream>
#include<cstring>
using namespace std;
int n, arr[110], sum[110];
int vis[110][110],DP[110][110];
int dp(int l,int r)
{
    if(vis[l][r])return DP[l][r];
    vis[l][r]=1;
    int mn=0;
    for(int i=l+1;i<=r;++i)mn=min(mn,dp(i,r));
    for(int i=r-1;i>=l;i--)mn=min(mn,dp(l,i));
    if(l==0)return DP[l][r]=sum[r]-mn;
    return DP[l][r]=sum[r]-sum[l-1]-mn;
}
int main()
{
    ios_base::sync_with_stdio(0);
    while(cin>>n&&n){
        memset(vis,0,sizeof(vis));
        cin>>arr[0];
        sum[0]=arr[0];
        for(int i=1;i<n;++i)
        {
            cin>>arr[i];
            sum[i]=sum[i-1]+arr[i];
        }
        cout<<2*dp(0,n-1)-sum[n-1]<<endl;
    }
    return 0;
}