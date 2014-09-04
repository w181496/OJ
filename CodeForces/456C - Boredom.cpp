#include<iostream>
#include<cstring>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef long long LL;
int main()
{
    ios_base::sync_with_stdio(0);
    LL n,tmp;
    LL arr[100010],dp[100010]={};
    memset(dp,0,sizeof(dp));
    memset(arr,0,sizeof(arr));
    cin>>n;
    for(int i=1;i<=n;++i){
    	cin>>tmp;
    	arr[tmp]+=tmp;
    }
    dp[1]=arr[1];
    for(int i=2;i<=100000;++i){
        dp[i]=max(dp[i-1],dp[i-2]+arr[i]);
    }
    cout<<dp[100000]<<endl;
    return 0;
}