#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
int main()
{
    double a,b,c,d;
    long long int w,x,y,z;
    int n;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>a>>b>>c>>d;
        w=a*1000000;
        x=b*1000000;
        y=c*1000000;
        z=d*1000000;
        if(x==0&&z==0)
        {
            if(w>y)
                cout<<">"<<endl;
            else if(w<y)
                cout<<"<"<<endl;
            else
                cout<<"="<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
