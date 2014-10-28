#include <cstdio>
struct point{int x,y;};
int dis(point a,point b)
{
    int d=0;
    if(a.x>b.x)d+=a.x-b.x;
    else d+=b.x-a.x;
    if(a.y>b.y)d+=a.y-b.y;
    else d+=b.y-a.y;
    return d;
}
main()
{
    int n;
    point city[1001];
    while(scanf("%d",&n)==1)
    {
        for(int i=0;i<n;++i)
            scanf("%d%d",&city[i].x,&city[i].y);
        int mn=2e9,mx,my;
        for(int i=0;i<n;++i)
        {
            int temp=0;
            for(int j=0;j<n;++j)
            {
                temp+=dis(city[i],city[j]);
            }
            if(temp<mn)
            {
                mn=temp;
                mx=city[i].x;
                my=city[i].y;
            }
            else if(temp==mn)
            {
                if(mx>city[i].x)mx=city[i].x,my=city[i].y;
                else if(mx==city[i].x&&my>city[i].y)mx=city[i].x,my=city[i].y;
            }
        }
        printf("%d %d\n",mx,my);
        printf("%d\n",mn);
    }
}
