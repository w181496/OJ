#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct figure
{
    char ch;
    double rx1,rx2,ry1,ry2;
    double cx1,cy1,cr1;
    double tx1,tx2,tx3,ty1,ty2,ty3;
};
struct Vector
{
    double x,y;
};
bool check(Vector a,Vector b,Vector c)
{
    int i,j,k;
    i=a.x*b.y-a.y*b.x;
    j=b.x*c.y-b.y*c.x;
    k=c.x*a.y-c.y*a.x;
    if(i>0&&j>0&&k>0)return true;
    if(i<0&&j<0&&k<0)return true;
    return false;
}
main()
{
    ios::sync_with_stdio(0);
    char ch;
    double a,b,c,d,e,f,x,y;
    figure fff[10];
    int idx1=0,point=1;
    while(cin>>ch&&ch!='*')
    {
        if(ch=='r')
        {
            cin>>a>>b>>c>>d;
            fff[idx1].ch=ch;
            fff[idx1].rx1=a;
            fff[idx1].ry1=b;
            fff[idx1].rx2=c;
            fff[idx1].ry2=d;
            idx1++;
        }
        else if(ch=='c')
        {
            cin>>a>>b>>c;
            fff[idx1].ch=ch;
            fff[idx1].cx1=a;
            fff[idx1].cy1=b;
            fff[idx1].cr1=c;
            idx1++;
        }
        else
        {
            cin>>a>>b>>c>>d>>e>>f;
            fff[idx1].ch=ch;
            fff[idx1].tx1=a;
            fff[idx1].ty1=b;
            fff[idx1].tx2=c;
            fff[idx1].ty2=d;
            fff[idx1].tx3=e;
            fff[idx1].ty3=f;
            idx1++;
        }
    }
    while(cin>>x>>y&&x!=9999.9&&y!=9999.9)
    {
        bool chk=true;
        for(int i=0;i<idx1;++i)
        {
            if(fff[i].ch=='r')
            {
                if(x>fff[i].rx1&&x<fff[i].rx2&&y>fff[i].ry2&&y<fff[i].ry1){
                    cout<<"Point "<<point<<" is contained in figure "<<i+1<<endl;
                    chk=false;
                }
            }
            else if(fff[i].ch=='c')
            {
                if((x-fff[i].cx1)*(x-fff[i].cx1)+(y-fff[i].cy1)*(y-fff[i].cy1)<fff[i].cr1*fff[i].cr1)
                    {
                        cout<<"Point "<<point<<" is contained in figure "<<i+1<<endl;
                        chk=false;
                    }
            }
            else
            {
                Vector MA,MB,MC;
                MA=(Vector){x-fff[i].tx1,y-fff[i].ty1};
                MB=(Vector){x-fff[i].tx2,y-fff[i].ty2};
                MC=(Vector){x-fff[i].tx3,y-fff[i].ty3};
                if(check(MA,MB,MC)){
                    cout<<"Point "<<point<<" is contained in figure "<<i+1<<endl;
                    chk=false;
                }
            }
        }
        if(chk)
            cout<<"Point "<<point<<" is not contained in any figure"<<endl;
        point++;
    }
}
