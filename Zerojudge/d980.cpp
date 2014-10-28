#include <iostream>
#include <cstdio>
using namespace std;
main()
{
    int n,time=1;
    while(scanf("%d",&n)==1)
    {
        long long int a,b,c;
        for(int i=1;i<=n;++i)
        {
            scanf("%lld%lld%lld",&a,&b,&c);
            if(a+b<=c||b+c<=a||a+c<=b)printf("Case %d: Invalid\n",time);
            else if(a==b&&b==c)printf("Case %d: Equilateral\n",time);
            else if(a==b||b==c||a==c)printf("Case %d: Isosceles\n",time);
            else if(a!=b&&b!=c&&a!=c)printf("Case %d: Scalene\n",time);
            time++;
        }
    }
}
