#include<cstring>
#include<cstdio>
main()
{
    int n,time=0,i,j,t;
    unsigned long long int ans[13]={1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600};
    while(scanf("%d",&n)==1)
        for(i=1;i<=n;++i)
        {
            scanf("%d",&t);
            printf("Case #%d:\n",++time);
            for(j=0;j<=t;++j)
                printf("TFCIS%d=%I64u\n",j,ans[j]);
        }
}