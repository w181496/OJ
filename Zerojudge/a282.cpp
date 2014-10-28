#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    int n,a;
    int k[2001];
    while(cin>>n)
    {
        for(int i=0;i<=2000;i++)
            k[i]=0;
        for(int i=1; i<=n; ++i)
        {
            cin>>a;
            k[a]=1;
        }
        for(int i=1;i<2001;++i)
        {
            if(k[i]==0)
            {
                cout<<i<<endl;
                break;
            }
        }
    }

    return 0;
}
