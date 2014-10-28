#include <iostream>
#include <string>
#include <sstream>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    int n,m,x,y;
    char mon[11][41][41],test[11][41][41];
    cin>>n>>m>>x>>y;
    for(int k=0; k<n; ++k)
    {
        for(int i=0; i<y; ++i)
        {
            for(int j=0; j<x; ++j)
            {
                cin>>mon[k][j][i];
            }
        }
    }
    for(int k=0; k<m; ++k)
    {
        for(int i=0; i<y; ++i)
        {
            for(int j=0; j<x; ++j)
            {
                cin>>test[k][j][i];
            }
        }
    }
    for(int k=0; k<m; ++k)
    {
        bool chk=false;
        for(int r=0; r<n; ++r)
        {
            int yes=0,no=0;
            for(int i=0; i<y; ++i)
            {
                for(int j=0; j<x; ++j)
                {
                    if(mon[r][j][i]=='-')continue;
                    else if(mon[r][j][i]==test[k][j][i])yes++;
                    else no++;
                }
            }
            if(yes>=4*no){chk=true;break;}
        }
        if(chk)cout<<"Y"<<endl;
        else cout<<"N"<<endl;
    }
}
