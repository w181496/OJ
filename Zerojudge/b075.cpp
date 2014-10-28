#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;
int main()
{
    int t,n,sh,sm,eh,em,hh,mm,sh2,sm2,eh2,em2;
    char ch;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>sh>>ch>>sm>>eh>>ch>>em;
        for(int i=0;i<n;++i)
        {
            sh2=sh,sm2=sm,eh2=eh,em2=em;
            cin>>s>>hh>>ch>>mm;
            eh2-=hh;
            sh2-=hh;
            em2-=mm;
            sm2-=mm;
            if(em2<0)eh2--,em2+=60;
            if(sm2<0)sh2--,sm2+=60;
            if(eh2<0)eh2+=24;
            if(sh2<0)sh2+=24;
            if(sh2<10)cout<<0;
            cout<<sh2<<":";
            if(sm2<10)cout<<0;
            cout<<sm2<<" ";
            if(eh2<10)cout<<0;
            cout<<eh2<<":";
            if(em2<10)cout<<0;
            cout<<em2<<endl;
        }
    }
    return 0;
}
