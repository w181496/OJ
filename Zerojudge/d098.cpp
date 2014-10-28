#include <iostream>
#include <sstream>
#include <string>
using namespace std;
bool check(string&);
int main()
{
    string str,s;
    int n,sum=0;
    while(getline(cin,str))
    {
        stringstream ss(str.c_str());
        while(ss>>s)
        {
            stringstream ss2;
            if(check(s))
            {
                ss2<<s;
                ss2>>n;
                sum+=n;
            }
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
bool check(string &s)
{
    for(int i=0;i<s.size();++i)
    {
        if(s[i]<'0'||s[i]>'9')
            return false;
    }
    return true;
}
