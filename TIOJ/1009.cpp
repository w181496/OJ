#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
main()
{
    int hh,mm,ss;
    int hh2,mm2,ss2;
    char ch;
    while(cin>>hh>>ch>>mm>>ch>>ss)
    {
        cin>>hh2>>ch>>mm2>>ch>>ss2;
        int a=0,b=0,ans=0;
        a=hh*60*60+mm*60+ss;
        b=hh2*60*60+mm2*60+ss2;
        if(b<a)
        {
            ans+=b+86400-a;
        }
        else
        {
            ans+=b-a;
        }
        if(ans/3600<10)cout<<"0";
        cout<<ans/3600<<":";
        if((ans%3600)/60<10)cout<<"0";
        cout<<(ans%3600)/60<<":";
        if((ans%3600)%60<10)cout<<"0";
        cout<<(ans%3600)%60<<endl;
    }
}