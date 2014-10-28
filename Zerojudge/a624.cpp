#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        bool c1=false,c2=false,c3=false;
        bool c2_1=false,c2_2=false,c3_1=false;
        if(s.size()>=8)c1=true;
        for(int i=0;i<s.size();++i)
        {
            if(s[i]>='a'&&s[i]<='z')c2_1=true;
            else if(s[i]>='A'&&s[i]<='Z')c2_2=true;
            else c3_1=true;
            if(c2_1&&c2_2)c2=true;
            if(c3_1&&(c2_1||c2_2))c3=true;
        }
        int count=0;
        if(c1)count++;
        if(c2)count++;
        if(c3)count++;
        if(count==3)cout<<"This password is STRONG"<<endl;
        else if(count==2)cout<<"This password is GOOD"<<endl;
        else if(count==1)cout<<"This password is ACCEPTABLE"<<endl;
        else cout<<"This password is WEAK"<<endl;
    }
    return 0;
}
