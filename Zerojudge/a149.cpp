#include <iostream>
#include <sstream>
#include <string>
using namespace std;
long long int count(string&);
int main()
{
    string s;
    int n;
    long long int num;
    cin>>n;
    for(int i=1 ;i<=n ;++i)
    {
        cin>>s;
        num=count(s);
        cout<<num<<endl;
    }
    return 0;
}
long long int count(string &s)
{
    long long int n=1;
    for(int i=0;i<s.size();++i)
    {
        n*=(s[i]-'0');
    }
    return n;
}
