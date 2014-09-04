#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
typedef long long LL;
int main()
{
    ios_base::sync_with_stdio(0);
    int n,m,k;
    int arr[100010],v[100010],d[100010];
    cin>>n>>m>>k;
    int l=110000,r=-1,x,ans;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        if(arr[i]>r)r=arr[i];
        if(arr[i]<l)l=arr[i];
    }
    r+=m;
    while(l<=r)
    {
        int c=0;
        int day=m;
        memset(v,0,sizeof(v));
        x=(l+r)/2;
        for(int i=0;i<n;++i)
            d[i]=max(x-arr[i],0);
        for(int i=0;i<n;++i)
        {
            c+=v[i];
            d[i]-=c;
            if(d[i]>0)
            {
                day-=d[i];
                if(day<0)break;
                c+=d[i];
                v[i+k]-=d[i];
                d[i]=0;
            }
        }
        if(day<0)
        {
            r=x-1;
        }
        else
        {
            ans=x;
            l=x+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}