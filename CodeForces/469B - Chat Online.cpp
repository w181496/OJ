#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
typedef long long LL;
int main()
{
    ios_base::sync_with_stdio(0);
    int p, q, l, r, a, b, t[2010], c[2010], d[2010], ans=0;
    cin>>p>>q>>l>>r;
    for(int i=0;i<2010;++i)t[i]=0;
    for(int i=0;i<p;++i){
        cin>>a>>b;
        for(int j=a;j<=b;++j)
            t[j]=1;
    }
    for(int i=0;i<q;++i)
        cin>>c[i]>>d[i];
    for(int i=l;i<=r;++i)
    {
        bool flag=true;
        for(int j=0;j<q&&flag;++j)
        {
            for(int k=c[j]+i;k<=d[j]+i;++k)
                if(t[k])
                {
                    flag=false;
                    break;
                }
        }
        if(!flag)ans++;
    }
    cout<<ans<<endl;
    return 0;
}
