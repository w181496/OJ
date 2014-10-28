#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    long long int n,a;
    string s,s2;
    stringstream ss2;
    getline(cin,s2);
    ss2<<s2;
    ss2>>n;
    for(int i=1;i<=n;i++)
    {
        stringstream ss;
        long long int sum=0;
        getline(cin,s);
        for(int j=0;j<s.size();++j)
        {
            if(s[j]<'0'||s[j]>'9')
                s[j]=' ';
        }
        ss<<s;
        while(ss>>a)
        {
            sum+=a;
        }
        cout<<sum<<endl;
    }
    return 0;
}
