#include <iostream>
using namespace std;
int main()
{
    long long int n,sum=0,t=5;
    while(cin>>n)
    {
        for(long long int i=1;i<=13;i++)
        {
            sum+=n/t;
            t*=5;
        }
        cout<<sum<<endl;
        sum=0;
        t=5;
    }
     return 0;
}
