#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
typedef long long LL;
int main()
{
    ios_base::sync_with_stdio(0);
    LL n;
    LL cnt=0,f=0,ans=0;
    cin>>n;
    for(LL i=0;i<n;++i)
    {
        LL t;
        cin>>t;
        cnt+=(f-t);
        f=t;
        if(cnt<0)ans+=(-1)*cnt,cnt=0;
    }
    cout<<ans<<endl;
    return 0;
}