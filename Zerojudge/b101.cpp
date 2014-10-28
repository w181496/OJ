#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n,m,a;
    while(cin>>n)
    {
        vector<int>k(42);
        if(n==0)break;
        for(int i=1;i<=n;++i)
        {
            cin>>m;
            for(int j=1;j<=m;++j)
            {
                cin>>a;
                k[a]++;
            }
        }
        int x=k[1];
        for(int i=1;i<42;++i)
        {
            if(k[i]<x)x=k[i];
        }
        cout<<x<<endl;
    }
    return 0;

}
