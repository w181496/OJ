//I hate math.........
#include <cstdio>
main()
{
    int t,n,m;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        scanf("%d%d",&n,&m);
        if((n-1)%(m-1)!=0)printf("cannot do this\n");
        else printf("%d\n",(n-1)/(m-1));
    }
}
