#include <iostream>
#include <vector>
using namespace std;
bool c(int ,int ,int ,int);
int main()
{
    int x,y,z,w;
    while(cin>>x>>y>>z>>w)
    {
        bool che;
        che=c(x,y,z,w);
        if(che==0)cout<<"No solutions."<<endl;
    }
    return 0;
}
bool c(int x,int y,int z,int w)
{
    for(int a=0; a<=3; ++a)
        {
            for(int b=0; b<=3; ++b)
            {
                for(int c=0; c<=3; ++c)
                {
                    for(int d=0; d<=3; ++d)
                    {
                        if(a+b==x&&c+d==y&&a+c==z&&b+d==w&&a!=b&&b!=c&&c!=d&&a!=c&&a!=d&&b!=d)
                        {
                            cout<<a<<" "<<b<<endl;
                            cout<<c<<" "<<d<<endl;
                            return 1;
                        }
                    }
                }
            }
        }
        return 0;
}
