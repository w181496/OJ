#include <iostream>
#include <algorithm>
using namespace std;
typedef long long LL;
LL n, v, ans, tmp, tmp2;
LL t[3010];
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>v;
    ans=0;
    for(int i=0;i<3010;++i)t[i]=0;
    for(int i=0;i<n;++i){
        cin>>tmp>>tmp2;
        t[tmp]+=tmp2;
    }
    for(int i=1;i<3010;++i)
    {
        if(t[i]>0||t[i-1]>0)
        {
            if(t[i-1]>=v)
            {
                ans+=v;
                t[i-1]-=v;
            }
            else if(t[i-1]+t[i]>=v)
            {
                ans+=v;
                t[i]-=(v-t[i-1]);
                t[i-1]=0;
            }
            else if(t[i-1]+t[i]<v)
            {
                ans+=t[i-1]+t[i];
                t[i]=t[i-1]=0;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
