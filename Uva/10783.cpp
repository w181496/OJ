#include <iostream>
using namespace std;
int t, a, b, sum;
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>t;
    for(int i=1;i<=t;++i)
    {
        cin>>a>>b;
        a=a&1?a:a+1;
        for(sum=0;a<=b;a+=2)
            sum+=a;
        cout<<"Case "<<i<<": "<<sum<<endl;
    }
    return 0;
}
