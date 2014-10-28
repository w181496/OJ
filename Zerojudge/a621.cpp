#include <iostream>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
        for(int i=0;i<=t;++i)
        {
            cout<<"2^"<<i<<" = ";
            int a=2,b=i;
            int x=1;
            for(;b>0;b>>=1)
            {
                if(b&1)x=x*a;
                a=a*a;
            }
            cout<<x<<endl;
        }
    }
    return 0;
}
