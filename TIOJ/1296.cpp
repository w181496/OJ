#include<iostream>
using namespace std;
main()
{
    long long int ans[20];
    int n;
    ans[1]=1;
    for(int i=2;i<20;++i)
    {
        ans[i]=ans[i-1]*(4*i-2)/(i+1);
    }
    while(cin>>n)
        cout<<ans[n]<<endl;
}