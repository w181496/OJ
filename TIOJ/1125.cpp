#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
using namespace std;

bool check(bool,bool);

int main()
{
    int a,b,c,d,e;
    int f1,f2,f3;
    string s;
    while(cin>>s)
    {
        if(s.size()==5)
        {
            a=s[0]-'0';
            b=s[1]-'0';
            c=s[2]-'0';
            d=s[3]-'0';
            e=s[4]-'0';
            cout<<check(check(a,b),check(b,c));
            cout<<check(check(b,c),check(c,d));
            cout<<check(check(c,d),check(d,e));
            cout<<endl;
        }
        else
        {
            f1=s[0]-'0';
            f2=s[1]-'0';
            f3=s[2]-'0';
            int sum=0;
            for(int a=0; a<=1; a++)
            {
                for(int b=0; b<=1; b++)
                {
                    for(int c=0; c<=1; c++)
                    {
                        for(int d=0; d<=1; d++)
                        {
                            for(int e=0; e<=1; e++)
                            {
                                for(int f=0; f<=1; f++)
                                {
                                    if(check(check(a,b),check(b,c))==f1&&check(check(b,c),check(c,d))==f2&&check(check(c,d),check(d,e))==f3)
                                        sum++;


                                }
                            }
                        }
                    }
                }
            }
            cout<<sum/2<<endl;
        }
    }
    return 0;
}

bool check(bool a,bool b)
{
    return !(a&&b);
}