#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n,t,k,num;
    double a=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>t;
        for(int j=1;j<=t;++j)
        {
            cin>>k;
            a+=k;
        }
        a/=t;
        num=a*1000;
        num%=10;
        cout<<fixed<<setprecision(2)<<a<<endl;
        a=0;
    }
    return 0;
}
