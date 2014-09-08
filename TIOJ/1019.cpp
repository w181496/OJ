#include <iostream>
#include <cmath>
using namespace std;
typedef long long LL;
int main()
{
    ios_base::sync_with_stdio(0);
    LL t, n, arr[1010], dp[1010];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;++i)
            cin>>arr[i];
        dp[0]=0;
        dp[1]=abs(arr[1]-arr[0]);
        for(int i=2;i<n;++i)
            dp[i]=min(dp[i-1]+abs(arr[i]-arr[i-1]),dp[i-2]+abs(arr[i-2]-arr[i]));
        cout<<dp[n-1]<<endl;
    }
    return 0;
}
