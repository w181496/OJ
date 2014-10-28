#include<cstdio>
main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF)
        if(n==m)printf("%d\n",m);
        else printf("%d\n",m+1);
}
