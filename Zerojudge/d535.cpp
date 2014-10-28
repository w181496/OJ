#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
bool check1(string);
bool check2(string);
bool check3(string);
int main()
{
    string s;
    while(cin>>s)
    {
        long long int sum=0;
        if(check1(s))
        {
            if(check2(s))
            {
                if(check3(s))
                {
                    for(int i=0;i<s.size();++i)
                    {
                        if((s[i]-'0')%2==0)
                            sum=sum*10+s[i]-'0';
                    }
                    cout<<sum<<endl;
                }
                else
                {
                    cout<<"INCORRECT"<<endl;
                }
            }
            else
            {
                cout<<"INCORRECT"<<endl;
            }
        }
        else
        {
            cout<<"INCORRECT"<<endl;
        }
    }
    return 0;
}

bool check1(string s)
{
    for(int i=0;i<s.size();++i)
    {
        if(!(s[i]>='1'&&s[i]<='9'))
            return false;
    }
    if(s.size()>=10&&s.size()<=30)
        return true;
    else
        return false;
}
bool check2(string s)
{
    for(int i=0;i<s.size();++i)
    {
        if(s[i]!=s[s.size()-1-i])return false;
    }
    return true;
}
bool check3(string s)
{
    for(int i=1;i<s.size();i++)
    {
        if((s[i]-'0')>(s[i-1]-'0')*2)return false;
    }
    return true;
}
