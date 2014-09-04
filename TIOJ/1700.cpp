#include<iostream>
#include<string>
#include<sstream>
#include<map>
using namespace std;
int g(int a,int  b)
{
    if(a<b)swap(a,b);
    while(a%b)
    {
        int t=a%b;
        a=b;
        b=t;
    }
    return b;
}
int main()
{
    int n;
    while(cin>>n)
    {
        int r[n],a,b;
        cin>>r[0];
        a=r[0];
        for(int i=1;i<n;++i)
        {
            cin>>r[i];
            b=r[i];
            a=g(a,b);
        }
        cout<<a<<endl;
    }
}