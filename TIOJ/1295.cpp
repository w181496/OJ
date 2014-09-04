#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
    int n[13];
    n[0]=1;
    int t=1;
    for(int i=1;i<=13;++i)
    {
        n[i-1]=t;
        t*=i;
    }
    while(cin>>t)
        cout<<n[t]<<endl;
    return 0;
}