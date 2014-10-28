#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int gcd(int a,int b)
{
    while(a%b>0)
    {
        int r=a%b;
        a=b;
        b=r;
    }
    return b;
}
main()
{
    ios::sync_with_stdio(0);
    int n,m;
    while(cin>>n>>m&&n&&m)
    {
        if(gcd(n,m)>1)cout<<"Impossible\n"<<endl;
        else if((n+m)%2==0)cout<<"Impossible\n"<<endl;
        else cout<<"YES\n"<<endl;
    }
}
