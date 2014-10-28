#include <iostream>
#include <string>
using namespace std;
main()
{
    char ch;
    double x1[10],x2[10],y1[10],y2[10],x,y;
    int idx=0,num=1;
    while(cin>>ch&&ch!='*')
    {
        cin>>x1[idx]>>y1[idx]>>x2[idx]>>y2[idx];
        idx++;
    }
    while(cin>>x>>y&&x!=9999.9&&y!=9999.9)
    {
        int ans=0;
        for(int i=0;i<idx;++i)
        {
            if(x>x1[i]&&x<x2[i]&&y>y2[i]&&y<y1[i]){
                ans++;
                cout<<"Point "<<num<<" is contained in figure "<<i+1<<endl;
            }
        }
        if(ans==0)
            cout<<"Point "<<num<<" is not contained in any figure"<<endl;
        num++;
    }
}
