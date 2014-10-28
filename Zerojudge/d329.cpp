#include<iostream>

using namespace std;

int r(int n)
{
    int t=0;
    while(n>0)
    {
        t*=10;
        t+=n%10;
        n/=10;
    }
    return t;
}
int main()
{
    int t;
    int a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<r(r(a)+r(b))<<endl;
    }
    return 0;
}
