#include <string>
#include <iostream>
using namespace std;
int main()
{
    string s1,s2;
    string a,b;
    int n,t,r,x=0;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        x=0;
        cin>>t;
        for(int j=1;j<=t;++j)
        {
            cin>>a>>b>>r;
            if(r<0&&r<x)
            {
                s1=a;
                s2=b;
                x=r;
            }
        }
        if(x==0)cout<<"Are you kidding me?"<<endl;
        else cout<<s1<<" "<<s2<<endl;
    }
    return 0;
}
