#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct seat
{
    int a;
    int b;
};
bool operator<(seat m,seat n)
{
    return m.a<n.a;
}
void change(seat &m,seat &n)
{
    seat temp;
    temp.a=n.a;
    temp.b=n.b;
    n.a=m.a;
    n.b=m.b;
    m.a=temp.a;
    m.b=temp.b;
}
main()
{
    int M,N,K,L,D,x1,x2,y1,y2;
    seat vx[1001],vy[1001];
    while(scanf("%d%d%d%d%d",&M,&N,&K,&L,&D)!=EOF)
    {
        for(int i=0;i<1001;++i)
            vx[i].a=0,vy[i].a=0;
        for(int i=0;i<D;++i)
        {
            scanf("%d%d%d%d",&y1,&x1,&y2,&x2);
            if(x1==x2)
            {
                int tt=min(y1,y2);
                vx[tt].a++;
                //if(vx[tt].a==1)
                    vx[tt].b=tt;
            }
            else
            {
                int tt=min(x1,x2);
                vy[tt].a++;
                //if(vx[tt].a==1)
                    vy[tt].b=tt;
            }
        }
        sort(vx,vx+1001);
        sort(vy,vy+1001);
        for(int i=1001-K;i<1001;++i)
            for(int j=i+1;j<1001;++j)
                if(vx[i].b<vx[j].b)change(vx[i],vx[j]);
        for(int i=1001-L;i<1001;++i)
            for(int j=i+1;j<1001;++j)
                if(vy[i].b<vy[j].b)change(vy[i],vy[j]);
        for(int i=1000;K+i-1001>=0;--i)
        {
            if(K+i-1001!=0)printf("%d ",vx[i].b);
            else printf("%d\n",vx[i].b);
        }
        for(int i=1000;L+i-1001>=0;--i)
        {
            if(L+i-1001!=0)printf("%d ",vy[i].b);
            else printf("%d\n",vy[i].b);
        }
    }
}
