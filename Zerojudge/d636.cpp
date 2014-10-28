#include <cstdio>
#include <algorithm>
using namespace std;
long long exp(long long n,long long m)
{
    long long  x=1;
    for(; m>0; m>>=1)
    {
        if(m&1)x=(x*n)%10007;
        n=(n*n)%10007;
    }
    return x;
}
main()
{
    long long  n,m;
    scanf("%lld%lld",&n,&m);
    long long ans=exp(n,m);
    printf("%lld\n",ans);
}
