#include <iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)break;
        long long int sum=0;
        for(int i=1;i<=n;++i)
        {
            sum+=(n-i+1)*(n-i+1);
        }
        cout<<sum<<endl;
    }
    return 0;
}
