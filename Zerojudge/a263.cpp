#include <cstdio>
#include <algorithm>
bool chk(int n)
{
    if(n%4==0&&n%100!=0)return true;
    else if(n%400==0)return true;
    return false;
}
int main()
{
    int y1,y2,m1,m2,d1,d2,c1=0,c2=0,t[10000]={0};
    for(int i=1;i<10000;++i)
    {
        if(chk(i))t[i]=t[i-1]+1;
        else t[i]=t[i-1];
    }
    while(scanf("%d%d%d%d%d%d",&y1,&m1,&d1,&y2,&m2,&d2)==6)
    {
        c1=(t[y1-1])*366+(y1-1-t[y1-1])*365+d1;
        for(int i=1; i<=m1-1; ++i)
        {
            if(i==2&&chk(y1))c1+=29;
            else if(i==2)c1+=28;
            else if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)c1+=31;
            else c1+=30;
        }
        c2=(t[y2-1])*366+(y2-1-t[y2-1])*365+d2;
        for(int i=1; i<=m2-1; ++i)
        {
            if(i==2&&chk(y2))c2+=29;
            else if(i==2)c2+=28;
            else if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)c2+=31;
            else c2+=30;
        }
        printf("%d\n",abs(c2-c1));
    }
    return 0;
}
