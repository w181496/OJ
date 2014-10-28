#include <cstdio>
#include <cmath>
main()
{
    int n,m,s;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        s=(int)m*log10(n);
        printf("%d\n",s+1);
    }
}
