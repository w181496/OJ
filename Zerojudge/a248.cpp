#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    long long int a,b,n;
    while(cin>>a>>b>>n)
    {
        cout<<a/b<<".";
        int k[n];
        a%=b;
        for(int i=0;i<n;i++)
        {
            a*=10;
            k[i]=a/b;
            a%=b;
        }
        for(int i=0;i<n;i++)
            cout<<k[i];
        cout<<endl;
    }
    return 0;
}
