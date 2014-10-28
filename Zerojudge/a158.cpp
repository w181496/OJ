#include <string>
#include <iostream>
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
    int n,t[100];
    cin>>n;
    cin>>ws;
    for(int i=0;i<n;++i)
    {
        int idx=0,temp,mx=-2e5;
        string s;
        getline(cin,s);
        stringstream ss(s);
        while(ss>>temp)
        {
            t[idx++]=temp;
        }
        for(int j=0;j<idx;++j)
        {
            for(int k=j+1;k<idx;++k)
            {
                int ttt=gcd(t[j],t[k]);
                if(ttt>mx)mx=ttt;
            }
        }
        cout<<mx<<endl;
    }
}
