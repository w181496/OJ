#include<iostream>
#include<cstring>
#include<map>
#include<algorithm>
#define ME tourist
using namespace std;
typedef long long LL;
int main()
{
    ios_base::sync_with_stdio(0);
    LL n,arr[200010],arr2[200010];
    map<LL,LL>m;
    LL mx=-1,mn=1e10,mxdif=-1,ans=0;
    cin>>n;
    for(LL i=0;i<n;++i)
    {
        cin>>arr[i];
        m[arr[i]]++;
        if(arr[i]>mx)mx=arr[i];
        if(arr[i]<mn)mn=arr[i];
        if(mx-mn>mxdif)mxdif=mx-mn;
    }
    if(mx==mn)n%2==0?(ans=n/2*(n-1)):(ans=(n-1)/2*n);
    else ans=m[mx]*m[mn];
    cout<<mxdif<<" "<<ans<<endl;
    return 0;
}