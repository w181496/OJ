#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    vector<int>k;
    k.push_back(2);
    for(long long int i=3;i<=10000;i+=2)
    {
        int t=0;
        for(long long int j=3;j<=sqrt(i);j+=2)
        {
            if(i%j==0)
                t=1;
        }
        if(t==0)
            k.push_back(i);
    }
    long long int n,e;
    cin>>e;
    for(int i=1;i<=e;i++)
    {
        cin>>n;
        cout<<k[n+1]<<endl;
    }
    return 0;
}
