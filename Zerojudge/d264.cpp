#include<iostream>
#define LL long long
using namespace std;
main()
{
    LL k,i,a,b;
    LL f[80]={1,1,2};
    for(i=3;i<80;++i)
        f[i]=f[i-1]+f[i-2];
    while(cin>>k)
    {
        for(i=1;f[i]<=k;++i)
        {
            a=f[i-1],b=f[i];
        }
        cout<<a<<" "<<b<<endl;
    }
}
