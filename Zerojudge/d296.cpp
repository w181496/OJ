//由n為1~4時的結果可推得遞迴式a_n=a_n-1 + 6(n-1)
#include <iostream>

using namespace std;

int main()
{
    long long int n;
    while(cin>>n)
     cout<<n+n*(n+1)*(2*n+1)/2-3*n*(n+1)/2<<endl;
    return 0;
}
