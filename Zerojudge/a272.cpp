#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    long long int n;
    long long int t[20017];
    t[0]=1;
    t[1]=1;
    for(int i=2;i<=20016;++i)
        t[i]=(t[i-1]+t[i-2])%10007;
    while(cin>>n)
    {
        cout<<t[n%20016]<<endl;
    }
}
