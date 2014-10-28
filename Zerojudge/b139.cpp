#include <iostream>
#include <string>
#include <sstream>
#include <stack>
using namespace std;

int main()
{
    int r,t;
    int x,y;
    cin>>r>>t;
    bool n[r+1];
    for(int i=0;i<=r;++i)
        n[i]=true;
    for(int i=1;i<=t;++i)
    {
        cin>>x>>y;
        for(int j=x;j<=y;++j)
            n[j]=false;
    }
    int sum=0;
    for(int i=0;i<=r;++i)
    {
        if(n[i]==true)
            sum++;
    }
    cout<<sum<<endl;
    return 0;
}
