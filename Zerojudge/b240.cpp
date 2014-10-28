#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
bool check(string, string);
int main()
{
    vector<string> k;
    int n;
    string s,s2,s3,str1,str2;
    cin>>n;
    getline(cin,s2);
    for(int i=1;i<=n;++i)
    {
        getline(cin,s);
        k.push_back(s);
    }
    for(int i=0;i<n;i++)//作者名
    {
        for(int j=i+1;j<n;j++)
        {
            int q=k[i].find(',')+1,q2=k[j].find(',')+1;
            str1=k[i].substr(0,q);str2=k[j].substr(0,q2);
            if(check(str1,str2))
            {
                s3=k[i];
                k[i]=k[j];
                k[j]=s3;
            }
        }
    }
 
    for(int i=0;i<n;i++)//年份
    {
        for(int j=i+1;j<n;j++)
        {
            int q=k[i].find(',')+1,q2=k[j].find(',')+1;
            int r=k[i].find('(')+1,r2=k[j].find('(')+1;
            str1=k[i].substr(r,4);str2=k[j].substr(r2,4);
            if(check(str1,str2)&&k[i].substr(0,q)==k[j].substr(0,q2))
            {
                s3=k[i];
                k[i]=k[j];
                k[j]=s3;
            }
        }
    }
 
     for(int i=0;i<n;i++)//名稱
     {
        for(int j=i+1;j<n;j++)
        {
            int q=k[i].find(',')+1,q2=k[j].find(',')+1;
            int r=k[i].find('('),r2=k[j].find('(');
            str1=k[i].substr(q,r-q);str2=k[j].substr(q2,r2-q2);
            if(check(str1,str2)&&k[i].substr(0,q)==k[j].substr(0,q2)&&k[i].substr(r+1,4)==k[j].substr(r2+1,4))
            {
                s3=k[i];
                k[i]=k[j];
                k[j]=s3;
            }
        }
    }
    for(int i=0; i<n; ++i)
        cout<<k[i]<<endl;
    return 0;
}
 
bool check(string s, string s2)
{
    string ss="XOBCDAFGHUJKLMNIPQRSTEVWYZ";
    string ss2="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i=0;i<s.size();++i)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i]+='A'-'a';
            int t=ss.find(s[i]);
            s[i]=ss2[t];
        }
        else if(s[i]>='A'&&s[i]<='Z')
        {
            int t=ss.find(s[i]);
            s[i]=ss2[t];
        }
    }
    for(int i=0;i<s2.size();++i)
    {
        if(s2[i]>='a'&&s2[i]<='z')
        {
            s2[i]+='A'-'a';
            int t=ss.find(s2[i]);
            s2[i]=ss2[t];
        }
        else if(s2[i]>='A'&&s2[i]<='Z')
        {
            int t=ss.find(s2[i]);
            s2[i]=ss2[t];
        }
    }
    return s>s2;
}
