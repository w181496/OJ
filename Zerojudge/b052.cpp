#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int a=0,b=0;
        int c=0;
        int chk=0,x=1;
        for(int i=0;i<s.size();++i)
        {
            if(s[i]=='.')
            {
                c=1;
                continue;
            }
            if(c==0)
            {
                a=a*10+s[i]-'0';
            }
            else
            {
                if(chk==0&&s[i]-'0'==0)
                {
                    x*=10;
                }
                else
                {
                    chk=1;
                }
                b=b*10+s[i]-'0';
            }
        }
        string in,in2;
        while(a>0)
        {
            in+=(a%2+'0');
            a/=2;
        }
        int r=10,t;
        for(int i=0;;++i)
        {
            if(b%r==b)
            {
                t=i;
                break;
            }
            r*=10;
        }
        r*=x;
        while(b>0)
        {
            b*=2;
            if(b/r==1)
            {
                in2+='1';
                b%=r;
            }
            else
            {
                in2+='0';
            }
        }
        for(int i=in.size()-1;i>=0;--i)
            cout<<in[i];
        cout<<".";
        cout<<in2<<endl;
    }
    return 0;
}
