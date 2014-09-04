#include <cstdio>
main()
{
    int n,t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
       scanf("%d",&n);
       if(n%2==0)printf("0\n");
       else printf("1\n");
    }
}