#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    int n,t;
    string s1="mjqhofawcpnsexdkvgtzblryui";
    string s2="uzrmatifxopnhwvbslekycqjgd";
    string s;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        bool c=false;
        bool d=false;
        long long int sum=0;
        cin>>t;
        for(int j=1;j<=t;++j)
        {
           cin>>s;
           if(s[0]>='a'&&s[0]<='z')
           {
               sum+=s2.find(s[0])+1;
               c=true;
           }
           else
           {
               int r;
               stringstream ss;
               ss<<s;
               ss>>r;
               cout<<s1[r-1];
               d=true;
           }
        }
        if(d)cout<<endl;
        if(c)cout<<sum<<endl;
    }
    return 0;
}
