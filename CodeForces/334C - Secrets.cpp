#include<cstdio>
typedef long long LL;
main()
{
    LL n;
    while(scanf("%I64d",&n)==1)
    {
        while(n%3==0)n/=3;
        printf("%I64d\n",n/3+1);
    }
}