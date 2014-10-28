#include <iostream>
#include <string>
using namespace std;
string change(int);
int main()
{
    int n;
    string s;
    while(cin>>n>>s)
    {
        string t="";
        int c=1;
        char ch=s[0];
        for(int i=1;i<s.size();++i)
        {
            if(s[i]!=ch)
            {
                t+=change(c)+ch;
                ch=s[i];
                c=1;
            }
            else
            {
                c++;
            }
            if(i==s.size()-1)
                t+=change(c)+ch;
        }
        if(t.size()>=s.size())
            cout<<s<<endl;
        else
            cout<<t<<endl;
    }
    return 0 ;
}
string change(int n)
{
    string s,s2;
    while(n>0)
    {
        s+='0'+n%10;
        n/=10;
    }
    for(int i=s.size()-1;i>=0;--i)
        s2+=s[i];
    return s2;
}
