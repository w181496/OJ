#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct figure
{
    char ch;
    double rx1,rx2,ry1,ry2;
    double cx1,cy1,cr1;
};
main()
{
    ios::sync_with_stdio(0);
    char ch;
    double a,b,c,d,x,y;
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
        else
        {
            cin>>a>>b>>c;
            fff[idx1].ch=ch;
            fff[idx1].cx1=a;
            fff[idx1].cy1=b;
            fff[idx1].cr1=c;
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
            else
            {
                if((x-fff[i].cx1)*(x-fff[i].cx1)+(y-fff[i].cy1)*(y-fff[i].cy1)<fff[i].cr1*fff[i].cr1)
                    {
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
