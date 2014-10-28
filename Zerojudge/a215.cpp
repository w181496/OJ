#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    long long int n,m,t=1,sum=0;
    while(cin>>n>>m)
    {
        sum=n;
         for(long long int i=1;sum<=m;i++)
         {
             sum+=n+i;
             t++;
         }
         cout<<t<<endl;
         t=1;
    }

    return 0;
}
