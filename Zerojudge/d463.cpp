#include<cstdio>
#include<cstdlib>
#include<cmath>
main()
{
 unsigned long long int n;
 double a=1,b=3;
 while(scanf("%llu",&n)==1)
     printf("%.0lf\n",pow(n,a/b));
}
