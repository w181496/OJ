#include <iostream>
#include <algorithm>
using namespace std;
typedef long long LL;
int main()
{
    ios_base::sync_with_stdio(0);
    LL n, m, k, x[1010], ans=0;
    cin>>n>>m>>k;
    for(LL i=0;i<m+1;++i)
        cin>>x[i];
    for(LL i=0;i<m;++i)
    {
        LL tmp=max(x[i],x[m]),tmp2=min(x[i],x[m]),cnt=0;
        while(tmp>0)
        {
            if(tmp%2!=tmp2%2)cnt++;
            tmp/=2;
            tmp2/=2;
        }
        if(cnt<=k)ans++;
    }
    cout<<ans<<endl;
    return 0;
}