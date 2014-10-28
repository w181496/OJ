#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    while(n--)
    {
        cin>>t;
        int ans;
        double min=1000000000;
        for(int i=1;i<=t;++i)
        {
            double x1,y1,x2,y2,s;
            double p,r,a;
            cin>>x1>>y1>>x2>>y2>>s;
            p=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))*s;
            if(x2>x1)r=x2-x1;
            else r=x1-x2;
            a=p/r;
            if(a<min)
            {
                min=a;
                ans=i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
