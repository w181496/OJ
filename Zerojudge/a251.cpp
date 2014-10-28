#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long int k,t;
    cin>>k;
    for(long long int j=1; j<=k; j++)
    {
        cin>>t;
        long long int n[t];
        cin>>n[0]>>n[1]>>n[2]>>n[3];
        for(long long int i=4; i<t; i++)
        {
            n[i]=n[i-4]+n[i-1];
        }
        sort(n,n+t);
        cout<<n[(t-1)/2]<<endl;
    }

    return 0;
}
