#include <cstdio>
main()
{
    int x,y;
    while(scanf("%d%d",&x,&y)!=EOF)
    {
        if(x>0&&y>0)
            printf("0 %d %d 0\n",x+y,x+y);
        else if(x<0&&y>0)
            printf("%d 0 0 %d\n",x-y,-x+y);
        else if(x<0&&y<0)
            printf("%d 0 0 %d\n",(x+y),(x+y));
        else
            printf("0 %d %d 0\n",y-x,x-y);
    }
}