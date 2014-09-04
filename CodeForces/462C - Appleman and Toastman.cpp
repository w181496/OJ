#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
typedef long long LL;
LL arr[300010];
int main()
{
    ios_base::sync_with_stdio(0);
    LL n,ans=0;
    cin>>n;
    for(int i=0;i<n;++i)cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n-1;++i)
        ans+=(arr[i])*(i+2);
    ans+=arr[n-1]*n;
    cout<<ans<<endl;
    return 0;
}