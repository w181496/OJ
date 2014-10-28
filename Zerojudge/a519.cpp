#include <cstdio>
#define LL long long int
main()
{
    LL fib[81],n;
    fib[0]=fib[1]=1;
    for(int i=2;i<81;++i)
        fib[i]=fib[i-1]+fib[i-2];
    while(scanf("%lld",&n)&&n)
    {
        printf("%lld\n",fib[n]);
    }
}
