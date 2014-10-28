#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Point
{
    int x;
    int y;
};

int  main()
{
    ios::sync_with_stdio(0);
    int n;
    Point p[3001];
    while(cin>>n&&n)
    {
        int x,y;
        for(int i=0;i<n;++i)
        {
            cin>>x>>y;
            p[i].x=x;
            p[i].y=y;
        }
        int mx=0,ans1,ans2;
        for(int i=0;i<n;++i)
        {
            for(int j=i+1;j<n;++j)
            {
                int tmp=(p[i].x-p[j].x)*(p[i].x-p[j].x)+(p[i].y-p[j].y)*(p[i].y-p[j].y);
                if(tmp>mx)
                {
                    mx=tmp;
                    ans1=i;
                    ans2=j;
                }
                else if(tmp==mx)
                {
                    if(i==ans1)
                    {
                        ans2=min(ans2,j);
                    }
                }
            }
        }
        cout<<ans1<<" "<<ans2<<endl;
    }
    return 0;
}
