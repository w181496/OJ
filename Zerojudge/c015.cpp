#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool check(int);
int change(int);
int main()
{
    int a,n;
    cin>>n;
    for(int e=1; e<=n; ++e)
    {
        cin>>a;
        int t=0;
        while(1)
        {
            if(check(a)&&t>0)
            {
                cout<<t<<" "<<a<<endl;
                break;
            }
            else
            {
                a+=change(a);
                t++;
            }
        }
    }
    return 0;
}

bool check(int n)
{
    string s;
    while(n>0)
    {
        s+=(n%10+'0');
        n/=10;
    }
    for(int i=0; i<=s.size()/2; ++i)
    {
        if(s[i]!=s[s.size()-i-1])return false;
    }
    return true;
}
int change(int n)
{
    int t=0;
    while(n>0)
    {
        t=t*10+n%10;
        n/=10;
    }
    return t;
}
